
undefined8 FUN_1008b8b10(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_1 != 0) && (iVar1 = FUN_100891e80(param_1), iVar1 == 0)) {
    return 1;
  }
  iVar1 = FUN_100885600(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = FUN_100885620(param_2,iVar1);
      lVar4 = FUN_1008b7420(uVar3);
      if (lVar4 == 0) {
        uVar3 = 0x6c;
        uVar5 = 0x706;
        goto LAB_1008b8bc6;
      }
      iVar2 = FUN_100891e80(lVar4);
      if (iVar2 == 0) {
        if (0 < iVar1) {
          iVar1 = iVar1 + 1;
          do {
            uVar3 = FUN_100885620(param_2,iVar1 + -2);
            uVar3 = FUN_1008b7420(uVar3);
            FUN_100891de0(uVar3,lVar4);
            FUN_1008924e0(uVar3);
            iVar1 = iVar1 + -1;
          } while (1 < iVar1);
        }
        if (param_1 != 0) {
          FUN_100891de0(param_1,lVar4);
        }
        FUN_1008924e0(lVar4);
        return 1;
      }
      FUN_1008924e0(lVar4);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100885600(param_2);
    } while (iVar1 < iVar2);
  }
  uVar3 = 0x6b;
  uVar5 = 0x712;
LAB_1008b8bc6:
  FUN_100887ce0(0xb,0x6e,uVar3,"x509_vfy.c",uVar5);
  return 0;
}

