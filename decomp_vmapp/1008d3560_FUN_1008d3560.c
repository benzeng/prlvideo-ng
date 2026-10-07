
undefined8 FUN_1008d3560(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x16) {
    uVar2 = FUN_1008b7280(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
                          **(undefined8 **)(param_2 + 8),(*(undefined8 **)(param_2 + 8))[1]);
    return uVar2;
  }
  return 0;
}

