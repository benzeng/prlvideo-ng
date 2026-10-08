
undefined8 * FUN_100dc1460(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *pQVar6;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QProcess local_b8 [16];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60 [2];
  QString local_50;
  char local_41;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_41 = '\0';
  local_30 = lVar1;
  iVar3 = FUN_100dfb040(&local_41);
  if ((iVar3 == 0) && (local_41 != '\0')) {
    uVar4 = QString::fromAscii_helper("",0);
    *param_1 = uVar4;
    goto LAB_100dc1b9b;
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QTemporaryFile::QTemporaryFile((QTemporaryFile *)local_60);
  local_78 = (QArrayData *)QString::fromAscii_helper("%1/spindump.%2",0xe);
  QDir::tempPath();
  QString::arg(&local_70,&local_78,&local_80,0,0x20);
  FUN_100dda3c0(local_40);
  FUN_100dda260(&local_88,local_40);
  QString::arg(&local_68,&local_70,&local_88,0,0x20);
  QFile::setFileName(local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_41 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100dc1567;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100dc1567:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_41 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100dc1597;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100dc1597:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_41 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100dc15c7;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100dc15c7:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_41 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100dc15f7;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100dc15f7:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_41 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100dc1627;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100dc1627:
  local_98 = (QArrayData *)QString::fromAscii_helper("spindump -notarget 1 10 -file %11",0x21);
  QTemporaryFile::fileName();
  QString::arg(&local_90,&local_98,&local_a0,0,0x20);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_41 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100dc16a7;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100dc16a7:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_41 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100dc16dd;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100dc16dd:
  if ((0 < DAT_10230ffd0) &&
     (FUN_100df99c0("","HostUtils",1,"spindump() started."), 2 < DAT_10230ffd0)) {
    QString::toUtf8();
    FUN_100df99c0("","HostUtils",3,"spindump() params: %s",local_a8 + *(long *)(local_a8 + 0x10));
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_41 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_41) goto LAB_100dc178c;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
  }
LAB_100dc178c:
  QProcess::QProcess(local_b8,(QObject *)0x0);
  QProcess::start(local_b8,&local_90,3);
  cVar2 = QProcess::waitForStarted((int)local_b8);
  if (cVar2 == '\0') {
    FUN_100df99c0("","HostUtils",0,"spindump() doesn\'t started!");
  }
  cVar2 = QProcess::waitForFinished((int)local_b8);
  if (cVar2 == '\0') {
    FUN_100df99c0("","HostUtils",0,"spindump() doesn\'t finished in %d secs. it will be killed.",
                  60000);
    QProcess::terminate();
    _usleep(1000000);
    QProcess::kill();
LAB_100dc1866:
    QProcess::readAllStandardOutput();
    if ((1 < *(uint *)local_c0) || (*(long *)(local_c0 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_c0,*(uint *)(local_c0 + 4) + 1,*(uint *)(local_c0 + 8) >> 0x1f)
      ;
    }
    pQVar6 = local_c0 + *(long *)(local_c0 + 0x10);
    QProcess::readAllStandardError();
    if ((1 < *(uint *)local_c8) || (*(long *)(local_c8 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_c8,*(uint *)(local_c8 + 4) + 1,*(uint *)(local_c8 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","HostUtils",0,"spindump() errors: stdout:%s, stderr:%s",pQVar6,
                  local_c8 + *(long *)(local_c8 + 0x10));
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_41 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_41) goto LAB_100dc1953;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
LAB_100dc1953:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_41 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_41) goto LAB_100dc1989;
      }
      QArrayData::deallocate(local_c0,1,8);
    }
  }
  else {
    iVar3 = QProcess::exitStatus();
    if ((iVar3 == 1) || (iVar3 = QProcess::exitCode(), iVar3 != 0)) goto LAB_100dc1866;
  }
LAB_100dc1989:
  cVar2 = (**(code **)(local_60[0].field0_0x0 + 0x68))(local_60,3);
  if (cVar2 != '\0') {
    QIODevice::read((longlong)&local_e0);
    pQVar6 = local_e0 + *(long *)(local_e0 + 0x10);
    if ((pQVar6 != (QArrayData *)0x0) && (*(uint *)(local_e0 + 4) != 0)) {
      lVar5 = 0;
      do {
        if (pQVar6[lVar5] == (QArrayData)0x0) break;
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(local_e0 + 4));
      if ((int)lVar5 == -1) {
        _strlen((char *)pQVar6);
      }
    }
    QString::fromUtf8_helper((char *)&local_d8,(int)pQVar6);
    QString::normalized(&local_d0,&local_d8,1,0);
    QString::append(&local_50);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_41 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_41) goto LAB_100dc1a6c;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100dc1a6c:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_41 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_41) goto LAB_100dc1aa2;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_100dc1aa2:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_41 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_41) goto LAB_100dc1ad8;
      }
      QArrayData::deallocate(local_e0,1,8);
    }
  }
LAB_100dc1ad8:
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("","HostUtils",1,"spindump() finished. dump_size = %d",
                  *(int *)(local_50.field0_0x0 + 4));
  }
  *param_1 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_41 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QProcess::~QProcess(local_b8);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_41 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100dc1b62;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100dc1b62:
  QTemporaryFile::~QTemporaryFile((QTemporaryFile *)local_60);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_41 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_100dc1b9b;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100dc1b9b:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

