
undefined8 FUN_100c4f770(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_100c62ee0(10,0x79,0x6b,"dsa_pmeth.c",0x108);
  }
  else {
    lVar2 = FUN_100c4d390();
    if (lVar2 != 0) {
      FUN_100c6d510(param_2,0x74,lVar2);
      iVar1 = FUN_100c6d1c0(param_2,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        uVar3 = FUN_100c4d200(*(undefined8 *)(param_2 + 0x20));
        return uVar3;
      }
    }
  }
  return 0;
}

