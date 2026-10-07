
undefined1 FUN_1006df1a0(void)

{
  int iVar1;
  QArrayData *pQVar2;
  bool bVar3;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  QDir local_38 [8];
  QArrayData *local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  if (DAT_1011bd25a != '\0') {
    return DAT_1011bd25b;
  }
  DAT_1011bd25a = 1;
  QCoreApplication::applicationDirPath();
  QDir::QDir(local_38,&local_20);
  QDir::absolutePath();
  QDir::toNativeSeparators(&local_28);
  QString::operator=(&local_20,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006df22d;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1006df22d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006df25d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006df25d:
  QDir::~QDir(local_38);
  local_48 = (QArrayData *)QString::fromAscii_helper("z-Build/Release",0xf);
  QDir::toNativeSeparators(&local_40);
  iVar1 = QString::indexOf(&local_20,&local_40,0,1);
  bVar3 = true;
  if (iVar1 == -1) {
    pQVar2 = (QArrayData *)QString::fromAscii_helper("z-Build/Debug",0xd);
    QDir::toNativeSeparators(&local_50);
    iVar1 = QString::indexOf(&local_20,&local_50,0,1);
    bVar3 = iVar1 != -1;
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_11 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1006df313;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1006df313:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_11 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1006df343;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1006df343:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_11 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006df373;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006df373:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006df3a3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006df3a3:
  DAT_1011bd25b = bVar3;
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return DAT_1011bd25b;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return DAT_1011bd25b;
}

