int main() {
  int x1,x2,y1,y2,disx,disy;
  float distance;
  printf("Input x1:");
  scanf("%d", &x1 );
  printf("Input x2:");
  scanf("%d", &x2);
  printf("Input y1:");
  scanf("%d", &y1);
  printf("Input y2:");
  scanf("%d", &y2);
  disx=abs(x1-x2);
  disy=abs(y1-y2);
  distance = sqrt(pow(disx,2)+pow(disy,2));
  printf("The distance between these two points is: %f\n", distance);

  return 0;
}
