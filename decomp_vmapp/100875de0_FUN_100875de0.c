
undefined8
FUN_100875de0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_30;
  
  local_30 = param_4;
  FUN_100886dd0(param_2,param_3);
  lVar2 = FUN_100874a00(param_6);
  if ((lVar2 != 0) &&
     (lVar2 = (**(code **)(*(long *)(lVar2 + 0x18) + 8))(param_2,param_3,0,0,param_6), lVar2 != 0))
  {
    uVar1 = FUN_100874d70(lVar2,&local_30);
    *param_5 = uVar1;
    FUN_100874db0(lVar2);
    return 1;
  }
  *param_5 = 0;
  return 0;
}

