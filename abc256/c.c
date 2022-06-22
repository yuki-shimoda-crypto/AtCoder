#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>



// int main(void)
// {
//	int flag_h1 = 0, flag_h2 = 0, flag_h3 = 0;
//	int flag_w1 = 0, flag_w2 = 0, flag_w3 = 0;
//	int count = 0;
// 	int h1, h2, h3, w1, w2, w3;
// 	scanf("%d%d%d%d%d%d", &h1, &h2, &h3, &w1, &w2, &w3);
// 	int table[3][3];

// 	for (int i = 1; i <= 28; i++)//1
// 	{
// 		table[0][0] = i;
// 		for (int j = 1; j <= 28; j++)//2
// 		{
// 			table[0][1] = j;
// 			for (int k = 1; k <= 28; k++)//3
// 			{
// 				table[0][2] = k;

// 				if (table[0][0] + table[0][1] + table[0][2] == h1)
// 					flag_h1 = 1;
// 				else
// 					flag_h1 = 0;
// 				if (!(flag_h1))
// 					break;

// 				for (int l = 1; l <= 28; l++)//4
// 				{
// 					table[1][0] = l;
// 					for (int m = 1; m <= 28; m++)//5
// 					{
// 						table[1][1] = m;
// 						for (int n = 1; n <= 28; n++)//6
// 						{
// 							table[1][2] = n;

// 							if (table[1][0] + table[1][1] + table[1][2] == h2)
// 								flag_h2 = 1;
// 							else
// 								flag_h2 = 0;
// 							if (!(flag_h2))
// 								break;
							
// 							for (int o = 1; o <= 28; o++)//7
// 							{
// 								table[2][0] = o;

// 								if (table[0][0] + table[1][0] + table[2][0] == w1)
// 									flag_w1 = 1;
// 								else
// 									flag_w1 = 0;
// 								if (!(flag_w1))
// 									break;

// 								for (int p = 1; p <= 28; p++)//8
// 								{
// 									table[2][1] = p;

// 									if (table[0][1] + table[1][1] + table[2][1] == w2)
// 										flag_w2 = 1;
// 									else
// 										flag_w2 = 0;
// 									if (!(flag_w2))
// 										break;

// 									for (int q = 1; q <= 28; q++)//9
// 									{
// 										table[2][2] = q;

// 										if (table[2][0] + table[2][1] + table[2][2] == h3)
// 											flag_h3 = 1;
// 										else
// 											flag_h3 = 0;

// 										if (!(flag_h3))
// 											break;

// 										if (table[0][2] + table[1][2] + table[2][2] == w3)
// 											flag_w3 = 1;
// 										else
// 											flag_w3 = 0;

// 										if (flag_h1 && flag_h2 && flag_h3 && flag_w1 && flag_w2 && flag_w3)
// 											count++;
// 									}
// 								}
// 							}
// 						}
// 					}
// 				}
// 			}
// 		}
// 	}
// 	printf("%d\n", count);
//     return (0);
// }



// int main(void)
// {
// 	int flag_h1 = 0, flag_h2 = 0, flag_h3 = 0;
// 	int flag_w1 = 0, flag_w2 = 0, flag_w3 = 0;
// 	int count = 0;

// 	int h1, h2, h3, w1, w2, w3;
// 	scanf("%d%d%d%d%d%d", &h1, &h2, &h3, &w1, &w2, &w3);

// 	for (int i = 1; i <= 28; i++)//1
// 	{
// 		for (int j = 1; j <= 28; j++)//2
// 		{
// 			for (int k = 1; k <= 28; k++)//3
// 			{
// 				if (i + j + k == h1)
// 					flag_h1 = 1;
// 				else
// 				{
// 					flag_h1 = 0;
// 					continue;
// 				}

// 				for (int l = 1; l <= 28; l++)//4
// 				{
// 					for (int m = 1; m <= 28; m++)//5
// 					{
// 						for (int n = 1; n <= 28; n++)//6
// 						{
// 							if (l + m + n == h2)
// 								flag_h2 = 1;
// 							else
// 							{
// 								flag_h2 = 0;
// 								continue;
// 							}
							
// 							for (int o = 1; o <= 28; o++)//7
// 							{
// 								if (i + l + o == w1)
// 									flag_w1 = 1;
// 								else
// 								{
// 									flag_w1 = 0;
// 									continue;
// 								}

// 								for (int p = 1; p <= 28; p++)//8
// 								{
// 									if (j + m + p == w2)
// 										flag_w2 = 1;
// 									else
// 									{
// 										flag_w2 = 0;
// 										continue;
// 									}

// 									for (int q = 1; q <= 28; q++)//9
// 									{
// 										if (o + p + q == h3)
// 											flag_h3 = 1;
// 										else
// 										{
// 											flag_h3 = 0;
// 											continue;
// 										}


// 										if (k + n + q == w3)
// 											flag_w3 = 1;
// 										else
// 										{
// 											flag_w3 = 0;
// 											continue;
// 										}

// 										if (flag_h1 && flag_h2 && flag_h3 && flag_w1 && flag_w2 && flag_w3)
// 											count++;
// 									}
// 								}
// 							}
// 						}
// 					}
// 				}
// 			}
// 		}
// 	}
// 	printf("%d\n", count);
//     return (0);
// }

// int main(void)
// {
// 	int flag_h1 = 0, flag_h2 = 0, flag_h3 = 0;
// 	int flag_w1 = 0, flag_w2 = 0, flag_w3 = 0;
// 	int count = 0;

// 	int h1, h2, h3, w1, w2, w3;
// 	scanf("%d%d%d%d%d%d", &h1, &h2, &h3, &w1, &w2, &w3);

// 	for (int i = 1; i <= 28; i++)//1
// 	{
// 		for (int j = 1; j <= 28; j++)//2
// 		{
// 			for (int k = 1; k <= 28; k++)//3
// 			{
// 				if (i + j + k != h1)
// 					continue;
// 				for (int l = 1; l <= 28; l++)//4
// 				{
// 					for (int m = 1; m <= 28; m++)//5
// 					{
// 						for (int n = 1; n <= 28; n++)//6
// 						{
// 							if (l + m + n != h2)
// 								continue;
// 							for (int o = 1; o <= 28; o++)//7
// 							{
// 								if (i + l + o != w1)
// 									continue;
// 								for (int p = 1; p <= 28; p++)//8
// 								{
// 									if (j + m + p != w2)
// 										continue;
// 									for (int q = 1; q <= 28; q++)//9
// 									{
// 										if (o + p + q != h3)
// 											continue;
// 										if (k + n + q != w3)
// 											continue;
// 										count++;
// 									}
// 								}
// 							}
// 						}
// 					}
// 				}
// 			}
// 		}
// 	}
// 	printf("%d\n", count);
//     return (0);
// }

#define MIN(a, b) (a - b > 0 ? b: a)

int main(void)
{
	int h1, h2, h3, w1, w2, w3;
	int a, b, c;
	int d, e, f;
	int g, h, i;
	int count = 0;

	scanf("%d%d%d%d%d%d", &h1, &h2, &h3, &w1, &w2, &w3);

	for (a = 1; a <= 28; a++)//1
	{
		for (b = 1; b <= 28; b++)//2
		{
			c = h1 - a - b;
			if (c < 1)
				continue;
			for (d = 1; d <= 28; d++)//4
			{
				for (e = 1; e <= 28; e++)//5
				{
					f = h2 - d - e;
					g = w1 - a - d;
					h = w2 - b - e;
					i = w3 - c - f;
					if(MIN(f, MIN(g, (MIN(h, i)))) > 0 && g + h + i == h3)
						count++;
				}
			}
		}
	}
	printf("%d\n", count);
    return (0);
}



