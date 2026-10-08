
void FUN_100b46a30(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined2 param_6,undefined4 param_7)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  *(undefined2 *)((long)param_1 + 0x16) = param_6;
  *(undefined4 *)(param_1 + 3) = param_7;
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)(param_5 + 1);
  *(undefined4 *)(param_1 + 2) = *param_5;
  return;
}

