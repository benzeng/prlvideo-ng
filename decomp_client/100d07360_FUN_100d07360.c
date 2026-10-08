
void FUN_100d07360(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  ulong uVar5;
  QArrayData *pQVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_10225b220;
  puVar1 = param_1 + 3;
  pQVar3 = (QArrayData *)param_1[3];
  uVar5 = (ulong)*(uint *)(pQVar3 + 4);
  if (0 < (int)*(uint *)(pQVar3 + 4)) {
    lVar7 = 0;
    do {
      if (1 < *(uint *)pQVar3) {
        if ((*(uint *)(pQVar3 + 8) & 0x7fffffff) == 0) {
          pQVar3 = (QArrayData *)QArrayData::allocate(8,8,0,2);
          *puVar1 = pQVar3;
        }
        else {
          FUN_100d14250(puVar1,uVar5,*(uint *)(pQVar3 + 8) & 0x7fffffff,0);
          pQVar3 = (QArrayData *)*puVar1;
        }
      }
      pvVar2 = *(void **)(pQVar3 + lVar7 * 8 + *(long *)(pQVar3 + 0x10));
      if (pvVar2 != (void *)0x0) {
        FUN_100d13840(pvVar2);
        operator_delete(pvVar2);
        pQVar3 = (QArrayData *)*puVar1;
      }
      lVar7 = lVar7 + 1;
      uVar5 = (ulong)(int)*(uint *)(pQVar3 + 4);
    } while (lVar7 < (long)uVar5);
  }
  if (*(uint *)pQVar3 != 0xffffffff) {
    if (*(uint *)pQVar3 != 0) {
      LOCK();
      *(uint *)pQVar3 = *(uint *)pQVar3 - 1;
      UNLOCK();
      if (*(uint *)pQVar3 != 0) goto LAB_100d0743f;
      pQVar3 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar3,8,8);
  }
LAB_100d0743f:
  pQVar3 = (QArrayData *)param_1[2];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100d074fa;
      pQVar3 = (QArrayData *)param_1[2];
    }
    lVar7 = (long)*(int *)(pQVar3 + 4) << 4;
    if (lVar7 != 0) {
      pQVar4 = pQVar3 + *(long *)(pQVar3 + 0x10);
      do {
        pQVar6 = *(QArrayData **)(pQVar4 + 8);
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            UNLOCK();
            if (*(int *)pQVar6 != 0) goto LAB_100d074b0;
            pQVar6 = *(QArrayData **)(pQVar4 + 8);
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_100d074b0:
        pQVar6 = *(QArrayData **)pQVar4;
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            UNLOCK();
            if (*(int *)pQVar6 != 0) goto LAB_100d074de;
            pQVar6 = *(QArrayData **)pQVar4;
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_100d074de:
        pQVar4 = pQVar4 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
    QArrayData::deallocate(pQVar3,0x10,8);
  }
LAB_100d074fa:
  pQVar3 = (QArrayData *)param_1[1];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

