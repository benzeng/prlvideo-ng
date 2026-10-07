
void FUN_1008beda0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x48) = 1;
  FUN_10089d680(&DAT_100be1d30,*(undefined8 *)(lVar1 + 8),param_1[1],param_1[2],lVar1,param_2);
  return;
}

