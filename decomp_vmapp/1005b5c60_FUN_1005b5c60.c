
undefined1 FUN_1005b5c60(long param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  QMapNodeBase *pQVar3;
  ulong *puVar4;
  QMapNodeBase *pQVar5;
  undefined1 uVar6;
  QMapNodeBase *pQVar7;
  QArrayData *local_50;
  QArrayData *local_40;
  
  pQVar3 = *(QMapNodeBase **)(param_1 + 8);
  if (*(int *)pQVar3 == 0) {
    pQVar3 = (QMapNodeBase *)QMapDataBase::createData();
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar1 != 0) {
      puVar4 = (ulong *)FUN_1005b63a0(lVar1,pQVar3);
      *(ulong **)(pQVar3 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | (ulong)(pQVar3 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar3 != -1) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
    pQVar3 = *(QMapNodeBase **)(param_1 + 8);
  }
  if (*(long *)(pQVar3 + 0x10) == 0) {
    pQVar5 = pQVar3 + 8;
  }
  else {
    pQVar5 = *(QMapNodeBase **)(pQVar3 + 0x20);
  }
  do {
    pQVar7 = pQVar5;
    uVar6 = 1;
    if (pQVar7 == pQVar3 + 8) goto LAB_1005b5ee4;
    pQVar5 = (QMapNodeBase *)QMapNodeBase::nextNode();
    if (2 < DAT_1011b55f8) {
      pQVar2 = *(QArrayData **)(pQVar7 + 0x18);
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","vdisk",3,"Check space for %s: free %llu need %llu",
                    local_40 + *(long *)(local_40 + 0x10),*(undefined8 *)(pQVar7 + 0x20),
                    *(undefined8 *)(pQVar7 + 0x28));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) goto LAB_1005b5dbe;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_1005b5dbe:
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          UNLOCK();
          if (*(int *)pQVar2 != 0) goto LAB_1005b5e00;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
    }
LAB_1005b5e00:
  } while (*(long *)(pQVar7 + 0x28) + 0x10000000U <= *(ulong *)(pQVar7 + 0x20));
  pQVar2 = *(QArrayData **)(pQVar7 + 0x18);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar1 = *(long *)(pQVar7 + 0x28);
  FUN_1008e3970("","vdisk",0,"No space for %s: free %llu need %llu (successors %llu, reserved %d)",
                local_50 + *(long *)(local_50 + 0x10),*(ulong *)(pQVar7 + 0x20),lVar1 + 0x10000000,
                lVar1,0x10000000);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_1005b5eb2;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1005b5eb2:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1005b5ee2;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1005b5ee2:
  uVar6 = 0;
LAB_1005b5ee4:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return uVar6;
      }
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      FUN_1005b6340();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
  return uVar6;
}

