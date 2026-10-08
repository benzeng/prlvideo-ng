
void FUN_100dda1d0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,ulong param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12)

{
  FUN_100deac20();
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  param_1[4] = (char)((uint)param_3 >> 8);
  param_1[5] = (char)param_3;
  param_1[6] = (char)((param_4 & 0xffffffff) >> 8);
  param_1[7] = (char)(param_4 & 0xffffffff);
  param_1[8] = param_5;
  param_1[9] = param_6;
  param_1[10] = param_7;
  param_1[0xb] = param_8;
  param_1[0xc] = param_9;
  param_1[0xd] = param_10;
  param_1[0xe] = param_11;
  param_1[0xf] = param_12;
  return;
}

