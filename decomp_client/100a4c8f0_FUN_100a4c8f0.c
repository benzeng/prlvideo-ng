
int FUN_100a4c8f0(long *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  QMapNodeBase *pQVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  puVar5 = (uint *)*param_1;
  if (1 < *puVar5) {
    FUN_100a4cdd0(param_1);
    puVar5 = (uint *)*param_1;
  }
  lVar6 = *(long *)(puVar5 + 4);
  iVar9 = 0;
  do {
    if (lVar6 == 0) {
      return iVar9;
    }
    lVar7 = 0;
    do {
      while (lVar8 = lVar6, uVar2 = *(uint *)(lVar8 + 0x18), uVar2 < *param_2) {
        lVar6 = *(long *)(lVar8 + 0x10);
        if (*(long *)(lVar8 + 0x10) == 0) {
          if (lVar7 == 0) {
            return iVar9;
          }
          uVar2 = *(uint *)(lVar7 + 0x18);
          lVar8 = lVar7;
          goto LAB_100a4c98b;
        }
      }
      lVar6 = *(long *)(lVar8 + 8);
      lVar7 = lVar8;
    } while (*(long *)(lVar8 + 8) != 0);
LAB_100a4c98b:
    if (*param_2 < uVar2) {
      return iVar9;
    }
    pQVar3 = (QMapNodeBase *)*param_1;
    plVar4 = *(long **)(lVar8 + 0x20);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    QMapDataBase::freeNodeAndRebalance(pQVar3);
    iVar9 = iVar9 + 1;
    lVar6 = *(long *)(*param_1 + 0x10);
  } while( true );
}

