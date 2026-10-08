
void FUN_100327670(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = *param_2;
  if (((int)local_10 < 1) || ((int)((ulong)local_10 >> 0x20) < 1)) {
    local_10 = CONCAT44(DAT_100e1522c,DAT_100e15228);
  }
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x90) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
  }
  FUN_100322ff0(uVar1,&local_10);
  return;
}

