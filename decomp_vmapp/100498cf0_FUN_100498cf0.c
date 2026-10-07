
int FUN_100498cf0(long *param_1,uint *param_2)

{
  QMapNodeBase *pQVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  QArrayData *pQVar7;
  int iVar8;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_100498ef0(param_1);
    puVar2 = (uint *)*param_1;
  }
  lVar3 = *(long *)(puVar2 + 4);
  iVar8 = 0;
  do {
    if (lVar3 == 0) {
      return iVar8;
    }
    lVar4 = 0;
    do {
      while (lVar5 = lVar3, uVar6 = *(uint *)(lVar5 + 0x18), uVar6 < *param_2) {
        lVar3 = *(long *)(lVar5 + 0x10);
        if (*(long *)(lVar5 + 0x10) == 0) {
          if (lVar4 == 0) {
            return iVar8;
          }
          uVar6 = *(uint *)(lVar4 + 0x18);
          lVar5 = lVar4;
          goto LAB_100498d8b;
        }
      }
      lVar3 = *(long *)(lVar5 + 8);
      lVar4 = lVar5;
    } while (*(long *)(lVar5 + 8) != 0);
LAB_100498d8b:
    if (*param_2 < uVar6) {
      return iVar8;
    }
    pQVar1 = (QMapNodeBase *)*param_1;
    pQVar7 = *(QArrayData **)(lVar5 + 0x28);
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        UNLOCK();
        if (*(int *)pQVar7 != 0) goto LAB_100498d20;
        pQVar7 = *(QArrayData **)(lVar5 + 0x28);
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
LAB_100498d20:
    QMapDataBase::freeNodeAndRebalance(pQVar1);
    iVar8 = iVar8 + 1;
    lVar3 = *(long *)(*param_1 + 0x10);
  } while( true );
}

