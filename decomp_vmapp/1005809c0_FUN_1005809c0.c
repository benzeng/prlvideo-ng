
void FUN_1005809c0(long *param_1)

{
  *param_1 = (long)&PTR_FUN_10111dbe8;
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 9),0);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[3] = (long)(param_1 + 3);
  param_1[4] = (long)(param_1 + 3);
  (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*param_1 + 0xe0))(param_1);
  *param_1 = (long)&PTR_FUN_100bc6460;
  return;
}

