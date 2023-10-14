#include <stdio.h>
#include <math.h>

int main() {
	// Khai bao bien 
  float a, b, c, x1, x2;

  printf("Nhap he so a: ");
  scanf("%f", &a);
  printf("Nhap he so b: ");
  scanf("%f", &b);
  printf("Nhap he so c: ");
  scanf("%f", &c);

  // Tinh nghiem cua phuong tring
  x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

  // In nghi?m c?a phýõng tr?nh
  printf("Nghiem cua phuong trinh là: %lf, %lf\n", x1, x2);
	
  return 0;
}
