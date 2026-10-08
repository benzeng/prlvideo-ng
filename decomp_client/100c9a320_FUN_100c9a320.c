
void FUN_100c9a320(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x48) = 1;
  FUN_100c78c00(&DAT_102252340,*(undefined8 *)(lVar1 + 8),param_1[1],param_1[2],lVar1,param_2);
  return;
}

