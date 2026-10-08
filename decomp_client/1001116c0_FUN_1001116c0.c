
undefined8 FUN_1001116c0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_30;
  _func_void_Node_ptr *local_28;
  undefined1 local_19;
  
  FUN_100110c60(&local_30,param_1,param_2,param_3);
  lVar2 = CVmConfiguration::getVmHardwareList();
  FUN_1001296d0(*(undefined8 *)(lVar2 + 0xa8 + (ulong)param_3 * 8),&local_30);
  if (*(int *)(local_28 + 0x10) != -1) {
    if (*(int *)(local_28 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_28 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return local_30;
      }
      local_19 = 0;
    }
    QHashData::free_helper(local_28);
  }
  return local_30;
}

