
void FUN_1002e2540(long param_1)

{
  undefined1 uVar1;
  
  QMutex::lock();
  if ((*(char *)(param_1 + 0x1a) == '\0') && (*(char *)(param_1 + 0x19) != '\0')) {
    uVar1 = FUN_1002e23c0(*(undefined8 *)(param_1 + 0x10));
    *(undefined1 *)(param_1 + 0x19) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  while( true ) {
    QWaitCondition::wait((QMutex *)(param_1 + 0x28),param_1 + 0x20);
    if (*(char *)(param_1 + 0x18) != '\0') break;
    if ((*(char *)(param_1 + 0x1a) == '\0') && (*(char *)(param_1 + 0x19) != '\0')) {
      uVar1 = FUN_1002e23c0(*(undefined8 *)(param_1 + 0x10));
      *(undefined1 *)(param_1 + 0x19) = uVar1;
    }
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  QMutex::unlock();
  return;
}

