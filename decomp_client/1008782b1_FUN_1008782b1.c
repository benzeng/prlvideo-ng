
void FUN_1008782b1(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (((param_1 == 0) || (*(int *)(param_1 + 0x14c) == 0)) || (*(int *)(param_1 + 0x110) != -1)) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
    ___xmlRaiseError(0,0,0,param_1,0,3,param_2,2,0,0,param_4,param_5,param_6,0,0,param_3,param_4,
                     param_5,param_6);
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  return;
}

