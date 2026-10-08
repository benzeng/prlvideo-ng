
bool FUN_100990be0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
  iVar1 = FUN_1009932a0(uVar2);
  return iVar1 == 1;
}

