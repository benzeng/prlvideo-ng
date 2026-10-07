
bool FUN_1008727a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_30;
  
  local_30 = param_4;
  FUN_100886dd0(param_2,param_3);
  lVar2 = FUN_1008729f0(param_2,param_3,param_6);
  if (lVar2 == 0) {
    *param_5 = 0;
  }
  else {
    uVar1 = FUN_1008a52d0(lVar2,&local_30,&DAT_100bdd578);
    *param_5 = uVar1;
    FUN_100872a50(lVar2);
  }
  return lVar2 != 0;
}

