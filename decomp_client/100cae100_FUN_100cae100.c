
undefined8 FUN_100cae100(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x19) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar3 + 0x10) != 0) {
      FUN_100cad760();
      lVar3 = *(long *)(param_1 + 0x20);
    }
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    uVar2 = 1;
  }
  else if (iVar1 == 0x16) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar3 + 0x28) != 0) {
      FUN_100cad760();
      lVar3 = *(long *)(param_1 + 0x20);
    }
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    uVar2 = 1;
  }
  else {
    FUN_100c62ee0(0x21,0x6d,0x70,"pk7_lib.c",0x96);
    uVar2 = 0;
  }
  return uVar2;
}

