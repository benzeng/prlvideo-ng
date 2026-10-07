
void FUN_100288f40(long *param_1)

{
  int iVar1;
  
  FUN_100285e00();
  *param_1 = (long)&PTR_FUN_100bb0900;
  param_1[1] = (long)&PTR_metaObject_100bb09f8;
  param_1[0xd] = (long)&PTR_FUN_100bb0a70;
  iVar1 = CVmDevice::getConnected();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  DAT_100bfb12d = DAT_100bfb12d | 1;
  DAT_100bfb114 = param_1;
  FUN_10028bf40();
  return;
}

