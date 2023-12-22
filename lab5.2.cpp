#include <iostream>
#include <string>

short divNumber(int N)
{
	short result = 0; 
	while (N > 0)
	{
		result *= N % 10; 
		N /= 10;
	}
	return result;
}

char First_Number(int N)
{
	return((std::to_string(N))[0]);
}




int main()
{
	int arr[1000] = { -1 };
	short n;
	std::cin >> n;

	for (short i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	{
		short hl = short(n / 1.247);

		while (hl != 0)
		{
			for (short i = 0; i < n - hl; i++)
			{
				if (First_Number(arr[i]) > First_Number(arr[i + hl]))
				{
					int buf = arr[i];
					arr[i] = arr[i + hl];
					arr[i + hl] = buf;
				}
				else if ((First_Number(arr[i]) == First_Number(arr[i + hl])) and ((divNumber(arr[i]) > divNumber(arr[i + hl])) or ((divNumber(arr[i]) == divNumber(arr[i + hl])) and (arr[i] > arr[i + hl]))))
				{
					int buf = arr[i];
					arr[i] = arr[i + hl];
					arr[i + hl] = buf;

				}
			}
			hl = short(hl / 1.247);
		}

	}


	for (short i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}


	return 0;
}