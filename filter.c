#include "bmp.h"

void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0, n = height - 1; i <= n; i++)
    {
        for (int j = 0, m = width - 1; j <= m; j++)
        {
            float sum = image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue;
            float average = sum / 3;

            // Set a new value
            image[i][j].rgbtRed = round(average);
            image[i][j].rgbtGreen = round(average);
            image[i][j].rgbtBlue = round(average);
        }
    }
    return;
}