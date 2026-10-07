
void FUN_10060e3f0(long *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = (long)&PTR_FUN_10111e628;
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 9),0);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[3] = (long)(param_1 + 3);
  param_1[4] = (long)(param_1 + 3);
  (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*param_1 + 0xe0))(param_1);
  *param_1 = (long)&PTR_FUN_100bc8220;
  FUN_1007d6870((long)param_1 + 0x51);
  auVar1._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar1._0_8_ = PTR_shared_null_100ba20d0;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xd) = auVar1;
  return;
}

