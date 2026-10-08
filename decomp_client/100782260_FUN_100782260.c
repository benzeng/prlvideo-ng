
void FUN_100782260(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (-1 < *(int *)(*(long *)(param_1 + 0x18) + 0x10)) {
    QTimer::stop();
  }
  *(byte *)(param_1 + 0x10) = bVar1 ^ 1;
  FUN_10085d270(param_1,bVar1 == 0);
  return;
}

