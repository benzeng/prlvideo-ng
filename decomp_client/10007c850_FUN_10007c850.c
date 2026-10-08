
undefined8 FUN_10007c850(undefined8 param_1,double param_2,long param_3)

{
  int iVar1;
  int iVar2;
  CGSize CVar4;
  double dVar3;
  
  CVar4.field0_0x0 =
       (double)(*(code *)PTR__objc_msgSend_1021e1c68)
                         (*(undefined8 *)(param_3 + 0x18),PTR_s_calculateSizeToFit_102269f00);
  CVar4.field1_0x8 = param_2;
  dVar3 = (double)MacUtils::QSizeFFromNSSize(CVar4);
  if (0.0 <= dVar3) {
    iVar1 = (int)(dVar3 + DAT_100e110f0);
  }
  else {
    iVar1 = (int)((dVar3 - (double)(int)(DAT_100e110e0 + dVar3)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar3);
  }
  if (0.0 <= param_2) {
    iVar2 = (int)(param_2 + DAT_100e110f0);
  }
  else {
    iVar2 = (int)((param_2 - (double)(int)(DAT_100e110e0 + param_2)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + param_2);
  }
  return CONCAT44((int)((double)(iVar2 + 1) + *(double *)PTR__kCustomTitleContentArea_1021e19a0),
                  iVar1);
}

