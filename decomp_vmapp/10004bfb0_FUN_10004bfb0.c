
void FUN_10004bfb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_2c;
  
  lVar1 = FUN_1002a6120(param_2,0,1);
  local_2c = param_3;
  FUN_1002a5a50(lVar1,0,&local_2c,4);
  *(undefined4 *)(lVar1 + 0x10) = 4;
  FUN_1004c07d0(param_1,param_2,0);
  return;
}

