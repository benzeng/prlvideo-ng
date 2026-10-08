
undefined8 FUN_100cb6050(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 5;
  if ((*(code **)(*param_3 + 0x10) != (code *)0x0) &&
     (uStack_40 = param_1, iVar1 = (**(code **)(*param_3 + 0x10))(param_3,&local_48), iVar1 == 0)) {
    return 0xffffffff;
  }
  return 0;
}

