
undefined8
FUN_100c51070(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_38;
  
  local_38 = param_4;
  FUN_100c61fd0(param_2,param_3);
  lVar2 = FUN_100c4fc00(param_8);
  if ((lVar2 != 0) &&
     (lVar2 = (**(code **)(*(long *)(lVar2 + 0x18) + 8))(param_2,param_3,param_6,param_7,param_8),
     lVar2 != 0)) {
    uVar1 = FUN_100c4ff70(lVar2,&local_38);
    *param_5 = uVar1;
    FUN_100c4ffb0(lVar2);
    return 1;
  }
  *param_5 = 0;
  return 0;
}

