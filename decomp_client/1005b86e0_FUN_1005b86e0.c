
void FUN_1005b86e0(long param_1,int *param_2)

{
  *(int *)(param_1 + 0x68) = param_2[2];
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)param_2;
  if (*param_2 - 1U < 3) {
    FUN_1005b82f0(param_1,param_2[1]);
    *(int *)(param_1 + 0x3c) = param_2[2];
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0xff) {
      *(undefined4 *)(param_1 + 0x38) = 0xff;
      FUN_100840290(param_1,0xff);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

