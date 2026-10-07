
void FUN_10006ac30(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  lVar2 = param_1[1];
LAB_10006ac50:
  do {
    lVar3 = param_1[2];
    if (lVar3 == lVar2) {
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
      }
      return;
    }
    puVar1 = (undefined8 *)(lVar3 + -0x10);
    param_1[2] = puVar1;
    pQVar4 = *(QArrayData **)(lVar3 + -8);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        UNLOCK();
        if (*(int *)pQVar4 != 0) goto LAB_10006ac91;
        pQVar4 = *(QArrayData **)(lVar3 + -8);
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_10006ac91:
    pQVar4 = (QArrayData *)*puVar1;
  } while (*(int *)pQVar4 == -1);
  if (*(int *)pQVar4 != 0) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + -1;
    UNLOCK();
    if (*(int *)pQVar4 != 0) goto LAB_10006ac50;
    pQVar4 = (QArrayData *)*puVar1;
  }
  QArrayData::deallocate(pQVar4,2,8);
  goto LAB_10006ac50;
}

