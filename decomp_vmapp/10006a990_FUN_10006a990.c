
void FUN_10006a990(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  QArrayData *pQVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  if (pvVar4 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar2 != pvVar4) {
      do {
        puVar1 = (undefined8 *)((long)pvVar2 + -0x10);
        param_1[1] = (long)puVar1;
        pQVar3 = *(QArrayData **)((long)pvVar2 + -8);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_10006a9f8;
            pQVar3 = *(QArrayData **)((long)pvVar2 + -8);
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_10006a9f8:
        pQVar3 = (QArrayData *)*puVar1;
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_10006aa26;
            pQVar3 = (QArrayData *)*puVar1;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_10006aa26:
        pvVar2 = (void *)param_1[1];
      } while (pvVar2 != pvVar4);
      pvVar4 = (void *)*param_1;
    }
    operator_delete(pvVar4);
  }
  return;
}

