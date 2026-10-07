
void FUN_100034490(long param_1,undefined1 param_2,long param_3)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x60) = param_2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  FUN_1000373c0(param_3,param_1 + 0x48);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x50);
  QString::operator=((QString *)(param_3 + 0x10),(QString *)(param_1 + 0x58));
  *(undefined1 *)(param_3 + 0x18) = *(undefined1 *)(param_1 + 0x60);
  FUN_100036f60(param_1 + 0x48);
  QMutex::unlock();
  return;
}

