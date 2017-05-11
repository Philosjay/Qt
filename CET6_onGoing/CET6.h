#ifndef CET6_H_
#define CET6_H_

float CET6(int c1,int c2, int c3, int c4,float writing)
{

	float percent;

	int temp;

	percent = c1 * 7 / 5;		//听力部分

/*	if (percent - int(percent) > 0.5)	//四舍五入
	{
		temp = int(percent) + 1;
	}
	else
		temp = int(percent);
*/
	temp = int(percent);
	float score = 0;

	if (35 - temp < 3)
	{
		score += 248.5 - 10.5*(35 - temp);
	}
	else if (35 - temp < 10)
	{
		score += 248.5 - (2 * 10.5 + 7 * (33 - temp));
	}
	else
	{
		score += 248.5 - (2 * 10.5 + 7 * 7 + 3.5*(26 - temp));
		if (temp < 19)
			score += 3.5;
		if (temp < 10)
			score += 3.5;
		if (temp < 7)
			score += 3.5;
		if (temp < 2)
			score += 3.5;
	}

	percent = c2 / 2 + c3 + c4 * 2;		//阅读部分

/*	if (percent - int(percent) > 0.5)
	{
		temp = int(percent) + 1;
	}
	else
		temp = int(percent);
*/
	temp = int(percent);

	if (35 - temp < 3)
	{
		score += 248.5 - 10.5*(35 - temp);
	}
	else if (35 - temp < 10)
	{
		score += 248.5 - (2 * 10.5 + 7 * (33 - temp));
	}
	else
	{
		score += 248.5 - (2 * 10.5 + 7 * 7 + 3.5*(26 - temp));
		if (temp < 19)
			score += 3.5;
		if (temp < 10)
			score += 3.5;
		if (temp < 7)
			score += 3.5;
		if (temp < 2)
			score += 3.5;
	}

/*	if (15 - temp < 3)
	{
		score += 106.5 - 6*(15 - temp);
	}
	else if (15 - temp < 10)
	{
		score += 106.5 - (2 * 6 + 4.5 * (13 - temp));
	}
	else
	{
		score += 106.5 - (2 * 6 + 8 * 4.5 + 3*(5 - temp));

	}
*/
    return score+=writing;

}

#endif
