
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_1002e1260(QObject *param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  QObject *pQVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  QObject *pQVar11;
  int *piVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  QObject *pQVar17;
  QUrl *pQVar18;
  bool bVar19;
  uint in_stack_fffffffffffffddc;
  long local_208;
  long local_200;
  long local_1f8;
  undefined4 local_1ec;
  int *local_1e8;
  QObject *pQStack_1e0;
  QVariant local_1d8;
  QArrayData *local_1c8;
  Data_conflict local_1c0;
  QString local_1b8 [2];
  int *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  Data_conflict local_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined1 local_170 [24];
  Data_conflict local_158 [2];
  QArrayData *local_148;
  int *local_140 [4];
  QVariant local_120 [2];
  long local_108;
  Data *local_100;
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QString local_90 [2];
  QUrl local_80 [8];
  long local_78;
  long local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(*(long *)(param_1 + 0x18) + 8) == 0x65) {
    CAbstractTask::setWaitForSubTaskCompletion();
    lVar16 = *(long *)(param_1 + 0x18);
    pQVar6 = operator_new(0x38);
    CAbstractWebView::CAbstractWebView((CAbstractWebView *)pQVar6,0,0,0);
    piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
    piVar8 = *(int **)(lVar16 + 0x70);
    if (piVar8 != piVar7) {
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        piVar8 = *(int **)(lVar16 + 0x70);
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(lVar16 + 0x70) != (void *)0x0)) {
          operator_delete(*(void **)(lVar16 + 0x70));
        }
      }
      *(int **)(lVar16 + 0x70) = piVar7;
      *(QObject **)(lVar16 + 0x78) = pQVar6;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
    lVar16 = *(long *)(*(long *)(param_1 + 0x18) + 0x70);
    uVar9 = 0;
    if ((lVar16 != 0) && (uVar9 = 0, *(int *)(lVar16 + 4) != 0)) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78);
    }
    cVar4 = '\0';
    QObject::connect(&local_70,uVar9,"2loadStarted()",param_1,"1onPromoPageLoading()",0);
    if (local_70 != 0) {
      cVar4 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    lVar16 = *(long *)(*(long *)(param_1 + 0x18) + 0x70);
    uVar9 = 0;
    if ((lVar16 != 0) && (uVar9 = 0, *(int *)(lVar16 + 4) != 0)) {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78);
    }
    QObject::connect(&local_78,uVar9,"2loadFinished(bool)",param_1,"1onPromoPageLoaded(bool)",0);
    if ((cVar4 != '\0') && (local_78 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    lVar16 = *(long *)(*(long *)(param_1 + 0x18) + 0x70);
    pQVar18 = (QUrl *)0x0;
    if ((lVar16 != 0) && (pQVar18 = (QUrl *)0x0, *(int *)(lVar16 + 4) != 0)) {
      pQVar18 = *(QUrl **)(*(long *)(param_1 + 0x18) + 0x78);
    }
    QUrl::QUrl(local_80,*(long *)(param_1 + 0x20) + 8,0);
    CAbstractWebView::load(pQVar18);
    QUrl::~QUrl(local_80);
    return 0;
  }
  QSettings::QSettings((QSettings *)local_90,(QObject *)0x0);
  FUN_10077f090(&local_a8,*(undefined4 *)(*(long *)(param_1 + 0x18) + 8));
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a8;
  if (1 < *(int *)local_a8 + 1U) {
    LOCK();
    *(int *)local_a8 = *(int *)local_a8 + 1;
    local_31 = *(int *)local_a8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_68,0x1e2468c);
  QString::append(&local_a0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e14a7;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002e14a7:
  local_98.field0_0x0 = local_a0.field0_0x0;
  if (1 < *(int *)local_a0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
    local_31 = *(int *)local_a0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1de591c);
  QString::append(&local_98);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e151b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002e151b:
  QSettings::remove(local_90);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1564;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1002e1564:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e159a;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1002e159a:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e15d0;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1002e15d0:
  FUN_10077f090(&local_c0,*(undefined4 *)(*(long *)(param_1 + 0x18) + 8));
  local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c0;
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    local_31 = *(int *)local_c0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1e2468c);
  QString::append(&local_b8);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1657;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002e1657:
  local_b0.field0_0x0 = local_b8.field0_0x0;
  if (1 < *(int *)local_b8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
    local_31 = *(int *)local_b8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1de5928);
  QString::append(&local_b0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e16cb;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002e16cb:
  QSettings::remove(local_90);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1714;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1002e1714:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e174a;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1002e174a:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1780;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1002e1780:
  iVar5 = *(int *)(*(long *)(param_1 + 0x18) + 8);
  if (iVar5 - 3U < 2) {
    uVar13 = 0x3c60;
    if (iVar5 == 4) {
      uVar13 = 0x3c94;
    }
    CMessageManager::instance();
    CMessageManager::getMessageWindowsForId((int)&local_100);
    iVar5 = *(int *)(local_100 + 0xc);
    iVar1 = *(int *)(local_100 + 8);
    bVar19 = iVar5 != iVar1;
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e17f6;
      }
      QListData::dispose(local_100);
    }
LAB_1002e17f6:
    if (iVar5 == iVar1) {
      CAbstractTask::setWaitForSubTaskCompletion();
      if (*(int *)(*(long *)(param_1 + 0x18) + 8) == 4) {
        uVar9 = CMessageManager::instance();
        QObject::connect(&local_108,uVar9,"2notificationClicked(PRL_RESULT)",param_1,
                         "1onNotificationClicked(PRL_RESULT)",0);
        if (local_108 != 0) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_108);
        QTimer::singleShot(60000,param_1,"1onNotificationTimeout()");
      }
      local_148 = (QArrayData *)
                  QString::fromAscii_helper
                            ("1onNotificationClosed(PRL_RESULT,Messaging::ButtonID)",0x35);
      local_158[1].field7._0_4_ = 0x80000000;
      local_158[0].field7 = 0;
      FUN_100a1c600(local_140,param_1,&local_148,local_158);
      QVariant::~QVariant((QVariant *)local_158);
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e18fb;
        }
        QArrayData::deallocate(local_148,2,8);
      }
LAB_1002e18fb:
      iVar5 = CMessageManager::instance();
      puVar2 = PTR_shared_null_1021e15e8;
      local_170._16_8_ = PTR_shared_null_1021e1288;
      local_170._8_8_ = PTR_shared_null_1021e15e8;
      FUN_1000341d0(local_170 + 8,*(long *)(param_1 + 0x18) + 0x30);
      local_170._0_8_ = puVar2;
      FUN_1000341d0(local_170,*(long *)(param_1 + 0x18) + 0x38);
      local_1a8 = (int *)0x0;
      uStack_1a0 = 0;
      local_190 = 0;
      local_198 = 0;
      local_180 = 0x80000000;
      local_188.field7 = 0;
      local_178 = 1;
      CMessageManager::showMessageBox
                (iVar5,(QString *)(ulong)uVar13,(QStringList *)(local_170 + 0x10),
                 (QStringList *)(local_170 + 8),(CSlotInfo *)local_170,SUB81(local_140,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffddc << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_188);
      if (local_1a8 != (int *)0x0) {
        LOCK();
        *local_1a8 = *local_1a8 + -1;
        local_31 = *local_1a8 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_1a8 != (int *)0x0)) {
          operator_delete(local_1a8);
        }
      }
      FUN_100039a80(local_170);
      FUN_100039a80(local_170 + 8);
      if (*(int *)local_170._16_8_ != -1) {
        if (*(int *)local_170._16_8_ != 0) {
          LOCK();
          *(int *)local_170._16_8_ = *(int *)local_170._16_8_ + -1;
          local_31 = *(int *)local_170._16_8_ != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e1a54;
        }
        QArrayData::deallocate((QArrayData *)local_170._16_8_,2,8);
      }
LAB_1002e1a54:
      QSettings::QSettings((QSettings *)local_1b8,(QObject *)0x0);
      FUN_10077f090(&local_1c8,*(undefined4 *)(*(long *)(param_1 + 0x18) + 8));
      local_1c0.field15 = (QObject *)local_1c8;
      if (1 < *(int *)local_1c8 + 1U) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + 1;
        local_31 = *(int *)local_1c8 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
      QString::append((QString *)&local_1c0);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e1ae9;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1002e1ae9:
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_31 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e1b1f;
        }
        QArrayData::deallocate(local_1c8,2,8);
      }
LAB_1002e1b1f:
      QString::append((QString *)&local_1c0);
      QString::fromUtf8_helper((char *)&local_40,0x1de5937);
      QString::append((QString *)&local_1c0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e1b84;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1002e1b84:
      QVariant::QVariant(&local_1d8,true);
      QSettings::setValue(local_1b8,(QVariant *)&local_1c0);
      QVariant::~QVariant(&local_1d8);
      if (*(int *)local_1c0.field15 != -1) {
        if (*(int *)local_1c0.field15 != 0) {
          LOCK();
          *(int *)local_1c0.field15 = *(int *)local_1c0.field15 + -1;
          local_31 = *(int *)local_1c0.field15 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002e1bf1;
        }
        QArrayData::deallocate((QArrayData *)local_1c0.field15,2,8);
      }
LAB_1002e1bf1:
      QSettings::~QSettings((QSettings *)local_1b8);
      QVariant::~QVariant(local_120);
      if (local_140[0] != (int *)0x0) {
        LOCK();
        *local_140[0] = *local_140[0] + -1;
        iVar5 = *local_140[0];
        UNLOCK();
        goto joined_r0x0001002e20d8;
      }
    }
  }
  else {
    if (iVar5 == 100) {
      local_f8 = (int *)0x0;
      uStack_f0 = 0;
      local_e0 = 0;
      local_e8 = 0;
      local_d0 = 0x80000000;
      local_d8.field7 = 0;
      local_c8 = 1;
      FUN_100073d30(*(undefined8 *)(param_1 + 0x20),&local_f8);
      QVariant::~QVariant((QVariant *)&local_d8);
      uVar14 = 0;
      uVar15 = 0;
      if (local_f8 != (int *)0x0) {
        LOCK();
        *local_f8 = *local_f8 + -1;
        local_31 = *local_f8 != 0;
        UNLOCK();
        uVar15 = uVar14;
        if ((!(bool)local_31) && (local_f8 != (int *)0x0)) {
          operator_delete(local_f8);
        }
      }
      goto LAB_1002e210d;
    }
    if ((DAT_1023121e0 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_1023121e0), iVar5 != 0)) {
      DAT_1023121d8 = (undefined8 *)PTR_shared_null_1021e15d0;
      ___cxa_atexit(FUN_1002e5230,&DAT_1023121d8,0x100000000);
      ___cxa_guard_release(&DAT_1023121e0);
    }
    if ((*(int *)((long)DAT_1023121d8 + 0x14) != 0) && (*(uint *)(DAT_1023121d8 + 4) != 0)) {
      uVar13 = *(uint *)((long)DAT_1023121d8 + 0x24) ^ *(uint *)(*(long *)(param_1 + 0x18) + 8);
      for (puVar10 = *(undefined8 **)
                      (DAT_1023121d8[1] + ((ulong)uVar13 % (ulong)*(uint *)(DAT_1023121d8 + 4)) * 8)
          ; puVar10 != DAT_1023121d8; puVar10 = (undefined8 *)*puVar10) {
        if ((*(uint *)(puVar10 + 1) == uVar13) &&
           (*(uint *)(*(long *)(param_1 + 0x18) + 8) == *(uint *)((long)puVar10 + 0xc))) {
          if (puVar10 != DAT_1023121d8) {
            piVar8 = (int *)puVar10[2];
            pQStack_1e0 = (QObject *)puVar10[3];
            local_1e8 = piVar8;
            if (piVar8 == (int *)0x0) {
              bVar19 = false;
              piVar7 = (int *)0x0;
              goto LAB_1002e1df9;
            }
            LOCK();
            *piVar8 = *piVar8 + 1;
            local_31 = *piVar8 != 0;
            UNLOCK();
            bVar19 = pQStack_1e0 != (QObject *)0x0 && piVar8[1] != 0;
            piVar7 = piVar8;
            if ((piVar8[1] == 0) || (pQStack_1e0 == (QObject *)0x0)) goto LAB_1002e1df9;
            goto LAB_1002e2077;
          }
          break;
        }
      }
    }
    local_1e8 = (int *)0x0;
    pQStack_1e0 = (QObject *)0x0;
    bVar19 = false;
    piVar7 = (int *)0x0;
LAB_1002e1df9:
    pQVar6 = pQStack_1e0;
    CAbstractTask::setWaitForSubTaskCompletion();
    pQVar11 = operator_new(0x90);
    FUN_100782c10(pQVar11,*(undefined8 *)(param_1 + 0x20),0);
    piVar12 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar11);
    piVar8 = piVar7;
    piVar3 = local_1e8;
    pQVar17 = pQStack_1e0;
    if (piVar7 != piVar12) {
      if (piVar12 != (int *)0x0) {
        LOCK();
        *piVar12 = *piVar12 + 1;
        local_31 = *piVar12 != 0;
        UNLOCK();
      }
      pQVar6 = pQVar11;
      piVar8 = piVar12;
      piVar3 = piVar12;
      pQVar17 = pQVar11;
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (piVar7 != (int *)0x0)) {
          operator_delete(piVar7);
        }
      }
    }
    pQStack_1e0 = pQVar17;
    local_1e8 = piVar3;
    if (piVar12 != (int *)0x0) {
      LOCK();
      *piVar12 = *piVar12 + -1;
      local_31 = *piVar12 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar12);
      }
    }
    pQVar17 = (QObject *)0x0;
    if ((piVar8 != (int *)0x0) && (pQVar17 = (QObject *)0x0, piVar8[1] != 0)) {
      pQVar17 = pQVar6;
    }
    QWidget::setAttribute(pQVar17,0x37,1);
    local_1ec = *(undefined4 *)(*(long *)(param_1 + 0x18) + 8);
    FUN_1002e5270(&DAT_1023121d8,&local_1ec,&local_1e8);
    lVar16 = *(long *)(param_1 + 0x18);
    piVar7 = *(int **)(lVar16 + 0x50);
    if (piVar7 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        piVar7 = *(int **)(lVar16 + 0x50);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(lVar16 + 0x50) != (void *)0x0)) {
          operator_delete(*(void **)(lVar16 + 0x50));
        }
      }
      *(int **)(lVar16 + 0x50) = piVar8;
      *(QObject **)(lVar16 + 0x58) = pQVar6;
      lVar16 = *(long *)(param_1 + 0x18);
    }
    if (*(int *)(lVar16 + 8) == 100) {
      FUN_1002e2990(param_1,1);
      cVar4 = '\x01';
    }
    else {
      pQVar17 = (QObject *)0x0;
      if ((piVar8 != (int *)0x0) && (pQVar17 = (QObject *)0x0, piVar8[1] != 0)) {
        pQVar17 = pQVar6;
      }
      QObject::connect(&local_1f8,pQVar17,"2pageLoaded(bool)",param_1,"1onPromoPageLoaded(bool)",0);
      if (local_1f8 == 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_1f8);
    }
    pQVar17 = (QObject *)0x0;
    if ((piVar8 != (int *)0x0) && (pQVar17 = (QObject *)0x0, piVar8[1] != 0)) {
      pQVar17 = pQVar6;
    }
    QObject::connect(&local_200,pQVar17,"2purchaseUpgrade(const QString&, const QString&)",param_1,
                     "1onRequestProductUpgradePurchase(const QString&, const QString&)",2);
    if (cVar4 == '\0') {
      cVar4 = '\0';
    }
    else if (local_200 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_200);
    pQVar17 = (QObject *)0x0;
    if ((piVar8 != (int *)0x0) && (pQVar17 = (QObject *)0x0, piVar8[1] != 0)) {
      pQVar17 = pQVar6;
    }
    QObject::connect(&local_208,pQVar17,"2freeUpgrade(const QString&)",param_1,
                     "1onRequestProductFreeUpgrade(const QString&)",0);
    if ((cVar4 != '\0') && (local_208 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_208);
LAB_1002e2077:
    if (param_1[0x28] != (QObject)0x0) {
      QWidget::show();
    }
    QWidget::activateWindow();
    QWidget::raise();
    if (piVar8 == (int *)0x0) goto LAB_1002e2100;
    LOCK();
    *piVar8 = *piVar8 + -1;
    iVar5 = *piVar8;
    UNLOCK();
    local_140[0] = piVar8;
joined_r0x0001002e20d8:
    local_31 = iVar5 != 0;
    if ((!(bool)local_31) && (local_140[0] != (int *)0x0)) {
      operator_delete(local_140[0]);
    }
  }
LAB_1002e2100:
  uVar15 = 0x3c2c;
  if (!bVar19) {
    uVar15 = 0;
  }
LAB_1002e210d:
  QSettings::~QSettings((QSettings *)local_90);
  return uVar15;
}

