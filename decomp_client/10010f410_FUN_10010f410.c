
void FUN_10010f410(QString *param_1,QString *param_2,int param_3,char param_4)

{
  ushort uVar1;
  int iVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QDir local_50 [8];
  QFileInfo local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::simplified();
  iVar2 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010f46c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10010f46c:
  if (iVar2 == 0) {
    return;
  }
  if ((param_4 != '\0') && (cVar5 = FUN_10010f190(param_1), cVar5 != '\0')) {
    return;
  }
  if (param_3 == 2) {
    pQVar3 = param_1->field0_0x0;
    if (1 < *(int *)(pQVar3 + 4)) {
      lVar4 = *(long *)(pQVar3 + 0x10);
      uVar1 = *(ushort *)(pQVar3 + lVar4);
      if ((((uVar1 - 0x41 < 0x3a) && (5 < uVar1 - 0x5b)) ||
          ((0x7f < uVar1 && (cVar5 = QChar::isLetter_helper((uint)uVar1), cVar5 != '\0')))) &&
         (bVar6 = true, *(short *)(pQVar3 + lVar4 + 2) == 0x3a)) goto LAB_10010f4f5;
    }
    if (*(short *)(pQVar3 + *(long *)(pQVar3 + 0x10)) == 0x2f) {
      bVar6 = *(short *)(pQVar3 + *(long *)(pQVar3 + 0x10) + 2) == 0x2f;
    }
    else {
      bVar6 = false;
    }
  }
  else {
    bVar6 = false;
  }
LAB_10010f4f5:
  QFileInfo::QFileInfo(local_48,param_1);
  cVar5 = QFileInfo::isRelative();
  if (!bVar6 && cVar5 == '\x01') {
    QDir::QDir(local_50,param_2);
    QDir::filePath(&local_58);
    QString::operator=(param_1,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010f60b;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10010f60b:
    QDir::cleanPath(&local_60);
    QString::operator=(param_1,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010f653;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_10010f653:
    QDir::fromNativeSeparators(&local_68);
    QString::operator=(param_1,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10010f69b;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10010f69b:
    QDir::~QDir(local_50);
    goto LAB_10010f6a4;
  }
  QDir::cleanPath(&local_70);
  QString::operator=(param_1,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010f55e;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10010f55e:
  QDir::fromNativeSeparators(&local_78);
  QString::operator=(param_1,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010f6a4;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10010f6a4:
  QFileInfo::~QFileInfo(local_48);
  return;
}

