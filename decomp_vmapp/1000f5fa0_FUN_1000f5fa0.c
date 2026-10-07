
void FUN_1000f5fa0(long param_1,short param_2,void *param_3,undefined4 param_4)

{
  QMutex::lock();
  if (param_3 == (void *)0x0) {
    if (*(short *)(param_1 + 10) == param_2) {
      *(undefined2 *)(param_1 + 0xb94a) = 0;
    }
  }
  else if (*(short *)((long)param_3 + 0x222) == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",1,"CMonitorDumpBuilder::SetException() exception context is not valid");
    }
  }
  else {
    _memcpy((void *)(param_1 + 0xb728),param_3,0x5b8);
    *(undefined4 *)(param_1 + 0xc) = param_4;
    *(short *)(param_1 + 10) = param_2;
  }
  QMutex::unlock();
  return;
}

