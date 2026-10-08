
undefined8 FUN_100c94090(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_1 != 0) && (iVar1 = FUN_100c6d260(param_1), iVar1 == 0)) {
    return 1;
  }
  iVar1 = FUN_100c60800(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = FUN_100c60820(param_2,iVar1);
      lVar4 = FUN_100c929a0(uVar3);
      if (lVar4 == 0) {
        uVar3 = 0x6c;
        uVar5 = 0x706;
        goto LAB_100c94146;
      }
      iVar2 = FUN_100c6d260(lVar4);
      if (iVar2 == 0) {
        if (0 < iVar1) {
          iVar1 = iVar1 + 1;
          do {
            uVar3 = FUN_100c60820(param_2,iVar1 + -2);
            uVar3 = FUN_100c929a0(uVar3);
            FUN_100c6d1c0(uVar3,lVar4);
            FUN_100c6d8c0(uVar3);
            iVar1 = iVar1 + -1;
          } while (1 < iVar1);
        }
        if (param_1 != 0) {
          FUN_100c6d1c0(param_1,lVar4);
        }
        FUN_100c6d8c0(lVar4);
        return 1;
      }
      FUN_100c6d8c0(lVar4);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100c60800(param_2);
    } while (iVar1 < iVar2);
  }
  uVar3 = 0x6b;
  uVar5 = 0x712;
LAB_100c94146:
  FUN_100c62ee0(0xb,0x6e,uVar3,"x509_vfy.c",uVar5);
  return 0;
}

