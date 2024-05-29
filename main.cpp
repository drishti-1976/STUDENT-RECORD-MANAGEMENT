#include<iostream>
#include<conio.h>
using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
// for entering student record
void enter()
{
    int ch=0;
    int i;
    cout<<"total no of students whose record you want to enter ";
    cin>>ch;
    if(total==0)
    {
        total=total+ch;
        for(i=0;i<ch;i++)
        {
            cout<<"record of student no :"<<i+1<<endl;
            cout<<"name :";
            cin>>arr1[i];
            cout<<"roll no :";
            cin>>arr2[i];
            cout<<"class :";
            cin>>arr3[i];
            cout<<"course :";
            cin>>arr4[i];
            cout<<"contact :";
            cin>>arr5[i];


        }
    }
    else
    {
        for(i=total;i<ch+total;i++)
        {
           cout<<"record of student no :"<<i+1<<endl;
           cout<<"name :";
           cin>>arr1[i];
           cout<<"roll no :";
           cin>>arr2[i];
           cout<<"class :";
           cin>>arr3[i];
           cout<<"course :";
           cin>>arr4[i];
           cout<<"contact :";
           cin>>arr5[i];

        }
        total=total+ch;
    }
     int z;
        cout<<"press 0 for back to main screen"<<endl;
        cin>>z;
        switch(z)
        {
    case 0:
        system("cls");
        break;
        default:
        system("cls");
        break;
        }
}

//for showing student record
void show()
{
    system("cls");
    int i;
    if(total==0)
    {
        cout<<"no record found"<<endl;
    }
    else
    {
        for(i=0;i<total;i++)
        {
           cout<<"record of student no :"<<i+1<<endl;
           cout<<"name :"<<arr1[i]<<endl;
           cout<<"roll no :"<<arr2[i]<<endl;
           cout<<"class :"<<arr3[i]<<endl;
           cout<<"course :"<<arr4[i]<<endl;
           cout<<"contact :"<<arr5[i]<<endl;
        }

    }
     int z;
        cout<<"press 0 for back to main screen"<<endl;
        cin>>z;
        switch(z)
        {
    case 0:
        system("cls");
        break;
        default:
        system("cls");
        break;
        }
}

//for deleting student record
void deleterecord()
{

    if(total==0)
    {
        cout<<"no record to delete"<<endl;
    }
    else
    {
       int a;
       cout<<"press 1 to delete particular record "<<endl;
       cout<<"press 2 to delete all record "<<endl;
       cout<<"enter value ";
       cin>>a;
       switch(a)
       {
       case 1:
        {
            string rollno;
            int i,j;
            cout<<"enter roll no which you want to delete ";
            cin>>rollno;
            for(i=0;i<total;i++)
            {
               if(rollno == arr2[i])
               {


               for(j=i;j<total;j++)
               {
                   arr1[j]=arr1[j+1];
                   arr2[j]=arr2[j+1];
                   arr3[j]=arr3[j+1];
                   arr4[j]=arr4[j+1];
                   arr5[j]=arr5[j+1];
               }
               total--;
               cout<<"required record is deleted"<<endl;
               }
               else
                {
                    cout<<"No such roll no"<<endl;
                    break;
                }

            }


        }
        break;
       case 2:
        {
            cout<<"All record deleted "<<endl;
            total=0;
        }
        break;
       default :
        cout<<"enter a valid value "<<endl;
       }
    }
     int z;
        cout<<"press 0 for back to main screen"<<endl;
        cin>>z;
        switch(z)
        {
    case 0:
        system("cls");
        break;
        default:
        system("cls");
        break;
        }
}

//for updating student record

void update()
{
    string rollno;
    if(total==0)
    {
        cout<<"no data is entered"<<endl;
    }
    else
    {
    cout<<"enter the roll no which you want to update ";
    cin>>rollno;
    for(int i=0;i<total;i++)
    {
        if(rollno==arr2[i])
        {
            cout<<"previous record of student "<<endl;
            cout<<"record of student no :"<<i+1<<endl;
            cout<<"name :"<<arr1[i]<<endl;
            cout<<"roll no :"<<arr2[i]<<endl;
            cout<<"class :"<<arr3[i]<<endl;
            cout<<"course :"<<arr4[i]<<endl;
            cout<<"contact :"<<arr5[i]<<endl<<endl;
            cout<<"new record of student no :"<<i+1<<endl;
            cout<<"name :";
            cin>>arr1[i];
            cout<<"roll no :";
            cin>>arr2[i];
            cout<<"class :";
            cin>>arr3[i];
            cout<<"course :";
            cin>>arr4[i];
            cout<<"contact :";
            cin>>arr5[i];
        }
        else
        {
            cout<<"NO such roll no "<<endl;
            break;

        }
    }
    }
     int z;
        cout<<"press 0 for back to main screen"<<endl;
        cin>>z;
        switch(z)
        {
    case 0:
        system("cls");
        break;
        default:
        system("cls");
        break;
        }
}

//for searching student record

void searchrecord()
{
    string rollno;
    if(total==0)
    {
        cout<<"there is no record "<<endl;
    }
    else
    {
        cout<<"enter the roll no whose record you want to search ";
        cin>>rollno;
        for(int i=0;i<total;i++)
        {
            if(rollno==arr2[i])
            {
                cout<<"record of roll no "<<rollno<<endl;
                cout<<"name :"<<arr1[i]<<endl;
                cout<<"roll no :"<<arr2[i]<<endl;
                cout<<"class :"<<arr3[i]<<endl;
                cout<<"course :"<<arr4[i]<<endl;
                cout<<"contact :"<<arr5[i]<<endl<<endl;
                break;
            }
            else
            {
                cout<<"there is no such roll no "<<endl;
                break;
            }
        }
    }
     int z;
        cout<<"press 0 for back to main screen"<<endl;
        cin>>z;
        switch(z)
        {
    case 0:
        system("cls");
        break;
        default:
        system("cls");
        break;
        }
}

int main()
{
    int value;

    cout<<"########## STUDENT   RECORD ############"<<endl<<endl;

    while(true)
    {


   cout<<"press 1 for enter record "<<endl;
   cout<<"press 2 for show record "<<endl;
   cout<<"press 3 for delete record "<<endl;
   cout<<"press 4 for update record "<<endl;
   cout<<"press 5 for search record"<<endl;
   cout<<"press 6 for exit "<<endl;
   cout<<"enter value ";
   cin>>value;



        switch(value)
        {
        case 1:
            system("cls");
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            system("cls");

            deleterecord();
            break;
        case 4:
            system("cls");

            update();
            break;
        case 5:
             system("cls");

             searchrecord();
            break;
        case 6:
             system("cls");

             exit(0);
        default :
            system("cls");
            cout<<"enter a valid no."<<endl;
            int z;
            cout<<"press 0 for back to main screen"<<endl;
            cin>>z;
            switch(z)
           {
        case 0:
           system("cls");
           break;
           default:
           system("cls");
           break;
           }
          break;

        }
    }
}
