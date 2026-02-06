#include<stdio.h>
int main()
{
	int n;
	char c;
	printf("***********************labrary****************************\n");
	printf("Enter your choice=");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("*****departament of science******\n");
			printf("Enter your choice=");
			scanf("%d",&n);
			switch(n)
			{
				case 1:
					printf("PHYSICS ALL BOOKS NAME & WRITER NAME\n");
					printf("a.pradeep's fundamental physics &&&&&&&&&&&&&&&&&&&&& dr.K.L.GOMBER\n");
					printf("b.NOOTAN PHYSICS &&&&&&&&&&&&&&&& Kumar.Mittal\n");
					printf("c.New simplified physics  &&&&&&&&&&&&&&&&    S.L.Arora\n");
					printf("d.New Millennium    &&&&&&&&&&&&&&&&&&&&    S.K.Sharma\n");
					printf("e.Theoretical physics &&&&&&&&&&&&&&&      Max Planck\n");
					printf("f.Principal of Physics &&&&&&&&&&&&&&      V.K.MEHTA");
					printf("g.Text books of physics &&&&&&&&&&&&&      Basant Kumar Gautam\n");
					printf("Enter your choice=");
					fflush(stdin);
			        scanf("%c",&c);
			        switch(c)
			        {
			        	printf("BOOKS NAME AND PRICE\n");
			        	case 'a':
			        		printf("pradeep's fundamental physics <<<<<<<<<<<<<Rs=599>>>>>>>>>>>\n");
			        		break;
			        	case 'b':
							printf("NOOTAN PHYSICS <<<<<<<<<Rs=399>>>>>>>>>>>>>>>>>>\n");
							break;
						case 'c':
							printf("New simplified physics <<<<<<<<<<<Rs=465>>>>>>>>>>>>>>\n");
							break;
						case 'd':
							printf("New Millennium <<<<<<<<<<<Rs=615>>>>>>>>>>>>>>>>\n");
							break;
						case 'e':
							printf("Theoretical physics <<<<<<<<<<<<Rs=528>>>>>>>>>>\n");
							break;
						case 'f':
							printf("Principal of Physics <<<<<<<<<<<<<Rs=716>>>>>>>>>>>>\n");
							break;
						case 'g':
							printf("Text books of physics<<<<<<<<<<<<Rs=938>>>>>>>>>>>>>>\n");
							break;
						default:
							printf("Invalid your choice\n");
							break;
					}
					break;
	        	case 2:
					printf("CHEMISTRY ALL BOOKS AND WRITTER NAME\n");
					printf("a.ORGANIC CHEMISTRY &&&&&&&&&&& S.CHAND\n");
					printf("b.ARIHANT CHEMISTRY &&&&&&&&&&& PREETI KAHAN\n");
					printf("c.ORGANIC CHEMISTRY with biology topic &&&&&&&&&&& Janic Gorzynski Smith\n");
					printf("d.PHYSICAL CHEMISTRY &&&&&&&&&&&&& Peter Atkins\n");
					printf("e.Inorganic Chemistry &&&&&&&&&&&& Gary L. Miesslar\n");
					printf("f.ESSENTIALS OF CHEMISTRY &&&&&&&&&& P.N KAPIL\n");
					printf("g.JEE MAINS CHEMISTRY &&&&&&&&&& PRABHAT KUMAR\n");
					printf("Enter your choice=");
					fflush(stdin);
			        scanf("%c",&c);
			        switch(c)
			        {
			        	printf("BOOKS NAME AND PRICE\n");
			        case 'a':	
			        	printf("ORGANIC CHEMISTRY<<<<<<<<<<<Rs=254>>>>>>>>>>>>>\n");
			        	break;
			        case 'b':
						printf("ARIHANT CHEMISTRY<<<<<<<<<<Rs=452>>>>>>>>>>>>>\n");
						break;
					case 'c':
						printf("ORGANIC CHEMISTRY<<<<<<<<<<<<<<Rs=762>>>>>>>>>>\n");
						break;
					case 'd':
						printf("PHYSICAL CHEMISTRY <<<<<<<<<<<<Rs=689>>>>>>>>>>>\n");
						break;
					case 'e':
						printf("Inorganic Chemistry <<<<<<<<<<<<<<Rs=891>>>>>>>>>>>>\n");
						break;
					case 'f':
						printf("ESSENTIALS OF CHEMISTRY <<<<<<<<<<<<Rs=645>>>>>>>>>>>>\n");
						break;
					case 'g':
						printf("JEE MAINS CHEMISTRY<<<<<<<<<<<<<Rs=256>>>>>>>>>>>>>>>>\n");
						break;
					default:
						printf("Invalid your choice");
						break;
			    	}
			    	break;
			   case 3:
			       printf("BIOLOGY ALL BOOKS NAME AND WRITTEN\n");
				   printf("a.explorning biology &&&&&&&&&&&&&&&&&& john L.crawley\n");
				   printf("b.barron's &&&&&&&&&&&&& Deborah T. Goldberg\n");
				   printf("c.Cell biology &&&&&&&&&&&& Jeremy S.Hyams\n");
				   printf("d.Molecular biology &&&&&&&&&& jennifer A. Hackrtt\n");
				   printf("e.Concept Biology &&&&&&&&&& MARIELLE HOEFNAGELS\n");
				   printf("f.Concept Biology  &&&&&&&&&& Fames E. Bidlack\n");
				   printf("g.Enviromental Biology &&&&&&&&&&& A.D. Bobdey\n");
			   	   printf("Enter your choice=");
				   fflush(stdin);
			       scanf("%c",&c);
			       switch(c)
			       {
			       	 printf("BOOKS NAME AND PRICE\n");
			       	 case 'a':
			       	 	printf("explorning biology <<<<<<<<<<<<Rs=255>>>>>>>>>>>>\n");
			       	 	break;
			       	 case 'b':
						printf("barron's <<<<<<<<<<<<<<Rs=524>>>>>>>>>>>>>>>>>>\n");
						break;
					 case 'c':
					    printf("Cell biology <<<<<<<<<<<<<<Rs=652>>>>>>>>>>>>\n");
						break;
					 case 'd':
					 	printf("Molecular biology <<<<<<<<<<<Rs=874>>>>>>>>>>>>\n");
						break;
					 case 'e':
					 	printf("Concept Biology <<<<<<<<<<<Rs=999>>>>>>>>>>>>>\n");
						break;
					 case 'f':
					    printf("Concept Biology <<<<<<<<<<<<<<Rs=877>>>>>>>>>>>>>>>\n");
						break;
					 case 'g':
					    printf("Enviromental Biology<<<<<<<<<<<Rs=399>>>>>>>>>>>>>>>\n");
						break;
					 default:
					    printf("Invalid your choice");
						break;			  		
				   }
				default:
					printf("Invalid your choice");
					break;
				case 4:
					printf("MATHEMATICS BOOKS NAME AND WRITTEN\n");
					printf("a.MATHEMATICS FOR DEGREE STUDENT &&&&&&&&&&&&&&& Dr.u.s.RANA\n");
					printf("b.Object mathematics &&&&&&&&&&&& sultan chand\n");
					printf("c.mathematics &&&&&&&&&&&& R.S.Aggarwal\n");
					printf("d.Mathematics and its history &&&&&&&&&&& John stillwell\n");
					printf("e.calculus &&&&&&&&&&&& Mirchael spivale\n");
					printf("f.Mathematics &&&&&&&&&& k.c sharma\n");
					printf("Enter your choice=");
				    fflush(stdin);
			        scanf("%c",&c);
					switch(c)
					{
							printf("MATHEMATICS ALL BOOKS NAME AND PRICE\n");
						case 'a':
							printf("MATHEMATICS FOR DEGREE STUDENT <<<<<<<<<<<<< Rs=599 >>>>>>>>>>>\n");
							break;
						case 'b':
							printf("Object mathematics <<<<<<<<<<<<<<<Rs=399>>>>>>>>>>>>>>>>>>>>>\n");
							break;
						case 'c':
							printf("Mathematics and its history <<<<<<<<<<<<Rs=499>>>>>>>>>>>>>\n");
							break;
						case 'd':
							printf("Mathematics and its history <<<<<<<<<<<<<<<<<Rs=199>>>>>>>>>>>>\n");
							break;
						case 'e':
							printf("calculus <<<<<<<<<<<<<<Rs=899>>>>>>>>>>>>>>>\n");
							break;
						case 'f':
							printf("Mathematics <<<<<<<<<<<<<Rs=799>>>>>>>>>>>>>\n");
							break;
						default:
							printf("Invalid you choice\n");
							break;
					}
		}
		break;
		default:
			printf("Invalid your choice");
			break;
	}
	return 0;
	
}
