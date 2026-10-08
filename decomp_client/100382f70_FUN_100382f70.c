
undefined1  [16] FUN_100382f70(long *param_1,uint param_2)

{
  char cVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  cVar1 = QPixmap::isNull();
  dVar2 = 0.0;
  dVar3 = 0.0;
  if (cVar1 == '\0') {
    local_28 = 0.0;
    local_30 = 0.0;
    local_38 = 0.0;
    local_40 = 0.0;
    (**(code **)(*param_1 + 0x68))(0,0,param_1,&local_28,&local_30,&local_38,&local_40);
    auVar4 = QPixmap::rect();
    dVar2 = DAT_100e110e0;
    dVar3 = DAT_100e110e0;
    if (param_2 < 2) {
      dVar2 = (double)(auVar4._8_4_ + (1 - auVar4._0_4_)) + local_38 + local_28;
      dVar3 = (double)(auVar4._12_4_ + (1 - auVar4._4_4_)) + local_40 + local_30;
    }
  }
  auVar4._8_8_ = dVar3;
  auVar4._0_8_ = dVar2;
  return auVar4;
}

