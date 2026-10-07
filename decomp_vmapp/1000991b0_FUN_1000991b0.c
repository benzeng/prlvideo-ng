
void FUN_1000991b0(long param_1)

{
  QMutex::lock();
  FUN_1008e3970("","vm",0,"[UPRN] Init state machine");
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 1;
  FUN_10009e480(param_1 + 0x20);
  FUN_100099240(param_1);
  FUN_1000996b0(param_1);
  QMutex::unlock();
  return;
}

