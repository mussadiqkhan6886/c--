#include <iostream>
#include <conio.h>
using namespace std;
main(){
	
	string subclass;
	string select;
	string choose;
	string student_class;
	string teacher_name;
	string password;
	const string given_passcode = "kips college";
	
	string class1 = "First Period, Timing: 8:00 - 8:50 am ";
	string class2 = "Second Period, Timing: 8:50 - 9:30 am ";
	string class3 = "Third Period, Timing: 9:30 - 10:10 am ";
	string class4 = "Fourth Period, Timing: 10:10 - 10:50 am";
	string class5 = "Fifth Period, Timing: 11:20 am - 12:00 pm";
	string class6 = "Sixth Period, Timing: 12:00 - 12:40 pm";
	string class7 = "Seventh Period, Timing: 12:40 - 1:20 pm";
	
	string duty1 = "Incharge of Uniform checking";
	string duty2 = "Discipline Incharge";
	string duty3 = "Late comers punishment";
	string duty4 = "Head of Assembly";
	string duty5 = "Break Duty";
	string duty6 = "Meeting today at packup";
	
	cout<<endl;
	
	cout<<"                                         ~ THE CAMPUS PROJECT ~\n\n                                                   BY\n"<<endl;
	cout<<"                                              MUSSADIQ KHAN\n"<<endl;
	cout<<endl;
	
	cout<<"Today is Monday 28TH 2023"<<endl;
	cout<<"Student and Teacher Data is just for this month [NOVEMBER]"<<endl;
	cout<<endl;
	
	// ******************************************** STUDENT STARTS ************************************************************************
	// ************************************************************************************************************************************
	
	while(true){
		cout<<"\nEnter if you are Student or Teacher: "<<endl;
		cout<<"1) Teacher\n2) Student\n"<<endl;
		getline(cin, choose);
		if(choose.empty()){
			cout<<"Please enter Student or Teacher."<<endl;
		} else{
		cout<<endl;
		   
		// first (if) starts	
			if(choose == "Student" || choose == "student"){
				while(true){
					cout<<endl;
					cout<<"Hello Student."<<endl;
					while(true){
					cout<<"Enter your Class Name: "<<endl;
					cout<<"1) MB1\n2) MB2\n3) EB1 and CB1\n"<<endl;
					getline(cin >> ws, student_class);
					cout<<endl;
					
					// 1111111111111111111111111 nested starts
					if(student_class == "MB1" || student_class == "mb1"){
						cout<<"You are in MB1\n"<<endl;
						while(true){
							cout<<endl;
						cout<<"What do you wanna see: "<<endl;
						cout<<"1) Holidays\n2) Events\n3) Tests\n4) News\n"<<endl;
						cin>>select;
						
						// 2222222222222222222222 nested starts
						if(select == "Holidays" || select == "holidays"){
							cout<<endl;
							cout<<"Holidays data are from month of november to the december\n"<<endl;
							cout<<"NOV 12 College PTM"<<endl;
							cout<<"NOV 9 ALLAMA IQBAL DAY"<<endl;
							cout<<"DEC 25 Quaid-e-azam's Birthday/Christmas Day"<<endl;
							cout<<"DEC 26 Second day of christmas(for christians only) "<<endl;
						} else if(select == "Events" || select == "events"){
							cout<<endl;
							cout<<"EVENTS:: "<<endl;
							cout<<"        PARTY: In this month there will be no Party at campus."<<endl;
							cout<<"        EXHIBTION: GOOD NEWS, Pakistan Gov conduct a science exhibtion all over the country,"<<endl;
							cout<<"                   So our college will participate in that, we will give you projects or you find some best project ";
							cout<<"for                    this awesome exhibtion for medical field. "<<endl;
							cout<<"        SPORTS WEEK: There will be sports week on end of nov all over the KPK, You should prepare yourself"<<endl;         
						} else if(select == "Tests" || select == "tests"){
							cout<<"WEEKLY TESTS: There will be no tests this month because of exhibition and sports week"<<endl;
							cout<<"ENJOY THIS WEEEK AND BE HAPPY "<<endl;   
						} else if(select == "News" || select == "news"){
							cout<<endl;
							cout<<"EXHIBTION ON 23 NOVEMBER 2023 OFFICIAL NEWS FROM KPK BOARD."<<endl;
							cout<<"SPORTS WEEK END ON THE NOV."<<endl;
						} else if(select == "exit")break;
						else{
							cout<<endl;
							cout<<"INVAILD OPTION TRY AGAIN"<<endl;
						} 
						}
						// 222222222222222222222 nested ended
						
					} else if(student_class == "MB2" || student_class == "mb2"){
						cout<<"You are in MB2"<<endl;
						while(true){
							cout<<endl;
						cout<<"What do you wanna see: "<<endl;
						cout<<"1) Holidays\n2) Events\n3) Tests\n4) News\n"<<endl;
						cin>>select;
						
						// 3333333333333333333333 nested starts
						if(select == "Holidays" || select == "holidays"){
							cout<<endl;
							cout<<"Holidays data are from month of november to the december\n"<<endl;
							cout<<"NOV 12 College PTM"<<endl;
							cout<<"NOV 9 ALLAMA IQBAL DAY"<<endl;
							cout<<"DEC 25 Quaid-e-azam's Birthday/Christmas Day"<<endl;
							cout<<"DEC 26 Second day of christmas(for christians only) "<<endl;
						} else if(select == "Events" || select == "events"){
							cout<<endl;
							cout<<"EVENTS:: "<<endl;
							cout<<"        PARTY: In this month there will be no Party at campus."<<endl;
							cout<<"        EXHIBTION: GOOD NEWS, Pakistan Gov conduct a science exhibtion all over the country,"<<endl;
							cout<<"                   So our college will participate in that, we will give you projects or you find some best project ";
							cout<<"for                    this awesome exhibtion for medical field. "<<endl;
							cout<<"        SPORTS WEEK: There will be sports week on end of nov all over the KPK, You should prepare yourself"<<endl;         
						} else if(select == "Tests" || select == "tests"){
							cout<<endl;
							cout<<"WEEKLY TESTS: There will be no tests this month because of exhibition and sports week"<<endl;
							cout<<"ENJOY THIS WEEEK AND BE HAPPY "<<endl;   
						} else if(select == "News" || select == "news"){
							cout<<endl;
							cout<<"EXHIBTION ON 23 NOVEMBER 2023 OFFICIAL NEWS FROM KPK BOARD."<<endl;
							cout<<"SPORTS WEEK END ON THE NOV."<<endl;
						} else if(select == "exit")break;
						 else{
							cout<<endl;
							cout<<"INVAILD OPTION TRY AGAIN"<<endl;
						}
						}
						// 3333333333333333333333333 nested ended
					} else if(student_class == "EB1 and CB1" || student_class == "eb1 and cb1"){
						while(true){
							cout<<endl;
							cout<<"In EB1 and CB1"<<endl;
							cout<<"Enter EB1 or CB1: ";
							cin>>subclass;
							
							// 4444444444444444444444444 nested starts
							if(subclass == "CB1"  || subclass == "cb1"){
								cout<<endl;
								cout<<"You are in CB1"<<endl;
								while(true){
								cout<<"\nWhat do you wanna see: "<<endl;
								cout<<"1) Holidays\n2) Events\n3) Tests\n4) News\n"<<endl;
								cin>>select;
								
								// 555555555555555555555555555 nested starts
								if(select == "Holidays" || select == "holidays"){
									cout<<endl;
									cout<<"Holidays data are from month of november to the december\n"<<endl;
									cout<<"NOV 12 College PTM"<<endl;
									cout<<"NOV 9 ALLAMA IQBAL DAY"<<endl;
									cout<<"DEC 25 Quaid-e-azam's Birthday/Christmas Day"<<endl;
									cout<<"DEC 26 Second day of christmas(for christians only) "<<endl;
								} else if(select == "Events" || select == "events"){
									cout<<endl;
									cout<<"EVENTS:: "<<endl;
									cout<<"        PARTY: In this month there will be no Party at campus."<<endl;
									cout<<"        EXHIBTION: GOOD NEWS, Pakistan Gov conduct a science exhibtion all over the country,"<<endl;
									cout<<"                   So our college will participate in that, we will give you projects or you find some best project ";
									cout<<"for                    this awesome exhibtion on c++ language for computer field. "<<endl;
									cout<<"                   Make some best apps related to real life or awesome game like guessing game."<<endl;
									cout<<"        SPORTS WEEK: There will be sports week on end of nov all over the KPK, You should prepare yourself"<<endl;         
								} else if(select == "Tests" || select == "tests"){
									cout<<endl;
									cout<<"WEEKLY TESTS: There will be no tests this month because of exhibition and sports week"<<endl;
									cout<<"ENJOY THIS WEEEK AND BE HAPPY "<<endl;   
								} else if(select == "News" || select == "news"){
									cout<<endl;
									cout<<"EXHIBTION ON 23 NOVEMBER 2023 OFFICIAL NEWS FROM KPK BOARD."<<endl;
									cout<<"SPORTS WEEK END ON THE NOV."<<endl;
								} else if(select == "exit")break;
								 else{
									cout<<endl;
									cout<<"INVAILD OPTION TRY AGAIN"<<endl;
								}
								}
								// 5555555555555555555555555555 nested ends
								
							} else if(subclass == "EB1 " || subclass == "eb1"){
								cout<<endl;
								while(true){
									cout<<endl;
									cout<<"You are in EB1"<<endl;
									cout<<"What do you wanna see: "<<endl;
									cout<<"1) Holidays\n2) Events\n3) Tests\n4) News\n"<<endl;
									cin>>select;
									
									// 666666666666666666666666666666 nested starts
									if(select == "Holidays" || select == "holidays"){
										cout<<endl;
										cout<<"Holidays data are from month of november to the december\n"<<endl;
										cout<<"NOV 12 College PTM"<<endl;
										cout<<"NOV 9 ALLAMA IQBAL DAY"<<endl;
										cout<<"DEC 25 Quaid-e-azam's Birthday/Christmas Day"<<endl;
										cout<<"DEC 26 Second day of christmas(for christians only) "<<endl;
									} else if(select == "Events" || select == "events"){
										cout<<endl;
										cout<<"EVENTS:: "<<endl;
										cout<<"        PARTY: In this month there will be no Party at campus."<<endl;
										cout<<"        EXHIBTION: GOOD NEWS, Pakistan Gov conduct a science exhibtion all over the country,"<<endl;
										cout<<"                   So our college will participate in that, we will give you projects or you find some best project ";
										cout<<"for                    this awesome exhibtion for chemistry field. "<<endl;
										cout<<"                   Make some chemical projects that impress people and inspire from your work"<<endl;
										cout<<"        SPORTS WEEK: There will be sports week on end of nov all over the KPK, You should prepare yourself"<<endl;         
									} else if(select == "Tests" || select == "tests"){
										cout<<endl;
										cout<<"WEEKLY TESTS: There will be no tests this month because of exhibition and sports week"<<endl;
										cout<<"ENJOY THIS WEEEK AND BE HAPPY "<<endl;   
									} else if(select == "News" || select == "news"){
										cout<<endl;
										cout<<"EXHIBTION ON 23 NOVEMBER 2023 OFFICIAL NEWS FROM KPK BOARD."<<endl;
										cout<<"SPORTS WEEK END ON THE NOV."<<endl;
									} else if(select == "exit")break;
										else{
										cout<<endl;
										cout<<"INVAILD OPTION TRY AGAIN"<<endl;
									}
								} // loop ends 
								}else if(subclass == "exit")break;
								else{
									cout<<endl;
									cout<<"Sorry! Invaild Class name, "<<endl;
									cout<<"PLease Try again"<<endl;
								}
								// 666666666666666666666666666 nested ended
							}
					}
					
					else if (student_class != "exit"){
						cout<<"Invaild class name please try again,"<<endl;
						cout<<"Just enter Class name (MB1, MB2 or EB1 and CB1) "<<endl;
						cout<<endl;
					} else{
						cout<<"OK";
					}
				if(student_class == "exit")break;}
					break;
				}
			
				
				cout<<endl;
				cout<<"Have a good day Student"<<endl;
				// 111111111111111111111111111 nested finished
				
				getch();
			
		// TEACHER SECTION *******************************************************************************************************
		// *******************************************************************************************************************************
				
		}else if(choose == "Teacher" || choose == "teacher"){
				while(true){
					cout<<"Enter your password please: ";
					getline(cin, password);
				if(password == given_passcode){
					cout<<"\nWelcome Teacher.\n"<<endl;
					while(true){
						cout<<endl;
						cout<<"Enter exit to exit"<<endl;
						cout<<"Enter your name please: "<<endl;
						cout<<"1) Mac\n2) Nike\n3) John\n4) Max\n5) Arnold"<<endl<<endl;
						cin>>teacher_name;
						cout<<endl;
						// 777777777777777777777777777777777777 nested starts
						
						if(teacher_name == "Max" || teacher_name == "max"){
						cout<<"Math class at: EB1 and CB1 "<<endl;
						cout<<"Periods: "<<class1<<"\n         "<<class2<<endl;
						cout<<endl;
						cout<<"Duties:"<<" You will be "<<duty1<<" At first period first 10min"<<endl<<endl;
						cout<<"OBJECTIVE: You should be teaching Derivatives today, Chap#5 EX#5.4 "<<endl;
						break;
						}
						else if(teacher_name == "Mac" || teacher_name == "mac"){
							cout<<"Physics class at: MB1 "<<endl;
							cout<<"Periods: "<<class2<<"\n         "<<class7<<endl;
							cout<<endl;
							cout<<"Physics class at: EB1 and CB1"<<endl;
							cout<<"Periods: "<<class3<<"\n         "<<class4<<endl;
							cout<<endl;
							cout<<"Physics classs at: MB2"<<endl;
							cout<<"Periods: "<<class5<<"\n         "<<class6<<endl;
							cout<<endl;
							cout<<"Duties: "<<duty2<<" All day, You will keep eye on discipline of students and control them "<<endl<<endl;
							cout<<"OBJECTIVES: Today objective in class MB1 and MB2 is AC GENERATOR,"<<endl;
							cout<<"            In classs EB1 and CB1 objective is to finish chap# 3 and explain exercise of chap#3."<<endl;
							break;
						}
						else if(teacher_name == "Arnold" || teacher_name == "arnold"){
							cout<<"Computer class at: CB1 "<<endl;
							cout<<"Periods: "<<class5<<"\n         "<<class7<<endl;
							cout<<endl;
							cout<<"Duties: "<<"No duty today"<<endl<<endl;
							cout<<"OBJECTIVE: Today objective is C++ if-else statement with practice of simple guessing game."<<endl;    
							break;  
						}
						else if(teacher_name == "El" || teacher_name == "el"){
							cout<<"Biology class at: MB1 "<<endl;
							cout<<"Periods: "<<class1<<"\n         "<<class6<<endl;
							cout<<endl;
							cout<<"Biology classs at: MB2 "<<endl;
							cout<<"Periods: "<<class3<<"\n         "<<class4<<endl;
							cout<<endl;
							cout<<"Duties: "<<duty6<<" With principal"<<endl<<endl;
							cout<<"OBJECTIVES: Today objective is Test you will be taking test from students of MB1 and MB2 in chap#4"<<endl;
							break;
						}
						else if(teacher_name == "Nike" || teacher_name == "nike"){
							cout<<"Chemistry class at: MB2 "<<endl;
							cout<<"Periods: "<<class1<<"\n         "<<class2<<endl;
							cout<<endl;
							cout<<"Chemistry class at: MB1 "<<endl;  
							cout<<"Periods: "<<class3<<"\n         "<<class4<<endl;
							cout<<endl;
							cout<<"Chemistry class at: EB1 "<<endl;
							cout<<"Periods: "<<class5<<"\n         "<<class7<<endl;
							cout<<endl;
							cout<<"Duties: Today you will be "<<duty4<<endl<<endl;
							cout<<"OBJECTIVES: Revision of chap#6 with test of exercise of chap#6, "<<endl;
							cout<<"Revise chapter in first period of yours and take test in second period."<<endl;
							break;
						}
						else if(teacher_name == "John" || teacher_name == "john"){
							cout<<"English class at:  MB1 "<<endl;
							cout<<"Period: "<<class5<<endl;
							cout<<endl;
							cout<<"English class at:  EB1 and CB1 "<<endl;
							cout<<"Period: "<<class6<<endl;
							cout<<endl;
							cout<<"English class at:  MB2 "<<endl;
							cout<<"Period: "<<class7<<endl;
							cout<<endl;
							cout<<"NO DUTIES"<<endl;
							cout<<"OBJECTIVE: Today objective is Essay no#9 and grammer[Direct and Indirect] in MB1 and MB2 While, "<<endl;
							cout<<"           In EB1 and CB1 you should conduct test in Essay and Paraphrassing of poem#3."<<endl;
							break;
						} else if(teacher_name == "exit")break;
									
						else{
							cout<<"Please Try again."<<endl;
							cout<<"Error, Invalid teacher name"<<endl;
							cout<<"Check Spelling"<<endl;
						}		
					}// 7777777777777777777777777777777777777777 nested ends
				} else{
					if(password.empty()){
						cout<<endl;
						cout<<"Empty, PLease Enter Your Password\n"<<endl;
					}else{
					cout<<"\nWrong password";
					cout<<"\nPlease enter correct password"<<endl;
					cout<<"TRY AGAIN!"<<endl;
					cout<<endl;}
				}
				if(password == given_passcode)break;
			}
		} else if(choose == "exit")break;
		 else {
			cout<<endl;
			cout<<"Invalid option please try again, "<<endl;
			cout<<"Enter Student or Teacher"<<endl;
		}
		// first if ends
		
		if(password != given_passcode)continue;
		if(choose == "student" || choose == "teacher"){
		cout<<endl;
		cout<<"Thank you!"<<endl;
		cout<<"Have a good day"<<endl;
		cout<<endl;
		cout<<"Regarding Principal and team "<<endl;
		}
		getch();
	
	}
	}
	
	return 0;
}