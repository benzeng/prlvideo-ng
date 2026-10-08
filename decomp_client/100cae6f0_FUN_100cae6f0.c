
undefined8 FUN_100cae6f0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x19) {
    lVar3 = FUN_100c83f00();
    *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 8) = lVar3;
    if (lVar3 == 0) {
      FUN_100c62ee0(0x21,0x7e,0x41,"pk7_lib.c",0x1b2);
      return 0;
    }
    **(undefined4 **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 8) = 5;
    uVar2 = FUN_100c6fc30(param_2);
    uVar4 = FUN_100bf6fe0(uVar2);
    **(undefined8 **)(*(long *)(param_1 + 0x20) + 8) = uVar4;
  }
  else {
    FUN_100c62ee0(0x21,0x7e,0x71,"pk7_lib.c",0x1ba);
  }
  return 1;
}

