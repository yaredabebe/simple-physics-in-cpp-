#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Triginometric functions which are not implemented in cMath module.
double cot(double );
double csc(double );
double sec(double );

double insert();
void displayDer(int);
//QUESTIONS
void question1();
void question2();
void question3();
void question4();

int main(){
	int choice;
	
	cout << "\n\n\n\n\n\n\n \t \t\t\t ENGINEERING MECHANICS II -n\n ";
	for (int i=0; i<3;i++){
       system("color 2a");
       system("color 3b");
       system("color c1");
       system("color b6");
	}
	system("color fc");
	cout << "\n\nPress any key to go to the program";
	cin.get();
	again:
	do {
		system("cls");	//Clears the console screen
		
		cout << "WHICH QUESTION DO YOU WANT TO WORK ON?\n"<<
			" 1. QUESTION ONE\n\n"<<
			" 2. QUESTION TWO\n\n"<<
			" 3. QUESTION THREE\n\n"<<
			" 4. QUESTION FOUR\n\n";
	
		choice = insert();
		switch(choice){
			case 1:
				question1();
				break;
			case 2:
				question2();
				break;
			case 3:
				question3();
				break;
			case 4:
				question4();
				break;
			default:
				cout << "Invalid input . Only Enter the values found in the menu.";
				goto again;
			}
		cout << "Do you want to continue (0 to exit)";
		choice = insert();
	}while(choice != 0);
}


void question1(){
	int choice;
	double inpt1,inpt2,x,x_2;
	//When incorrect input  is encounterd come to this point
	again:
	system("cls");

	cout << "\n\t \t BEHOLD THE QUESTION\n";
	cout << "The fixed horizontal guide carries a slider and pin P whose motion is controlled by the rotating slotted arm OA."<<
			"If the arm is revolving about O at the constant rate = 5rad/s for an intervla of its designed motion, determine the"<<
			"magnitudes of the velocity and acceleration of the slider in the slot for the instant when theta = 60deg. Also, find the "<<
			"r-component of the velovity and the r-componenet of the acceleration\n";
	cout << "\n1. Solve the problem given this values\n\n"<<
			"2. Change parameters \n\n";
	
	choice  =insert();  	// This function validates and checks our input
	
	switch(choice){
		case 1:
			cout << "\n\n"<<setw(25) <<"Given" <<setw(25) << "Required \n\n\n"<<
			setw(25) <<"Angular velocity = 5rad/s" <<setw(25) << "V_slider \n"<<
			setw(25) <<"Theta = 60deg " <<setw(25) << "A_slider \n"<<
										  setw(50) <<"A_r component\n"<<
										  setw(50) << "V_r component\n";
			inpt1 = 5;
			inpt2 = 60;
			
			inpt2=(inpt2*M_PI)/180;
			
			displayDer(1);
				x = -0.2 * pow(csc(inpt2),2) * inpt1;
				cout << "\nx' = " << x  << "m/s "<<endl<<endl;
					
			cout << "B.\nVr = cos(@) *x' \n"<<
					"Vr = cos(@)* " << x <<
					" = " << cos(inpt2) * x<<endl<<"rad/s"<<endl;
			
			displayDer(2);
				x_2 = -2*0.2 * cot(inpt2)*pow(csc(inpt2),2)*pow(inpt1,2);
				cout << "\nx'' = " << x_2  <<"m/s^2"<<endl;
			
				cout << "D.\n Ar = cos(@) *x' \n"<<
					"Ar = cos(@)* " << x_2 <<"rad/s^2"<<
					" = " << cos(inpt2) * x_2<<endl;
				
		
			break;
		case 2:
			cout <<"Enter the value of Angular Velocity \n";
			inpt1 = insert();
			cout << "Enter the value  of thetha \n";
			inpt2 = insert();
			inpt2=(inpt2*M_PI)/180;
			
				displayDer(1);
					x = -0.2 * pow(csc(inpt2),2) * inpt1;
					cout << "\nx' = " << x  << "m/s "<<endl<<endl;
					
					cout << "B.\n Vr = cos(@) *x' \n"<<
						"Vr = cos(@)* " << x <<
						" = " << cos(inpt2) * x << "rad/s"<<endl;	
						
				displayDer(2);
					x_2 = -0.2 * cot(inpt2)*pow(csc(inpt2),2)*pow(inpt1,2);
					cout << "\nx'' = " << x_2<< "m/s^2"<<endl;
					
					cout << "D.\n Ar = cos(@) *x'' \n"<<
					"Vr = cos("<< inpt2 << ")* " << x_2 <<
					" = " << cos(inpt2) * x_2<<"rad/s^2"<<endl;
					
			break;
		default :
			cout << "Incorrect input ,Please select only the numbers on the list";
			goto again;
	} 
}

void question2(){
	double vInit = 0, vFinal = 40, tEnd =80 ,a ,m1,m2,m3,mE,Fr_T,Fr_F;
	int choice;
	
	a1:
	system("cls");
	cout << "\n1. Solve the problem given this values\n\n"<<
			"2. Change parameters \n\n"<<
			"3. Change required parameter\n";
	choice = insert();
	
	switch(choice){
		case 1:
			//Since vFinal is given in km/h we need m/s
			vFinal = 40 / 3.6 ; // 11.1m/s
			m1 = m2 = m3 = 30000;
			mE =50000;
			cout << "\n\n"<<setw(25) <<"Given" <<setw(50) << "Required \n\n\n"<<
			setw(25) <<"Mass of Cart 1 = 30Mg" <<setw(50) << "Force on wheel\n\n"<<
			setw(25) <<"Mass of Cart 1 = 30Mg" <<setw(50) << "Force b/n Engine and cart 3\n\n"<<
			setw(25) <<"Mass of Cart 1 = 30Mg\n\n"<<
			setw(25) <<"Mass of Engine = 50Mg\n\n"<<
			setw(25) <<"Final Velocity = 40km/h or 11.1m/s\n\n",
			
			cout << "\t\t [ C_1 ]-[ C-2 ]-[ C-3 ]-[ E ]\n\n";
			cout << "The acceleration of cart-1 ,cart-2 , cart-3 and the Engine compartment is the same  "<<endl;
			cout << "\t\t a = (Vfinal-Vinitial)/timeTaken"<<endl;
			a = (vFinal - vInit)/tEnd;
			cout << "\n\t\t a = " << a<<"m/s"<<endl;
			
			cout<<"The tension of between cart-3 and the Engine compartment can be calcultated by splitting thre whole train in to two \n"<<
				"\n\t\t[ C_1 ]-[ C-2 ]-[ C-3 ]->T <-T[ E ]\n";
			cout << "\t\tFr-T = (m1 + m2 + m3 ) * a" <<endl;
			Fr_T = ( m1 + m2 + m3) * a;
			cout <<"\n\t\t F = " <<Fr_T <<" N or " <<Fr_T/1000 <<" kN "<<endl;
			
			cout<<"The Force on the Engine compartment can be calcultated by considering  \n"<<
			      "\n\n\t\t[ C_1 ]-[ C-2 ]-[ C-3 ]-[ E ]-> F \n";
			cout << "\t\tFr-T = (m1 + m2 + m3 + mE ) * a" <<endl;
			Fr_F = ( m1 + m2 + m3 + mE) * a;
			cout <<"\n\t\t F = " <<Fr_F <<" N or " <<Fr_F/1000 <<" kN "<<endl;
			
			break;
		case 2:
			// Check if any of the mass is zero
			again:
			cout <<" Enter mass 1 : ";
			m1 = insert();
			cout <<" Enter mass 2 : ";
			m2 = insert();
			cout <<" Enter mass 3 : ";
			m3 = insert();
			cout <<" Enter mass of Engine : ";
			mE = insert();
			cout <<" Enter Final Velocity : ";
			vFinal = insert();
			cout <<" Enter time at which the velocity has the final value : ";
			tEnd = insert();
			
			if(m1 == 0|| m2 == 0|| m3 == 0|| mE == 0||vFinal == 0||tEnd==0){
				cout << "Can not have zero valued input in this example ";
				goto again;
			}else{
				cout << "\t\t [ C_1 ]-[ C-2 ]-[ C-3 ]-[ E ]\n\n";
				cout << "The acceleration of cart-1 ,cart-2 , cart-3 and the Engine compartment is the same  "<<endl;
				cout << "\t\t a = (Vfinal-Vinitial)/timeTaken\n"<<endl;
				a = (vFinal - vInit)/tEnd;
				cout << "\n\t\t a = " << a<<"m/s"<<endl;
				
				cout<<"The tension of between cart-3 and the Engine compartment can be calcultated by splitting thre whole train in to two \n"<<
					"\n\t\t[ C_1 ]-[ C-2 ]-[ C-3 ]->T <-T[ E ]\n";
				cout << "\t\tFr-T = (m1 + m2 + m3 ) * a\n" <<endl;
				Fr_T = ( m1 + m2 + m3) * a;
				cout <<"\n\t\t F = " <<Fr_T <<" N or " <<Fr_T/1000 <<" kN "<<endl;
				
				cout<<"The Force on the Engine compartment can be calcultated by considering  \n"<<
				      "\n\n\t\t[ C_1 ]-[ C-2 ]-[ C-3 ]-[ E ]-> F \n";
				cout << "\t\tFr-T = (m1 + m2 + m3 + mE ) * a\n" <<endl;
				Fr_F = ( m1 + m2 + m3 + mE) * a;
				cout <<"\n\t\t F = " <<Fr_F <<" N or " <<Fr_F/1000 <<" kN "<<endl;
			}
			break;
		case 3:
			system("cls");
			again2:
			cout << "What do you want to compute ? \n";
			cout << "1. Mass of one of the crate\n\n"<<
					"2. Time taken to achieve the desired velocity hence acceleration\n\n";
			choice = insert();
			switch(choice){
				int temp;
				case 1:
					again1:
					cout <<" Enter mass 1 : ";
					m1 = insert();
					cout <<" Enter mass 2 : ";
					m2 = insert();
					cout <<" Enter mass of Engine : ";
					mE = insert();
					cout <<" Enter Final Velocity in(m/s) : ";
					vFinal = insert();
					cout <<" Enter time at which the velocity has the final value : ";
					tEnd = insert();
					cout << "Enter tractive force";
					Fr_T = insert();
					if(m1 == 0|| m2 == 0|| Fr_T == 0|| mE == 0||vFinal == 0||tEnd==0){
						cout << "Can not have zero valued input in this example ";
						goto again1;
					}else{
						m3 =  (Fr_T/((vFinal-vInit)/tEnd)) -(m1+m2+mE);
						cout << "\n\nThe mass of  the desired object is : " << m3<<endl;
					}
				case 2:
					again3:
					cout <<" Enter mass 1 : ";
					m1 = insert();
					cout <<" Enter mass 2 : ";
					m2 = insert();
					cout <<" Enter mass 3 : ";
					m3 = insert();
					cout <<" Enter mass of Engine : ";
					mE = insert();
					cout <<" Enter Final Velocity (in m/s): ";
					vFinal = insert();
					cout <<" Enter tractive force : ";
					Fr_T = insert();
					
					if(m1 == 0|| m2 == 0||m3==0|| Fr_T == 0|| mE == 0||vFinal == 0){
						cout << "Can not have zero valued input in this example ";
						goto again3;
					}else{
						tEnd = ((vFinal-vInit)*(m1+m2+m3+mE))/Fr_T;
					}
					
					break;
				default :
					cout << "Incorrect input ,Please select only the numbers on the list";
					goto again2;
			}
		default :
			cout << "Incorrect input ,Please select only the numbers on the list";
			goto a1;
			
			
	}
	
}

void question3(){
	double a = -2,v=-5,theta =60,x1,x2;
	int choice;
	a1:
	system("cls");
	cout << "\n\t \t BEHOLD THE QUESTION\n";
	cout <<"At the instant @ = 60, the slotted guide rod is moving to the left with an acceleration of 2m/s^2 ans a velocity of"<<
			"5m/s. Determine the angular acceleration and angular velocity of the link AB at this instant.\n\n";
	cout << "\n1. Solve the problem given this values\n\n"<<
			"2. Change parameters \n\n";
	choice = insert();
	switch(choice){
		
		case 1:
			theta=(theta*M_PI)/180;
			displayDer(3);
				x1 = v/(-0.2*sin(theta));
				cout << "\n@' = " << x1 << "rad/s"<<endl;
			displayDer(4);
				x2 = (a/-0.2)- (cos(theta)*(pow(x1,2)))/sin(theta);
				cout <<"X'' = " << x2 << "rad/s^2"<<endl;
				break;
		case 2:
			
			cout << "Enter the value of acceleration :";
			a = insert();
			cout << "Enter the value of the velocity :";
			v = insert();
			cout << "Enter the angle theata :";
			theta = insert();
			theta=(theta*M_PI)/180;
			
			displayDer(3);
				x1 = v/(-0.2*sin(theta));
				cout << "@' = " << x1<<" rad/s"<<endl;
			displayDer(4);
				x2 = (a/-0.2)- (cos(theta)*(pow(x1,2)))/sin(theta);
				cout <<"X'' = " << x2 <<" rad/s^2"<<endl;
				break;
		default:
			cout << "Incorrect input ,Please select only the numbers on the list";
			goto a1;
			
	}
}

void question4(){
	double vMotor,height,time;
	int choice;
	// l2 = 3Sa - Sm
	// l1 = Sw -Sa +Sw
	a1:
	system("cls");
	cout << "\n1. Solve the problem given this values\n\n"<<
			"2. Change parameters \n\n";
	choice = insert();
	switch(choice){
		case 1:
			cout << "\n\n"<<setw(25) <<"Given" <<setw(25) << "Required \n\n\n"<<
			setw(25) <<"Time = 10s" <<setw(25) << "height = ? \n"<<
			setw(25) <<"velocity Of Motor = 180 mm/s \n\n\n";
			
			displayDer(5);
			
			height = (vMotor * time)/6;
			cout << "The vertical displacement of the block of mass is " << height << "mm";
			break;
		case 2:
			cout << "Enter the velocity of motor ";
			vMotor = insert();
			cout <<"Enter the time period";
			time= insert();
			
			displayDer(5);
			
			height = (vMotor * time)/6;
			cout << "The vertical displacement of the block of mass is " << height << "mm";
			break;
		default:
			cout << "Incorrect input ,Please select only the numbers on the list";
			goto a1;
				
			
	}
	
	
}
double cot(double degree){
	return 1/tan(degree);
}

double csc(double degree){
	return 1/sin(degree);
}

double sec(double degree){
	return 1/cos(degree);
}

void displayDer(int num){
	if (num == 1){
		cout << "A. \ntan(@) = 0.2 / x \t\t where x is the horizontal distance\n\n"<<
					"x = 0.2 * cos(@)/sin(@) \n\n"<<
					"x' = 0.2*((cos(@)'(sin(@)) - (sin(@))'(cos(@)))/(sin(@))^2\n\n"<<
					"x' = 0.2*(-sin(@)^2 - cos(@)^2)* @' / sin(@)^2 \n\n";
					"x' = -0.2 * csc(@)^2*@'\n\n";
	}else if(num == 2 ){
		cout << "C. \nx'' = h*csc(@)^2 * @'\n\n "<<
				"x'' = h*[csc(@)^2]'@' + h*([@'']*[csc(@)^2]\n\n"<<
				"x'' = h*([-2*cos(@)@']/sin(@)^3)*@' + h[@'']*[csc(@)^2]\n\n"<<
				"x'' = -2*h*cot(@)*csc(@)^2*(@')^2\n";	
}else if(num == 3){
	cout <<"\n\nA.\n cos(@) = X/r\n\n"<<
			"X = r * cos(@) \n\n"<<
			"X' = -0.2 * sin(@)* @'\n\n"<<
			"@' = 'X'/(r*sin(@))";
}else if(num == 4){
	cout << "\n\nB.\n X'' = r*[sin(@)]'*@'  + [@]'*[sin(@)]\n\n";
	cout << "X'' = -r[cos(@)^2*[@]'^2 + [sin(@)[@'']\n\n";
}else if(num == 5){
	cout <<" l2 = 3Sa - Sm + c1 + c2 + c3 \n"<<
			"l1 = Sw -Sa +Sw + c1\n\n\n\n"<<
			"l2' = 3Sa' - Sm' + c1' +c2' + c3'\n"<<
			"l1' = 2*Sw' - Sa' + c1' \n\n\n\n"<<
			"0 = 3Va - Vm -> \t Vm = 3Va \n"<<
			"0= 2Vw - Va -> \t 2Vw = va\n\n\n"<<
			"Vw = Vm /6 hence h =(Vm*time)/6\n\n\n";
	}
}

double insert(){
     // Function used to validate input 
    int choice;
    bool running = true;

    while(running){
        cout<<">";
        cin>>choice;
       //If cin input is of type not-int catch and correct the error to prevent fail on run time  
        if(cin.fail()){
            cin.clear();
            cin.ignore(100,'\n');
		}else {
            return choice;
            }
    }
}

