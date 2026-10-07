
void FUN_100115b50(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  QArrayData *pQVar2;
  undefined8 *puVar3;
  string *psVar4;
  long lVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  undefined8 *puVar8;
  
  pQVar2 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (param_3 != 0) {
    pQVar2 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar2 < 2) && ((*(uint *)(pQVar2 + 8) & 0x7fffffff) == param_3)) {
      uVar1 = *(uint *)(pQVar2 + 4);
      lVar5 = (long)(int)uVar1;
      if ((int)uVar1 < (int)param_2) {
        if (uVar1 != param_2) {
          ___bzero(pQVar2 + lVar5 * 0x20 + *(long *)(pQVar2 + 0x10),((int)param_2 - lVar5) * 0x20);
        }
      }
      else if (uVar1 != param_2) {
        psVar4 = (string *)(pQVar2 + *(long *)(pQVar2 + 0x10) + (long)(int)param_2 * 0x20 + 8);
        lVar5 = lVar5 * 0x20 + (long)(int)param_2 * -0x20;
        do {
          std::string::~string(psVar4);
          psVar4 = psVar4 + 0x20;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
      }
      *(uint *)(pQVar2 + 4) = param_2;
    }
    else {
      pQVar2 = (QArrayData *)QArrayData::allocate(0x20,8,(long)(int)param_3);
      if (pQVar2 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar2 + 4) = param_2;
      lVar5 = *param_1;
      uVar1 = *(uint *)(lVar5 + 4);
      if ((int)param_2 < (int)*(uint *)(lVar5 + 4)) {
        uVar1 = param_2;
      }
      pQVar6 = pQVar2 + *(long *)(pQVar2 + 0x10);
      if (((long)(int)uVar1 & 0x7ffffffffffffffU) != 0) {
        puVar3 = (undefined8 *)(lVar5 + *(long *)(lVar5 + 0x10));
        puVar8 = puVar3 + (long)(int)uVar1 * 4;
        do {
          pQVar7 = pQVar6;
          *(undefined8 *)pQVar7 = *puVar3;
          std::string::string((string *)(pQVar7 + 8),(string *)(puVar3 + 1));
          *(undefined8 *)pQVar7 = *puVar3;
          puVar3 = puVar3 + 4;
          pQVar6 = pQVar7 + 0x20;
        } while (puVar3 != puVar8);
        pQVar6 = pQVar7 + 0x20;
        lVar5 = *param_1;
      }
      if ((*(int *)(lVar5 + 4) < (int)param_2) &&
         (pQVar6 != pQVar2 + (long)(int)*(uint *)(pQVar2 + 4) * 0x20 + *(long *)(pQVar2 + 0x10))) {
        ___bzero(pQVar6,(long)(pQVar2 + (long)(int)*(uint *)(pQVar2 + 4) * 0x20 +
                                        *(long *)(pQVar2 + 0x10)) - (long)pQVar6 &
                        0xffffffffffffffe0);
        lVar5 = *param_1;
      }
      *(uint *)(pQVar2 + 8) = *(uint *)(pQVar2 + 8) & 0x7fffffff | *(uint *)(lVar5 + 8) & 0x80000000
      ;
    }
  }
  pQVar6 = (QArrayData *)*param_1;
  if (pQVar6 == pQVar2) {
    return;
  }
  if (*(uint *)pQVar6 != 0xffffffff) {
    if (*(uint *)pQVar6 != 0) {
      LOCK();
      *(uint *)pQVar6 = *(uint *)pQVar6 - 1;
      UNLOCK();
      if (*(uint *)pQVar6 != 0) goto LAB_100115d67;
      pQVar6 = (QArrayData *)*param_1;
    }
    lVar5 = (long)*(int *)(pQVar6 + 4) << 5;
    if (lVar5 != 0) {
      psVar4 = (string *)(pQVar6 + *(long *)(pQVar6 + 0x10) + 8);
      do {
        std::string::~string(psVar4);
        psVar4 = psVar4 + 0x20;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    QArrayData::deallocate(pQVar6,0x20,8);
  }
LAB_100115d67:
  *param_1 = (long)pQVar2;
  return;
}

