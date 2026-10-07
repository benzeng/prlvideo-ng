
void FUN_100758080(undefined8 param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  
  lVar4 = DAT_1011bf930;
  lVar2 = param_2 * 0x40;
  DAT_1011bf948 = DAT_1011bf948 - *(long *)(DAT_1011bf930 + 8 + lVar2);
  pvVar1 = (void *)(DAT_1011bf930 + 0x40 + lVar2);
  sVar3 = DAT_1011bf938 - (long)pvVar1;
  _memmove((void *)(DAT_1011bf930 + lVar2),pvVar1,sVar3);
  lVar4 = ((sVar3 >> 6) + param_2) * 0x40 + lVar4;
  if (DAT_1011bf938 != lVar4) {
    DAT_1011bf938 = (~((DAT_1011bf938 + -0x40) - lVar4) & 0xffffffffffffffc0U) + DAT_1011bf938;
  }
  return;
}

