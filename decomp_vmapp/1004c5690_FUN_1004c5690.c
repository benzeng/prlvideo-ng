
bool FUN_1004c5690(QString *param_1)

{
  char cVar1;
  long lVar2;
  QArrayData *pQVar3;
  bool bVar4;
  QString local_60;
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
  QString::fromUtf8_helper((char *)&local_30,0xa3a0a0);
  QString::append(&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c5714;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004c5714:
  QFile::QFile(local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c5751;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004c5751:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c5781;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004c5781:
  cVar1 = QFile::open(local_40,1);
  if (cVar1 == '\0') {
    bVar4 = false;
    goto LAB_1004c587c;
  }
  QIODevice::read((longlong)&local_58);
  bVar4 = false;
  if (*(int *)(local_58 + 4) != 0) {
    pQVar3 = local_58 + *(long *)(local_58 + 0x10);
    if ((pQVar3 != (QArrayData *)0x0) && (*(uint *)(local_58 + 4) != 0)) {
      lVar2 = 0;
      do {
        if (pQVar3[lVar2] == (QArrayData)0x0) break;
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(local_58 + 4));
      if ((int)lVar2 == -1) {
        _strlen((char *)pQVar3);
      }
    }
    QString::fromUtf8_helper((char *)&local_60,(int)pQVar3);
    bVar4 = *(int *)(local_60.field0_0x0 + 4) != 0;
    if (bVar4) {
      QString::operator=(param_1,&local_60);
    }
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004c584c;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1004c584c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c587c;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1004c587c:
  QFile::~QFile(local_40);
  return bVar4;
}

