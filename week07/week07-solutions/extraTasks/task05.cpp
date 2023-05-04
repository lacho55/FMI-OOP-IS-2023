#include<iostream>
#include<fstream>
#include<string>

void changedFile(const char* fileName )
{
    std::ifstream in(fileName);
   
    std::ofstream out("temp.txt");
   
    if(!in.is_open() || !out.is_open() )
    {
        std::cout<<"Can't open file"<<std::endl;
        return;

    }
    char s;

    while(s = in.get())
    {
        if(in.eof())
        {
            break;
        }
        if(s >= 'a' && s <= 'z')
        {
            s = s - 32;
            out<<s;
           
        }
        else if(s >= 'A' && s <= 'Z')
        {
            s = s + 32;
            out<<s;
        }
        else
        {
            out<<s;
        }
        
    }
    
    in.close();
    out.close();

    if(std::remove(fileName) == 0)
    {   
        std::cout<<"successfully removed"<<std::endl;
        if(std::rename("temp.txt" , fileName) == 0)
        {
            std::cout<<"successfully renamed"<<std::endl;
        }

    }

}

int main()
{
 
    return 0;
}