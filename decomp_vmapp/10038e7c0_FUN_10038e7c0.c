
void FUN_10038e7c0(uint param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint param_5)

{
  uint local_38 [4];
  undefined8 local_28;
  uint local_20 [4];
  undefined8 local_10;
  
  local_20[1] = 1;
  local_20[2] = 1;
  local_20[3] = (uint)(byte)(&DAT_100b3e8a7)[(ulong)param_1 * 8];
  local_38[1] = 1;
  local_38[2] = 1;
  local_38[3] = *(uint *)(&DAT_100b3e8a4 + (ulong)param_3 * 8) >> 0x18;
  if (local_38[3] <= param_5) {
    local_38[0] = param_3;
    local_28 = param_4;
    local_20[0] = param_1;
    local_10 = param_2;
    FUN_1003c6660(local_20,0,local_38,0,1);
  }
  return;
}

