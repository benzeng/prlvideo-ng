
undefined1 FUN_100da39a0(QString *param_1,QString *param_2,code *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  QArrayData *pQVar6;
  long lVar7;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QFile local_50 [16];
  QCryptographicHash local_40 [15];
  undefined1 local_31;
  
  QCryptographicHash::QCryptographicHash(local_40,1);
  QFile::QFile(local_50,param_1);
  cVar1 = QFile::open(local_50,1);
  if (cVar1 == '\0') {
    uVar4 = 0;
    goto LAB_100da3c38;
  }
  for (lVar5 = 0; lVar3 = QFile::size(), lVar5 < lVar3; lVar5 = lVar5 + lVar7) {
    if ((param_3 != (code *)0x0) && (iVar2 = (*param_3)(param_4), 0 < iVar2)) {
      uVar4 = 0;
      goto LAB_100da3c38;
    }
    lVar3 = QFile::size();
    lVar7 = 0x1000000;
    if (lVar3 < lVar5 + 0x1000000) {
      lVar7 = QFile::size();
      lVar7 = lVar7 - lVar5;
    }
    lVar3 = QFileDevice::map(local_50,lVar5,lVar7);
    if (lVar3 == 0) {
      uVar4 = 0;
      goto LAB_100da3c38;
    }
    QCryptographicHash::addData((char *)local_40,(int)lVar3);
    QFileDevice::unmap((uchar *)local_50);
  }
  QCryptographicHash::result();
  QByteArray::toHex();
  pQVar6 = local_70 + *(long *)(local_70 + 0x10);
  if ((pQVar6 != (QArrayData *)0x0) && (*(uint *)(local_70 + 4) != 0)) {
    lVar5 = 0;
    do {
      if (pQVar6[lVar5] == (QArrayData)0x0) break;
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < *(uint *)(local_70 + 4));
    if ((int)lVar5 == -1) {
      _strlen((char *)pQVar6);
    }
  }
  QString::fromUtf8_helper((char *)&local_68,(int)pQVar6);
  QString::normalized(&local_60,&local_68,1,0);
  QString::toLower();
  QString::operator=(param_2,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da3b66;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100da3b66:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da3b96;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100da3b96:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da3bc6;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100da3bc6:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da3bf6;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_100da3bf6:
  uVar4 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da3c38;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100da3c38:
  QFile::~QFile(local_50);
  QCryptographicHash::~QCryptographicHash(local_40);
  return uVar4;
}

