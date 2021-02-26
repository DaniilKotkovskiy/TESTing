#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out;
    out.open("D:\\Gradient.html");
    if (out.is_open()) {

            out << "<!DOCTYPE html>" << endl;
            out << "<html>"<< endl;
            out << "<head>"<< endl;
            out << " <meta>" << endl;
            out << "<title>Gradient LR_1_4</title>"<< endl;
            out << "<style>"<< endl;
            out << "html, body {"<< endl;
            out << " height: 100%;" << endl;
            out <<" background: linear-gradient(to bottom "<< endl;
            out << ",rgb(255,255,255)"<< endl;
            out << ",rgb(248,248,248)" << endl;
            out << ",rgb(245,245,245)" << endl;

            int i, colourHEX;
            colourHEX = 240;
            out << ",rgb(" << colourHEX << "," << colourHEX << "," << colourHEX << ")" << endl;

                for (i = 0; i <= 29; i++) {
                        
                    colourHEX -= 8;
                    out << ",rgb(" << colourHEX << "," << colourHEX << "," << colourHEX << ")" << endl;
                    
                }
                    
            out << ") no-repeat;"<< endl;
            out << "}"<< endl;
            out << "</style>"<< endl;
            out << "</head>"<< endl;
            out << "<body>"<< endl;
            out << "</body>"<< endl;
            out << "</html>" << endl;

    }

    cout << "Programm successfully ended!" << endl;
    return 0;

}