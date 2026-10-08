
void FUN_100c4d700(long param_1)

{
  int iVar1;
  undefined1 local_24 [4];
  int local_20 [2];
  undefined1 *local_18;
  
  iVar1 = FUN_100c26610(*(undefined8 *)(param_1 + 0x20));
  local_20[0] = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
  local_18 = local_24;
  local_20[1] = 2;
  local_24[0] = 0xff;
  iVar1 = FUN_100c83760(local_20,0);
  FUN_100c8aea0(1,iVar1 * 2,0x10);
  return;
}

