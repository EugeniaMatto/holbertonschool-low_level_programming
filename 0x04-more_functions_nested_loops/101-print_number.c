#include "main.h"
/**
 *  * print_number - sad
 *   * @n: sad
 *    */
void print_number(int n)
{
	int a;
	if (n != 0)
	{
		        if (n < 0)
				        {
						                _putchar('-');
								                n = -n;
										        }
			        
				if (n >= 1000000000)
					        {
							                a = (n / 1000000000) * 1000000000;
											_putchar(n / 1000000000 + '0');
											                n = n - a;
													        if (n < 100000000)
															                _putchar('0');
														        }  

					if (n >= 100000000)
						        {
								                a = (n / 100000000) * 100000000;
												_putchar(n / 100000000 + '0');
												                n = n - a;
														        if (n < 10000000)
																                _putchar('0');
															        }  	


						if (n >= 10000000)
							        {
									                a = (n / 10000000) * 10000000;
													_putchar(n / 10000000 + '0');
													                n = n - a;
															        if (n < 1000000)
																	                _putchar('0');
																        }  	


							if (n >= 1000000)
								        {
										                a = (n / 1000000) * 1000000;
														_putchar(n / 1000000 + '0');
														                n = n - a;
																        if (n < 100000)
																		                _putchar('0');
																	        }  	

								if (n >= 100000)
									        {
											                a = (n / 100000) * 100000;
															_putchar(n / 100000 + '0');
															                n = n - a;
																	        if (n < 10000)
																			                _putchar('0');
																		        }

									  if (n >= 10000)
										          {
												                  a = (n / 10000) * 10000;
														  		_putchar(n / 10000 + '0');
																                n = n - a;
																		        if (n < 1000)
																				                _putchar('0');
																			        }
									  	
									  	if (n >= 1000)
											        {
													                a = (n / 1000) * 1000;
																	_putchar(n / 1000 + '0');
																	                n = n - a;
																			        if (n < 100)
																					                _putchar('0');
																				        }
										        if (n >= 100)
												        {
														                a = (n / 100) * 100;
																                _putchar(n / 100 + '0');
																		                n = n - a;
																					if (n < 10)
																						                _putchar('0');
																					        }
												if (n >= 10)
													        _putchar(n / 10 + '0');
												        _putchar(n % 10 + '0');
	}
	else
	{
		_putchar('0');
	}
}
