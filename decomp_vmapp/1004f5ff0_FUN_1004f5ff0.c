
void FUN_1004f5ff0(void)

{
  long lVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  QArrayData *pQVar6;
  QArrayData *local_4e0;
  QString local_4d8;
  long local_4d0 [2];
  QArrayData *local_4c0;
  QString local_4b8;
  QArrayData *local_4b0;
  QString local_4a8;
  QArrayData *local_4a0;
  QString local_498;
  QArrayData *local_490;
  QArrayData *local_488;
  undefined1 local_479;
  char local_478 [1024];
  undefined1 local_78 [80];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  if (*(int *)(DAT_1011bc240 + 4) != 0) goto LAB_1004f6593;
  iVar5 = _LSFindApplicationForInfo(0,&cf_com_parallels_desktop_console,0,local_78,0);
  pQVar6 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (iVar5 == 0) {
    iVar5 = _FSRefMakePath(local_78,local_478,0x400);
    pQVar6 = (QArrayData *)PTR_shared_null_100ba20d0;
    if (iVar5 == 0) {
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("SharedLinkFile","SharedFoldersHost",3,
                      "Parallels Desktop application found: \"%s\"",local_478);
      }
      _strlen(local_478);
      QString::fromUtf8_helper((char *)&local_490,(int)local_478);
      QString::normalized(&local_488,&local_490,1,0);
      pQVar6 = local_488;
      puVar2 = PTR_shared_null_100ba20d0;
      local_488 = (QArrayData *)PTR_shared_null_100ba20d0;
      if (*(int *)PTR_shared_null_100ba20d0 != -1) {
        if (*(int *)PTR_shared_null_100ba20d0 != 0) {
          LOCK();
          *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
          local_479 = *(int *)puVar2 != 0;
          UNLOCK();
          if ((bool)local_479) goto LAB_1004f618b;
        }
        QArrayData::deallocate((QArrayData *)puVar2,2,8);
      }
LAB_1004f618b:
      if (*(int *)local_490 != -1) {
        if (*(int *)local_490 != 0) {
          LOCK();
          *(int *)local_490 = *(int *)local_490 + -1;
          local_479 = *(int *)local_490 != 0;
          UNLOCK();
          if ((bool)local_479) goto LAB_1004f61c7;
        }
        QArrayData::deallocate(local_490,2,8);
      }
    }
    else if (0 < DAT_1011b55f8) {
      FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                    "Warning: FSRefMakePath() failed for found Parallels Desktop path");
    }
  }
  else if (0 < DAT_1011b55f8) {
    FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                  "LSFindApplicationForInfo() failed with error %d",iVar5);
  }
LAB_1004f61c7:
  pQVar3 = DAT_1011bc240;
  if (*(int *)DAT_1011bc240 != -1) {
    if (*(int *)DAT_1011bc240 != 0) {
      LOCK();
      *(int *)DAT_1011bc240 = *(int *)DAT_1011bc240 + -1;
      DAT_1011bc240 = pQVar6;
      local_479 = *(int *)pQVar3 != 0;
      UNLOCK();
      pQVar6 = DAT_1011bc240;
      if ((bool)local_479) goto LAB_1004f6203;
    }
    DAT_1011bc240 = pQVar6;
    QArrayData::deallocate(pQVar3,2,8);
    pQVar6 = DAT_1011bc240;
  }
LAB_1004f6203:
  DAT_1011bc240 = pQVar6;
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getHostSharing();
    DAT_10111cec8 = CVmHostSharing::isSharedShortcuts();
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmUuid();
    QString::toUtf8_helper(&local_498);
    QByteArray::operator=
              ((QByteArray *)&DAT_1011bc248,
               (char *)(local_498.field0_0x0 + *(long *)(local_498.field0_0x0 + 0x10)));
    if (*(int *)local_498.field0_0x0 != -1) {
      if (*(int *)local_498.field0_0x0 != 0) {
        LOCK();
        *(int *)local_498.field0_0x0 = *(int *)local_498.field0_0x0 + -1;
        local_479 = *(int *)local_498.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_479) goto LAB_1004f62ca;
      }
      QArrayData::deallocate((QArrayData *)local_498.field0_0x0,1,8);
    }
LAB_1004f62ca:
    if (*(int *)local_4a0 != -1) {
      if (*(int *)local_4a0 != 0) {
        LOCK();
        *(int *)local_4a0 = *(int *)local_4a0 + -1;
        local_479 = *(int *)local_4a0 != 0;
        UNLOCK();
        if ((bool)local_479) goto LAB_1004f6306;
      }
      QArrayData::deallocate(local_4a0,2,8);
    }
LAB_1004f6306:
    CVmIdentification::getHomePath();
    QString::toUtf8_helper(&local_4a8);
    QByteArray::operator=
              ((QByteArray *)&DAT_1011bc250,
               (char *)(local_4a8.field0_0x0 + *(long *)(local_4a8.field0_0x0 + 0x10)));
    if (*(int *)local_4a8.field0_0x0 != -1) {
      if (*(int *)local_4a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_4a8.field0_0x0 = *(int *)local_4a8.field0_0x0 + -1;
        local_479 = *(int *)local_4a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_479) goto LAB_1004f637a;
      }
      QArrayData::deallocate((QArrayData *)local_4a8.field0_0x0,1,8);
    }
LAB_1004f637a:
    if (*(int *)local_4b0 != -1) {
      if (*(int *)local_4b0 != 0) {
        LOCK();
        *(int *)local_4b0 = *(int *)local_4b0 + -1;
        local_479 = *(int *)local_4b0 != 0;
        UNLOCK();
        if ((bool)local_479) goto LAB_1004f63b6;
      }
      QArrayData::deallocate(local_4b0,2,8);
    }
LAB_1004f63b6:
    CVmIdentification::getVmName();
    QString::toUtf8_helper(&local_4b8);
    QByteArray::operator=
              ((QByteArray *)&DAT_1011bc258,
               (char *)(local_4b8.field0_0x0 + *(long *)(local_4b8.field0_0x0 + 0x10)));
    if (*(int *)local_4b8.field0_0x0 != -1) {
      if (*(int *)local_4b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_4b8.field0_0x0 = *(int *)local_4b8.field0_0x0 + -1;
        local_479 = *(int *)local_4b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_479) goto LAB_1004f642a;
      }
      QArrayData::deallocate((QArrayData *)local_4b8.field0_0x0,1,8);
    }
LAB_1004f642a:
    if (*(int *)local_4c0 != -1) {
      if (*(int *)local_4c0 != 0) {
        LOCK();
        *(int *)local_4c0 = *(int *)local_4c0 + -1;
        local_479 = *(int *)local_4c0 != 0;
        UNLOCK();
        if ((bool)local_479) goto LAB_1004f6466;
      }
      QArrayData::deallocate(local_4c0,2,8);
    }
  }
LAB_1004f6466:
  local_4d8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(":favAppLink256.png",0x12);
  QFile::QFile((QFile *)local_4d0,&local_4d8);
  if (*(int *)local_4d8.field0_0x0 != -1) {
    if (*(int *)local_4d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4d8.field0_0x0 = *(int *)local_4d8.field0_0x0 + -1;
      local_479 = *(int *)local_4d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_479) goto LAB_1004f64cd;
    }
    QArrayData::deallocate((QArrayData *)local_4d8.field0_0x0,2,8);
  }
LAB_1004f64cd:
  cVar4 = QFile::open(local_4d0,1);
  if (cVar4 == '\0') {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                    "Unable to open file with overlay link icon");
    }
  }
  else {
    QIODevice::readAll();
    FUN_100508170(&DAT_1011bc260,&local_4e0);
    if (*(int *)local_4e0 != -1) {
      if (*(int *)local_4e0 != 0) {
        LOCK();
        *(int *)local_4e0 = *(int *)local_4e0 + -1;
        local_479 = *(int *)local_4e0 != 0;
        UNLOCK();
        if ((bool)local_479) goto LAB_1004f6544;
      }
      QArrayData::deallocate(local_4e0,1,8);
    }
LAB_1004f6544:
    (**(code **)(local_4d0[0] + 0x70))(local_4d0);
  }
  QFile::~QFile((QFile *)local_4d0);
LAB_1004f6593:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

