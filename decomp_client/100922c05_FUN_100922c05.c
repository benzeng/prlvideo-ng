
undefined4
FUN_100922c05(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  long lVar1;
  undefined4 local_4c;
  
  lVar1 = FUN_100920729(param_5,param_6);
  if (lVar1 == 0) {
    *param_8 = 0;
    *param_7 = 0;
    local_4c = 0;
  }
  else {
    local_4c = FUN_100922b92(param_1,param_2,param_3,param_4,lVar1,param_7,param_8);
  }
  return local_4c;
}

