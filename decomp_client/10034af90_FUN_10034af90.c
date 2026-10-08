
void FUN_10034af90(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_c;
  
  local_c = param_2 & 0xff;
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar1 = FUN_100319c60(uVar1);
  FUN_10033c620(uVar1,0x20,&local_c,4);
  return;
}

