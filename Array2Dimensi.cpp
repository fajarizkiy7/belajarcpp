#include <iostream>
#include <conio.h>

using namespace std;

int pil;
char jwb;
main(){

input:
cout<<"\nMENU MATRIX\n\n";
cout<<"1. Penjumlahan\n";
cout<<"2. Pengurangan\n";
cout<<"3. Perkalian Dengan Konstanta\n";
cout<<"4. Transpose\n";
cout<<"5. Diagonal\n";
cout<<"6. Perkalian Antar Matrix\n";
cout<<"\nInput Pilihan :";
cin>>pil;

switch(pil){
	case 1: //penjumlahan
	    {
	    	//deklarasi matrix dg UDT(User Difined Type/tipe data yg dibuat oleh programmer)
			typedef int matrix[3][2];
			matrix A,B,C;

			//input matrix A
			for(int b=0;b<3;b++)
				{				
					for(int k=0;k<2;k++)
						{
							cout<<"A ["<<b<<"]["<<k<<"]= ";
							cin>>A[b][k];
						}
				}

			cout<<endl<<endl;

			//input matrix B
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<2;k++)
						{
							cout<<"B ["<<b<<"]["<<k<<"]= ";
							cin>>B[b][k];
						}
				}

			//output matrix A
			cout<<endl<<"Matrix A \n";
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<2;k++)
						{
							cout<<" "<<A[b][k];
						}
					cout<<endl;
				}	

			//output matrix B
			cout<<endl<<"Matrix B \n";
			for(int b=0;b<3;b++)
			{
				for(int k=0;k<2;k++)
					{
						cout<<" "<<B[b][k];
					}
				cout<<endl;
			}

			//penjumlahan matrix C=A+B
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<2;k++)
						{
							C[b][k]=A[b][k]+B[b][k];
						}
				}	

			//output matrix C
			cout<<endl<<"Matrix C \n";
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<2;k++)
						{
							cout<<" "<<C[b][k];
						}
					cout<<endl;
				}
		
		cout<<"\nKembali ke Menu [y/t]?";
		cin>>jwb;
		
		if(jwb=='y'||jwb=='Y')
			{
				system("cls");
				goto input;
			}
		else
		    cout<<"Terimakasih..\n";
	    break;	
	    }
	case 2://pengurangan
	    {
	        //deklarasi matrix dg UDT(User Difined Type/tipe data yg dibuat oleh programmer)
			typedef int matrix[3][2];
			matrix A,B,C;

			//input matrix A
			for(int b=0;b<3;b++)
				{				
					for(int k=0;k<2;k++)
						{
							cout<<"A ["<<b<<"]["<<k<<"]= ";
							cin>>A[b][k];
						}
				}

			cout<<endl<<endl;

			//input matrix B
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<2;k++)
						{
							cout<<"B ["<<b<<"]["<<k<<"]= ";
							cin>>B[b][k];
						}
				}

			//output matrix A
			cout<<endl<<"Matrix A \n";
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<2;k++)
						{
							cout<<" "<<A[b][k];
						}
					cout<<endl;
				}	

			//output matrix B
			cout<<endl<<"Matrix B \n";
			for(int b=0;b<3;b++)
			{
				for(int k=0;k<2;k++)
					{
						cout<<" "<<B[b][k];
					}
				cout<<endl;
			}

			//pengurangan matrix C=A+B
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<2;k++)
						{
							C[b][k]=A[b][k]-B[b][k];
						}
				}	

			//output matrix C
			cout<<endl<<"Matrix C \n";
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<2;k++)
						{
							cout<<" "<<C[b][k];
						}
					cout<<endl;
				}  
		
		cout<<"\nKembali ke Menu [y/t]?";
		cin>>jwb;
		
		if(jwb=='y'||jwb=='Y')
			{
				system("cls");
				goto input;
			}
		else
		    cout<<"Terimakasih..\n";
	    break;	  	
	    }
	case 3://Perkalian Dengan Konstanta
		{
			//deklarasi	
			int MatrixA[2][2];

			//input MatrixA
			for(int b=0;b<2;b++)
			{
				for(int k=0;k<2;k++)
					{
						cout<<"Matrix A ["<<b<<"]["<<k<<"]= ";
						cin>>MatrixA[b][k];
					}
			}
			system("cls");

			//output matrikA
			for(int b=0;b<2;b++)
				{
					for(int k=0;k<2;k++)
						{
							cout<<MatrixA[b][k]<<" ";
						}
					cout<<endl;
				}

			//Perkalian MatrixA dengan konstanta
			int kali;
			cout<<"Hasil Perkalian\n";
			for(int b=0;b<2;b++)
				{
					for(int k=0;k<2;k++)
						{
							kali=MatrixA[b][k]*2;
							cout<<kali<<" ";
						}
					cout<<endl;
				}
		
		cout<<"\nKembali ke Menu [y/t]?";
		cin>>jwb;
		
		if(jwb=='y'||jwb=='Y')
			{
				system("cls");
				goto input;
			}
		else
		    cout<<"Terimakasih..\n";
		break;
		}
	case 4://Transpose
		{
			//deklarasi	
			int MatrixA[3][3];
			int MatrixTranspose[3][3];

			//input MatrixA
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<3;k++)
						{
							cout<<"Matrix A ["<<b<<"]["<<k<<"]= ";
							cin>>MatrixA[b][k];
						}
				}	
			system("cls");

			//output matrixA
			cout<<endl<<"Matrix A \n";
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<3;k++)
						{
							cout<<" "<<MatrixA[b][k];
						}
					cout<<endl;
				}	

			//Transpose
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<3;k++)
						{
							MatrixTranspose[b][k]=MatrixA[k][b];
						}
				}

			//Output MatrixTranspose
			cout<<endl<<"Matrik Tanspose \n";
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<3;k++)
						{
							cout<<" "<<MatrixTranspose[b][k];
						}
					cout<<endl;
				}		

			//Nilai Diagonal Matrix Transpose
			cout<<endl<<"Nilai Diagonal dari Matrik Tanspose \n";
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<3;k++)
						{
							if(b==k)
								cout<<MatrixTranspose[b][k]<<" ";
						}
				}
	
		cout<<"\nKembali ke Menu [y/t]?";
		cin>>jwb;
		
		if(jwb=='y'||jwb=='Y')
			{
				system("cls");
				goto input;
			}
		else
		    cout<<"Terimakasih..\n";
	    break;			
		}
	case 5://Diagonal
		{
		    //deklarasi	
			int Matrix[3][3];
			int MatrixDiagonal[3][3];

			//input MatrixDiagonal
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<3;k++)
						{
							cout<<"Matrix ["<<b<<"]["<<k<<"]= ";
							cin>>MatrixDiagonal[b][k];
						}
				}	
			system("cls");

			//output matrixA
			cout<<endl<<"Matrix \n";
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<3;k++)
						{
							cout<<" "<<MatrixDiagonal[b][k];
						}
					cout<<endl;
				}	
			//Nilai Diagonal Matrix 
			cout<<endl<<"Nilai Diagonal Matrik \n";
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<3;k++)
						{
							if(b==k)
								cout<<MatrixDiagonal[b][k]<<" ";
						}
				}
		
		cout<<"\nKembali ke Menu [y/t]?";
		cin>>jwb;
		
		if(jwb=='y'||jwb=='Y')
			{
				system("cls");
				goto input;
			}
		else
		    cout<<"Terimakasih..\n";
	    break;	
		}
	case 6://Perkalian Antar Matrix
		{
			//deklarasi 
			int A[2][3],B[3][4],C[2][4];
			int ProsesPerkalian;

			//input matrik A
			for(int b=0;b<2;b++)
				{
					for(int k=0;k<3;k++)
						{
							cout<<"A ["<<b<<"]["<<k<<"]= ";
							cin>>A[b][k];
						}
				}

			//input matrik B
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<4;k++)
						{
							cout<<"B ["<<b<<"]["<<k<<"]= ";
							cin>>B[b][k];
						}
				}

			system("cls");
			//output matrik A
			cout<<"Matrix A \n";
			for(int b=0;b<2;b++)
				{
					for(int k=0;k<3;k++)
						{
							cout<<A[b][k]<<" ";
						}
					cout<<endl;
				}

			//output matrik B
			cout<<"\nMatrix B \n";
			for(int b=0;b<3;b++)
				{
					for(int k=0;k<4;k++)
						{
							cout<<B[b][k]<<" ";
						}
					cout<<endl;
				}

			//Perkalian matrik C=A*B			
			for(int b=0;b<2;b++)		
			{
				for(int k=0;k<4;k++)
					{
						C[b][k] = 0;
						for(ProsesPerkalian=0;ProsesPerkalian<3;ProsesPerkalian++)
		   					{
		   	   					C[b][k] = C[b][k] + (A[b][ProsesPerkalian] * B[ProsesPerkalian][k]); 
		   					}
					}
			}

			//Output Perkalian matrik C=A*B
			cout<<"\nMatrix C \n";
			for(int b=0;b<2;b++)
				{
					for(int k=0;k<4;k++)
						{
	   						cout<<C[b][k]<<" ";
						}
					cout<<endl;
				}
		
		cout<<"\nKembali ke Menu [y/t]?";
		cin>>jwb;
		
		if(jwb=='y'||jwb=='Y')
			{
				system("cls");
				goto input;
			}
		else
		    cout<<"Terimakasih..\n";
	    break;	
		}
	default:
		{
			cout<<"Pilihan hanya no 1-6 saja !!\n"; 
			goto input;
		}
}
getch();}
