 fstream vaccine; 
    vaccine.open("vaccinedata.txt",ios :: in);
    int a;
    while(vaccine.eof() ==0)
    {
       vaccine>>a;
    }
    a = a-1;
    vaccine.close();
    fstream vaccineput;
    vaccineput.open("vaccinedata.txt",ios :: out);
    vaccineput<<a;
    vaccineput.close();