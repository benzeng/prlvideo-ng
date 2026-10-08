
undefined8 FUN_1002e9430(undefined8 param_1,long param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  CAbstractTask::getDefaultSubTaskList();
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    local_20[0] = 1;
    FUN_1001298a0(param_1,local_20);
  }
  local_24 = 3;
  FUN_1001298a0(param_1,&local_24);
  local_28 = 2;
  FUN_1001298a0(param_1,&local_28);
  local_2c = 6;
  if (*(int *)(param_2 + 0x20) != 0) {
    local_2c = 5;
  }
  FUN_1001298a0(param_1,&local_2c);
  if (*(int *)(param_2 + 0x20) == 1) {
    local_30 = 4;
    FUN_1001298a0(param_1,&local_30);
  }
  return param_1;
}

