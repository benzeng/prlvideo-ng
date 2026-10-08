
undefined8 FUN_100cb0e80(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
  uVar2 = 0;
  if (iVar1 == 0x18) {
    uVar2 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
      uVar2 = 0;
      if (lVar3 != 0) {
        iVar1 = FUN_100c60800(lVar3);
        uVar2 = 0;
        if (param_2 < iVar1) {
          lVar3 = FUN_100c60820(lVar3,param_2);
          uVar2 = *(undefined8 *)(lVar3 + 8);
        }
      }
    }
  }
  return uVar2;
}

