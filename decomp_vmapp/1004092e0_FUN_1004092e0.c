
void FUN_1004092e0(long *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar1 = (void *)param_1[1];
    if (pvVar1 != pvVar3) {
      do {
        param_1[1] = (long)pvVar1 + -8;
        pQVar2 = *(QArrayData **)((long)pvVar1 + -8);
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            UNLOCK();
            if (*(int *)pQVar2 != 0) goto LAB_100409337;
            pQVar2 = *(QArrayData **)((long)pvVar1 + -8);
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_100409337:
        pvVar1 = (void *)param_1[1];
      } while (pvVar1 != pvVar3);
      pvVar3 = (void *)*param_1;
    }
    operator_delete(pvVar3);
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}

