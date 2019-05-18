#include <iostream>
#include <string>
using namespace std;
int N;
int i=0;
int rbm(int N);
int ram(int N);
int main()
{

    do
    {
        cout<<"Enter an odd number between 2 and 10000. N = ?"<<endl;
        cin>>N;
        if(N%2!=0)
        {
            rbm(N);
            ram(N);
        }
        else if(N%2==0)
        {
            char ans;
            cout<<"The number is even. Would you like to continue and see the output with that number? Press Y/N: "<<endl;
            cin>>ans;
            switch(ans)
            {
                case 'Y':   rbm(N);
                            ram(N);
                            break;
                case 'N':   cout<<"Enter an odd number between 2 and 10000. N = ?"<<endl;
                            cin>>N;
                            break;
            }
        }
    }while(N<2 || N>10000);


    return 0;
}
int rbm(int N) //rbm - rows before the middle
{
    int d1=N; //d1 - 1st stream of dashes
    int d2=N;
    int d3=N;
    int d4=N;
    int d5=N;
    int s1=N; //s1 - 1st stream of stars
    int s2=N;
    int s3=N;
    int s4=N;

    for(i=0;i<N/2+1;i++)
    {

                cout<<string((d1),'-')<<string((s1),'*')<<string((d2),'-')<<
                string((s2),'*')<<string((d3*2),'-')<<string((s3),'*')<<
                string((d4),'-')<<string((s4),'*')<<string((d5),'-')<<endl;
                d1=d1-1;
                s1=s1+2;
                d2=d2-2;
                s2=s2+2;
                d3=d3-1;
                s3=s3+2;
                d4=d4-2;
                s4=s4+2;
                d5=d5-1;


    }
return N;
}

int ram(int N) //ram - rows after the middle
{
    if(N%2!=0)
    {
        int d1=N-(N/2+1); //d1 - 1st stream of dashes
        int d2=N-(N-1);
        int d3=N-(N-1);
        int d4=N-(N/2+1);
        int d5=N-(N-1);
        int d6=N-(N-1);
        int d7=N-(N/2+1);
        int s1=N; //s1 - 1st stream of stars
        int s2=N+(N-1);
        int s3=N;
        int s4=N;
        int s5=N+(N-1);
        int s6=N;

        for(i=0;i<N/2+1;i++)
            {
                cout<<string((d1),'-')<<string((s1),'*')<<string((d2),'-')<<
                string((s2),'*')<<string((d3),'-')<<string((s3),'*')<<
                string((d4*2),'-')<<string((s4),'*')<<string((d5),'-')<<
                string((s5),'*')<<string((d6),'-')<<string((s6),'*')<<string((d7),'-')<<endl;
                d1=d1-1;
                s1=s1;
                d2=d2+2;
                s2=s2-2;
                d3=d3+2;
                s3=s3;
                d4=d4-1;
                s4=s4;
                d5=d5+2;
                s5=s5-2;
                d6=d6+2;
                s6=s6;
                d7=d7-1;
            }
        }
    else if(N%2==0) //the program works with even numbers as well
        {
            int d1=N-(N/2+1); //d1 - 1st stream of dashes
            int d2=N-(N-2);
            int d3=N-(N-2);
            int d4=N-(N/2+1);
            int d5=N-(N-2);
            int d6=N-(N-2);
            int d7=N-(N/2+1);
            int s1=N; //s1 - 1st stream of stars
            int s2=N+(N-2);
            int s3=N;
            int s4=N;
            int s5=N+(N-2);
            int s6=N;

            for(i=0;i<N/2;i++)
            {
                cout<<string((d1),'-')<<string((s1),'*')<<string((d2),'-')<<
                string((s2),'*')<<string((d3),'-')<<string((s3),'*')<<
                string((d4*2),'-')<<string((s4),'*')<<string((d5),'-')<<
                string((s5),'*')<<string((d6),'-')<<string((s6),'*')<<string((d7),'-')<<endl;
                d1=d1-1;
                s1=s1;
                d2=d2+2;
                s2=s2-2;
                d3=d3+2;
                s3=s3;
                d4=d4-1;
                s4=s4;
                d5=d5+2;
                s5=s5-2;
                d6=d6+2;
                s6=s6;
                d7=d7-1;
        }

    }
return N;
}


