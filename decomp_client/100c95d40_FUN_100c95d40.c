
undefined8 FUN_100c95d40(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  iVar2 = FUN_100c60800(uVar1);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      lVar4 = FUN_100c60820(uVar1,iVar2);
      iVar3 = (**(code **)(param_2 + 0x50))(param_2,param_3,lVar4);
      if (iVar3 != 0) {
        *param_1 = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
        FUN_100bf2cf0(lVar4 + 0x1c,1,3,"x509_vfy.c",0x1df);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = FUN_100c60800(uVar1);
    } while (iVar2 < iVar3);
  }
  *param_1 = 0;
  return 0;
}

