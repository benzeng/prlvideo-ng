
undefined8 FUN_100c42cc0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_100c62ee0(0x10,199,0x8b,"ec_pmeth.c",0x11b);
  }
  else {
    lVar2 = FUN_100c3f040();
    if (lVar2 != 0) {
      FUN_100c6d510(param_2,0x198,lVar2);
      iVar1 = FUN_100c6d1c0(param_2,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        uVar3 = FUN_100c3f4a0(*(undefined8 *)(param_2 + 0x20));
        return uVar3;
      }
    }
  }
  return 0;
}

