
void FUN_10084df90(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  
  FUN_100853b90(param_1,param_2,param_4,*param_3);
  if (1 < param_4) {
    param_4 = param_4 + -2;
    do {
      FUN_100853a50(param_1 + 8,param_2,param_4 + 1,param_3[1]);
      if (param_4 < 1) {
        return;
      }
      FUN_100853a50(param_1 + 0x10,param_2,param_4,param_3[2]);
      if (param_4 + -1 < 1) {
        return;
      }
      FUN_100853a50(param_1 + 0x18,param_2,param_4 + -1,param_3[3]);
      iVar1 = param_4 + -2;
      if (iVar1 < 1) {
        return;
      }
      FUN_100853a50(param_1 + 0x20,param_2,iVar1,param_3[4]);
      param_4 = param_4 + -4;
      param_1 = param_1 + 0x20;
      param_3 = param_3 + 4;
    } while (1 < iVar1);
  }
  return;
}

