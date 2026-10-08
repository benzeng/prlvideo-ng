
bool FUN_100c4d9a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_30;
  
  local_30 = param_4;
  FUN_100c61fd0(param_2,param_3);
  lVar2 = FUN_100c4dbf0(param_2,param_3,param_6);
  if (lVar2 == 0) {
    *param_5 = 0;
  }
  else {
    uVar1 = FUN_100c80850(lVar2,&local_30,&DAT_10224d8b8);
    *param_5 = uVar1;
    FUN_100c4dc50(lVar2);
  }
  return lVar2 != 0;
}

