
void FUN_1001d1f10(long param_1)

{
  char cVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *local_a8;
  QFileInfo local_a0 [8];
  QString local_98;
  QString local_90;
  AnonymousUnion0 local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  AnonymousUnion0 local_58;
  QString local_50;
  QFileInfo local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("/Contents/MacOS",0xf);
  iVar2 = QString::lastIndexOf((QString *)(param_1 + 0x40),&local_40,0xffffffff,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001d1f91;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001d1f91:
  if (iVar2 != -1) {
    QString::left((int)&local_50);
    QFileInfo::QFileInfo(local_48,&local_50);
    cVar1 = QFileInfo::isBundle();
    QFileInfo::~QFileInfo(local_48);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001d1ffd;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1001d1ffd:
    if (cVar1 != '\0') {
      local_58.field1 = (Data *)PTR_shared_null_1021e15e8;
      pQVar3 = (QArrayData *)QString::fromAscii_helper("-n",2);
      local_60 = pQVar3;
      FUN_1000341d0(&local_58,&local_60);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001d2067;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_1001d2067:
      QString::left((int)&local_68);
      FUN_1000341d0(&local_58,&local_68);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001d20b6;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1001d20b6:
      if (*(int *)(*(long *)(param_1 + 0x48) + 0xc) != *(int *)(*(long *)(param_1 + 0x48) + 8)) {
        pQVar3 = (QArrayData *)QString::fromAscii_helper("--args",6);
        local_70 = pQVar3;
        FUN_1000341d0(&local_58,&local_70);
        FUN_1001d3590(&local_58,param_1 + 0x48);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001d2129;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
      }
LAB_1001d2129:
      if (1 < DAT_10230ffd0) {
        QString::toUtf8();
        pQVar4 = local_78 + *(long *)(local_78 + 0x10);
        pQVar3 = (QArrayData *)QString::fromAscii_helper(" ",1);
        QtPrivate::QStringList_join
                  ((QStringList *)&local_88.field0,(QChar *)&local_58,
                   (int)*(undefined8 *)(pQVar3 + 0x10) + (int)pQVar3);
        QString::toUtf8();
        FUN_100df99c0("[APP_QUIT]","prl_client_app",2,
                      "About to restart application [%s] with command [open %s]",pQVar4,
                      local_80 + *(long *)(local_80 + 0x10));
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001d21e7;
          }
          QArrayData::deallocate(local_80,1,8);
        }
LAB_1001d21e7:
        if (*(int *)local_88.field1 != -1) {
          if (*(int *)local_88.field1 != 0) {
            LOCK();
            *(int *)local_88.field1 = *(int *)local_88.field1 + -1;
            local_31 = *(int *)local_88.field1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001d2217;
          }
          QArrayData::deallocate((QArrayData *)local_88.field1,2,8);
        }
LAB_1001d2217:
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001d2246;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_1001d2246:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001d2279;
          }
          QArrayData::deallocate(local_78,1,8);
        }
      }
LAB_1001d2279:
      local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("open",4);
      QFileInfo::QFileInfo(local_a0,(QString *)(param_1 + 0x40));
      QFileInfo::absolutePath();
      cVar1 = QProcess::startDetached
                        (&local_90,(QStringList *)&local_58.field0,&local_98,(longlong *)0x0);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001d2307;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_1001d2307:
      QFileInfo::~QFileInfo(local_a0);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001d2349;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_1001d2349:
      FUN_100039a80(&local_58);
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_1001d23ca;
    }
  }
  QString::toUtf8();
  FUN_100df99c0("[APP_QUIT]","prl_client_app",0,"Can\'t find bundle in [%s]",
                local_a8 + *(long *)(local_a8 + 0x10));
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001d23ca;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_1001d23ca:
  FUN_100df99c0("[APP_QUIT]","prl_client_app",0,"Failed to restart self");
  return;
}

