
void FUN_10091bb4c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    local_30 = *(undefined8 *)(param_1 + 0x10);
    local_20 = *(undefined8 *)(param_1 + 8);
    local_28 = *(undefined8 *)(param_1 + 0x28);
  }
  ___xmlRaiseError(local_28,local_30,local_20,param_1,param_2,0x10,param_3,2,0,0,param_4,param_5,
                   param_6,0,0,param_7,param_8,param_9,param_10,param_11,param_12);
  return;
}

