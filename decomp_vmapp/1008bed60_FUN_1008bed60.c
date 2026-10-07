
void FUN_1008bed60(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x48) = 1;
  FUN_10089d5f0(&DAT_100be1d30,*(undefined8 *)(lVar1 + 8),param_1[1],param_1[2],lVar1,param_2,
                param_3);
  return;
}

