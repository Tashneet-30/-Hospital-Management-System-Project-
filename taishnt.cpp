#include <iostream>
#include <stdio.h>
#include <conio.h> //emergency appointment
// appoint a doctor
// diagnosis info stored in patient account
#include <string>
#include <fstream>
using namespace std;
class hospital
{
public:
    static int count;

    void welcomedisplay();
    void add_patientrecord(); 
    void show_patientrecord();
    void display_history();
    void updaterecord();
    void deleterecord();
    void info(){
        cout<<"\n\n\n\n\n\t\t\t\t THE HOSPITAL MANAGEMENT SYSTEM IS A PROJECT MADE BY TASHNEET KAUR AND SHUBHDEEP KAUR.\n\nTHIS HOSPITAL OFFERS YOU A WIDE CATEGORY OF FEATURES LIKE ADDING NEW PATIENT RECORD INSTANTLY,VIEWING THE HISTORY OF THE PATIENT AT EASE ,\n VIEWING RECORD OF HOSPITAL , AND BOOKING AN APPOITNMENT EASILY. \n\n\nCATEGORY DOCTORS ARE LISTED BELOW:"<<endl;
  
    
        cout << "Eye Specialist : "
             << "Mr.Rakesh Kumar" << endl;
        cout << "Dental Specialist : "
             << "Ms. Sangeeta" << endl;
        cout << "Heart Specialist : "
             << "Mr.Saroy" << endl;
        cout << "Chest Specialist : "
             << "Ms.Harshdeep" << endl;
        cout << "Orthodontics Specialist : "
             << "Mr.Anil Kapoor" << endl;
        cout << "Surgeon(Bone) Specialist : "
             << "Ms.Rewa" << endl;
        cout << "Gynaecologist Specialist : "
             << "Ms.Praveen" << endl;
             cout<<"WE ARE ALWAYS THERE FOR YOUR TREATMENT!!!!"<<endl;
    

    }
};
void hospital::welcomedisplay()
{
    cout << "\n\n\n\n\n\n\n\t\t\t\t\t HOSPITAL MANAGEMENT SYSTEM " << endl;
    cout << "\n\n\n\nWELCOME !!!!" << endl;
    cout << endl;
    cout << "What are looking for...........?" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
    cout << "\t\t\t\t\t\t|             2  >> History of a Patient                          |\n";
    cout << "\t\t\t\t\t\t|             3  >> Patient's Records                             |\n";
    cout << "\t\t\t\t\t\t|             4  >> Book an Appointment                           |\n";
    cout << "\t\t\t\t\t\t|             5  >> Update a Record                               |\n";
    cout << "\t\t\t\t\t\t|             6  >> Delete a Record                               |\n";
    cout << "\t\t\t\t\t\t|             7  >> Information About the Hospital                |\n";
    cout << "\t\t\t\t\t\t|             8  >> Exit                                          |\n";
}
int hospital::count;
class doctor : public hospital
{
public:
    static int eyeappoint;
    static int dentalappoint;
    static int heartappoint;
    static int chestappoint;
    static int orthodonticsappoint;
    static int surgeonappoint;
    static int gynaecappoint;
    void bookappointment();

};
int doctor::eyeappoint;
int doctor::dentalappoint;
int doctor::heartappoint;
int doctor::chestappoint;
int doctor::orthodonticsappoint;
int doctor::surgeonappoint;
int doctor::gynaecappoint;
void doctor::bookappointment()
{
    system("cls");
    fstream file;
    int age, patientid, patientidd, found = 0, turnnumber;
    string patientname, address, email, disease, phoneno;
    cout << "\n\n\n\t\t\t BOOKING APPOINTMENT " << endl;
    file.open("record.txt", ios::in | ios::out);
    if (!file)
    {

        cout << "\n\nFILE OPENING ERROR" << endl;
    }
    else
    {
        cout << "PATIENT'S ID NO." << endl;
        cin >> patientidd;
        file >> patientname >> age >> email >> address >> phoneno >> patientid >> disease;
        while (!file.eof())
        {
            if (patientidd = patientid)
            {
                cout << "Which Category appointment you want " << endl;
                cout << "EYE / DENTAL / HEART / CHEST / ORTHODONTICS / SURGEON / GYNAECOLOGIST   ?";
                cin >> disease;

                if (disease == "EYE")
                {
                    system("cls");
                    cout << "NAME:" << patientname << endl;
                    cout << "AGE :" << age << endl;
                    cout << "E-MAIL :" << email << endl;
                    cout << "ADDRESS :" << address << endl;
                    cout << "PHONE NO. :" << phoneno << endl;
                    cout << "PATIENT ID  :" << patientid << endl;
                    system("cls");
                    int turnnumber = ++eyeappoint;

                    cout << "\n\n\n\n \t\t\t\t\t\t\t\t\tDoctor's timings are 10am to 3pm" << endl;
                    turnnumber = ++eyeappoint;
                    if (turnnumber == '1' | '2' | '3' | '4' | '5')
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\t Congratulations!!!   Your appointment is booked and you can visit the doctor between 10am to 11am " << endl;

                    else
                    {
                        cout << " \n\n\n\t\t\t\t\t\t\t\t\tCongratulations!!!   Your appointment is booked and you can visit the doctor between 11am to 12noon " << endl;
                    }

                    found++;
                    break;
                }

                if (disease == "DENTAL")
                {
                    system("cls");
                    cout << "NAME:" << patientname << endl;
                    cout << "AGE :" << age << endl;
                    cout << "E-MAIL :" << email << endl;
                    cout << "ADDRESS :" << address << endl;
                    cout << "PHONE NO. :" << phoneno << endl;
                    cout << "PATIENT ID  :" << patientid << endl;
                    system("cls");

                    cout << "\n\n\n\n \t\t\t\t\t\t\t\t\tDoctor's timings are 11am to 4pm" << endl;
                    int turnnumber = ++dentalappoint;
                    if (turnnumber == '1' | '2' | '3' | '4' | '5')
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\tCongratulations!!!   Your appointment is booked and you can visit the doctor between 11am to 12noon " << endl;
                    else
                    {
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\t Congratulations!!!   Your appointment is booked and you can visit the doctor between 12noon to 1pm " << endl;
                    }

                    found++;
                    break;
                }
                if (disease == "HEART")
                {
                    system("cls");
                    cout << "NAME:" << patientname << endl;
                    cout << "AGE :" << age << endl;
                    cout << "E-MAIL :" << email << endl;
                    cout << "ADDRESS :" << address << endl;
                    cout << "PHONE NO. :" << phoneno << endl;
                    cout << "PATIENT ID  :" << patientid << endl;
                    system("cls");
                    cout << "\n\n\n\n \t\t\t\t\t\t\t\t\tDoctor's timings are 12am to 5pm" << endl;
                    int turnnumber = ++heartappoint;
                    if (turnnumber == '1' | '2' | '3' | '4' | '5')
                        cout << " \n\n\n\t\t\t\t\t\t\t\t\tCongratulations!!!   Your appointment is booked and you can visit the doctor between 12noon to 1pm " << endl;
                    else
                    {
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\t Congratulations!!!   Your appointment is booked and you can visit the doctor between 1pm to 2pm " << endl;
                    }
                    found++;
                    break;
                }
                if (disease == "CHEST")
                {
                    system("cls");
                    cout << "NAME:" << patientname << endl;
                    cout << "AGE :" << age << endl;
                    cout << "E-MAIL :" << email << endl;
                    cout << "ADDRESS :" << address << endl;
                    cout << "PHONE NO. :" << phoneno << endl;
                    cout << "PATIENT ID  :" << patientid << endl;
                    system("cls");
                    cout << "\n\n\n\n \t\t\t\t\t\t\t\t\tDoctor's timings are 9am to 2pm" << endl;
                    int turnnumber = ++chestappoint;
                    if (turnnumber == '1' | '2' | '3' | '4' | '5')
                    {
                        cout << " \n\n\n\t\t\t\t\t\t\t\t\tCongratulations!!!   Your appointment is booked and you can visit the doctor between 9am to 10am " << endl;
                    }
                    else
                    {
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\t Congratulations!!!   Your appointment is booked and you can visit the doctor between 10pm to 11am " << endl;
                    }
                    found++;
                    break;
                }

                if (disease == "ORTHODONTICS")
                {
                    system("cls");
                    cout << "NAME:" << patientname << endl;
                    cout << "AGE :" << age << endl;
                    cout << "E-MAIL :" << email << endl;
                    cout << "ADDRESS :" << address << endl;
                    cout << "PHONE NO. :" << phoneno << endl;
                    cout << "PATIENT ID  :" << patientid << endl;
                    system("cls");
                    cout << "\n\n\n\n \t\t\t\t\t\t\t\t\tDoctor's timings are 9am to 2pm" << endl;
                    int turnnumber = ++orthodonticsappoint;
                    if (turnnumber == '1' | '2' | '3' | '4' | '5')
                        cout << " \n\n\n\t\t\t\t\t\t\t\t\tCongratulations!!!   Your appointment is booked and you can visit the doctor between 9am to 10am " << endl;
                    else
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\t Congratulations!!!   Your appointment is booked and you can visit the doctor between 10am to 11am " << endl;

                    found++;
                    break;
                }
                if (disease == "SURGEON")
                {
                    system("cls");
                    cout << "NAME:" << patientname << endl;
                    cout << "AGE :" << age << endl;
                    cout << "E-MAIL :" << email << endl;
                    cout << "ADDRESS :" << address << endl;
                    cout << "PHONE NO. :" << phoneno << endl;
                    cout << "PATIENT ID  :" << patientid << endl;
                    system("cls");
                    cout << "\n\n\n\n \t\t\t\t\t\t\t\t\tDoctor's timings are 9am to 2pm" << endl;
                    int turnnumber = ++chestappoint;
                    if (turnnumber == '1' | '2' | '3' | '4' | '5')
                    {
                        cout << " \n\n\n\t\t\t\t\t\t\t\t\tCongratulations!!!   Your appointment is booked and you can visit the doctor between 9am to 10am " << endl;
                    }
                    else
                    {
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\t Congratulations!!!   Your appointment is booked and you can visit the doctor between 10pm to 11am " << endl;
                    }
                    found++;
                    break;
                }
                if (disease == "GYNAECOLOGIST")
                {
                    system("cls");
                    cout << "NAME:" << patientname << endl;
                    cout << "AGE :" << age << endl;
                    cout << "E-MAIL :" << email << endl;
                    cout << "ADDRESS :" << address << endl;
                    cout << "PHONE NO. :" << phoneno << endl;
                    cout << "PATIENT ID  :" << patientid << endl;
                    system("cls");
                    cout << "\n\n\n\n \t\t\t\t\t\t\t\t\tDoctor's timings are 10am to 3pm" << endl;
                    turnnumber = ++eyeappoint;
                    if (turnnumber == '1' | '2' | '3' | '4' | '5')
                        cout << " \n\n\n\t\t\t\t\t\t\t\t\tCongratulations!!!   Your appointment is booked and you can visit the doctor between 10am to 11am " << endl;

                    else
                    {
                        cout << " \n\n\n\t\t\t\t\t\t\t\t\tCongratulations!!!   Your appointment is booked and you can visit the doctor between 11am to 12noon " << endl;
                    }

                    found++;
                    break;
                }
            }
            file >> patientname >> age >> email >> address >> phoneno >> patientid >> disease;
        }
        file.close();
        if (found == 0)
        {
            cout << "ID NOT FOUND" << endl;
        }
    }
}

void hospital::add_patientrecord()
{

    int age;
    string patientname, disease;
    string address, email, ph;
    system("cls");
    ofstream file;
    cout << "\n\n\n\t\t\t\t\t\t\t ADD NEW PATIENT RECORD " << endl;
    cout << "ENTER NAME:" << endl;
    cin >> patientname;
    cout << "ENTER AGE :" << endl;
    cin >> age;
    cout << "ENTER E-mail :" << endl;
    cin >> email;
    cout << "ENTER ADDRESS :" << endl;
    cin >> address;
    cout << "ENTER PHONE NO. :" << endl;
    cin >> ph;
    cout << "Consulting Specialist Category  " << endl;
    cout << "EYE / DENTAL / HEART / CHEST / ORTHODONTICS / SURGEON / GYNAECOLOGIST   ?";
    cin >> disease;

    int number = ++count;
    cout << "YOUR UNIQUE ID IS: " << number << endl;

    file.open("record.txt", ios::out | ios::app);
    file << patientname << "   " << age << "   " << email << "   " << address << "   " << ph << "   " << number << " " << disease << "\n";

    cout << endl;
    file.close();
};
void hospital::show_patientrecord()
{
    system("cls");
    fstream file;

    int age, number;
    string patientname, disease;
    string address, email, ph;
    cout << "\n\n\n\t\t DISPLAYING PATIENT'S DATA" << endl;
    file.open("record.txt", ios::in);
    if (!file)
    {
        cout << "\n\nFILE OPENING ERROR" << endl;
    }
    else
    {
        cout << endl;
        cout << endl;
        cout << "PatientName           Age                 Email                 Address                PhoneNo               Patientid                  Disease \n"
             << endl;
        file >> patientname >> age >> email >> address >> ph >> number>>disease;
        while (!file.eof())
        {

            cout << patientname << " \t\t" << age << " \t\t" << email << " \t\t" << address << " \t\t " << ph << " \t\t " << number << " \t\t " << disease << endl;
            file >> patientname >> age >> email >> address >> ph >> number >> disease;
        }
        file.close();
    }
}
void hospital::display_history()
{
    system("cls");
    fstream file;
    int age, patientid, patientidd, found = 0;
    string patientname, address, email, disease, phoneno;
    cout << "\n\n\n\t\t\tDISPLAYING DATA" << endl;
    file.open("record.txt", ios::in);
    if (!file)
    {

        cout << "\n\nFILE OPENING ERROR" << endl;
    }
    else
    {
        cout << "PATIENT'S ID NO." << endl;
        cin >> patientidd;
        file >> patientname >> age >> email >> address >> phoneno >> patientid >> disease;
        while (!file.eof())
        {
            if (patientidd == patientid)
            {
                system("cls");
                cout << "NAME:" << patientname << endl;
                cout << "AGE :" << age << endl;
                cout << "E-MAIL :" << email << endl;
                cout << "ADDRESS :" << address << endl;
                cout << "PHONE NO. :" << phoneno << endl;
                cout << "PATIENT ID  :" << patientid << endl;
                cout << "Disease:" << disease << endl;
                found++;
                break;
            }
            file >> patientname >> age >> email >> address >> phoneno >> patientid >> disease;
        }
        file.close();
        if (found == 0)
        {
            cout << "ID NOT FOUND" << endl;
        }
    }
}
// void hospital:: updaterecord(){
//     system("cls");
//     fstream file;
//     fstream file1;

//       int age,patientid,patientidd,found=0,agenew;
//     string patientname,address,email,disease,ph,patientnamenew,emailnew,addressnew,phnew;
//     cout<<"\n\n\n\n\t\t\t\t\tUPDATE RECORD "<<endl;

//     file.open("record.txt",ios::in);
//         file1.open("recordupdate.txt",ios::out|ios::app);
//     if(!file){
//         cout<<"FILE OPENING ERROR"<<endl;
//     }

//     else{
//         cout<<"\n\n ENTER PATIENT ID"<<endl;
//         cin>>patientidd;

//         file>>patientname>>age>>email>>address>>ph>>patientid>>disease;
//         while(!file.eof()){
//             if(patientid=patientidd){
//                 system("cls");
//                 cout<<"\n\n\n\t\t\t UPDATE PATIENT RECORD "<<endl;
//                 cout<<"Name :"<<endl;
//                 cin>>patientnamenew;
//                 cout<<"Age :"<<endl;
//                 cin>>agenew;
//                 cout<<"Email:"<<endl;
//                 cin>>emailnew;
//                 cout<<"Address:"<<endl;
//                 cin>>addressnew;
//                 cout<<"Phone no."<<endl;
//                 cin>>phnew;
//                 cout<<"Consulting Specialist:"

//                 file1<<"  "<<patientnamenew<<"  "<<agenew<<"  "<< emailnew<<"  "<<addressnew<<"  "<<phnew<<"  "<<patientidd<<endl;

//                 found++;
//                 continue;

//             }
//             else{
//                 file1<<"  "<<patientname<<"  "<<age<<"  "<< email<<"  "<<address<<"  "<<ph<<"  "<<endl;
//   file>>patientname>>age>>email>>address>>ph>>patientid>>disease;

//             }

//         }
//          if(found==0){
//                 cout<<"ID not found "<<endl;
//             }

//     }
//       file.close();
//         file1.close();
//         remove("record.txt");
//         rename("recordupdate.txt","record.txt");

// }
void hospital::updaterecord()
{
    system("cls");
    fstream file, file1;
    int p_id, patientid, age, agenew;
    bool found = false;
    string name, patientname, email, address, disease, emailnew, addressnew, diseasenew, ph, phone;
    cout << "\n\n\n\n\n\t\t\t\t\t UPDATE RECORD " << endl;
    file.open("record.txt", ios::in);
    file1.open("recordupdate.txt", ios::app);
    if (!file)
    {
        cout << "\n\n\n FILE OPENING ERROR" << endl;
    }
    else
    {
        cout << "\n\n\n\n PATIENT'S ID " << endl;
        cin >> p_id;
        file >> patientname >> age >> email >> address >> ph >> patientid >> disease;
        while (!file.eof())
        {
            if (file)
            {

                if (p_id != patientid)
                {
                    if (!found)
                    {
                        file1 << patientname << "  " << age << "  " << email << "  " << address << "  " << ph << "  " << patientid << "  " << disease << " " << endl;

                        file >> patientname >> age >> email >> address >> ph >> patientid >> disease;
                    }
                    else
                    {
                        file >> patientname >> age >> email >> address >> ph >> patientid >> disease;
                        found = false;
                    }
                }

                else
                {

                    system("cls");
                    cout << "\n\n\n\n\t\t\t\t\t UPDATING RECORD" << endl;
                    cout << "\n\n\n NAME :" << endl;
                    cin >> name;
                    cout << "\n\n\n AGE :" << endl;
                    cin >> agenew;
                    cout << "\n\n\n EMAIL :" << endl;
                    cin >> emailnew;
                    cout << "\n\n\n ADDRESS :" << endl;
                    cin >> addressnew;
                    cout << "\n\n\n PHONE NO. :" << endl;
                    cin >> phone;
                    cout << "\n\n\n CONSULTING SPECIALIST : " << endl;
                    cout << "EYE / DENTAL / HEART / CHEST / ORTHODONTICS / SURGEON / GYNAECOLOGIST   ?";
                    cin >> diseasenew;
                    file1 << name << "  " << agenew << "  " << emailnew << "  " << addressnew << "  " << phone << "  " << p_id << "  " << diseasenew << " " << endl;
                    found = true;
                    patientid = 99999;
                }
            }
        }
        if (found)
        {
            cout << "id not found" << endl;
        }

        file.close();
        file1.close();
        remove("record.txt");
        rename("recordupdate.txt", "record.txt");
    }
}
void hospital::deleterecord()
{
    system("cls");
    int age, patientid, phoneno, patientidd;
    string patientname, address, email, disease;
    bool found = false;
    fstream file;
    fstream file1;

    cout << "\n\n\n\n\t\t\t\t   Delete Patient's Record" << endl;
    file1.open("recordupdate.txt", ios::app);
    file.open("record.txt", ios::in);
    if (!file)
    {
        cout << "FILE OPENING ERROR" << endl;
    }
    else
    {
        cout << "\n\n\n \t\t PATIENT'D  UNIQUE ID : " << endl;
        cin >> patientidd;
        file >> patientname >> age >> email >> address >> phoneno >> patientid >> disease;
        while (!file.eof())
        {
            if (file)
            {

                if (patientidd != patientid)
                {
                    if (!found)
                    {
                        file1 << " " << patientname << "  " << age << " " << email << " " << address << " " << phoneno << " " << patientid << " " << disease << endl;

                        file >> patientname >> age >> email >> address >> phoneno >> patientid >> disease;
                    }
                    else
                    {
                        file >> patientname >> age >> email >> address >> phoneno >> patientid >> disease;
                        found = false;
                    }
                }
                else
                {
                    system("cls");
                    cout << endl;
                    cout << "DELETED ....!!!!!";
                    found = true;
                    patientid = 99999;
                }
            }
        }
        if (found)
        {
            cout << "ID not found " << endl;
        }
    }
    file.close();
    file1.close();
    remove("record.txt");
    rename("recordupdate.txt", "record.txt");
}

int main()
{
    char x;
    string disease;
    hospital h;
    doctor d;
p:
    h.welcomedisplay();
    cout << endl;

    cout << " Please Enter your Choice: ___";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        do
        {
            h.add_patientrecord();
            cout << "Do you want to add an another record (y,n)" << endl;
            cin >> x;
        } while (x == 'y');
        break;
    case 2:
        h.display_history();
        break;
    case 3:
        h.show_patientrecord();
        break;
    case 4:
        d.bookappointment();

        break;
    case 5:
        h.updaterecord();

        break;
    case 6:
        h.deleterecord();
        break;
    case 7:
    h.info();
        break;
    case 8:
        exit(0);
    default:
        cout << "\n \n \n INVALID VALUE ENTERED....." << endl;
        cout << "PLEASE TRY AGAIN" << endl;
    }
    getch();
    goto p;

    return 0;
}