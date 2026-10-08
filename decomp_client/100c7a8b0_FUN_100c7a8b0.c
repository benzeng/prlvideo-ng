
ulong FUN_100c7a8b0(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint *local_30;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = local_28;
  uVar1 = 0xffffffff;
  if (((param_2 != (undefined4 *)0x0) && (uVar2 = (ulong)(int)param_2[1], uVar2 < 0x1f)) &&
     ((0x2a27efffUL >> (uVar2 & 0x3f) & 1) == 0)) {
    local_28[0] = 0;
    local_18 = 0;
    local_20 = 0;
    uVar1 = FUN_100c79500(&local_30,*(undefined8 *)(param_2 + 2),*param_2,
                          (int)(char)(&DAT_101dae960)[uVar2] | 0x1000,0x2000);
    if (-1 < (int)uVar1) {
      *param_1 = local_20;
      uVar1 = (ulong)local_28[0];
    }
  }
  return uVar1;
}

