
void FUN_10038e040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  *param_5 = 0;
  *(undefined4 *)param_5 = param_1;
  *(undefined4 *)((long)param_5 + 4) = param_2;
  *(undefined4 *)(param_5 + 1) = param_3;
  *(undefined4 *)((long)param_5 + 0xc) = param_4;
  return;
}

