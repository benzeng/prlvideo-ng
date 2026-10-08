
void FUN_100c9a200(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x60) = 1;
  FUN_100c78b70(&DAT_102251ea0,*(undefined8 *)(lVar1 + 0x10),param_1[1],param_1[2],lVar1,param_2,
                param_3);
  return;
}

