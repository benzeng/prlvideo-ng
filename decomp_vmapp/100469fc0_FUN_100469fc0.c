
void FUN_100469fc0(uint *param_1,uint param_2,string *param_3,uint param_4,uint param_5,long param_6
                  ,uint param_7)

{
  *param_1 = param_5;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = param_2;
  std::string::string((string *)(param_1 + 10),param_3);
  param_1[0x10] = param_4;
  param_1[0x11] = param_7;
  if (param_5 < 2) {
    *(long *)(param_1 + 0x12) = param_6;
  }
  else {
    FUN_10046a340(param_1 + 2,param_6,(ulong)param_7 + param_6);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 2);
  }
  return;
}

