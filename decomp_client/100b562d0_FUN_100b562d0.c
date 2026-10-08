
void FUN_100b562d0(long *param_1,QString *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  QArrayData *pQVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  long lVar9;
  QString *pQVar10;
  
  pQVar4 = (QArrayData *)*param_1;
  iVar3 = *(int *)pQVar4;
  if (iVar3 == 0) {
    if ((int)*(uint *)(pQVar4 + 8) < 0) {
      pQVar4 = (QArrayData *)QArrayData::allocate(0x10,8,*(uint *)(pQVar4 + 8) & 0x7fffffff,0);
      if (pQVar4 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      pQVar4[0xb] = (QArrayData)((byte)pQVar4[0xb] | 0x80);
    }
    else {
      pQVar4 = (QArrayData *)QArrayData::allocate(0x10,8,(long)*(int *)(pQVar4 + 4),0);
      if (pQVar4 == (QArrayData *)0x0) {
        iVar3 = qBadAlloc();
        goto LAB_100b56323;
      }
    }
    if ((*(uint *)(pQVar4 + 8) & 0x7fffffff) != 0) {
      lVar9 = *param_1;
      if (((long)*(int *)(lVar9 + 4) & 0xfffffffffffffffU) != 0) {
        puVar5 = (undefined8 *)(lVar9 + *(long *)(lVar9 + 0x10));
        puVar6 = puVar5 + (long)*(int *)(lVar9 + 4) * 2;
        pQVar7 = pQVar4 + *(long *)(pQVar4 + 0x10);
        do {
          piVar1 = (int *)*puVar5;
          *(int **)pQVar7 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          piVar1 = (int *)puVar5[1];
          *(int **)(pQVar7 + 8) = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          puVar5 = puVar5 + 2;
          pQVar7 = pQVar7 + 0x10;
        } while (puVar5 != puVar6);
        lVar9 = *param_1;
      }
      *(int *)(pQVar4 + 4) = *(int *)(lVar9 + 4);
    }
  }
  else {
LAB_100b56323:
    if (iVar3 != -1) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      UNLOCK();
      pQVar4 = (QArrayData *)*param_1;
    }
  }
  pQVar7 = pQVar4 + *(long *)(pQVar4 + 0x10) + -0x10;
  do {
    pQVar8 = pQVar7;
    pQVar7 = pQVar8 + 0x10;
    if (pQVar7 == pQVar4 + (long)*(int *)(pQVar4 + 4) * 0x10 + *(long *)(pQVar4 + 0x10))
    goto LAB_100b565cf;
    cVar2 = operator==((QString *)pQVar7,param_2);
  } while (cVar2 == '\0');
  lVar9 = *param_1;
  iVar3 = -1;
  if (0 < (long)*(int *)(lVar9 + 4)) {
    pQVar10 = (QString *)(lVar9 + *(long *)(lVar9 + 0x10));
    lVar9 = (long)*(int *)(lVar9 + 4) << 4;
    do {
      cVar2 = operator==(pQVar10,(QString *)pQVar7);
      if ((cVar2 != '\0') &&
         (cVar2 = operator==(pQVar10 + 1,(QString *)(pQVar8 + 0x18)), cVar2 != '\0')) {
        lVar9 = *param_1;
        iVar3 = (int)((ulong)((long)pQVar10 - (*(long *)(lVar9 + 0x10) + lVar9)) >> 4);
        goto LAB_100b565b3;
      }
      pQVar10 = pQVar10 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
    lVar9 = *param_1;
    iVar3 = -1;
  }
LAB_100b565b3:
  lVar9 = lVar9 + *(long *)(lVar9 + 0x10);
  FUN_100b590a0(param_1,lVar9 + (long)iVar3 * 0x10,(long)iVar3 * 0x10 + 0x10 + lVar9);
LAB_100b565cf:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return;
      }
    }
    lVar9 = (long)*(int *)(pQVar4 + 4) << 4;
    if (lVar9 != 0) {
      pQVar7 = pQVar4 + *(long *)(pQVar4 + 0x10);
      do {
        pQVar8 = *(QArrayData **)(pQVar7 + 8);
        if (*(int *)pQVar8 != -1) {
          if (*(int *)pQVar8 != 0) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            UNLOCK();
            if (*(int *)pQVar8 != 0) goto LAB_100b56640;
            pQVar8 = *(QArrayData **)(pQVar7 + 8);
          }
          QArrayData::deallocate(pQVar8,2,8);
        }
LAB_100b56640:
        pQVar8 = *(QArrayData **)pQVar7;
        if (*(int *)pQVar8 != -1) {
          if (*(int *)pQVar8 != 0) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            UNLOCK();
            if (*(int *)pQVar8 != 0) goto LAB_100b5666e;
            pQVar8 = *(QArrayData **)pQVar7;
          }
          QArrayData::deallocate(pQVar8,2,8);
        }
LAB_100b5666e:
        pQVar7 = pQVar7 + 0x10;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
    }
    QArrayData::deallocate(pQVar4,0x10,8);
  }
  return;
}

