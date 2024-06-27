#include <iostream>
#include <cmath>

class Vetor3{
    float x,y,z;
    public:

    Vetor3()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Vetor3(float pX, float pY, float pZ)
    {
        this->x = pX;
        this->y = pY;
        this->z = pZ;
    }

    Vetor3 operator +(Vetor3 v0)
    {
        Vetor3 resultado;
        resultado.x = x + v0.x;
        resultado.y = y + v0.y;
        return resultado;
    }

    Vetor3 operator +(float a)
    {
        Vetor3 resultado;
        resultado.x = x + a;
        resultado.y = y + a;
        resultado.z = z + a;
        return resultado;
    }

    Vetor3 operator -(Vetor3 v0)
    {
        Vetor3 resultado;
        resultado.x = x - v0.x;
        resultado.y = y - v0.y;
        resultado.z = z - v0.z;
        return resultado;
    }

    Vetor3 operator -(float a)
    {
        Vetor3 resultado;
        resultado.x = x - a;
        resultado.y = y - a;
        resultado.z = z - a;
        return resultado;
    }

    friend Vetor3 operator -(float a, Vetor3 v0)
    {
        Vetor3 resultado;
        resultado.x = a - v0.x;
        resultado.y = a - v0.y;
        resultado.z = a - v0.z;
        return resultado;
    }

    Vetor3 operator *(Vetor3 v0)
    {
        Vetor3 resultado;
        resultado.x = x * v0.x;
        resultado.y = y * v0.y;
        resultado.z = z * v0.z;
        return resultado;
    }

    Vetor3 operator *(float a)
    {
        Vetor3 resultado;
        resultado.x = x * a;
        resultado.y = y * a;
        resultado.z = z * a;
        return resultado;
    }

    Vetor3 operator /(float a)
    {
        Vetor3 resultado;
        resultado.x = x / a;
        resultado.y = y / a;
        resultado.z = z / a;
        return resultado;
    }

    float operator [](int indice)
    {
        switch(indice)
        {
            case(0): return x;
            case(1): return y;
            case(2): return z;
        }
    }

    float operator ()()
    {
      Vetor3 resultado;
      resultado.x = x*x;
      resultado.y = y*y;
      resultado.z = z*z;
      return (sqrt((resultado.x + resultado.y + resultado.z)));
    }

    Vetor3 operator !()
    {
      Vetor3 resultado;
      float denominador = resultado();
      resultado.x = x/denominador;
      resultado.y = y/denominador;
      resultado.z = z/denominador;
      return resultado;
    }

    friend std::ostream& operator<<(std::ostream& os, const Vetor3& v);
};

std::ostream& operator<<(std::ostream& os, const Vetor3& v) {
    os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}

int main()
{
    Vetor3 v1(2.0,2.0,2.0);
    Vetor3 v2(4.0,8.0,3.0);

    Vetor3 resultado1 = v1 + v2;
    std::cout << resultado1<< std::endl;

    Vetor3 resultado2 = v1 + 10;
    std::cout << resultado2<< std::endl;

    Vetor3 resultado3 = v1 - v2;
    std::cout << resultado3<< std::endl;

    Vetor3 resultado4 = v1 - 10;
    std::cout << resultado4<< std::endl;

    Vetor3 resultadoesp = 10 - v1;
    std::cout << resultadoesp<< std::endl;

    Vetor3 resultado5 = v1 * v2;
    std::cout << resultado5<< std::endl;

    Vetor3 resultado6 = v1 * 10;
    std::cout << resultado6<< std::endl;

    Vetor3 resultado7 = v1 / 10;
    std::cout << resultado7<< std::endl;

    float numero = 2;
    std::cout << v2[numero]<< std::endl;

    float norma = v1();
    std::cout << norma << std::endl;

    Vetor3 resultado8 = !v2;
    std::cout << resultado8<< std::endl;

    return 0;
}