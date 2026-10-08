
QImage * FUN_100319b70(QImage *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = FUN_100319960(param_2);
  if (lVar1 != 0) {
    local_28 = 0;
    local_20 = 0xffffffffffffffff;
    lVar1 = FUN_100327670(lVar1,param_3,&local_28,DAT_100e151e0);
    if (lVar1 != 0) {
      FUN_100354220(param_1,lVar1);
      return param_1;
    }
  }
  QImage::QImage(param_1);
  return param_1;
}

