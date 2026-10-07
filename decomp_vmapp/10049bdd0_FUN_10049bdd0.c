
void FUN_10049bdd0(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  uint uVar3;
  long lVar4;
  string *psVar5;
  undefined8 *puVar6;
  QArrayData *pQVar7;
  
  pQVar2 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (param_3 != 0) {
    pQVar2 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar2 < 2) && ((*(uint *)(pQVar2 + 8) & 0x7fffffff) == param_3)) {
      uVar3 = *(uint *)(pQVar2 + 4);
      lVar1 = (long)(int)uVar3;
      if ((int)uVar3 < (int)param_2) {
        if (uVar3 != param_2) {
          ___bzero(pQVar2 + *(long *)(pQVar2 + 0x10) + lVar1 * 0x28,
                   ((ulong)((long)(int)param_2 * 0x28 + -0x28 + lVar1 * -0x28) / 0x28) * 0x28 + 0x28
                  );
        }
      }
      else if (uVar3 != param_2) {
        psVar5 = (string *)(pQVar2 + *(long *)(pQVar2 + 0x10) + (long)(int)param_2 * 0x28 + 0x10);
        lVar1 = lVar1 * 0x28 + (long)(int)param_2 * -0x28;
        do {
          std::string::~string(psVar5);
          psVar5 = psVar5 + 0x28;
          lVar1 = lVar1 + -0x28;
        } while (lVar1 != 0);
      }
      *(uint *)(pQVar2 + 4) = param_2;
    }
    else {
      pQVar2 = (QArrayData *)QArrayData::allocate(0x28,8,(long)(int)param_3);
      if (pQVar2 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar2 + 4) = param_2;
      lVar1 = *param_1;
      pQVar7 = pQVar2 + *(long *)(pQVar2 + 0x10);
      uVar3 = ~param_2;
      if ((int)~param_2 <= (int)~*(uint *)(lVar1 + 4)) {
        uVar3 = ~*(uint *)(lVar1 + 4);
      }
      puVar6 = (undefined8 *)(*(long *)(lVar1 + 0x10) + lVar1);
      for (lVar4 = (long)(int)~uVar3 * 0x28; lVar4 != 0; lVar4 = lVar4 + -0x28) {
        pQVar7[0xc] = *(QArrayData *)((long)puVar6 + 0xc);
        *(undefined4 *)(pQVar7 + 8) = *(undefined4 *)(puVar6 + 1);
        *(undefined8 *)pQVar7 = *puVar6;
        psVar5 = (string *)(pQVar7 + 0x10);
        pQVar7 = pQVar7 + 0x28;
        std::string::string(psVar5,(string *)(puVar6 + 2));
        puVar6 = puVar6 + 5;
      }
      lVar1 = *param_1;
      if (*(int *)(lVar1 + 4) < (int)param_2) {
        if (pQVar7 != pQVar2 + (long)(int)*(uint *)(pQVar2 + 4) * 0x28 + *(long *)(pQVar2 + 0x10)) {
          ___bzero(pQVar7,((ulong)(pQVar2 + (*(long *)(pQVar2 + 0x10) - (long)pQVar7) + -0x28 +
                                            (long)(int)*(uint *)(pQVar2 + 4) * 0x28) / 0x28) * 0x28
                          + 0x28);
          lVar1 = *param_1;
        }
      }
      *(uint *)(pQVar2 + 8) = *(uint *)(pQVar2 + 8) & 0x7fffffff | *(uint *)(lVar1 + 8) & 0x80000000
      ;
    }
  }
  pQVar7 = (QArrayData *)*param_1;
  if (pQVar7 == pQVar2) {
    return;
  }
  if (*(uint *)pQVar7 != 0xffffffff) {
    if (*(uint *)pQVar7 != 0) {
      LOCK();
      *(uint *)pQVar7 = *(uint *)pQVar7 - 1;
      UNLOCK();
      if (*(uint *)pQVar7 != 0) goto LAB_10049c057;
      pQVar7 = (QArrayData *)*param_1;
    }
    lVar1 = (long)*(int *)(pQVar7 + 4) * 0x28;
    if (lVar1 != 0) {
      psVar5 = (string *)(pQVar7 + *(long *)(pQVar7 + 0x10) + 0x10);
      do {
        std::string::~string(psVar5);
        psVar5 = psVar5 + 0x28;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
    }
    QArrayData::deallocate(pQVar7,0x28,8);
  }
LAB_10049c057:
  *param_1 = (long)pQVar2;
  return;
}

