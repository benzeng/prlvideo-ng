
void FUN_10052f730(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  if (param_4 == 4) {
    if (**(int **)(*param_3 + 0x10) == 0) {
      FUN_10051b1b0(param_1 + 0x40,param_2);
      if (*(int *)(*(long *)(param_1 + 0x40) + 0xc) == *(int *)(*(long *)(param_1 + 0x40) + 8)) {
        FUN_10052f540(param_1,2);
        return;
      }
    }
    else if (**(int **)(*param_3 + 0x10) == 1) {
      FUN_10052f540(param_1,1);
      FUN_10000c490(param_1 + 0x40,param_2);
      return;
    }
  }
  return;
}

