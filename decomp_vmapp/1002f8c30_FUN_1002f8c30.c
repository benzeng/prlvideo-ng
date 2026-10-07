
void FUN_1002f8c30(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002dbac0(param_1,param_2,0,&PTR_DAT_1011172a0,&PTR_DAT_1011172a0,0);
  *param_1 = &PTR_FUN_100bb6278;
  param_1[8] = PTR_shared_null_100ba2188;
  FUN_1002f6ce0(param_1 + 9,param_1);
  *(undefined4 *)((long)param_1 + 0x11c) = 1;
  QThread::start(param_1 + 9,7);
  return;
}

