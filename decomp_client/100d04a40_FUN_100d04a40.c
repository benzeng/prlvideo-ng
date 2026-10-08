
void FUN_100d04a40(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  QArrayData *pQVar4;
  long lVar5;
  QArrayData *pQVar6;
  long lVar7;
  QArrayData *pQVar8;
  long lVar9;
  long lVar10;
  QArrayData *local_60;
  QArrayData *local_50;
  QArrayData *local_40;
  
  if (DAT_10230ffd0 < 2) {
    return;
  }
  pQVar4 = *(QArrayData **)(param_1 + 0x10);
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar5 = *(long *)(local_40 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  uVar2 = *(undefined1 *)(param_1 + 0xe0);
  pQVar6 = *(QArrayData **)(param_1 + 0xd8);
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar7 = *(long *)(local_50 + 0x10);
  pQVar8 = *(QArrayData **)(param_1 + 0x50);
  if (1 < *(int *)pQVar8 + 1U) {
    LOCK();
    *(int *)pQVar8 = *(int *)pQVar8 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar9 = *(long *)(param_1 + 0x110);
  lVar10 = *(long *)(lVar9 + 0x10);
  FUN_100df99c0("","VmConfigParser",2,
                "VM configuration \'%s\' :\n\tvendor type %d, isPackage %d\n\tEncrypted %d\n\tVM name \'%s\'\n\tOS type \'%s\'\n\tHard disk count %d"
                ,local_40 + lVar5,uVar3,uVar1,uVar2,local_50 + lVar7,
                local_60 + *(long *)(local_60 + 0x10),
                (uint)*(byte *)(lVar9 + 0x78 + lVar10) +
                (uint)*(byte *)(lVar9 + 0x50 + lVar10) +
                (uint)*(byte *)(lVar9 + 0x28 + lVar10) + (uint)*(byte *)(lVar9 + lVar10) +
                *(int *)(*(long *)(param_1 + 0x2d0) + 4) + *(int *)(*(long *)(param_1 + 0x2e8) + 4))
  ;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) goto LAB_100d04bac;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100d04bac:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      UNLOCK();
      if (*(int *)pQVar8 != 0) goto LAB_100d04bdc;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100d04bdc:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_100d04c0c;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100d04c0c:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_100d04c3c;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100d04c3c:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100d04c6c;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d04c6c:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return;
      }
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return;
}

