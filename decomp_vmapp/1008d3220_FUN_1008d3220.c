
undefined8 FUN_1008d3220(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) && (uVar2 = 0, *(long *)(param_1 + 0x20) != 0)) {
    iVar1 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18));
    if ((iVar1 != 0x16) && (iVar1 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0x18))
    {
      return 0;
    }
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  return uVar2;
}

