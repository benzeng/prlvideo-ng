
void FUN_1004b6f50(long param_1)

{
  QMutex::lock();
  FUN_100528fc0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x938),
                *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x93c));
  QMutex::unlock();
  FUN_1002af2c0(*(undefined8 *)(param_1 + 0x50),0);
  return;
}

