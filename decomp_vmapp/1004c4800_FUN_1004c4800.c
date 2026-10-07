
bool FUN_1004c4800(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  char cVar2;
  long lVar3;
  QArrayData *pQVar4;
  bool bVar5;
  QVariant local_80 [16];
  QMapNodeBase *local_70;
  char local_61;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QFile local_40 [16];
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100507c20(&local_50);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_21 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0xa3a148);
  QString::append(&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c4884;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004c4884:
  QFile::QFile(local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c48c1;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004c48c1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c48f1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004c48f1:
  cVar2 = QFile::open(local_40,1);
  if (cVar2 == '\0') {
    bVar5 = false;
    goto LAB_1004c4a54;
  }
  QIODevice::read((longlong)&local_58);
  bVar5 = false;
  if (*(int *)(local_58 + 4) != 0) {
    pQVar4 = local_58 + *(long *)(local_58 + 0x10);
    if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_58 + 4) != 0)) {
      lVar3 = 0;
      do {
        if (pQVar4[lVar3] == (QArrayData)0x0) break;
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(local_58 + 4));
      if ((int)lVar3 == -1) {
        _strlen((char *)pQVar4);
      }
    }
    QString::fromUtf8_helper((char *)&local_60,(int)pQVar4);
    local_61 = '\0';
    FUN_1008e5940(local_80,&local_60,&local_61);
    QVariant::toMap();
    pQVar1 = (QMapNodeBase *)*param_1;
    *param_1 = local_70;
    local_70 = pQVar1;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_21 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004c49e0;
      }
      if (*(long *)(pQVar1 + 0x10) != 0) {
        FUN_1004a11c0();
        QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
    }
LAB_1004c49e0:
    QVariant::~QVariant(local_80);
    bVar5 = local_61 != '\0';
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004c4a20;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1004c4a20:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c4a54;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1004c4a54:
  QFile::~QFile(local_40);
  return bVar5;
}

