
undefined8 * FUN_1004dc7d0(undefined8 *param_1,QString *param_2,undefined8 *param_3,uint param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  QArrayData *pQVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  QArrayData *local_428;
  QString local_420;
  QFileInfo local_418 [8];
  undefined *local_410;
  QDirIterator local_408 [8];
  QArrayData *local_400;
  QArrayData *local_3f8;
  QFileInfo local_3f0 [8];
  QArrayData *local_3e8;
  QString local_3e0;
  QString local_3d8;
  QString local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  QString local_3a8;
  QArrayData *local_3a0;
  QArrayData *local_398;
  QDir local_390 [15];
  undefined1 local_381;
  uint local_380 [6];
  int local_368 [4];
  byte local_358;
  uint local_340;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = PTR_shared_null_100ba2188;
  QDir::QDir(local_390,param_2);
  local_398 = (QArrayData *)*param_3;
  if (1 < *(uint *)local_398 + 1) {
    LOCK();
    *(uint *)local_398 = *(uint *)local_398 + 1;
    local_381 = *(uint *)local_398 != 0;
    UNLOCK();
  }
  if ((1 < *(uint *)local_398) || (*(long *)(local_398 + 0x10) != 0x18)) {
    QString::reallocData((uint)&local_398,(bool)((char)*(uint *)(local_398 + 4) + '\x01'));
  }
  lVar11 = (long)(int)*(uint *)(local_398 + 4) * 2;
  if (lVar11 != 0) {
    pQVar6 = local_398 + *(long *)(local_398 + 0x10);
    do {
      uVar2 = FUN_100541f50(*(undefined2 *)pQVar6);
      *(undefined2 *)pQVar6 = uVar2;
      pQVar6 = pQVar6 + 2;
      lVar11 = lVar11 + -2;
    } while (lVar11 != 0);
  }
  if ((param_4 & 4) != 0) {
    FUN_1004f5980(&local_3a0,param_2,&local_398);
    pQVar6 = local_398;
    local_398 = local_3a0;
    local_3a0 = pQVar6;
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_381 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_381) goto LAB_1004dc90b;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
  }
LAB_1004dc90b:
  QDir::absoluteFilePath(&local_3a8);
  uStack_3c0 = 0;
  local_3b8 = 0;
  local_3c8 = 0x8002400100000005;
  QString::toUtf8_helper(&local_3d0);
  iVar3 = _getattrlist((char *)(local_3d0.field0_0x0 + *(long *)(local_3d0.field0_0x0 + 0x10)),
                       &local_3c8,local_380,0x344,0xd);
  if (*(int *)local_3d0.field0_0x0 != -1) {
    if (*(int *)local_3d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3d0.field0_0x0 = *(int *)local_3d0.field0_0x0 + -1;
      local_381 = *(int *)local_3d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_381) goto LAB_1004dc9c7;
    }
    QArrayData::deallocate((QArrayData *)local_3d0.field0_0x0,1,8);
  }
LAB_1004dc9c7:
  if (iVar3 == -1) {
    piVar4 = ___error();
    if (((param_4 & 2) == 0) || (*piVar4 != 2)) goto LAB_1004dcecb;
    local_3f8 = (QArrayData *)QString::fromAscii_helper(".LNK",4);
    cVar1 = QString::endsWith(param_3,&local_3f8,0);
    if (*(int *)local_3f8 != -1) {
      if (*(int *)local_3f8 != 0) {
        LOCK();
        *(int *)local_3f8 = *(int *)local_3f8 + -1;
        local_381 = *(int *)local_3f8 != 0;
        UNLOCK();
        if ((bool)local_381) goto LAB_1004dcaef;
      }
      QArrayData::deallocate(local_3f8,2,8);
    }
LAB_1004dcaef:
    if (cVar1 == '\0') goto LAB_1004dcecb;
    local_400 = (QArrayData *)*param_3;
    if (1 < *(uint *)local_400 + 1) {
      LOCK();
      *(uint *)local_400 = *(uint *)local_400 + 1;
      local_381 = *(uint *)local_400 != 0;
      UNLOCK();
    }
    if ((DAT_1011bc0a0 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_1011bc0a0), iVar3 != 0)) {
      DAT_1011bc098 = QString::fromAscii_helper("[]",2);
      ___cxa_atexit(FUN_10002f530,&DAT_1011bc098,0x100000000);
      ___cxa_guard_release(&DAT_1011bc0a0);
    }
    uVar8 = *(uint *)(local_400 + 4);
    if (0 < (int)uVar8) {
      uVar5 = 0;
      do {
        uVar10 = (uint)&local_400;
        if ((1 < *(uint *)local_400) || (*(long *)(local_400 + 0x10) != 0x18)) {
          QString::reallocData(uVar10,(bool)((char)uVar8 + '\x01'));
        }
        if (*(short *)(local_400 + (long)(int)uVar5 * 2 + *(long *)(local_400 + 0x10)) == 0x5b) {
          QString::insert(uVar10,(QChar *)(ulong)(uVar5 + 1),
                          (int)*(undefined8 *)(DAT_1011bc098 + 0x10) + (int)DAT_1011bc098);
LAB_1004dcc00:
          uVar5 = uVar5 + 2;
        }
        else if (*(short *)(local_400 + (long)(int)uVar5 * 2 + *(long *)(local_400 + 0x10)) == 0x5d)
        {
          QString::insert(uVar10,(QChar *)(ulong)uVar5,
                          (int)*(undefined8 *)(DAT_1011bc098 + 0x10) + (int)DAT_1011bc098);
          goto LAB_1004dcc00;
        }
        uVar5 = uVar5 + 1;
        uVar8 = *(uint *)(local_400 + 4);
      } while ((int)uVar5 < (int)uVar8);
    }
    QString::chop((int)&local_400);
    local_410 = PTR_shared_null_100ba2188;
    FUN_10000c490(&local_410,&local_400);
    QDirIterator::QDirIterator(local_408,param_2,&local_410,(param_4 & 1) << 0xb | 0x6307,0);
    FUN_100013180(&local_410);
    cVar1 = QDirIterator::hasNext();
    if (cVar1 != '\0') {
      QDirIterator::next();
      QFileInfo::QFileInfo(local_418,&local_420);
      if (*(int *)local_420.field0_0x0 != -1) {
        if (*(int *)local_420.field0_0x0 != 0) {
          LOCK();
          *(int *)local_420.field0_0x0 = *(int *)local_420.field0_0x0 + -1;
          local_381 = *(int *)local_420.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_381) goto LAB_1004dccf6;
        }
        QArrayData::deallocate((QArrayData *)local_420.field0_0x0,2,8);
      }
LAB_1004dccf6:
      QFileInfo::readLink();
      iVar3 = *(int *)(local_428 + 4);
      if (*(int *)local_428 != -1) {
        if (*(int *)local_428 != 0) {
          LOCK();
          *(int *)local_428 = *(int *)local_428 + -1;
          local_381 = *(int *)local_428 != 0;
          UNLOCK();
          if ((bool)local_381) goto LAB_1004dcd48;
        }
        QArrayData::deallocate(local_428,2,8);
      }
LAB_1004dcd48:
      if (iVar3 != 0) {
        FUN_1004df720(param_1,local_418);
      }
      QFileInfo::~QFileInfo(local_418);
    }
    QDirIterator::~QDirIterator(local_408);
    if (*(uint *)local_400 != 0xffffffff) {
      local_3d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_400;
      if (*(uint *)local_400 == 0) {
LAB_1004dcebc:
        uVar9 = 2;
LAB_1004dcec1:
        QArrayData::deallocate((QArrayData *)local_3d8.field0_0x0,uVar9,8);
      }
      else {
        LOCK();
        *(uint *)local_400 = *(uint *)local_400 - 1;
        local_381 = *(uint *)local_400 != 0;
        UNLOCK();
        if (!(bool)local_381) {
          uVar9 = 2;
          goto LAB_1004dcec1;
        }
      }
    }
  }
  else if (local_380[0] < 0x345) {
    if (((local_340 & 0xf000) != 0xa000) && ((local_358 & 0x80) == 0)) {
      pcVar7 = (char *)((long)local_368 + (long)local_368[0]);
      if (pcVar7 != (char *)0x0) {
        _strlen(pcVar7);
      }
      QString::fromUtf8_helper((char *)&local_3e8,(int)pcVar7);
      QDir::absoluteFilePath(&local_3e0);
      if (*(int *)local_3e8 != -1) {
        if (*(int *)local_3e8 != 0) {
          LOCK();
          *(int *)local_3e8 = *(int *)local_3e8 + -1;
          local_381 = *(int *)local_3e8 != 0;
          UNLOCK();
          if ((bool)local_381) goto LAB_1004dce61;
        }
        QArrayData::deallocate(local_3e8,2,8);
      }
LAB_1004dce61:
      QFileInfo::QFileInfo(local_3f0,&local_3e0);
      FUN_1004df720(param_1,local_3f0);
      QFileInfo::~QFileInfo(local_3f0);
      if (*(uint *)local_3e0.field0_0x0 != 0xffffffff) {
        local_3d8.field0_0x0 = local_3e0.field0_0x0;
        if (*(uint *)local_3e0.field0_0x0 != 0) {
          LOCK();
          *(uint *)local_3e0.field0_0x0 = *(uint *)local_3e0.field0_0x0 - 1;
          local_381 = *(uint *)local_3e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_381) goto LAB_1004dcecb;
        }
        goto LAB_1004dcebc;
      }
    }
  }
  else if (2 < DAT_1011b55f8) {
    QString::toUtf8_helper(&local_3d8);
    FUN_1008e3970("","SharedFoldersHost",3,"Unexpected attrs size while getting attributes for %s",
                  (QArrayData *)(local_3d8.field0_0x0 + *(long *)(local_3d8.field0_0x0 + 0x10)));
    if (*(int *)local_3d8.field0_0x0 != -1) {
      if (*(int *)local_3d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_3d8.field0_0x0 = *(int *)local_3d8.field0_0x0 + -1;
        local_381 = *(int *)local_3d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_381) goto LAB_1004dcecb;
      }
      uVar9 = 1;
      goto LAB_1004dcec1;
    }
  }
LAB_1004dcecb:
  if (*(int *)local_3a8.field0_0x0 != -1) {
    if (*(int *)local_3a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_3a8.field0_0x0 = *(int *)local_3a8.field0_0x0 + -1;
      UNLOCK();
      local_380[0] = CONCAT31(local_380[0]._1_3_,*(int *)local_3a8.field0_0x0 != 0);
      if (*(int *)local_3a8.field0_0x0 != 0) goto LAB_1004dcf07;
    }
    QArrayData::deallocate((QArrayData *)local_3a8.field0_0x0,2,8);
  }
LAB_1004dcf07:
  if (*(int *)local_398 != -1) {
    if (*(int *)local_398 != 0) {
      LOCK();
      *(int *)local_398 = *(int *)local_398 + -1;
      UNLOCK();
      local_380[0] = CONCAT31(local_380[0]._1_3_,*(int *)local_398 != 0);
      if (*(int *)local_398 != 0) goto LAB_1004dcf43;
    }
    QArrayData::deallocate(local_398,2,8);
  }
LAB_1004dcf43:
  QDir::~QDir(local_390);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

