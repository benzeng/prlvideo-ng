
QImage * FUN_100326550(QImage *param_1,long param_2,int *param_3)

{
  char cVar1;
  
  cVar1 = QImage::isNull();
  if (((cVar1 == '\0') && (-1 < *param_3)) && (-1 < param_3[1])) {
    QImage::scaled(param_1,(QImage *)(param_2 + 0xa0),param_3,0,1);
  }
  else {
    QImage::QImage(param_1,(QImage *)(param_2 + 0xa0));
  }
  return param_1;
}

