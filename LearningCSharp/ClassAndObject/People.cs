﻿using System;
namespace ProjectsOfClassesAndObjects
    {
    class People
    {
       public string name;
       public int age;
       public bool isConservative;
       //public Robot myrobot; 

        /*
            // Default Constructor
                  People(){
                  name=NULL;
                  age=0;
                  isConservative=false;
              }
       */
        
        
        public People(string n,int a,bool c,Robot m)
        {
            this.name = n;
            this.age = a;
            this.isConservative = c;
            //this.myrobot = m;
        }
        
     public void speakingToSomeone()
        {
            string attitude;
            if (isConservative == true) { attitude = "Conservative"; }
            else { attitude = "Exposive"; }
            Console.WriteLine("______________________________________________");
            Console.WriteLine("Hi my name is " + name + " and I am " + age+" years old");
            Console.WriteLine("I am " + attitude);
           // Console.WriteLine("My Robot name is " + myrobot.name);
        }   
    }
}
