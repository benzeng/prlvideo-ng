
void FUN_1002b5080(undefined8 *param_1)

{
  *param_1 = &PTR_metaObject_100bb3108;
  param_1[2] = &PTR_FUN_100bb31a8;
  *(undefined1 *)(param_1 + 0xd5) = 1;
  QWaitCondition::wakeAll();
  QThread::wait((ulong)param_1);
  FUN_1002b4180(param_1);
  return;
}

