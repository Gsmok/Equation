=================
Author:	Ryuujin
Project name:	Equation_Solver

Description:	Prototype version of library able to solve complexes of multiple equations 
				with multiple unknown variables by mathematical non-approximate ways aiming to
				reduce miscalculation chances to 0%
				
				The goal of this solver is to be able to find all possible values of choosen unknown 
				compared to others by for example:
				
				example1:
					Input:	4y = x^2 + 25x + 5
							8y = sin(2z)
							z = ¶			//z is what we "know"
							
					Output:	x = 5
							or
							x = -5
					
				example2:
					Input: y = 5x + z
						   z = tg(p) * ctg(p)
						   
					Output1 (looking for y):	y = 5x + 1	//way to say "that's the best i can do"
					
					Output2 (looking for x):	x = y/5 - 0.2	//the same
				
				example3: 
					Input:	4y = x^5 + 1
							y = 0		//y is what we "know"
							
					Output: NON
					
				example4:
					Input:	sin(x) = cos(y)
							x = 2¶
							y = 15¶
							
					Output1 (looking for y):	y = y	//isn't it?
					
					Output2	(looking for x):	x = x
					
				