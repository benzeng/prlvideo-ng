
void FUN_100877b3f(long param_1,undefined4 param_2,undefined8 param_3)

{
  if (((param_1 == 0) || (*(int *)(param_1 + 0x14c) == 0)) || (*(int *)(param_1 + 0x110) != -1)) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
    ___xmlRaiseError(0,0,0,param_1,0,1,param_2,3,0,0,0,0,0,0,0,param_3);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c0) == 0) {
      *(undefined4 *)(param_1 + 0x14c) = 1;
    }
  }
  return;
}

