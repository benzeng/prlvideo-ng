
void FUN_1002443a9(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  if (((param_1 == 0) || (*(int *)(param_1 + 0x14c) == 0)) || (*(int *)(param_1 + 0x110) != -1)) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x88) = param_2;
    }
    ___xmlRaiseError(0,0,0,param_1,0,1,param_2,1,0,0,param_4,0,0,0,0,param_3,param_4);
  }
  return;
}

