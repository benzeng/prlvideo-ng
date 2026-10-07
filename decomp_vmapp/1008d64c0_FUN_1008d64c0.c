
undefined8 FUN_1008d64c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18));
  uVar3 = 0;
  if (iVar2 == 0x1a) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = FUN_1008d6c20(*(undefined8 *)(lVar1 + 8),&DAT_100be6308,param_2,param_3,
                          *(undefined8 *)(lVar1 + 0x10),1);
  }
  return uVar3;
}

