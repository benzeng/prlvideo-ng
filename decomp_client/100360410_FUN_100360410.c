
undefined1  [16] FUN_100360410(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  QWidget local_50 [32];
  double local_30;
  double local_28;
  
  WidgetUtils::getWidgetTransformMatrix(local_50);
  if (0.0 <= local_30) {
    iVar2 = (int)(local_30 + DAT_100e110f0);
  }
  else {
    iVar2 = (int)((local_30 - (double)(int)(DAT_100e110e0 + local_30)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + local_30);
  }
  if (0.0 <= local_28) {
    iVar1 = (int)(local_28 + DAT_100e110f0);
  }
  else {
    iVar1 = (int)((local_28 - (double)(int)(DAT_100e110e0 + local_28)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + local_28);
  }
  auVar3 = FUN_100325fd0(param_2);
  auVar4._12_4_ = auVar3._12_4_ + (iVar1 - auVar3._4_4_);
  auVar4._8_4_ = auVar3._8_4_ + (iVar2 - auVar3._0_4_);
  auVar4._4_4_ = iVar1;
  auVar4._0_4_ = iVar2;
  return auVar4;
}

