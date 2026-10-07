
void FUN_1000f9610(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_100ba9100;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x22) = param_3;
  iVar1 = FUN_1002a50a0(param_2,0x8700,0x8702,param_1);
  if (iVar1 == 0) {
    FUN_1008e3970("","vm",0,"hdd: SF ERROR: can\'t register TG handlers for storage filter");
  }
  DAT_100bfabad = DAT_100bfabad | 1;
  DAT_100bfab94 = param_1;
  *(undefined2 *)(param_1 + 4) = 3;
  uVar2 = FUN_10070e6f0("I@devices.sfilter.adev_activate");
  param_1[3] = uVar2;
  return;
}

