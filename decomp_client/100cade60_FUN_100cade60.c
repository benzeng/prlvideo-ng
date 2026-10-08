
undefined8 FUN_100cade60(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_100cad740();
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_100cadf20(lVar2,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0x19) {
      lVar3 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar3 + 0x10) != 0) {
        FUN_100cad760();
        lVar3 = *(long *)(param_1 + 0x20);
      }
      *(long *)(lVar3 + 0x10) = lVar2;
      return 1;
    }
    if (iVar1 == 0x16) {
      lVar3 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar3 + 0x28) != 0) {
        FUN_100cad760();
        lVar3 = *(long *)(param_1 + 0x20);
      }
      *(long *)(lVar3 + 0x28) = lVar2;
      return 1;
    }
    FUN_100c62ee0(0x21,0x6d,0x70,"pk7_lib.c",0x96);
  }
  FUN_100cad760(lVar2);
  return 0;
}

