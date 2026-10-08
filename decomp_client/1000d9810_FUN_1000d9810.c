
void FUN_1000d9810(long *param_1)

{
  undefined8 uVar1;
  undefined *local_18;
  
  local_18 = PTR_shared_null_1021e15e8;
  FUN_10004c340(param_1[0x1e],&local_18);
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_1000e9710(uVar1,&local_18);
  if ((char)param_1[0x4a] != '\0') {
    *(undefined1 *)(param_1 + 0x4a) = 0;
    uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_1000e9320(uVar1);
  }
  FUN_1000e4f00(&local_18);
  return;
}

