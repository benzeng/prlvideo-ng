
void FUN_1006ce9f0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 local_20;
  undefined4 local_18 [2];
  
  local_20 = 4;
  _IOConnectCallStructMethod(*(undefined4 *)(param_1 + 8),0xe,param_2,0x1c,local_18,&local_20);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_18[0];
  }
  return;
}

