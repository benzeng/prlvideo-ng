
void FUN_100acd750(long param_1,undefined1 param_2)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  if (iVar1 == 1) {
    FUN_100ad5b00(*(undefined8 *)(param_1 + 0x78),param_2);
    return;
  }
  return;
}

