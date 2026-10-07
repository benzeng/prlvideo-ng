
void FUN_1004edb70(QReadWriteLock *param_1)

{
  QReadWriteLock::QReadWriteLock(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(QReadWriteLock **)(param_1 + 8) = param_1 + 0x10;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

