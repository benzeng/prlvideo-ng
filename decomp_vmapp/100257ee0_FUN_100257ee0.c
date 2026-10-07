
void FUN_100257ee0(long param_1)

{
  char cVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1002ef6f0();
  }
  cVar1 = QThread::wait(param_1 + 8U);
  while (cVar1 == '\0') {
    FUN_1008e3970("","LocalDevices",0,"adev3(%u:%u) thread not terminated yet: run_state %d",
                  *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                  *(undefined4 *)(param_1 + 0x30));
    cVar1 = QThread::wait(param_1 + 8U);
  }
  return;
}

