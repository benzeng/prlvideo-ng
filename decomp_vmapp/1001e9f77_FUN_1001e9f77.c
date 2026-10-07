
void FUN_1001e9f77(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  long param_9)

{
  undefined8 uVar1;
  long local_28;
  long local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_1001e7432(local_20,0,param_3,param_4);
  if (param_9 == 0) {
    param_9 = FUN_1001e6a14(param_8);
  }
  uVar1 = FUN_1001e6d76(&local_28,param_7,param_6);
  FUN_1001e8224(param_1,param_4,param_2,0,0,0,
                "%s, attribute \'%s\': The QName value \'%s\' does not resolve to a(n) %s.\n",
                local_20[0],param_5,uVar1,param_9,0);
  if (local_20[0] != 0) {
    (*(code *)_xmlFree)(local_20[0]);
    local_20[0] = 0;
  }
  if (local_28 != 0) {
    (*(code *)_xmlFree)(local_28);
  }
  return;
}

