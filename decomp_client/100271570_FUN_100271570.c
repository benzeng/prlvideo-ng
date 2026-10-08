
undefined8 FUN_100271570(void)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_100d80680();
  if (cVar1 != '\0') {
    if (DAT_102310930 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_1001e5440(pvVar3);
      DAT_102273630 = 1;
      DAT_102310930 = pvVar3;
    }
    cVar1 = FUN_1001e4c30(DAT_102310930);
    if (cVar1 == '\0') {
      if (DAT_102310930 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_1001e5440(pvVar3);
        DAT_102273630 = 1;
        DAT_102310930 = pvVar3;
      }
      iVar2 = FUN_1001e5550(DAT_102310930,9);
      if (iVar2 == -0x7fffffed) {
        if (DAT_102310930 == (void *)0x0) {
          pvVar3 = operator_new(0x18);
          FUN_1001e5440(pvVar3);
          DAT_102273630 = 1;
          DAT_102310930 = pvVar3;
        }
        uVar4 = FUN_1001e5790(DAT_102310930);
        return uVar4;
      }
    }
  }
  return 0x3bfa;
}

