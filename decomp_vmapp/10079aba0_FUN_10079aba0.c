
void FUN_10079aba0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  byte extraout_AH;
  
  if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
     (FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (extraout_AH & 0x30) == 0)) {
    FUN_1007c91d0(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),param_3,param_4,param_5,0);
    return;
  }
  FUN_1007c7b80(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),param_3,param_4,param_5,0);
  return;
}

