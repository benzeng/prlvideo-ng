
void FUN_1000fac90(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 0;
  QWaitCondition::wakeAll();
  FUN_1008e3970("","vm",0,"wait for write thread to finish");
  QThread::wait(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

