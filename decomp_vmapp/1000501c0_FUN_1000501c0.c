
void FUN_1000501c0(long param_1)

{
  undefined8 *puVar1;
  undefined1 local_28 [8];
  uint *local_20;
  
  puVar1 = (undefined8 *)(param_1 + 0x78);
  local_20 = *(uint **)(param_1 + 0x78);
  if (1 < *local_20) {
    FUN_100050940(puVar1,local_20[1]);
    local_20 = (uint *)*puVar1;
  }
  local_20 = local_20 + (long)(int)local_20[2] * 2 + 4;
  FUN_100050bf0(local_28,puVar1,&local_20);
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}

