
void FUN_100dccff0(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  QArrayData *pQVar2;
  uint uVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  
  pQVar2 = (QArrayData *)PTR_shared_null_1021e1288;
  if (param_3 != 0) {
    pQVar2 = (QArrayData *)*param_1;
    if ((*(uint *)pQVar2 < 2) && ((*(uint *)(pQVar2 + 8) & 0x7fffffff) == param_3)) {
      if (((int)*(uint *)(pQVar2 + 4) < (int)param_2) &&
         (uVar1 = *(uint *)(pQVar2 + 4), uVar1 != param_2)) {
        lVar6 = (long)(int)uVar1 * -0x878;
        ___bzero(pQVar2 + (long)(int)uVar1 * 0x878 + *(long *)(pQVar2 + 0x10),
                 ((long)(int)param_2 * 0x878 + lVar6) -
                 (ulong)((long)(int)param_2 * 0x878 + -0x878 + lVar6) % 0x878);
      }
      *(uint *)(pQVar2 + 4) = param_2;
    }
    else {
      pQVar2 = (QArrayData *)QArrayData::allocate(0x878,8,(long)(int)param_3);
      if (pQVar2 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(uint *)(pQVar2 + 4) = param_2;
      lVar6 = *param_1;
      uVar1 = *(uint *)(lVar6 + 4);
      uVar3 = param_2;
      if ((int)uVar1 <= (int)param_2) {
        uVar3 = uVar1;
      }
      pQVar5 = pQVar2 + *(long *)(pQVar2 + 0x10);
      if ((long)(int)uVar3 * 0x878 != 0) {
        uVar3 = ~param_2;
        if ((int)~param_2 <= (int)~uVar1) {
          uVar3 = ~uVar1;
        }
        lVar8 = (long)(int)~uVar3 * 0x878;
        pQVar5 = pQVar2 + *(long *)(pQVar2 + 0x10) + 0x878 + ((lVar8 - 0x878U) / 0x878) * 0x878;
        pQVar4 = pQVar2 + *(long *)(pQVar2 + 0x10);
        pvVar7 = (void *)(lVar6 + *(long *)(lVar6 + 0x10));
        do {
          _memcpy(pQVar4,pvVar7,0x878);
          lVar8 = lVar8 + -0x878;
          pQVar4 = pQVar4 + 0x878;
          pvVar7 = (void *)((long)pvVar7 + 0x878);
        } while (lVar8 != 0);
        lVar6 = *param_1;
      }
      if (*(int *)(lVar6 + 4) < (int)param_2) {
        if (pQVar5 != pQVar2 + (long)(int)*(uint *)(pQVar2 + 4) * 0x878 + *(long *)(pQVar2 + 0x10))
        {
          ___bzero(pQVar5,pQVar2 + (((long)(int)*(uint *)(pQVar2 + 4) * 0x878 + -0x878 +
                                    *(long *)(pQVar2 + 0x10)) - (long)pQVar5) +
                          (0x878 - (ulong)(pQVar2 + (((long)(int)*(uint *)(pQVar2 + 4) * 0x878 +
                                                      -0x878 + *(long *)(pQVar2 + 0x10)) -
                                                    (long)pQVar5)) % 0x878));
          lVar6 = *param_1;
        }
      }
      *(uint *)(pQVar2 + 8) = *(uint *)(pQVar2 + 8) & 0x7fffffff | *(uint *)(lVar6 + 8) & 0x80000000
      ;
    }
  }
  pQVar5 = (QArrayData *)*param_1;
  if (pQVar5 == pQVar2) {
    return;
  }
  if (*(uint *)pQVar5 != 0xffffffff) {
    if (*(uint *)pQVar5 != 0) {
      LOCK();
      *(uint *)pQVar5 = *(uint *)pQVar5 - 1;
      UNLOCK();
      if (*(uint *)pQVar5 != 0) goto LAB_100dcd227;
      pQVar5 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar5,0x878,8);
  }
LAB_100dcd227:
  *param_1 = (long)pQVar2;
  return;
}

