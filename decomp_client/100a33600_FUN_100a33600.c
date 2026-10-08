
void FUN_100a33600(uint *param_1,uint param_2,long param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[0x11] = param_4;
  if (param_2 < 2) {
    if (*(long *)(param_1 + 4) != *(long *)(param_1 + 2)) {
      *(long *)(param_1 + 4) = *(long *)(param_1 + 2);
    }
    *(long *)(param_1 + 0x12) = param_3;
  }
  else {
    FUN_100a33650(param_1 + 2,param_3,(ulong)param_4 + param_3);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 2);
  }
  return;
}

