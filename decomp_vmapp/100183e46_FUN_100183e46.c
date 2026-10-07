
void FUN_100183e46(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  if (param_1 != (undefined8 *)0x0) {
    local_30 = param_1[1];
    local_20 = *param_1;
    if ((*(int *)(param_1 + 6) == -0x5432edcc) || (*(int *)(param_1 + 6) == -0x5432edcb)) {
      local_28 = *param_1;
    }
  }
  ___xmlRaiseError(0,local_30,local_20,local_28,param_2,0x17,param_3,2,0,0,param_5,param_7,0,param_6
                   ,0,param_4,param_5,param_6,param_7);
  return;
}

