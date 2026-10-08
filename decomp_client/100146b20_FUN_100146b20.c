
void FUN_100146b20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar1 = FUN_10018c2b0(uVar1);
  FUN_10010dec0(uVar1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return;
}

