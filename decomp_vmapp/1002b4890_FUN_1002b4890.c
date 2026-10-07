
void FUN_1002b4890(undefined8 *param_1)

{
  *param_1 = &PTR_metaObject_100bb3028;
  param_1[2] = &PTR_FUN_100bb30c8;
  *(undefined1 *)(param_1 + 0xd5) = 1;
  QWaitCondition::wakeAll();
  QThread::wait((ulong)param_1);
  DAT_100bfacc4 = 0;
  DAT_100bfacdd = DAT_100bfacdd | 1;
  FUN_1002b4180(param_1);
  return;
}

