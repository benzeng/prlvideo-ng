
void FUN_100183b80(undefined8 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (param_1 != (undefined8 *)0x0) {
    local_20 = param_1[1];
    local_10 = *param_1;
    if ((*(int *)(param_1 + 6) == -0x5432edcc) || (*(int *)(param_1 + 6) == -0x5432edcb)) {
      local_18 = *param_1;
    }
  }
  if (param_4 == 0) {
    ___xmlRaiseError(0,local_20,local_10,local_18,0,0x17,param_2,2,0,0,0,0,0,0,0,param_3);
  }
  else {
    ___xmlRaiseError(0,local_20,local_10,local_18,0,0x17,param_2,2,0,0,param_4,0,0,0,0,param_3,
                     param_4);
  }
  return;
}

