
void FUN_10022d5a6(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[3] == 0) {
      local_18 = param_1[1];
    }
    else {
      local_20 = param_1[3];
    }
    local_10 = *param_1;
    *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + 1;
  }
  ___xmlRaiseError(local_20,local_18,local_10,0,param_2,0x12,param_3,2,0,0,param_5,param_6,0,0,0,
                   param_4,param_5,param_6);
  return;
}

