
QImage * FUN_100333190(QImage *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  QImage local_50 [32];
  
  QImage::QImage(local_50,*param_3,param_3[1],4);
  uVar2 = QImage::bits();
  cVar1 = FUN_100ac9470(param_2,param_3,param_4,uVar2);
  if (cVar1 == '\0') {
    QImage::QImage(param_1);
  }
  else {
    QImage::QImage(param_1,local_50);
  }
  QImage::~QImage(local_50);
  return param_1;
}

