
void FUN_1008bec80(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x60) = 1;
  FUN_10089d5f0(&DAT_100be1890,*(undefined8 *)(lVar1 + 0x10),param_1[1],param_1[2],lVar1,param_2,
                param_3);
  return;
}

