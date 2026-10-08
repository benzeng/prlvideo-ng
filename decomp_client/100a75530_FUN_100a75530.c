
void FUN_100a75530(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  byte extraout_AH;
  
  if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
     (FUN_100be45f0(*(undefined8 *)(param_1 + 0x328)), (extraout_AH & 0x30) == 0)) {
    FUN_100aa39b0(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),param_3,param_4,param_5,0);
    return;
  }
  FUN_100aa2360(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),param_3,param_4,param_5,0);
  return;
}

