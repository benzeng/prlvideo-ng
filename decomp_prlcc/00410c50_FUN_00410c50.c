
void FUN_00410c50(long *param_1)

{
  long lVar1;
  byte *__ptr;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((param_1 != (long *)0x0) && (param_1 != (long *)PTR_EZXML_NIL_0061bd80)) {
    lVar3 = 0;
    if (*param_1 != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 0x10;
        lVar3 = lVar3 + 0x10;
      } while (*(long *)(lVar1 + (long)param_1) != 0);
    }
    __ptr = *(byte **)((long)param_1 + lVar3 + 8);
    bVar2 = *__ptr;
    if (bVar2 != 0) {
      lVar3 = 0;
      pbVar5 = __ptr;
      do {
        pbVar4 = pbVar5 + 1;
        if ((char)bVar2 < '\0') {
          free((void *)param_1[lVar3 * 2]);
        }
        if ((*pbVar5 & 0x40) != 0) {
          free((void *)param_1[lVar3 * 2 + 1]);
        }
        bVar2 = *pbVar4;
        lVar3 = (long)pbVar4 - (long)__ptr;
        pbVar5 = pbVar4;
      } while (bVar2 != 0);
    }
    free(__ptr);
    free(param_1);
    return;
  }
  return;
}

