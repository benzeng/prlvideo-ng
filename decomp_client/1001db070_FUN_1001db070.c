
long * FUN_1001db070(undefined8 param_1,QObject *param_2,undefined8 *param_3,int param_4,
                    QStringList *param_5,undefined1 param_6)

{
  QMetaObject *pQVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  QString *pQVar10;
  CVmConfiguration *this;
  QMetaObject *pQVar11;
  void *pvVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  CTaskGenericId *pCVar17;
  uint uVar18;
  undefined4 uVar19;
  bool bVar20;
  ulong in_stack_fffffffffffffbf8;
  long *local_3e8;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined1 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined1 local_394;
  undefined4 local_390;
  undefined2 uStack_38c;
  undefined1 uStack_38a;
  undefined1 uStack_389;
  uint local_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined1 uStack_37c;
  undefined2 uStack_37b;
  undefined1 uStack_379;
  undefined2 local_377;
  undefined1 local_375;
  uint local_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  uint local_368;
  undefined4 uStack_364;
  undefined4 local_360;
  uint uStack_35c;
  QVariant local_358;
  int *local_348;
  QObject *local_340;
  QVariant local_338;
  undefined1 local_328 [4];
  undefined4 local_324;
  undefined1 local_320;
  undefined1 local_31f;
  CTaskGenericId local_318 [24];
  QArrayData *local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QString local_2e8;
  QArrayData *local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined4 local_2d0;
  int local_2cc;
  int *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  Data_conflict local_2a8;
  undefined4 local_2a0;
  undefined1 local_298;
  int *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  Data_conflict local_268;
  undefined4 local_260;
  undefined1 local_258;
  undefined1 local_248 [24];
  QMetaObject *local_230;
  int *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  Data_conflict local_208;
  undefined4 local_200;
  undefined1 local_1f8;
  undefined1 local_1e8 [24];
  QMetaObject *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QString local_1b0;
  QArrayData *local_1a8;
  Data *local_1a0;
  QDateTime local_198;
  undefined *local_190;
  QDateTime local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QString local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QFileInfo local_148 [8];
  QArrayData *local_140;
  int *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  Data_conflict local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_100 [24];
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QUrl local_80 [8];
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(uint *)local_48.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_48.field0_0x0 = *(uint *)local_48.field0_0x0 + 1;
    local_31 = *(uint *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  if ((param_2 == (QObject *)0x0) || (*(uint *)(local_48.field0_0x0 + 4) == 0)) {
    QString::toUtf8();
    FUN_100df99c0("[AppController]","prl_client_app",0,
                  "invalid input parameters  server == %p, path == %s",param_2,
                  local_50 + *(long *)(local_50 + 0x10));
    plVar15 = (long *)0x0;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        plVar15 = (long *)0x0;
        if ((bool)local_31) goto LAB_1001dce87;
      }
      plVar15 = (long *)0x0;
      QArrayData::deallocate(local_50,1,8);
    }
    goto LAB_1001dce87;
  }
  QString::toUtf8();
  FUN_100df99c0("[AppController]","prl_client_app",0,"Start VM registration... [%s]",
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001db12a;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1001db12a:
  QDir::fromNativeSeparators(&local_60);
  QString::operator=(&local_48,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001db174;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1001db174:
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_68,(char *)(local_70 + *(long *)(local_70 + 0x10)),-1)
  ;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001db1c7;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_1001db1c7:
  QUrl::fromEncoded(local_80,&local_68,0);
  QUrl::toString(&local_78,local_80,0);
  QString::operator=(&local_48,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001db230;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1001db230:
  QUrl::~QUrl(local_80);
LAB_1001db250:
  do {
    local_88 = (QArrayData *)QString::fromAscii_helper("/",1);
    cVar4 = QString::endsWith(&local_48,&local_88,1);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001db2a4;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1001db2a4:
    if (cVar4 == '\0') break;
    QString::left((int)&local_90);
    QString::operator=(&local_48,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001db250;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
  } while( true );
  local_98 = (QArrayData *)QString::fromAscii_helper("file://localhost",0x10);
  cVar4 = QString::startsWith(&local_48,&local_98,1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001db430;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1001db430:
  if (cVar4 == '\0') {
    local_b0 = (QArrayData *)QString::fromAscii_helper("file://",7);
    cVar4 = QString::startsWith(&local_48,&local_b0,1);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001db56b;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1001db56b:
    if (cVar4 != '\0') {
      local_b8 = (QArrayData *)QString::fromAscii_helper("file://",7);
      local_c0 = (QArrayData *)QString::fromAscii_helper("",0);
      pQVar10 = (QString *)QString::replace(&local_48,&local_b8,&local_c0,1);
      QString::operator=(&local_48,pQVar10);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001db5fe;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1001db5fe:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001db634;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
    }
  }
  else {
    local_a0 = (QArrayData *)QString::fromAscii_helper("file://localhost",0x10);
    local_a8 = (QArrayData *)QString::fromAscii_helper("",0);
    pQVar10 = (QString *)QString::replace(&local_48,&local_a0,&local_a8,1);
    QString::operator=(&local_48,pQVar10);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001db4c3;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1001db4c3:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001db634;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_1001db634:
  local_c8 = (QArrayData *)QString::fromAscii_helper(".pvs",4);
  cVar4 = QString::endsWith(&local_48,&local_c8,0);
  if (cVar4 == '\0') {
    local_d0 = (QArrayData *)QString::fromAscii_helper(".pvsz",5);
    cVar4 = QString::endsWith(&local_48,&local_d0,0);
    if (cVar4 == '\0') {
      local_d8 = (QArrayData *)QString::fromAscii_helper(".pvm",4);
      cVar4 = QString::endsWith(&local_48,&local_d8,0);
      if (cVar4 == '\0') {
        local_e0 = (QArrayData *)QString::fromAscii_helper(".pvmz",5);
        cVar4 = QString::endsWith(&local_48,&local_e0,0);
        if (cVar4 == '\0') {
          bVar6 = FUN_1007507b0(&local_48);
          bVar6 = bVar6 ^ 1;
        }
        else {
          bVar6 = 0;
        }
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001db746;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
      }
      else {
        bVar6 = 0;
      }
LAB_1001db746:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001db77c;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
    }
    else {
      bVar6 = 0;
    }
LAB_1001db77c:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001db7b2;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
  }
  else {
    bVar6 = 0;
  }
LAB_1001db7b2:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001db7e8;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1001db7e8:
  if (bVar6 == 0) {
    QFileInfo::QFileInfo((QFileInfo *)(local_100 + 0x10),&local_48);
    cVar4 = QFileInfo::exists();
    QFileInfo::~QFileInfo((QFileInfo *)(local_100 + 0x10));
    if (cVar4 == '\0') {
      iVar9 = CMessageManager::instance();
      local_100._8_8_ = PTR_shared_null_1021e15e8;
      local_100._0_8_ = PTR_shared_null_1021e15e8;
      local_138 = (int *)0x0;
      uStack_130 = 0;
      local_120 = 0;
      local_128 = 0;
      local_110 = 0x80000000;
      local_118.field7 = 0;
      local_108 = 1;
      CMessageManager::showMessageBox
                (iVar9,(QWidget *)0x80015195,param_5,(QStringList *)(local_100 + 8),
                 (CSlotInfo *)local_100,SUB81(&local_138,0));
      QVariant::~QVariant((QVariant *)&local_118);
      if (local_138 != (int *)0x0) {
        LOCK();
        *local_138 = *local_138 + -1;
        local_31 = *local_138 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_138 != (int *)0x0)) {
          operator_delete(local_138);
        }
      }
      FUN_100039a80(local_100);
      plVar15 = (long *)0x0;
      FUN_100039a80(local_100 + 8);
    }
    else {
      QString::toUtf8();
      if ((1 < *(uint *)local_140) || (*(long *)(local_140 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_140,*(uint *)(local_140 + 4) + 1,*(uint *)(local_140 + 8) >> 0x1f);
      }
      FUN_100df99c0("[AppController]","prl_client_app",0,"Processing VM registration... [%s]",
                    local_140 + *(long *)(local_140 + 0x10));
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001db940;
        }
        QArrayData::deallocate(local_140,1,8);
      }
LAB_1001db940:
      uVar19 = 0;
      if (param_4 - 0x2711U < 4) {
        uVar19 = *(undefined4 *)(&DAT_100e168e8 + (long)(int)(param_4 - 0x2711U) * 4);
      }
      QFileInfo::QFileInfo(local_148,&local_48);
      cVar4 = QFileInfo::isDir();
      if (cVar4 == '\0') {
        cVar4 = '\0';
      }
      else {
        local_150 = (QArrayData *)QString::fromAscii_helper(".pvm",4);
        cVar5 = QString::endsWith(&local_48,&local_150,0);
        cVar4 = '\x01';
        if (cVar5 == '\0') {
          local_158 = (QArrayData *)QString::fromAscii_helper(".pvmz",5);
          cVar4 = QString::endsWith(&local_48,&local_158,0);
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_31 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001dba1a;
            }
            QArrayData::deallocate(local_158,2,8);
          }
        }
LAB_1001dba1a:
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_31 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001dbb46;
          }
          QArrayData::deallocate(local_150,2,8);
        }
      }
LAB_1001dbb46:
      QFileInfo::~QFileInfo(local_148);
      local_160.field0_0x0 = local_48.field0_0x0;
      if (1 < *(uint *)local_48.field0_0x0 + 1) {
        LOCK();
        *(uint *)local_48.field0_0x0 = *(uint *)local_48.field0_0x0 + 1;
        local_31 = *(uint *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      this = operator_new(0xf8);
      CVmConfiguration::CVmConfiguration(this);
      pQVar11 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
      if (pQVar11 == (QMetaObject *)0x0) {
        pQVar11 = (QMetaObject *)0x0;
        (**(code **)(*(long *)this + 0x20))(this);
      }
      else {
        *(undefined4 *)(pQVar11 + 8) = 1;
        *(CVmConfiguration **)(pQVar11 + 0x10) = this;
        *(undefined ***)pQVar11 = &PTR_FUN_102271430;
      }
      local_3e8 = (long *)0x0;
      if (cVar4 == '\0') {
        pvVar12 = operator_new(0x18);
        FUN_100ccd220(pvVar12,&local_48);
        local_3e8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
        if (local_3e8 == (long *)0x0) {
          FUN_1001e3ed0(pvVar12);
          operator_delete(pvVar12);
          local_3e8 = (long *)0x0;
        }
        else {
          *(undefined4 *)(local_3e8 + 1) = 1;
          local_3e8[2] = (long)pvVar12;
          *local_3e8 = (long)&PTR_FUN_102271498;
          LOCK();
          *(int *)(local_3e8 + 1) = (int)local_3e8[1] + 1;
          UNLOCK();
          LOCK();
          plVar15 = local_3e8 + 1;
          lVar13 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)(*local_3e8 + 0x10))();
          }
        }
      }
      bVar6 = FUN_1007507b0(&local_48);
      plVar15 = (long *)(ulong)bVar6;
      if (local_3e8 == (long *)0x0) {
        bVar7 = 0;
      }
      else if (local_3e8[2] == 0) {
        bVar7 = 0;
      }
      else {
        bVar7 = FUN_100cce960();
      }
      if ((bVar6 | bVar7) == 1) {
        if (bVar6 == 0) {
          lVar13 = 0;
          if (local_3e8 != (long *)0x0) {
            lVar13 = local_3e8[2];
          }
          local_170 = (QArrayData *)QString::fromAscii_helper("System",6);
          local_178 = (QArrayData *)QString::fromAscii_helper("Parallels VM Name",0x11);
          local_180 = (QArrayData *)
                      QString::fromAscii_helper("61E62DFC-6EF6-4129-9E3C-FD1E4E201B7A",0x24);
          FUN_100ccd600(&local_168,lVar13,&local_170,&local_178,&local_180);
          if (*(int *)local_180 != -1) {
            if (*(int *)local_180 != 0) {
              LOCK();
              *(int *)local_180 = *(int *)local_180 + -1;
              local_31 = *(int *)local_180 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001dbfe5;
            }
            QArrayData::deallocate(local_180,2,8);
          }
LAB_1001dbfe5:
          if (*(int *)local_178 != -1) {
            if (*(int *)local_178 != 0) {
              LOCK();
              *(int *)local_178 = *(int *)local_178 + -1;
              local_31 = *(int *)local_178 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001dc01b;
            }
            QArrayData::deallocate(local_178,2,8);
          }
LAB_1001dc01b:
          if (*(int *)local_170 != -1) {
            if (*(int *)local_170 != 0) {
              LOCK();
              *(int *)local_170 = *(int *)local_170 + -1;
              local_31 = *(int *)local_170 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001dc051;
            }
            QArrayData::deallocate(local_170,2,8);
          }
LAB_1001dc051:
          if (bVar7 == 0) {
            bVar20 = false;
          }
          else {
            FUN_100df99c0("[AppController]","prl_client_app",0,"VM has PD3 format.");
            lVar13 = FUN_10015ceb0(param_2,&local_48);
            if ((lVar13 == 0) || (iVar9 = FUN_10018bce0(lVar13), iVar9 != 2)) {
              FUN_100df99c0("[AppController]","prl_client_app",0,"Registering old format VM...");
              plVar15 = operator_new(0x28);
              puVar3 = PTR_shared_null_1021e1288;
              local_190 = PTR_shared_null_1021e1288;
              QDateTime::QDateTime(&local_198);
              FUN_1001e3810(plVar15,&local_190,&local_48,&local_168,&local_198);
              QDateTime::~QDateTime(&local_198);
              if (*(int *)puVar3 != -1) {
                if (*(int *)puVar3 != 0) {
                  LOCK();
                  *(int *)puVar3 = *(int *)puVar3 + -1;
                  local_31 = *(int *)puVar3 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001dc14a;
                }
                QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
              }
LAB_1001dc14a:
              lVar13 = FUN_10015bb20(param_2,plVar15,1);
              (**(code **)(*plVar15 + 8))(plVar15);
              if (lVar13 != 0) goto LAB_1001dc176;
            }
            else {
LAB_1001dc176:
              iVar9 = FUN_10018bce0(lVar13);
              if (iVar9 == 2) {
                FUN_100df99c0("[AppController]","prl_client_app",0,"Raising convert VM dialog...");
                plVar15 = operator_new(0xb0);
                local_1a0 = (Data *)PTR_shared_null_1021e15e8;
                local_1a8 = (QArrayData *)PTR_shared_null_1021e1288;
                FUN_1001fc020(plVar15,lVar13,&local_1a0,&local_1a8);
                if (*(int *)local_1a8 != -1) {
                  if (*(int *)local_1a8 != 0) {
                    LOCK();
                    *(int *)local_1a8 = *(int *)local_1a8 + -1;
                    local_31 = *(int *)local_1a8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001dc21d;
                  }
                  QArrayData::deallocate(local_1a8,2,8);
                }
LAB_1001dc21d:
                if (*(int *)local_1a0 != -1) {
                  if (*(int *)local_1a0 != 0) {
                    LOCK();
                    *(int *)local_1a0 = *(int *)local_1a0 + -1;
                    local_31 = *(int *)local_1a0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1001dc249;
                  }
                  QListData::dispose(local_1a0);
                }
LAB_1001dc249:
                CAbstractTask::execute();
                bVar20 = true;
                goto LAB_1001dcb8f;
              }
            }
            bVar20 = false;
            FUN_100df99c0("[AppController]","prl_client_app",0,
                          "(!)Error: failed to get old format VM.");
          }
        }
        else {
          FUN_10074a700(&local_168,&local_48);
          lVar13 = FUN_10015ceb0(param_2,&local_48);
          if ((lVar13 == 0) || (iVar9 = FUN_10018bce0(lVar13), iVar9 != 3)) {
            FUN_100df99c0("[AppController]","prl_client_app",0,
                          "Registering third party format VM...");
            if (DAT_1023109b0 == (void *)0x0) {
              pvVar12 = operator_new(0x20);
              FUN_100751470(pvVar12);
              DAT_102271388 = 1;
              DAT_1023109b0 = pvVar12;
            }
            plVar14 = (long *)FUN_100753f20(DAT_1023109b0,&local_48);
            if (plVar14 == (long *)0x0) {
              if (DAT_1023109b0 == (void *)0x0) {
                pvVar12 = operator_new(0x20);
                FUN_100751470(pvVar12);
                DAT_102271388 = 1;
                DAT_1023109b0 = pvVar12;
              }
              plVar14 = (long *)FUN_100752570(DAT_1023109b0,&local_48);
              if (plVar14 != (long *)0x0) goto LAB_1001dbd9e;
              plVar14 = operator_new(0x20);
              QDateTime::QDateTime(&local_188);
              FUN_1001e35f0(plVar14,&local_48,&local_168,&local_188);
              QDateTime::~QDateTime(&local_188);
              bVar20 = false;
              bVar6 = 0;
            }
            else {
LAB_1001dbd9e:
              bVar20 = plVar14 == (long *)0x0;
              bVar6 = 1;
            }
            lVar13 = FUN_10015bf80(param_2,plVar14,1);
            plVar15 = (long *)(ulong)(bVar20 | bVar6);
            if ((bVar20 | bVar6) == 0) {
              (**(code **)(*plVar14 + 8))(plVar14);
            }
            if (lVar13 != 0) goto LAB_1001dbdd9;
          }
          else {
LAB_1001dbdd9:
            iVar9 = FUN_10018bce0(lVar13);
            if (iVar9 == 3) {
              FUN_100df99c0("[AppController]","prl_client_app",0,"Raising convert VM dialog...");
              plVar15 = operator_new(0x100);
              FUN_10025b440(plVar15,param_2,0,lVar13);
              CAbstractTask::execute();
              bVar20 = true;
              goto LAB_1001dcb8f;
            }
          }
          bVar20 = false;
          FUN_100df99c0("[AppController]","prl_client_app",0,
                        "(!)Error: failed to get third party format VM.");
        }
LAB_1001dcb8f:
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            local_31 = *(int *)local_168 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001dcbc5;
          }
          QArrayData::deallocate(local_168,2,8);
        }
LAB_1001dcbc5:
        if (!bVar20) {
LAB_1001dcdd9:
          plVar15 = (long *)0x0;
        }
      }
      else {
        FUN_100df99c0("[AppController]","prl_client_app",0,"VM has PD4 format.");
        if (cVar4 == '\0') {
          if (pQVar11 != (QMetaObject *)0x0) {
            LOCK();
            *(int *)(pQVar11 + 8) = *(int *)(pQVar11 + 8) + 1;
            UNLOCK();
          }
          local_230 = pQVar11;
          iVar9 = FUN_1001e0ab0(&local_230,&local_160);
          if (pQVar11 != (QMetaObject *)0x0) {
            LOCK();
            pQVar1 = pQVar11 + 8;
            iVar2 = *(int *)pQVar1;
            *(int *)pQVar1 = *(int *)pQVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*(long *)pQVar11 + 0x10))(pQVar11);
            }
          }
          if (iVar9 != 0) {
            iVar9 = CMessageManager::instance();
            local_248._16_8_ = PTR_shared_null_1021e1288;
            local_248._8_8_ = PTR_shared_null_1021e15e8;
            local_248._0_8_ = PTR_shared_null_1021e15e8;
            local_288 = (int *)0x0;
            uStack_280 = 0;
            local_270 = 0;
            local_278 = 0;
            local_260 = 0x80000000;
            local_268.field7 = 0;
            local_258 = 1;
            local_2c8 = (int *)0x0;
            uStack_2c0 = 0;
            local_2b0 = 0;
            local_2b8 = 0;
            local_2a0 = 0x80000000;
            local_2a8.field7 = 0;
            local_298 = 1;
            CMessageManager::showMessageBox
                      (iVar9,(QString *)0x80000036,(QStringList *)(local_248 + 0x10),
                       (QStringList *)(local_248 + 8),(CSlotInfo *)local_248,SUB81(&local_288,0),
                       (QWidget *)(in_stack_fffffffffffffbf8 & 0xffffffff00000000),(CSlotInfo *)0x0)
            ;
            QVariant::~QVariant((QVariant *)&local_2a8);
            if (local_2c8 != (int *)0x0) {
              LOCK();
              *local_2c8 = *local_2c8 + -1;
              local_31 = *local_2c8 != 0;
              UNLOCK();
              if ((!(bool)local_31) && (local_2c8 != (int *)0x0)) {
                operator_delete(local_2c8);
              }
            }
            QVariant::~QVariant((QVariant *)&local_268);
            if (local_288 != (int *)0x0) {
              LOCK();
              *local_288 = *local_288 + -1;
              local_31 = *local_288 != 0;
              UNLOCK();
              if ((!(bool)local_31) && (local_288 != (int *)0x0)) {
                operator_delete(local_288);
              }
            }
            FUN_100039a80(local_248);
            FUN_100039a80(local_248 + 8);
            plVar15 = (long *)0x0;
            if (*(int *)local_248._16_8_ != -1) {
              if (*(int *)local_248._16_8_ != 0) {
                LOCK();
                *(int *)local_248._16_8_ = *(int *)local_248._16_8_ + -1;
                local_31 = *(int *)local_248._16_8_ != 0;
                UNLOCK();
                plVar15 = (long *)0x0;
                if ((bool)local_31) goto LAB_1001dcddb;
              }
              plVar15 = (long *)0x0;
              QArrayData::deallocate((QArrayData *)local_248._16_8_,2,8);
            }
            goto LAB_1001dcddb;
          }
        }
        else {
          uVar8 = QDir::separator();
          local_1b8 = (QArrayData *)local_48.field0_0x0;
          if (1 < *(uint *)local_48.field0_0x0 + 1) {
            LOCK();
            *(uint *)local_48.field0_0x0 = *(uint *)local_48.field0_0x0 + 1;
            local_31 = *(uint *)local_48.field0_0x0 != 0;
            UNLOCK();
          }
          uVar18 = *(uint *)(local_48.field0_0x0 + 4);
          if ((1 < *(uint *)local_48.field0_0x0) ||
             ((*(uint *)(local_48.field0_0x0 + 8) & 0x7fffffff) < uVar18 + 2)) {
            QString::reallocData((uint)&local_1b8,SUB41(uVar18 + 2,0));
            uVar18 = *(uint *)(local_1b8 + 4);
          }
          *(uint *)(local_1b8 + 4) = uVar18 + 1;
          *(undefined2 *)(local_1b8 + (long)(int)uVar18 * 2 + *(long *)(local_1b8 + 0x10)) = uVar8;
          *(undefined2 *)
           (local_1b8 + (long)(int)*(uint *)(local_1b8 + 4) * 2 + *(long *)(local_1b8 + 0x10)) = 0;
          local_1c8 = (QArrayData *)QString::fromAscii_helper(".pvm",4);
          cVar5 = QString::endsWith(&local_48,&local_1c8,1);
          if (cVar5 == '\0') {
            local_1c0 = (QArrayData *)QString::fromAscii_helper("config.pvsz",0xb);
          }
          else {
            local_1c0 = (QArrayData *)QString::fromAscii_helper("config.pvs",10);
          }
          local_1b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_1b8;
          if (1 < *(uint *)local_1b8 + 1) {
            LOCK();
            *(uint *)local_1b8 = *(uint *)local_1b8 + 1;
            local_31 = *(uint *)local_1b8 != 0;
            UNLOCK();
          }
          QString::append(&local_1b0);
          QString::operator=(&local_160,&local_1b0);
          if (*(int *)local_1b0.field0_0x0 != -1) {
            if (*(int *)local_1b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
              local_31 = *(int *)local_1b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001dc523;
            }
            QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
          }
LAB_1001dc523:
          if (*(int *)local_1c0 != -1) {
            if (*(int *)local_1c0 != 0) {
              LOCK();
              *(int *)local_1c0 = *(int *)local_1c0 + -1;
              local_31 = *(int *)local_1c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001dc559;
            }
            QArrayData::deallocate(local_1c0,2,8);
          }
LAB_1001dc559:
          if (*(int *)local_1c8 != -1) {
            if (*(int *)local_1c8 != 0) {
              LOCK();
              *(int *)local_1c8 = *(int *)local_1c8 + -1;
              local_31 = *(int *)local_1c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001dc58f;
            }
            QArrayData::deallocate(local_1c8,2,8);
          }
LAB_1001dc58f:
          if (*(int *)local_1b8 != -1) {
            if (*(int *)local_1b8 != 0) {
              LOCK();
              *(int *)local_1b8 = *(int *)local_1b8 + -1;
              local_31 = *(int *)local_1b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001dc5c5;
            }
            QArrayData::deallocate(local_1b8,2,8);
          }
LAB_1001dc5c5:
          if (pQVar11 != (QMetaObject *)0x0) {
            LOCK();
            *(int *)(pQVar11 + 8) = *(int *)(pQVar11 + 8) + 1;
            UNLOCK();
          }
          local_1d0 = pQVar11;
          iVar9 = FUN_1001e0ab0(&local_1d0,&local_160);
          if (pQVar11 != (QMetaObject *)0x0) {
            LOCK();
            pQVar1 = pQVar11 + 8;
            iVar2 = *(int *)pQVar1;
            *(int *)pQVar1 = *(int *)pQVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*(long *)pQVar11 + 0x10))(pQVar11);
            }
          }
          if (iVar9 != 0) {
            QString::fromUtf8_helper((char *)&local_40,0x1dd9bd9);
            QString::append(&local_160);
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                local_31 = *(int *)local_40 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001dc670;
              }
              QArrayData::deallocate(local_40,2,8);
            }
LAB_1001dc670:
            if (pQVar11 != (QMetaObject *)0x0) {
              LOCK();
              *(int *)(pQVar11 + 8) = *(int *)(pQVar11 + 8) + 1;
              UNLOCK();
            }
            local_1e8._16_8_ = pQVar11;
            iVar9 = FUN_1001e0ab0(local_1e8 + 0x10,&local_160);
            if (pQVar11 != (QMetaObject *)0x0) {
              LOCK();
              pQVar1 = pQVar11 + 8;
              iVar2 = *(int *)pQVar1;
              *(int *)pQVar1 = *(int *)pQVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*(long *)pQVar11 + 0x10))(pQVar11);
              }
            }
            if (iVar9 != 0) {
              iVar9 = CMessageManager::instance();
              local_1e8._8_8_ = PTR_shared_null_1021e15e8;
              local_1e8._0_8_ = PTR_shared_null_1021e15e8;
              local_228 = (int *)0x0;
              uStack_220 = 0;
              local_210 = 0;
              local_218 = 0;
              local_200 = 0x80000000;
              local_208.field7 = 0;
              local_1f8 = 1;
              CMessageManager::showMessageBox
                        (iVar9,(QWidget *)0x80015195,(QStringList *)0x0,
                         (QStringList *)(local_1e8 + 8),(CSlotInfo *)local_1e8,SUB81(&local_228,0));
              QVariant::~QVariant((QVariant *)&local_208);
              if (local_228 != (int *)0x0) {
                LOCK();
                *local_228 = *local_228 + -1;
                local_31 = *local_228 != 0;
                UNLOCK();
                if ((!(bool)local_31) && (local_228 != (int *)0x0)) {
                  operator_delete(local_228);
                }
              }
              FUN_100039a80(local_1e8);
              plVar15 = (long *)0x0;
              FUN_100039a80(local_1e8 + 8);
              goto LAB_1001dcddb;
            }
          }
        }
        lVar13 = FUN_10015ceb0(param_2,&local_160);
        if (lVar13 != 0) {
          if ((param_4 != 0x2714) && (cVar4 = FUN_10018ed10(lVar13), cVar4 == '\0')) {
            iVar9 = FUN_10018a9d0(lVar13);
            if ((param_4 == 0x2713) || (iVar9 == 0x30000004)) {
              iVar9 = FUN_10018a9d0(lVar13);
              if (iVar9 == 0x30000004) {
                iVar9 = FUN_100358ab0(lVar13);
                if (iVar9 != 0) {
                  uVar16 = FUN_10018c280(lVar13);
                  local_3a8 = 3;
                  local_3a0 = 0;
                  local_3a4 = 0;
                  local_39c = 0xffff;
                  local_398 = 0;
                  local_394 = 0;
                  FUN_10031bef0(uVar16,iVar9,&local_3a8);
                }
              }
              else {
                uVar16 = FUN_10018c280(lVar13);
                FUN_10031a440(uVar16,0);
              }
            }
            else if (param_4 == 0x2712) {
              uVar16 = FUN_10018c280(lVar13);
              bVar6 = FUN_100124f70();
              bVar7 = FUN_100124f70();
              local_370 = 3;
              local_368 = local_368 & 0xffffff00;
              uStack_36c = 0;
              uStack_364 = 0xffff;
              local_360 = 0;
              uStack_35c = uStack_35c & 0xffffff00;
              FUN_10031a960(uVar16,(uint)bVar6 * 2 + 1,bVar7 + 1);
            }
            else {
              local_374 = local_374 & 0xffffff00;
              uVar16 = FUN_10018c280(lVar13);
              local_390 = 3;
              uStack_38c = 0;
              uStack_38a = 1;
              uStack_389 = 1;
              local_388 = local_374;
              uStack_384 = 0xffff;
              local_380 = 0;
              uStack_37c = 0;
              uStack_379 = local_375;
              uStack_37b = local_377;
              FUN_10031a440(uVar16,1);
            }
          }
          goto LAB_1001dcdd9;
        }
        CVmConfiguration::getVmIdentification();
        CVmIdentification::getVmName();
        pQVar10 = &local_160;
        if (cVar4 != '\0') {
          pQVar10 = &local_48;
        }
        CVmConfiguration::getVmIdentification();
        CVmIdentification::getVmUuid();
        local_2f0 = local_2f8;
        if (1 < *(int *)local_2f8 + 1U) {
          LOCK();
          *(int *)local_2f8 = *(int *)local_2f8 + 1;
          local_31 = *(int *)local_2f8 != 0;
          UNLOCK();
        }
        local_2e8.field0_0x0 = pQVar10->field0_0x0;
        if (1 < *(int *)local_2e8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_2e8.field0_0x0 = *(int *)local_2e8.field0_0x0 + 1;
          local_31 = *(int *)local_2e8.field0_0x0 != 0;
          UNLOCK();
        }
        local_2e0 = local_300;
        if (1 < *(int *)local_300 + 1U) {
          LOCK();
          *(int *)local_300 = *(int *)local_300 + 1;
          local_31 = *(int *)local_300 != 0;
          UNLOCK();
        }
        local_2d8 = 0;
        local_2d4 = 0;
        local_2d0 = 0;
        local_2cc = param_4;
        if (*(int *)local_300 != -1) {
          if (*(int *)local_300 != 0) {
            LOCK();
            *(int *)local_300 = *(int *)local_300 + -1;
            local_31 = *(int *)local_300 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001dc9a2;
          }
          QArrayData::deallocate(local_300,2,8);
        }
LAB_1001dc9a2:
        if (*(int *)local_2f8 != -1) {
          if (*(int *)local_2f8 != 0) {
            LOCK();
            *(int *)local_2f8 = *(int *)local_2f8 + -1;
            local_31 = *(int *)local_2f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001dc9d8;
          }
          QArrayData::deallocate(local_2f8,2,8);
        }
LAB_1001dc9d8:
        FUN_100081140(local_318,&local_2e8);
        pCVar17 = (CTaskGenericId *)CTaskManager::instance();
        lVar13 = CTaskManager::getTaskById(pCVar17);
        if (lVar13 == 0) {
LAB_1001dca23:
          plVar15 = operator_new(200);
          local_320 = 1;
          local_31f = 0;
          local_328[0] = param_6;
          local_324 = uVar19;
          FUN_1002294c0(plVar15,param_2,&local_2f0,local_328,param_5);
          local_348 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
          local_340 = param_2;
          if (DAT_1022714e8 == 0) {
            DAT_1022714e8 = FUN_1001ce4a0("QPointer<CServerWrap>",0xffffffffffffffff,1);
          }
          QVariant::QVariant(&local_338,DAT_1022714e8,&local_348,0);
          QObject::setProperty((char *)plVar15,(QVariant *)"server");
          QVariant::~QVariant(&local_338);
          if (local_348 != (int *)0x0) {
            LOCK();
            *local_348 = *local_348 + -1;
            local_31 = *local_348 != 0;
            UNLOCK();
            if ((!(bool)local_31) && (local_348 != (int *)0x0)) {
              operator_delete(local_348);
            }
          }
          QVariant::QVariant(&local_358,&local_2e8);
          QObject::setProperty((char *)plVar15,(QVariant *)"vmPath");
          QVariant::~QVariant(&local_358);
          CAbstractTask::execute();
        }
        else {
          cVar4 = CAbstractTask::isFinished();
          plVar15 = (long *)0x0;
          if (cVar4 != '\0') goto LAB_1001dca23;
        }
        CTaskGenericId::~CTaskGenericId(local_318);
        FUN_100086a10(&local_2f0);
      }
LAB_1001dcddb:
      if (local_3e8 != (long *)0x0) {
        LOCK();
        plVar14 = local_3e8 + 1;
        lVar13 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)(*local_3e8 + 0x10))();
        }
      }
      if (pQVar11 != (QMetaObject *)0x0) {
        LOCK();
        pQVar1 = pQVar11 + 8;
        iVar9 = *(int *)pQVar1;
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*(long *)pQVar11 + 0x10))(pQVar11);
        }
      }
      if (*(int *)local_160.field0_0x0 != -1) {
        if (*(int *)local_160.field0_0x0 != 0) {
          LOCK();
          *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
          local_31 = *(int *)local_160.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001dce57;
        }
        QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
      }
    }
  }
  else {
    QString::toUtf8();
    FUN_100df99c0("[AppController]","prl_client_app",0,"invalid input Path == %s",
                  local_e8 + *(long *)(local_e8 + 0x10));
    plVar15 = (long *)0x0;
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        plVar15 = (long *)0x0;
        if ((bool)local_31) goto LAB_1001dce57;
      }
      plVar15 = (long *)0x0;
      QArrayData::deallocate(local_e8,1,8);
    }
  }
LAB_1001dce57:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001dce87;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1001dce87:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return plVar15;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return plVar15;
}

