
void FUN_1005741c0(long *param_1,long param_2)

{
  void *pvVar1;
  
  QMutex::lock();
  (**(code **)(*param_1 + 0x318))(param_1);
  if ((char)param_1[0x244] != '\0') {
    pvVar1 = operator_new(0x60,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (pvVar1 == (void *)0x0) {
      FUN_1008e3970("","vdisk",0,"Error: can\'t allocate memory for flusher");
    }
    else {
      FUN_1005f3510(pvVar1);
      if ((long *)param_1[0x252] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x252] + 8))();
      }
      param_1[0x252] = (long)pvVar1;
    }
    if (((char)param_1[0x244] != '\0') && ((long *)param_1[0x242] != (long *)0x0)) {
      (**(code **)(*(long *)param_1[0x242] + 8))();
    }
  }
  *(undefined1 *)(param_1 + 0x244) = 0;
  param_1[0x242] = param_2;
  (**(code **)(*param_1 + 800))(param_1);
  QMutex::unlock();
  return;
}

