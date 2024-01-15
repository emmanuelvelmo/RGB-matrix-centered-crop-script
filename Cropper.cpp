#include <iostream>
#include <string>

int main()
{
    std::string rgb_no_aj;
    
    rgb_no_aj.push_back(0x01);
    rgb_no_aj.push_back(0x01);
    rgb_no_aj.push_back(0x01);
    rgb_no_aj.push_back(0x02);
    rgb_no_aj.push_back(0x02);
    rgb_no_aj.push_back(0x02);
    rgb_no_aj.push_back(0x03);
    rgb_no_aj.push_back(0x03);
    rgb_no_aj.push_back(0x03);
    rgb_no_aj.push_back(0x04);
    rgb_no_aj.push_back(0x04);
    rgb_no_aj.push_back(0x04);
    rgb_no_aj.push_back(0x05);
    rgb_no_aj.push_back(0x05);
    rgb_no_aj.push_back(0x05);
    rgb_no_aj.push_back(0x06);
    rgb_no_aj.push_back(0x06);
    rgb_no_aj.push_back(0x06);
    rgb_no_aj.push_back(0x07);
    rgb_no_aj.push_back(0x07);
    rgb_no_aj.push_back(0x07);
    rgb_no_aj.push_back(0x08);
    rgb_no_aj.push_back(0x08);
    rgb_no_aj.push_back(0x08);
    rgb_no_aj.push_back(0x09);
    rgb_no_aj.push_back(0x09);
    rgb_no_aj.push_back(0x09);
    rgb_no_aj.push_back(0x0A);
    rgb_no_aj.push_back(0x0A);
    rgb_no_aj.push_back(0x0A);
    rgb_no_aj.push_back(0x0B);
    rgb_no_aj.push_back(0x0B);
    rgb_no_aj.push_back(0x0B);
    rgb_no_aj.push_back(0x0C);
    rgb_no_aj.push_back(0x0C);
    rgb_no_aj.push_back(0x0C);
    rgb_no_aj.push_back(0x0D);
    rgb_no_aj.push_back(0x0D);
    rgb_no_aj.push_back(0x0D);
    rgb_no_aj.push_back(0x0E);
    rgb_no_aj.push_back(0x0E);
    rgb_no_aj.push_back(0x0E);
    rgb_no_aj.push_back(0x0F);
    rgb_no_aj.push_back(0x0F);
    rgb_no_aj.push_back(0x0F);
    rgb_no_aj.push_back(0x10);
    rgb_no_aj.push_back(0x10);
    rgb_no_aj.push_back(0x10);
    
    unsigned short ancho_in = 4;
    unsigned short alto_in = 4;
    unsigned short ancho_aj = 2;
    unsigned short alto_aj = 2;
    
    std::string rgb_entrada(ancho_aj * alto_aj * 3, '\0');

    for (unsigned short filas_y = 0; filas_y < alto_aj; filas_y++)
    {
        for (unsigned short columnas_x = 0; columnas_x < ancho_aj * 3; columnas_x++)
        {
            rgb_entrada[(filas_y * ancho_aj * 3) + columnas_x] = rgb_no_aj[(filas_y * ancho_in * 3) + columnas_x + (((alto_in - alto_aj) / 2) * ancho_in * 3) + (((ancho_in - ancho_aj) / 2) * 3)];
        }
    }
    
    std::cout << "(Blue layer)" << std::endl;
    unsigned short cont_b_ly = 0;
    unsigned short cont_anch = 0;
    for(unsigned short ch: rgb_entrada)
    {
        if(cont_b_ly == 2)
        {
            std::cout << ch << " ";
            cont_b_ly = 0;
            cont_anch++;
        }
        else
        {
            cont_b_ly++;
            cont_anch++;
        }
        
        if(cont_anch == ancho_aj * 3)
        {
            std::cout << std::endl;
            cont_anch = 0;
        }
    }
    
    return 0;
}
