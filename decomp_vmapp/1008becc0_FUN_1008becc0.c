
void FUN_1008becc0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x60) = 1;
  FUN_10089d680(&DAT_100be1890,*(undefined8 *)(lVar1 + 0x10),param_1[1],param_1[2],lVar1,param_2);
  return;
}

