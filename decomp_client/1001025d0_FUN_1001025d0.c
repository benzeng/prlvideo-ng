
void FUN_1001025d0(char *param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  FILE *pFVar7;
  int *piVar8;
  undefined4 *puVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  QArrayData *pQVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  char *local_770;
  undefined8 local_768;
  undefined8 uStack_760;
  char *local_758;
  char local_748 [24];
  string local_730;
  undefined1 local_72f [15];
  undefined1 *local_720;
  undefined1 local_718 [144];
  string local_688;
  char local_687 [15];
  char *local_678;
  string local_670;
  char local_66f [15];
  char *local_660;
  char *local_658;
  char *pcStack_650;
  char *local_648;
  undefined8 local_638;
  ulong uStack_630;
  void *local_628;
  QArrayData *local_618;
  QString local_610;
  QArrayData *local_608;
  QArrayData *local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  long local_5e8;
  QString local_5e0;
  QArrayData *local_5d8;
  QString local_5d0;
  QArrayData *local_5c8;
  QString local_5c0;
  long local_5b8 [2];
  QString local_5a8;
  QString local_5a0;
  QArrayData *local_598;
  QString local_590;
  QString local_588;
  QString local_580;
  QString local_578;
  QString local_570;
  QArrayData *local_568;
  QArrayData *local_560;
  QArrayData *local_558;
  QArrayData *local_550;
  QArrayData *local_548;
  QArrayData *local_540;
  QArrayData *local_538;
  QArrayData *local_530;
  QArrayData *local_528;
  QArrayData *local_520;
  QArrayData *local_518;
  QArrayData *local_510;
  string local_508;
  undefined1 local_507 [15];
  undefined1 *local_4f8;
  string local_4f0 [8];
  ulong local_4e8;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  long local_4b8;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  long local_498;
  undefined8 local_488;
  undefined8 uStack_480;
  char *local_478;
  QString local_470;
  QFileInfo local_468 [8];
  QDir local_460 [8];
  QArrayData *local_458;
  QString local_450;
  QString local_448;
  bool local_439;
  char local_438 [1024];
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar11;
  FUN_100104f20(&local_688);
  pcVar5 = local_678;
  if (((byte)local_688 & 1) == 0) {
    pcVar5 = local_687;
  }
  _strlen(pcVar5);
  std::string::__init((char *)&local_730,(ulong)pcVar5);
  std::string::append((char *)&local_730);
  if (((byte)local_730 & 1) == 0) {
    local_720 = local_72f;
  }
  iVar3 = _stat_INODE64(local_720,local_718);
  if (iVar3 == 0) {
    FUN_100104d80(param_2);
  }
  pcVar5 = local_678;
  if (((byte)local_688 & 1) == 0) {
    pcVar5 = local_687;
  }
  iVar3 = _stat_INODE64(pcVar5,local_718);
  if (iVar3 == 0) goto LAB_100103ce7;
  local_748[0] = '\0';
  local_748[1] = '\0';
  local_748[2] = '\0';
  local_748[3] = '\0';
  local_748[4] = '\0';
  local_748[5] = '\0';
  local_748[6] = '\0';
  local_748[7] = '\0';
  local_748[8] = '\0';
  local_748[9] = '\0';
  local_748[10] = '\0';
  local_748[0xb] = '\0';
  local_748[0xc] = '\0';
  local_748[0xd] = '\0';
  local_748[0xe] = '\0';
  local_748[0xf] = '\0';
  local_748[0x10] = '\0';
  local_748[0x11] = '\0';
  local_748[0x12] = '\0';
  local_748[0x13] = '\0';
  local_748[0x14] = '\0';
  local_748[0x15] = '\0';
  local_748[0x16] = '\0';
  local_748[0x17] = '\0';
  local_638 = 0;
  uStack_630 = 0;
  local_628 = (void *)0x0;
  pcVar5 = _getenv("TMPDIR");
  if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
    sVar6 = _confstr(0x10001,local_438,0x400);
    if (((int)(uint)sVar6 < 1) || ((0x400 < (uint)sVar6 || (local_438[0] == '\0')))) {
      QDir::tempPath();
      local_610.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_618;
      if (1 < *(int *)local_618 + 1U) {
        LOCK();
        *(int *)local_618 = *(int *)local_618 + 1;
        local_439 = *(int *)local_618 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_600,0x1e2468c);
      QString::append(&local_610);
      if (*(int *)local_600 != -1) {
        if (*(int *)local_600 != 0) {
          LOCK();
          *(int *)local_600 = *(int *)local_600 + -1;
          local_439 = *(int *)local_600 != 0;
          UNLOCK();
          if (local_439) goto LAB_1001027d4;
        }
        QArrayData::deallocate(local_600,2,8);
      }
LAB_1001027d4:
      QString::toUtf8();
      std::string::assign((char *)&local_638);
      if (*(int *)local_608 != -1) {
        if (*(int *)local_608 != 0) {
          LOCK();
          *(int *)local_608 = *(int *)local_608 + -1;
          UNLOCK();
          local_439 = *(int *)local_608 != 0;
          if (*(int *)local_608 != 0) goto LAB_10010283a;
        }
        QArrayData::deallocate(local_608,1,8);
      }
LAB_10010283a:
      if (*(int *)local_610.field0_0x0 != -1) {
        if (*(int *)local_610.field0_0x0 != 0) {
          LOCK();
          *(int *)local_610.field0_0x0 = *(int *)local_610.field0_0x0 + -1;
          UNLOCK();
          local_439 = *(int *)local_610.field0_0x0 != 0;
          if (*(int *)local_610.field0_0x0 != 0) goto LAB_100102876;
        }
        QArrayData::deallocate((QArrayData *)local_610.field0_0x0,2,8);
      }
LAB_100102876:
      if (*(int *)local_618 != -1) {
        if (*(int *)local_618 != 0) {
          LOCK();
          *(int *)local_618 = *(int *)local_618 + -1;
          UNLOCK();
          local_439 = *(int *)local_618 != 0;
          if (*(int *)local_618 != 0) goto LAB_1001028b2;
        }
        QArrayData::deallocate(local_618,2,8);
      }
    }
    else {
      std::string::assign((char *)&local_638);
    }
  }
  else {
    std::string::assign((char *)&local_638);
  }
LAB_1001028b2:
  uVar12 = uStack_630;
  pvVar10 = local_628;
  if ((local_638 & 1) == 0) {
    uVar12 = local_638 >> 1 & 0x7f;
    pvVar10 = (void *)((long)&local_638 + 1);
  }
  if (*(char *)((uVar12 - 1) + (long)pvVar10) != '/') {
    std::string::push_back((char)&local_638);
  }
  std::string::append((char *)&local_638);
  uVar12 = uStack_630;
  if ((local_638 & 1) == 0) {
    uVar12 = (ulong)((byte)local_638._0_1_ >> 1);
  }
  uVar16 = uVar12 + 1;
  local_658 = (char *)0x0;
  pcStack_650 = (char *)0x0;
  local_648 = (char *)0x0;
  if (uVar16 != 0) {
    if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_658 = operator_new(uVar16);
    local_648 = local_658 + uVar16;
    uVar12 = ~uVar12;
    pcStack_650 = local_658;
    do {
      *pcStack_650 = '\0';
      pcStack_650 = pcStack_650 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0);
  }
  pvVar10 = local_628;
  if (((byte)local_638._0_1_ & 1) == 0) {
    pvVar10 = (void *)((long)&local_638 + 1);
  }
  _memcpy(local_658,pvVar10,(long)pcStack_650 - (long)local_658);
  pcVar5 = _mkdtemp(local_658);
  if (pcVar5 == (char *)0x0) {
    piVar8 = ___error();
    if (0 < DAT_10230ffd0) {
      pvVar10 = local_628;
      if ((local_638 & 1) == 0) {
        pvVar10 = (void *)((long)&local_638 + 1);
      }
      FUN_100df99c0("PXAPPCORE","prl_client_app",1,"mkdtemp() err %i, p=\"%s\"",*piVar8,pvVar10);
    }
    puVar9 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar9 = 3;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar9,PTR_typeinfo_1021e1790,0);
  }
  std::string::assign(local_748);
  if (local_658 != (char *)0x0) {
    if (pcStack_650 != local_658) {
      pcStack_650 = local_658;
    }
    operator_delete(local_658);
  }
  std::string::~string((string *)&local_638);
  local_768 = 0;
  uStack_760 = 0;
  local_758 = (char *)0x0;
  std::string::assign((char *)&local_768);
  std::string::append((char *)&local_768);
  pcVar5 = local_660;
  if (((byte)local_670 & 1) == 0) {
    pcVar5 = local_66f;
  }
  pcVar14 = local_758;
  if ((local_768 & 1) == 0) {
    pcVar14 = (char *)((long)&local_768 + 1);
  }
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = 0;
  cVar2 = FUN_100105150(pcVar5,&local_5f8);
  if (cVar2 == '\0') {
    bVar1 = false;
  }
  else {
    lVar11 = local_5e8;
    if ((local_5f8 & 1) == 0) {
      lVar11 = (long)&local_5f8 + 1;
    }
    bVar1 = true;
    FUN_100105220(lVar11,pcVar14,0);
  }
  std::string::~string((string *)&local_5f8);
  if (!bVar1) {
    pcVar5 = local_758;
    if ((local_768 & 1) == 0) {
      pcVar5 = (char *)((long)&local_768 + 1);
    }
    if (param_1 != (char *)0x0) {
      _strlen(param_1);
    }
    QString::fromUtf8_helper((char *)&local_558,(int)param_1);
    QString::normalized(&local_550,&local_558,1,0);
    if (*(int *)local_558 != -1) {
      if (*(int *)local_558 != 0) {
        LOCK();
        *(int *)local_558 = *(int *)local_558 + -1;
        local_439 = *(int *)local_558 != 0;
        UNLOCK();
        if (local_439) goto LAB_100102bbf;
      }
      QArrayData::deallocate(local_558,2,8);
    }
LAB_100102bbf:
    if (pcVar5 != (char *)0x0) {
      _strlen(pcVar5);
    }
    QString::fromUtf8_helper((char *)&local_568,(int)pcVar5);
    QString::normalized(&local_560,&local_568,1,0);
    if (*(int *)local_568 != -1) {
      if (*(int *)local_568 != 0) {
        LOCK();
        *(int *)local_568 = *(int *)local_568 + -1;
        local_439 = *(int *)local_568 != 0;
        UNLOCK();
        if (local_439) goto LAB_100102c39;
      }
      QArrayData::deallocate(local_568,2,8);
    }
LAB_100102c39:
    local_570.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_560;
    if (1 < *(int *)local_560 + 1U) {
      LOCK();
      *(int *)local_560 = *(int *)local_560 + 1;
      local_439 = *(int *)local_560 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_548,0x1db677f);
    QString::append(&local_570);
    if (*(int *)local_548 != -1) {
      if (*(int *)local_548 != 0) {
        LOCK();
        *(int *)local_548 = *(int *)local_548 + -1;
        local_439 = *(int *)local_548 != 0;
        UNLOCK();
        if (local_439) goto LAB_100102cc2;
      }
      QArrayData::deallocate(local_548,2,8);
    }
LAB_100102cc2:
    local_580.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QDir::QDir((QDir *)&local_578,&local_580);
    QDir::mkpath(&local_578);
    QDir::~QDir((QDir *)&local_578);
    if (*(int *)local_580.field0_0x0 != -1) {
      if (*(int *)local_580.field0_0x0 != 0) {
        LOCK();
        *(int *)local_580.field0_0x0 = *(int *)local_580.field0_0x0 + -1;
        local_439 = *(int *)local_580.field0_0x0 != 0;
        UNLOCK();
        if (local_439) goto LAB_100102d3e;
      }
      QArrayData::deallocate((QArrayData *)local_580.field0_0x0,2,8);
    }
LAB_100102d3e:
    local_588.field0_0x0 = local_570.field0_0x0;
    if (1 < *(int *)local_570.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_570.field0_0x0 = *(int *)local_570.field0_0x0 + 1;
      local_439 = *(int *)local_570.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_540,0x1dbf954);
    QString::append(&local_588);
    if (*(int *)local_540 != -1) {
      if (*(int *)local_540 != 0) {
        LOCK();
        *(int *)local_540 = *(int *)local_540 + -1;
        local_439 = *(int *)local_540 != 0;
        UNLOCK();
        if (local_439) goto LAB_100102dc7;
      }
      QArrayData::deallocate(local_540,2,8);
    }
LAB_100102dc7:
    local_590.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_550;
    if (1 < *(int *)local_550 + 1U) {
      LOCK();
      *(int *)local_550 = *(int *)local_550 + 1;
      local_439 = *(int *)local_550 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_538,0x1dbf954);
    QString::append(&local_590);
    if (*(int *)local_538 != -1) {
      if (*(int *)local_538 != 0) {
        LOCK();
        *(int *)local_538 = *(int *)local_538 + -1;
        local_439 = *(int *)local_538 != 0;
        UNLOCK();
        if (local_439) goto LAB_100102e50;
      }
      QArrayData::deallocate(local_538,2,8);
    }
LAB_100102e50:
    cVar2 = QFile::copy(&local_590,&local_588);
    if (*(int *)local_590.field0_0x0 != -1) {
      if (*(int *)local_590.field0_0x0 != 0) {
        LOCK();
        *(int *)local_590.field0_0x0 = *(int *)local_590.field0_0x0 + -1;
        local_439 = *(int *)local_590.field0_0x0 != 0;
        UNLOCK();
        if (local_439) goto LAB_100102ea1;
      }
      QArrayData::deallocate((QArrayData *)local_590.field0_0x0,2,8);
    }
LAB_100102ea1:
    if ((cVar2 != '\0') && (cVar2 = QFile::setPermissions(&local_588,0x7775), cVar2 == '\0')) {
      QString::toUtf8();
      FUN_100df99c0("PXAPPCORE","prl_client_app",0,"Failed to set permissions for \"%s\"",
                    local_598 + *(long *)(local_598 + 0x10));
      if (*(int *)local_598 != -1) {
        if (*(int *)local_598 != 0) {
          LOCK();
          *(int *)local_598 = *(int *)local_598 + -1;
          local_439 = *(int *)local_598 != 0;
          UNLOCK();
          if (local_439) goto LAB_100102f36;
        }
        QArrayData::deallocate(local_598,1,8);
      }
    }
LAB_100102f36:
    local_5a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_550;
    if (1 < *(int *)local_550 + 1U) {
      LOCK();
      *(int *)local_550 = *(int *)local_550 + 1;
      local_439 = *(int *)local_550 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_530,0x1dbf98e);
    QString::append(&local_5a0);
    if (*(int *)local_530 != -1) {
      if (*(int *)local_530 != 0) {
        LOCK();
        *(int *)local_530 = *(int *)local_530 + -1;
        local_439 = *(int *)local_530 != 0;
        UNLOCK();
        if (local_439) goto LAB_100102fbf;
      }
      QArrayData::deallocate(local_530,2,8);
    }
LAB_100102fbf:
    local_5a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_560;
    if (1 < *(int *)local_560 + 1U) {
      LOCK();
      *(int *)local_560 = *(int *)local_560 + 1;
      local_439 = *(int *)local_560 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_528,0xe14b50);
    QString::append(&local_5a8);
    if (*(int *)local_528 != -1) {
      if (*(int *)local_528 != 0) {
        LOCK();
        *(int *)local_528 = *(int *)local_528 + -1;
        local_439 = *(int *)local_528 != 0;
        UNLOCK();
        if (local_439) goto LAB_100103048;
      }
      QArrayData::deallocate(local_528,2,8);
    }
LAB_100103048:
    QFile::copy(&local_5a0,&local_5a8);
    if (*(int *)local_5a8.field0_0x0 != -1) {
      if (*(int *)local_5a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_5a8.field0_0x0 = *(int *)local_5a8.field0_0x0 + -1;
        local_439 = *(int *)local_5a8.field0_0x0 != 0;
        UNLOCK();
        if (local_439) goto LAB_100103097;
      }
      QArrayData::deallocate((QArrayData *)local_5a8.field0_0x0,2,8);
    }
LAB_100103097:
    if (*(int *)local_5a0.field0_0x0 != -1) {
      if (*(int *)local_5a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_5a0.field0_0x0 = *(int *)local_5a0.field0_0x0 + -1;
        local_439 = *(int *)local_5a0.field0_0x0 != 0;
        UNLOCK();
        if (local_439) goto LAB_1001030d3;
      }
      QArrayData::deallocate((QArrayData *)local_5a0.field0_0x0,2,8);
    }
LAB_1001030d3:
    local_5c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_560;
    if (1 < *(int *)local_560 + 1U) {
      LOCK();
      *(int *)local_560 = *(int *)local_560 + 1;
      local_439 = *(int *)local_560 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_520,0x1db67ce);
    QString::append(&local_5c0);
    if (*(int *)local_520 != -1) {
      if (*(int *)local_520 != 0) {
        LOCK();
        *(int *)local_520 = *(int *)local_520 + -1;
        local_439 = *(int *)local_520 != 0;
        UNLOCK();
        if (local_439) goto LAB_10010315c;
      }
      QArrayData::deallocate(local_520,2,8);
    }
LAB_10010315c:
    QFile::QFile((QFile *)local_5b8,&local_5c0);
    if (*(int *)local_5c0.field0_0x0 != -1) {
      if (*(int *)local_5c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_5c0.field0_0x0 = *(int *)local_5c0.field0_0x0 + -1;
        local_439 = *(int *)local_5c0.field0_0x0 != 0;
        UNLOCK();
        if (local_439) goto LAB_1001031ab;
      }
      QArrayData::deallocate((QArrayData *)local_5c0.field0_0x0,2,8);
    }
LAB_1001031ab:
    QFile::open(local_5b8,3);
    QIODevice::write((char *)local_5b8,0x101db67e0);
    (**(code **)(local_5b8[0] + 0x70))(local_5b8);
    local_5d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_550;
    if (1 < *(int *)local_550 + 1U) {
      LOCK();
      *(int *)local_550 = *(int *)local_550 + 1;
      local_439 = *(int *)local_550 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_518,0x1dbf99a);
    QString::append(&local_5d0);
    if (*(int *)local_518 != -1) {
      if (*(int *)local_518 != 0) {
        LOCK();
        *(int *)local_518 = *(int *)local_518 + -1;
        local_439 = *(int *)local_518 != 0;
        UNLOCK();
        if (local_439) goto LAB_100103271;
      }
      QArrayData::deallocate(local_518,2,8);
    }
LAB_100103271:
    QString::toUtf8();
    pQVar13 = local_5c8 + *(long *)(local_5c8 + 0x10);
    local_5e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_560;
    if (1 < *(int *)local_560 + 1U) {
      LOCK();
      *(int *)local_560 = *(int *)local_560 + 1;
      local_439 = *(int *)local_560 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_510,0x1db678f);
    QString::append(&local_5e0);
    if (*(int *)local_510 != -1) {
      if (*(int *)local_510 != 0) {
        LOCK();
        *(int *)local_510 = *(int *)local_510 + -1;
        local_439 = *(int *)local_510 != 0;
        UNLOCK();
        if (local_439) goto LAB_100103318;
      }
      QArrayData::deallocate(local_510,2,8);
    }
LAB_100103318:
    QString::toUtf8();
    FUN_100105220(pQVar13,local_5d8 + *(long *)(local_5d8 + 0x10),1);
    if (*(int *)local_5d8 != -1) {
      if (*(int *)local_5d8 != 0) {
        LOCK();
        *(int *)local_5d8 = *(int *)local_5d8 + -1;
        local_439 = *(int *)local_5d8 != 0;
        UNLOCK();
        if (local_439) goto LAB_10010337f;
      }
      QArrayData::deallocate(local_5d8,1,8);
    }
LAB_10010337f:
    if (*(int *)local_5e0.field0_0x0 != -1) {
      if (*(int *)local_5e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_5e0.field0_0x0 = *(int *)local_5e0.field0_0x0 + -1;
        local_439 = *(int *)local_5e0.field0_0x0 != 0;
        UNLOCK();
        if (local_439) goto LAB_1001033bb;
      }
      QArrayData::deallocate((QArrayData *)local_5e0.field0_0x0,2,8);
    }
LAB_1001033bb:
    if (*(int *)local_5c8 != -1) {
      if (*(int *)local_5c8 != 0) {
        LOCK();
        *(int *)local_5c8 = *(int *)local_5c8 + -1;
        local_439 = *(int *)local_5c8 != 0;
        UNLOCK();
        if (local_439) goto LAB_1001033f7;
      }
      QArrayData::deallocate(local_5c8,1,8);
    }
LAB_1001033f7:
    if (*(int *)local_5d0.field0_0x0 != -1) {
      if (*(int *)local_5d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_5d0.field0_0x0 = *(int *)local_5d0.field0_0x0 + -1;
        local_439 = *(int *)local_5d0.field0_0x0 != 0;
        UNLOCK();
        if (local_439) goto LAB_100103433;
      }
      QArrayData::deallocate((QArrayData *)local_5d0.field0_0x0,2,8);
    }
LAB_100103433:
    QFile::~QFile((QFile *)local_5b8);
    if (*(int *)local_588.field0_0x0 != -1) {
      if (*(int *)local_588.field0_0x0 != 0) {
        LOCK();
        *(int *)local_588.field0_0x0 = *(int *)local_588.field0_0x0 + -1;
        local_439 = *(int *)local_588.field0_0x0 != 0;
        UNLOCK();
        if (local_439) goto LAB_10010347b;
      }
      QArrayData::deallocate((QArrayData *)local_588.field0_0x0,2,8);
    }
LAB_10010347b:
    if (*(int *)local_570.field0_0x0 != -1) {
      if (*(int *)local_570.field0_0x0 != 0) {
        LOCK();
        *(int *)local_570.field0_0x0 = *(int *)local_570.field0_0x0 + -1;
        local_439 = *(int *)local_570.field0_0x0 != 0;
        UNLOCK();
        if (local_439) goto LAB_1001034b7;
      }
      QArrayData::deallocate((QArrayData *)local_570.field0_0x0,2,8);
    }
LAB_1001034b7:
    if (*(int *)local_560 != -1) {
      if (*(int *)local_560 != 0) {
        LOCK();
        *(int *)local_560 = *(int *)local_560 + -1;
        local_439 = *(int *)local_560 != 0;
        UNLOCK();
        if (local_439) goto LAB_1001034f3;
      }
      QArrayData::deallocate(local_560,2,8);
    }
LAB_1001034f3:
    if (*(int *)local_550 != -1) {
      if (*(int *)local_550 != 0) {
        LOCK();
        *(int *)local_550 = *(int *)local_550 + -1;
        local_439 = *(int *)local_550 != 0;
        UNLOCK();
        if (local_439) goto LAB_10010352f;
      }
      QArrayData::deallocate(local_550,2,8);
    }
  }
LAB_10010352f:
  pcVar5 = local_660;
  if (((byte)local_670 & 1) == 0) {
    pcVar5 = local_66f;
  }
  _unlink(pcVar5);
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  std::string::assign((char *)&local_4a8);
  pcVar5 = *(char **)(param_2 + 4);
  _strlen(pcVar5);
  std::string::__init((char *)local_4f0,(ulong)pcVar5);
  if (((byte)local_4f0[0] & 1) == 0) {
    local_4e8 = (ulong)((byte)local_4f0[0] >> 1);
  }
  std::string::string(&local_508,local_4f0,1,local_4e8 - 2,(allocator *)local_4f0);
  if (((byte)local_508 & 1) == 0) {
    local_4f8 = local_507;
  }
  std::string::append((char *)&local_4a8,(ulong)local_4f8);
  std::string::~string(&local_508);
  std::string::assign((char *)&local_4c8);
  std::string::append((char *)&local_4c8);
  std::string::~string(local_4f0);
  lVar11 = local_4b8;
  if ((local_4c8 & 1) == 0) {
    lVar11 = (long)&local_4c8 + 1;
  }
  iVar3 = FUN_100d76f00(lVar11,1,&local_4d0,&local_4d8);
  if (iVar3 == 0) {
    iVar3 = FUN_100d76a90(local_4d0,&cf_CFBundleName,*(undefined8 *)(param_2 + 0x14));
    if (iVar3 == 0) {
      iVar3 = FUN_100d76a90(local_4d0,&cf_CFBundleDisplayName,*(undefined8 *)(param_2 + 0x14));
      if (iVar3 == 0) {
        lVar11 = local_498;
        if ((local_4a8 & 1) == 0) {
          lVar11 = (long)&local_4a8 + 1;
        }
        iVar3 = FUN_100d76a90(local_4d0,&cf_CFBundleIdentifier,lVar11);
        if (iVar3 == 0) {
          iVar3 = FUN_100d76a90(local_4d0,&cf_CFBundleIconFile,*(undefined8 *)(param_2 + 0x1c));
          if (iVar3 == 0) {
            lVar11 = local_4b8;
            if ((local_4c8 & 1) == 0) {
              lVar11 = (long)&local_4c8 + 1;
            }
            iVar3 = FUN_100d77270(lVar11,local_4d0,local_4d8);
            iVar4 = 0;
            if ((iVar3 != 0) && (iVar4 = 3, 0 < DAT_10230ffd0)) {
              lVar11 = local_4b8;
              if ((local_4c8 & 1) == 0) {
                lVar11 = (long)&local_4c8 + 1;
              }
              FUN_100df99c0("PXAPPCORE","prl_client_app",1,"Plist write err %i, path=\"%s\"",iVar3,
                            lVar11);
            }
          }
          else {
            iVar4 = 3;
            if (0 < DAT_10230ffd0) {
              FUN_100df99c0("PXAPPCORE","prl_client_app",1,"Plist set string err %i",iVar3);
            }
          }
        }
        else {
          iVar4 = 3;
          if (0 < DAT_10230ffd0) {
            FUN_100df99c0("PXAPPCORE","prl_client_app",1,"Plist set string err %i",iVar3);
          }
        }
      }
      else {
        iVar4 = 3;
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("PXAPPCORE","prl_client_app",1,"Plist set string err %i",iVar3);
        }
      }
    }
    else {
      iVar4 = 3;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("PXAPPCORE","prl_client_app",1,"Plist set string err %i",iVar3);
      }
    }
    _CFRelease(local_4d0);
  }
  else {
    iVar4 = 3;
    if (0 < DAT_10230ffd0) {
      lVar11 = local_4b8;
      if ((local_4c8 & 1) == 0) {
        lVar11 = (long)&local_4c8 + 1;
      }
      FUN_100df99c0("PXAPPCORE","prl_client_app",1,"Plist read err %i, path=\"%s\"",iVar3,lVar11);
    }
  }
  std::string::~string((string *)&local_4c8);
  std::string::~string((string *)&local_4a8);
  if (iVar4 != 0) {
    piVar8 = (int *)___cxa_allocate_exception(4);
    *piVar8 = iVar4;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(piVar8,PTR_typeinfo_1021e1790,0);
  }
  local_488 = 0;
  uStack_480 = 0;
  local_478 = (char *)0x0;
  std::string::assign((char *)&local_488);
  std::string::append((char *)&local_488);
  pcVar5 = local_478;
  if ((local_488 & 1) == 0) {
    pcVar5 = (char *)((long)&local_488 + 1);
  }
  pFVar7 = _fopen(pcVar5,"w");
  if (pFVar7 == (FILE *)0x0) {
    piVar8 = ___error();
    iVar3 = 3;
    if (0 < DAT_10230ffd0) {
      pcVar5 = local_478;
      if ((local_488 & 1) == 0) {
        pcVar5 = (char *)((long)&local_488 + 1);
      }
      FUN_100df99c0("PXAPPCORE","prl_client_app",1,"fopen() err %i, path=\"%s\"",*piVar8,pcVar5);
    }
  }
  else {
    iVar3 = 0;
    iVar4 = _fprintf(pFVar7,"%s\n",*(undefined8 *)(param_2 + 4));
    if (iVar4 < 0) {
      piVar8 = ___error();
      iVar3 = 3;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("PXAPPCORE","prl_client_app",1,"fprintf() err %i",*piVar8);
      }
    }
    else {
      iVar4 = _fprintf(pFVar7,"%s\n",*(undefined8 *)(param_2 + 0xc));
      if (iVar4 < 0) {
        piVar8 = ___error();
        iVar3 = 3;
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("PXAPPCORE","prl_client_app",1,"fprintf() err %i",*piVar8);
        }
      }
    }
    _fclose(pFVar7);
  }
  std::string::~string((string *)&local_488);
  if (iVar3 != 0) {
    piVar8 = (int *)___cxa_allocate_exception(4);
    *piVar8 = iVar3;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(piVar8,PTR_typeinfo_1021e1790,0);
  }
  pcVar5 = local_758;
  if ((local_768 & 1) == 0) {
    pcVar5 = (char *)((long)&local_768 + 1);
  }
  local_450.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_448,&local_450);
  if (((byte)local_670 & 1) == 0) {
    pcVar14 = local_66f;
LAB_100103b21:
    _strlen(pcVar14);
    pcVar15 = pcVar14;
  }
  else {
    pcVar15 = (char *)0x0;
    pcVar14 = local_660;
    if (local_660 != (char *)0x0) goto LAB_100103b21;
  }
  QString::fromUtf8_helper((char *)&local_470,(int)pcVar15);
  QFileInfo::QFileInfo(local_468,&local_470);
  QFileInfo::dir();
  QDir::path();
  QDir::mkpath(&local_448);
  if (*(int *)local_458 != -1) {
    if (*(int *)local_458 != 0) {
      LOCK();
      *(int *)local_458 = *(int *)local_458 + -1;
      local_439 = *(int *)local_458 != 0;
      UNLOCK();
      if (local_439) goto LAB_100103bc3;
    }
    QArrayData::deallocate(local_458,2,8);
  }
LAB_100103bc3:
  QDir::~QDir(local_460);
  QFileInfo::~QFileInfo(local_468);
  if (*(int *)local_470.field0_0x0 != -1) {
    if (*(int *)local_470.field0_0x0 != 0) {
      LOCK();
      *(int *)local_470.field0_0x0 = *(int *)local_470.field0_0x0 + -1;
      local_439 = *(int *)local_470.field0_0x0 != 0;
      UNLOCK();
      if (local_439) goto LAB_100103c17;
    }
    QArrayData::deallocate((QArrayData *)local_470.field0_0x0,2,8);
  }
LAB_100103c17:
  QDir::~QDir((QDir *)&local_448);
  if (*(int *)local_450.field0_0x0 != -1) {
    if (*(int *)local_450.field0_0x0 != 0) {
      LOCK();
      *(int *)local_450.field0_0x0 = *(int *)local_450.field0_0x0 + -1;
      local_439 = *(int *)local_450.field0_0x0 != 0;
      UNLOCK();
      if (local_439) goto LAB_100103c5f;
    }
    QArrayData::deallocate((QArrayData *)local_450.field0_0x0,2,8);
  }
LAB_100103c5f:
  pcVar14 = local_678;
  if (((byte)local_688 & 1) == 0) {
    pcVar14 = local_687;
  }
  pcVar15 = local_660;
  if (((byte)local_670 & 1) == 0) {
    pcVar15 = local_66f;
  }
  iVar3 = _symlink(pcVar14,pcVar15);
  if (iVar3 != 0) {
    piVar8 = ___error();
    if (0 < DAT_10230ffd0) {
      if (((byte)local_688 & 1) == 0) {
        local_678 = local_687;
      }
      if (((byte)local_670 & 1) == 0) {
        local_770 = local_66f;
      }
      else {
        local_770 = local_660;
      }
      FUN_100df99c0("PXAPPCORE","prl_client_app",1,"symlink() err %i, p1=\"%s\", p2=\"%s\"",*piVar8,
                    local_678,local_770);
    }
    puVar9 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar9 = 3;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar9,PTR_typeinfo_1021e1790,0);
  }
  if (((byte)local_688 & 1) == 0) {
    local_678 = local_687;
  }
  FUN_100105220(pcVar5,local_678,0);
  std::string::~string((string *)&local_768);
  FUN_100105010(local_748);
  lVar11 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100103ce7:
  std::string::~string(&local_730);
  std::string::~string(&local_670);
  std::string::~string(&local_688);
  if (lVar11 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

