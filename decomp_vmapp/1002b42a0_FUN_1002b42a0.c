
void FUN_1002b42a0(ulong param_1)

{
  *(undefined1 *)(param_1 + 0x6a8) = 1;
  QWaitCondition::wakeAll();
  QThread::wait(param_1);
  return;
}

