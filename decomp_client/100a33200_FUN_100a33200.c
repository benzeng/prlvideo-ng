
void FUN_100a33200(uint *param_1,uint param_2,uint param_3,uint param_4,long param_5,uint param_6)

{
  *param_1 = param_4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = param_6;
  if (param_4 < 2) {
    *(long *)(param_1 + 0x12) = param_5;
  }
  else {
    FUN_100a33650(param_1 + 2,param_5,(ulong)param_6 + param_5);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 2);
  }
  return;
}

