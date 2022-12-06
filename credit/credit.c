#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //to count number of digits
    int digits = 0;
    long creditcardnumber = get_long("credit card number: ");
    // using % to isolate every digit
    int a = creditcardnumber % 10;
    digits ++;
    creditcardnumber = creditcardnumber / 10;
    int b = creditcardnumber % 10;
    digits ++;
    // to multiply digit by 2 and separating resulting number
    int B = b * 2;
    int B1 = B % 10;
    int B2 = B / 10;
    creditcardnumber = creditcardnumber / 10;
    int c = creditcardnumber % 10;
    digits ++;
    creditcardnumber = creditcardnumber / 10;
    int d = creditcardnumber % 10;
    digits ++;
    int D = d * 2;
    int D1 = D % 10;
    int D2 = D / 10;
    creditcardnumber = creditcardnumber / 10;
    int e = creditcardnumber % 10;
    digits ++;
    creditcardnumber = creditcardnumber / 10;
    int f = creditcardnumber % 10;
    digits ++;
    int F = f * 2;
    int F1 = F % 10;
    int F2 = F / 10;
    creditcardnumber = creditcardnumber / 10;
    int g = creditcardnumber % 10;
    digits ++;
    creditcardnumber = creditcardnumber / 10;
    int h = creditcardnumber % 10;
    digits ++;
    int H = h * 2;
    int H1 = H % 10;
    int H2 = H / 10;
    creditcardnumber = creditcardnumber / 10;
    int i = creditcardnumber % 10;
    digits ++;
    creditcardnumber = creditcardnumber / 10;
    int j = creditcardnumber % 10;
    digits ++;
    int J = j * 2;
    int J1 = J % 10;
    int J2 = J / 10;
    creditcardnumber = creditcardnumber / 10;
    int k = creditcardnumber % 10;
    digits ++;
    creditcardnumber = creditcardnumber / 10;
    int l = creditcardnumber % 10;
    digits ++;
    int L = l * 2;
    int L1 = L % 10;
    int L2 = L / 10;
    creditcardnumber = creditcardnumber / 10;
    int m = creditcardnumber % 10;
    digits ++;
    int q = B1 + B2 + D1 + D2 + F1 + F2 + H1 + H2 + J1 + J2 + L1 + L2;
    int r = a + c + e + g + i + k + m;
    int s = q + r;

    //checking for VISA having 13 digits
    if (s % 10 == 0 && digits == 13)
    {
        if (m == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        creditcardnumber = creditcardnumber / 10;
        int n = creditcardnumber % 10;
        digits ++;
        int N = n * 2;
        int N1 = N % 10;
        int N2 = N / 10;
        creditcardnumber = creditcardnumber / 10;
        int o = creditcardnumber % 10;
        digits ++;
        int Q = B1 + B2 + D1 + D2 + F1 + F2 + H1 + H2 + J1 + J2 + L1 + L2 + N1 + N2;
        int R = a + c + e + g + i + k + m + o;
        int S = Q + R;

        // checking for American Express
        if (S % 10 == 0 && digits == 15)
        {
            if (o == 3 && n == 4)
            {
                printf("AMEX\n");
            }
            else if (o == 3 && n == 7)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            creditcardnumber = creditcardnumber / 10;
            int p = creditcardnumber % 10;
            digits ++;
            int P = p * 2;
            int P1 = P % 10;
            int P2 = P / 10;
            int v = B1 + B2 + D1 + D2 + F1 + F2 + H1 + H2 + J1 + J2 + L1 + L2 + N1 + N2 + P1 + P2;
            int w = a + c + e + g + i + k + m + o;
            int x = v + w;

            //checking for VISA and Mastercard 16 digits

            if (x % 10 == 0 && digits == 16)
            {
                if (p == 4)
                {
                    printf("VISA\n");
                }
                else if (p == 5)
                {
                    if (o >= 1 && o <= 5)
                    {
                        printf("MASTERCARD\n");
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
            }
            else
            {
                printf("INVALID\n");
            }
        }
    }
}
