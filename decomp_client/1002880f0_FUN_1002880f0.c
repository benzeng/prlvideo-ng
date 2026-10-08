
undefined8 FUN_1002880f0(undefined8 param_1,long param_2)

{
  undefined8 in_RAX;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)((ulong)in_RAX >> 0x20);
  CAbstractTask::getDefaultSubTaskList();
  if (*(int *)(param_2 + 0x18) == 3) {
    _local_28 = CONCAT44(uStack_24,2);
    FUN_1001298a0(param_1,&local_28);
  }
  return param_1;
}

