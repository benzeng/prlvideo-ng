
void FUN_100d164a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint *puVar3;
  QArrayData *pQVar4;
  ulong uVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_10225b360;
  puVar1 = param_1 + 4;
  puVar3 = (uint *)param_1[4];
  uVar5 = (ulong)puVar3[1];
  if (0 < (int)puVar3[1]) {
    lVar8 = 0;
    do {
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(8,8,0,2);
          *puVar1 = puVar3;
        }
        else {
          FUN_100d14250(puVar1,uVar5,puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar1;
        }
      }
      pvVar2 = *(void **)((long)puVar3 + lVar8 * 8 + *(long *)(puVar3 + 4));
      if (pvVar2 != (void *)0x0) {
        FUN_100d13840(pvVar2);
        operator_delete(pvVar2);
        puVar3 = (uint *)*puVar1;
      }
      lVar8 = lVar8 + 1;
      uVar5 = (ulong)(int)puVar3[1];
    } while (lVar8 < (long)uVar5);
  }
  pQVar7 = (QArrayData *)param_1[5];
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100d16580;
      pQVar7 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100d16580:
  pQVar7 = (QArrayData *)*puVar1;
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100d165b0;
      pQVar7 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar7,8,8);
  }
LAB_100d165b0:
  pQVar7 = (QArrayData *)param_1[3];
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100d1666a;
      pQVar7 = (QArrayData *)param_1[3];
    }
    lVar8 = (long)*(int *)(pQVar7 + 4) << 4;
    if (lVar8 != 0) {
      pQVar4 = pQVar7 + *(long *)(pQVar7 + 0x10);
      do {
        pQVar6 = *(QArrayData **)(pQVar4 + 8);
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            UNLOCK();
            if (*(int *)pQVar6 != 0) goto LAB_100d16620;
            pQVar6 = *(QArrayData **)(pQVar4 + 8);
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_100d16620:
        pQVar6 = *(QArrayData **)pQVar4;
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            UNLOCK();
            if (*(int *)pQVar6 != 0) goto LAB_100d1664e;
            pQVar6 = *(QArrayData **)pQVar4;
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_100d1664e:
        pQVar4 = pQVar4 + 0x10;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
    QArrayData::deallocate(pQVar7,0x10,8);
  }
LAB_100d1666a:
  pQVar7 = (QArrayData *)param_1[1];
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) {
        return;
      }
      pQVar7 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
  return;
}

