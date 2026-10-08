
void FUN_100220f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
  }
  FUN_100198c90(uVar1,*(undefined4 *)(param_1 + 0x48),uVar2,*(undefined4 *)(param_1 + 0x4c));
  return;
}

