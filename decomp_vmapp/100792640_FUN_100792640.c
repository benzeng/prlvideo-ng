
void FUN_100792640(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x44) == 0) {
    LOCK();
    UNLOCK();
    lVar1 = DAT_1011a58f8 + 1;
    *(long *)(param_1 + 0x44) = DAT_1011a58f8;
    DAT_1011a58f8 = lVar1;
  }
  return;
}

