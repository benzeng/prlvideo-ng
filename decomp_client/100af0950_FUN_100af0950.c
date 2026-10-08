
void FUN_100af0950(int param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  Data *pDVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100df99c0("","pvsHostInfo",0,"Level %u\n",param_1);
  puVar11 = (uint *)*param_2;
  if (1 < *puVar11) {
    uVar2 = puVar11[2];
    pDVar6 = (Data *)QListData::detach((int)param_2);
    lVar4 = *param_2;
    lVar8 = (long)*(int *)(lVar4 + 8);
    if ((puVar11 + (long)(int)uVar2 * 2 != (uint *)(lVar4 + lVar8 * 8)) &&
       (lVar9 = *(int *)(lVar4 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(lVar4 + 0xc))) {
      _memcpy((void *)(lVar4 + 0x10 + lVar8 * 8),puVar11 + (long)(int)uVar2 * 2 + 4,lVar9 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_31 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100af09f8;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100af09f8:
  puVar11 = (uint *)*param_2;
  uVar2 = puVar11[2];
  puVar10 = puVar11 + (long)(int)uVar2 * 2 + 4;
  if (1 < *puVar11) {
    pDVar6 = (Data *)QListData::detach((int)param_2);
    lVar4 = *param_2;
    lVar8 = (long)*(int *)(lVar4 + 8);
    puVar1 = (uint *)(lVar4 + 0x10 + lVar8 * 8);
    if ((puVar10 != puVar1) &&
       (lVar9 = *(int *)(lVar4 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(lVar4 + 0xc))) {
      _memcpy(puVar1,puVar10,lVar9 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_31 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100af0a65;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100af0a65:
  lVar4 = *param_2;
  iVar3 = *(int *)(lVar4 + 0xc);
  if (puVar10 != (uint *)(lVar4 + 0x10 + (long)iVar3 * 8)) {
    puVar11 = puVar11 + (long)(int)uVar2 * 2;
    iVar12 = 0;
    do {
      FUN_100df99c0("","pvsHostInfo",0,"Partition %u",iVar12);
      lVar8 = *(long *)puVar10;
      CHwHddPartition::getName();
      QString::toUtf8();
      if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
      }
      FUN_100df99c0("","pvsHostInfo",0,"Name: %s",local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af0b54;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_100af0b54:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af0b84;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100af0b84:
      CHwHddPartition::getSystemName();
      QString::toUtf8();
      if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
      }
      FUN_100df99c0("","pvsHostInfo",0,"System Name: %s",local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af0c18;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_100af0c18:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af0c48;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100af0c48:
      uVar5 = CHwHddPartition::getIndex();
      FUN_100df99c0("","pvsHostInfo",0,"Index %u",uVar5);
      uVar7 = CHwHddPartition::getSize();
      FUN_100df99c0("","pvsHostInfo",0,"Size %llu",uVar7);
      uVar5 = CHwHddPartition::getType();
      FUN_100df99c0("","pvsHostInfo",0,"Type %u",uVar5);
      uVar5 = CHwHddPartition::getIsActive();
      FUN_100df99c0("","pvsHostInfo",0,"Active %u",uVar5);
      lVar9 = *(long *)(lVar8 + 0xa8);
      if (*(int *)(lVar9 + 0xc) != *(int *)(lVar9 + 8)) {
        FUN_100af0950(param_1 + 1,lVar8 + 0xa8);
        FUN_100df99c0("","pvsHostInfo",0,"Returned to level %u\n",param_1);
      }
      iVar12 = iVar12 + 1;
      puVar10 = puVar11 + 6;
      puVar11 = puVar11 + 2;
    } while ((uint *)(lVar4 + (long)iVar3 * 8) != puVar11);
  }
  return;
}

