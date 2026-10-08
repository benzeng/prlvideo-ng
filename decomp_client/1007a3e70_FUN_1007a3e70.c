
QPixmap * FUN_1007a3e70(double param_1,QPixmap *param_2,undefined8 param_3)

{
  QPixmap local_30 [32];
  
  QPixmap::QPixmap(local_30,param_3,0,0);
  if (param_1 <= DAT_100e11050) {
    QPixmap::QPixmap(param_2,local_30);
  }
  else {
    QPixmap::hiDpiPixmap();
  }
  QPixmap::~QPixmap(local_30);
  return param_2;
}

