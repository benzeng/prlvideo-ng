
void FUN_100a6be70(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x44) == 0) {
    LOCK();
    UNLOCK();
    lVar1 = DAT_1022814d8 + 1;
    *(long *)(param_1 + 0x44) = DAT_1022814d8;
    DAT_1022814d8 = lVar1;
  }
  return;
}

