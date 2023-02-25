// GFG

int tour(petrolPump p[], int n)
{

    int start = 0, balance = 0, deficit = 0;

    for (int i = 0; i < n; i++)
    {
        balance += p[i].petrol - p[i].distance;

        if (balance < 0)
        {
            start = i + 1;
            deficit += balance;
            balance = 0;
        }
    }

    return (balance + deficit >= 0 ? start : -1);
}