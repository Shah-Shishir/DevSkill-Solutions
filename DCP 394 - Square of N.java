/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
	public static void main (String[] args)
	{
		Scanner in = new Scanner (System.in);

		BigInteger n;

		while (in.hasNext())
		{
			n = in.nextBigInteger();

			System.out.println(n.multiply(n));
		}
	}
}
