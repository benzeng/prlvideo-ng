
undefined8 * FUN_100568a10(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_60 = 0xffffffff;
  local_5c = 0xffffffff;
  local_50 = 0;
  local_58 = 0;
  (**(code **)(*param_2 + 0x60))(local_48,param_2,param_3,0,&local_60);
  FUN_10056cda0(param_1,local_48);
  local_90 = 0xffffffff;
  local_8c = 0xffffffff;
  local_80 = 0;
  local_88 = 0;
  (**(code **)(*param_2 + 0x60))(local_78,param_2,param_3 & 0xffffffff,1,&local_90);
  FUN_10056cda0(param_1,local_78);
  return param_1;
}

