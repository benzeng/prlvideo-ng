
undefined8 FUN_10059deb0(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  QString::arg(&local_30,&local_38,param_1,0,0x20);
  local_40 = (QArrayData *)QString::fromAscii_helper("DiskDescriptor.xml",0x12);
  QString::arg(&local_28,&local_30,&local_40,0,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059df49;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10059df49:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059df79;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10059df79:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059dfa9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10059dfa9:
  local_58 = (QArrayData *)QString::fromAscii_helper("%1%2",4);
  QString::arg(&local_50,&local_58,&local_28,0,0x20);
  local_60 = (QArrayData *)QString::fromAscii_helper(".Backup",7);
  QString::arg(&local_48,&local_50,&local_60,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059e035;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10059e035:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059e065;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10059e065:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059e095;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10059e095:
  cVar2 = QFile::exists(&local_28);
  uVar3 = 0;
  if (cVar2 == '\0') {
    cVar2 = QFile::exists(&local_48);
    if (cVar2 == '\0') {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Failed to restore disk descryptor = bak file doesn\'t exist (%s)",
                    local_68 + *(long *)(local_68 + 0x10));
      uVar3 = 0x80021040;
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_19 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10059e2df;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
    else {
      cVar2 = QFile::rename(&local_48,&local_28);
      if (cVar2 == '\0') {
        QString::toUtf8();
        lVar1 = *(long *)(local_70 + 0x10);
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Failed to rename XML (%s-->%s)",local_70 + lVar1,
                      local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_19 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10059e1e7;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_10059e1e7:
        uVar3 = 0x80021040;
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_19 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10059e2df;
          }
          QArrayData::deallocate(local_70,1,8);
        }
      }
      else {
        cVar2 = QFile::copy(&local_28,&local_48);
        if (cVar2 != '\0') {
          FUN_100778630(&local_28,&local_48);
          goto LAB_10059e2df;
        }
        QString::toUtf8();
        lVar1 = *(long *)(local_80 + 0x10);
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Failed to create backup XML (%s-->%s)",local_80 + lVar1,
                      local_88 + *(long *)(local_88 + 0x10));
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_19 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10059e2aa;
          }
          QArrayData::deallocate(local_88,1,8);
        }
LAB_10059e2aa:
        uVar3 = 0x80021040;
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_19 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10059e2df;
          }
          QArrayData::deallocate(local_80,1,8);
        }
      }
    }
  }
LAB_10059e2df:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059e30f;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10059e30f:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar3;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar3;
}

