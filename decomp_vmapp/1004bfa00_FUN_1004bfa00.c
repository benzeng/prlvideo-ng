
undefined1  [16] FUN_1004bfa00(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  uVar3 = 0xffffffffffffffff;
  uVar2 = 0;
  if (*param_1 != 0) {
    iVar1 = (*DAT_1011ccc88)(*param_1,&local_38);
    if (iVar1 == 0) {
      uVar2 = CONCAT44((int)local_30,(int)local_38);
      uVar3 = CONCAT44((int)local_30 + -1 + (int)local_20,(int)local_38 + -1 + (int)local_28);
    }
    else {
      uVar2 = 0;
      if (0 < DAT_1011b55f8) {
        uVar2 = 0;
        FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Failed to get CGRegion bounds. err = %d");
      }
    }
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}

