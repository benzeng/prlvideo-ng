
undefined8 FUN_100c52d60(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_100c62ee0(5,0x71,0x6b,"dh_pmeth.c",0xb8);
  }
  else {
    lVar2 = FUN_100c51af0();
    if (lVar2 != 0) {
      FUN_100c6d510(param_2,0x1c,lVar2);
      iVar1 = FUN_100c6d1c0(param_2,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        uVar3 = FUN_100c515f0(*(undefined8 *)(param_2 + 0x20));
        return uVar3;
      }
    }
  }
  return 0;
}

