
void FUN_100756a20(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *param_2 = 1;
  param_2[1] = 7;
  *(undefined8 *)(param_2 + 10) = param_3;
  *(undefined8 *)(param_2 + 8) = param_3;
  *(undefined8 *)(param_2 + 6) = param_4;
  *(undefined8 *)(param_2 + 4) = param_4;
  *(undefined8 *)(param_2 + 2) = param_5;
  *(undefined8 *)(param_2 + 0xc) = 0x1000;
  return;
}

