#include<stdio.h>
void main()
{
	
	char ch;
	printf("Number Names\n");
	printf("A.One\n");
	printf("B.Two\n");
	printf("C.Three\n");
	printf("D.Four\n");
	printf("E.Five\n");
	printf("Enter your choice\n");
	scanf("%c",&ch);
	
	
	
	switch (ch)
	{
		case 'A':
			case 'a':
				printf("One");
				break;
				case 'B':
					case 'b':
						printf("Two");
						break;
						case 'C':
							case 'c':
								printf("Three");
								break;
								case 'D':
									case 'd':
										printf("Four");
										break;
										case 'E':
											case 'e':
												printf("Five");
												break;
												default:
													printf("Invalid choice");
									
	}
}