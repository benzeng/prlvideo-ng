
void FUN_1001c36b8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  ___xmlRaiseError(0,0,0,param_1,param_2,0xb,param_3,2,0,0,param_5,0,0,0,0,param_4,param_5);
  return;
}

