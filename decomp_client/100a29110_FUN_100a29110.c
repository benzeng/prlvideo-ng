
int FUN_100a29110(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  QMapNodeBase *pQVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  QArrayData *pQVar6;
  int iVar7;
  
  puVar5 = (uint *)*param_1;
  if (1 < *puVar5) {
    FUN_100a2bb10(param_1);
    puVar5 = (uint *)*param_1;
  }
  lVar4 = FUN_100a2b8a0(puVar5,param_2);
  iVar7 = 0;
  do {
    if (lVar4 == 0) {
      return iVar7;
    }
    pQVar2 = (QMapNodeBase *)*param_1;
    pQVar6 = *(QArrayData **)(lVar4 + 0x20);
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        UNLOCK();
        if (*(int *)pQVar6 != 0) goto LAB_100a291a8;
        pQVar6 = *(QArrayData **)(lVar4 + 0x20);
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_100a291a8:
    pQVar6 = *(QArrayData **)(lVar4 + 0x18);
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        UNLOCK();
        if (*(int *)pQVar6 != 0) goto LAB_100a291d8;
        pQVar6 = *(QArrayData **)(lVar4 + 0x18);
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_100a291d8:
    plVar3 = *(long **)(lVar4 + 0x28);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    QMapDataBase::freeNodeAndRebalance(pQVar2);
    iVar7 = iVar7 + 1;
    lVar4 = FUN_100a2b8a0(*param_1,param_2);
  } while( true );
}

