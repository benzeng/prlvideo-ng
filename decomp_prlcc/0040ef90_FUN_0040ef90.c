
undefined8
FUN_0040ef90(int *param_1,undefined8 param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  
  uVar1 = param_3;
  if (param_3 <= param_4) {
    uVar1 = param_4;
  }
  local_30 = (ulong)uVar1;
  local_20 = param_2;
  if (*param_1 == -1) {
    local_40 = (ulong)(uint)param_1[1];
    local_28 = (ulong)param_3;
    local_48 = 0x5f9e653;
    local_38 = (ulong)(param_4 != 0);
    FUN_0040ee50(&local_48);
    *param_1 = (int)local_40;
  }
  else {
    local_40 = (ulong)*param_1;
    local_28 = (ulong)param_3;
    local_38 = (ulong)(param_4 != 0);
    local_48 = 0x5f9e654;
    FUN_0040ee50(&local_48);
  }
  param_1[2] = (int)local_28;
  param_1[3] = (int)local_20;
  uVar2 = 0xfffffff8;
  if ((-1 < param_1[3]) && (uVar2 = 0, param_5 != (undefined4 *)0x0)) {
    *param_5 = (undefined4)local_30;
  }
  return uVar2;
}

