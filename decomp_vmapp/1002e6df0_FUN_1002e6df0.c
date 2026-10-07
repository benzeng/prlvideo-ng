
void FUN_1002e6df0(void)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  ulong uVar5;
  QString local_160;
  QFileInfo local_158 [8];
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  undefined1 local_120 [208];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar5 = 0;
  do {
    local_48 = (QArrayData *)QString::fromAscii_helper("devices.usb.msc%1",0x11);
    QString::arg(&local_40,&local_48,uVar5,0,10,0x20);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e6e83;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002e6e83:
    QString::toUtf8();
    pcVar2 = (char *)FUN_1007da5e0(local_50 + *(long *)(local_50 + 0x10),"");
    cVar1 = *pcVar2;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e6ed2;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1002e6ed2:
    if (cVar1 != '\0') {
      CHwHardDisk::CHwHardDisk((CHwHardDisk *)local_120);
      QString::toUtf8();
      pcVar2 = (char *)FUN_1007da5e0(local_130 + *(long *)(local_130 + 0x10),"");
      iVar4 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar3 = _strlen(pcVar2);
        iVar4 = (int)sVar3;
      }
      local_128 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar4);
      CHwHardDisk::setDeviceId((QTypedArrayData<unsigned_short> *)local_120);
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e6f74;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_1002e6f74:
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e6fad;
        }
        QArrayData::deallocate(local_130,1,8);
      }
LAB_1002e6fad:
      local_148 = (QArrayData *)QString::fromAscii_helper("USB MSC Test %1 (%2)",0x14);
      QString::arg(&local_140,&local_148,uVar5,0,10,0x20);
      CHwHardDisk::getDeviceId();
      QFileInfo::QFileInfo(local_158,&local_160);
      QFileInfo::fileName();
      QString::arg(&local_138,&local_140,&local_150,0,0x20);
      CHwHardDisk::setDeviceName((QTypedArrayData<unsigned_short> *)local_120);
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e707c;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_1002e707c:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e70b2;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_1002e70b2:
      QFileInfo::~QFileInfo(local_158);
      if (*(int *)local_160.field0_0x0 != -1) {
        if (*(int *)local_160.field0_0x0 != 0) {
          LOCK();
          *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
          local_31 = *(int *)local_160.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e70f0;
        }
        QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
      }
LAB_1002e70f0:
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e7126;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_1002e7126:
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e715c;
        }
        QArrayData::deallocate(local_148,2,8);
      }
LAB_1002e715c:
      FUN_1002bacc0(0,9,(QTypedArrayData<unsigned_short> *)local_120);
      CHwHardDisk::~CHwHardDisk((CHwHardDisk *)local_120);
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e71a3;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1002e71a3:
    uVar5 = uVar5 + 1;
    if (3 < uVar5) {
      return;
    }
  } while( true );
}

