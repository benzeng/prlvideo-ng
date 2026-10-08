
undefined8 FUN_1002ae0b0(undefined8 param_1)

{
  char cVar1;
  undefined8 in_RAX;
  void *pvVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)((ulong)in_RAX >> 0x20);
  CAbstractTask::getDefaultSubTaskList();
  if (DAT_102310920 == (void *)0x0) {
    pvVar2 = operator_new(0x50);
    FUN_1001d1080(pvVar2);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar2;
  }
  cVar1 = FUN_1001d1260(DAT_102310920);
  if (cVar1 == '\0') {
    _local_28 = CONCAT44(uStack_24,2);
    FUN_1001298a0(param_1,&local_28);
  }
  return param_1;
}

