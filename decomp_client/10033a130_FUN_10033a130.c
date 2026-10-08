
int FUN_10033a130(long *param_1,uint *param_2)

{
  QMapNodeBase *pQVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1003226a0(param_1);
    puVar3 = (uint *)*param_1;
  }
  lVar4 = *(long *)(puVar3 + 4);
  iVar8 = 0;
  do {
    if (lVar4 == 0) {
      return iVar8;
    }
    lVar5 = 0;
    do {
      while (lVar6 = lVar4, uVar7 = *(uint *)(lVar6 + 0x18), uVar7 < *param_2) {
        lVar4 = *(long *)(lVar6 + 0x10);
        if (*(long *)(lVar6 + 0x10) == 0) {
          if (lVar5 == 0) {
            return iVar8;
          }
          uVar7 = *(uint *)(lVar5 + 0x18);
          lVar6 = lVar5;
          goto LAB_10033a1cb;
        }
      }
      lVar4 = *(long *)(lVar6 + 8);
      lVar5 = lVar6;
    } while (*(long *)(lVar6 + 8) != 0);
LAB_10033a1cb:
    if (*param_2 < uVar7) {
      return iVar8;
    }
    pQVar1 = (QMapNodeBase *)*param_1;
    piVar2 = *(int **)(lVar6 + 0x20);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (*(void **)(lVar6 + 0x20) != (void *)0x0)) {
        operator_delete(*(void **)(lVar6 + 0x20));
      }
    }
    QMapDataBase::freeNodeAndRebalance(pQVar1);
    iVar8 = iVar8 + 1;
    lVar4 = *(long *)(*param_1 + 0x10);
  } while( true );
}

