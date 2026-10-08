
void FUN_10067e8c0(long param_1,int param_2,char param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  QArrayData *pQVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  MessageParams *pMVar11;
  QWidget *pQVar12;
  QString *pQVar13;
  CSlotInfo *pCVar14;
  bool bVar15;
  int iVar16;
  QString local_248 [22];
  QArrayData *local_198;
  QString local_190;
  QString local_188;
  long local_180;
  QString local_178;
  long local_170;
  QString local_168;
  long local_160;
  QString local_158;
  QString local_150;
  QString local_148;
  Data_conflict local_140;
  undefined4 local_138;
  QArrayData *local_130;
  int *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  QVariant local_108;
  undefined1 local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  AnonymousUnion0 local_e0;
  QVariant local_d8;
  QArrayData *local_c8;
  int *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  QVariant local_a0;
  undefined1 local_90;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  QVariant local_48;
  undefined1 local_31;
  
  puVar1 = (undefined8 *)(param_1 + 0x48);
  lVar7 = QMetaObject::cast((QObject *)&PTR_PTR_102209400);
  piVar2 = (int *)*puVar1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_31 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_31) && ((void *)*puVar1 != (void *)0x0)) {
      operator_delete((void *)*puVar1);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *puVar1 = 0;
  }
  bVar15 = SUB81(param_1,0);
  if (param_3 != '\0') {
    *(int *)(param_1 + 0x14c) = (param_2 >> 0x1f) + 3;
    CContentModel::setBusy(bVar15);
    FUN_10084a9e0(param_1,param_2);
    return;
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar8 = FUN_10016f500(uVar8);
  cVar4 = FUN_10061c5c0(uVar8);
  if ((-1 < param_2) && (cVar4 == '\0')) {
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x60);
    }
    uVar9 = FUN_10016f500(uVar9);
    FUN_10061abe0(&local_48,uVar9,0);
    param_2 = QVariant::toInt((bool *)&local_48);
    QVariant::~QVariant(&local_48);
  }
  *(int *)(param_1 + 0x150) = (param_2 >> 0x1f) + 3;
  CContentModel::setBusy(bVar15);
  FUN_10084a900(param_1,param_2);
  if (-1 < param_2) {
    cVar5 = FUN_100d80630(1);
    if (cVar5 != '\0') {
      CContentModel::setBusy(bVar15);
      uVar9 = 0;
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
        uVar9 = *(undefined8 *)(param_1 + 0x60);
      }
      FUN_10068a870(*(undefined8 *)(param_1 + 0x20),uVar9);
    }
    uVar9 = FUN_1001d50a0();
    uVar9 = FUN_1001d50d0(uVar9);
    FUN_1001e1cc0(uVar9,uVar8);
    if (cVar4 != '\0') {
      FUN_1006768e0(param_1);
      return;
    }
    cVar4 = FUN_10061b4d0(uVar8,2);
    if (cVar4 == '\0') {
      return;
    }
    FUN_100677d80(param_1);
    return;
  }
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  if (param_2 == -0x7ffb8fdb) {
    iVar16 = -0x7ffeaafe;
LAB_10067eae4:
    if (*(char *)(param_1 + 0x160) == '\0') goto LAB_10067eaf2;
  }
  else {
    if (param_2 == -0x7ffb8fd0) {
      iVar16 = -0x7ffb8fbc;
      goto LAB_10067eae4;
    }
LAB_10067eaf2:
    if ((lVar7 == 0) || (param_2 != -0x7ffb8fc8 && param_2 != -0x7ffb8fbf)) {
      iVar16 = param_2;
      if (param_2 == -0x7ffb8fbe) {
        local_130 = (QArrayData *)
                    QString::fromAscii_helper
                              ("1onNeedPreviousKeyMessageClosed(PRL_RESULT,Messaging::ButtonID)",
                               0x3f);
        local_138 = 0x80000000;
        local_140.field7 = 0;
        FUN_100a1c600(&local_128,param_1,&local_130,&local_140);
        piVar2 = local_128;
        if (local_88 != local_128) {
          if (local_128 != (int *)0x0) {
            LOCK();
            *local_128 = *local_128 + 1;
            local_31 = *local_128 != 0;
            UNLOCK();
          }
          if (local_88 != (int *)0x0) {
            LOCK();
            *local_88 = *local_88 + -1;
            local_31 = *local_88 != 0;
            UNLOCK();
            if ((!(bool)local_31) && (local_88 != (int *)0x0)) {
              operator_delete(local_88);
            }
          }
          local_88 = piVar2;
          uStack_80 = local_120;
        }
        local_70 = local_110;
        local_78 = local_118;
        QVariant::operator=((QVariant *)&local_68,&local_108);
        local_58 = local_f8;
        QVariant::~QVariant(&local_108);
        if (local_128 != (int *)0x0) {
          LOCK();
          *local_128 = *local_128 + -1;
          local_31 = *local_128 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (local_128 != (int *)0x0)) {
            operator_delete(local_128);
          }
        }
        QVariant::~QVariant((QVariant *)&local_140);
        iVar16 = -0x7ffb8fbe;
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_31 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067eeb0;
          }
          QArrayData::deallocate(local_130,2,8);
        }
      }
    }
    else {
      local_c8 = (QArrayData *)
                 QString::fromAscii_helper
                           ("1onKeyLimitReachedConsumerMessageClosed(PRL_RESULT,Messaging::ButtonID,QVariant)"
                            ,0x50);
      local_e0.field1 = (Data *)PTR_shared_null_1021e15e8;
      pQVar3 = *(QArrayData **)(lVar7 + 0x48);
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      local_e8 = pQVar3;
      FUN_1000341d0(&local_e0,&local_e8);
      QString::number((int)&local_f0,*(int *)(lVar7 + 0x50));
      FUN_1000341d0(&local_e0,&local_f0);
      QVariant::QVariant(&local_d8,(QStringList *)&local_e0.field0);
      FUN_100a1c600(&local_c0,param_1,&local_c8,&local_d8);
      piVar2 = local_c0;
      if (local_88 != local_c0) {
        if (local_c0 != (int *)0x0) {
          LOCK();
          *local_c0 = *local_c0 + 1;
          local_31 = *local_c0 != 0;
          UNLOCK();
        }
        if (local_88 != (int *)0x0) {
          LOCK();
          *local_88 = *local_88 + -1;
          local_31 = *local_88 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (local_88 != (int *)0x0)) {
            operator_delete(local_88);
          }
        }
        local_88 = piVar2;
        uStack_80 = local_b8;
      }
      local_70 = local_a8;
      local_78 = local_b0;
      QVariant::operator=((QVariant *)&local_68,&local_a0);
      local_58 = local_90;
      QVariant::~QVariant(&local_a0);
      if (local_c0 != (int *)0x0) {
        LOCK();
        *local_c0 = *local_c0 + -1;
        local_31 = *local_c0 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_c0 != (int *)0x0)) {
          operator_delete(local_c0);
        }
      }
      QVariant::~QVariant(&local_d8);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10067ecd3;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_10067ecd3:
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10067ed02;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_10067ed02:
      FUN_100039a80(&local_e0);
      iVar16 = -0x7ffeaafc;
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10067eeb0;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
    }
  }
LAB_10067eeb0:
  cVar4 = FUN_10061c760(iVar16);
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x164) = 1;
    CAbstractWizardModel::goToPage(param_1,3,0);
    goto LAB_10067f33b;
  }
  if (param_2 == -0x7ffb8fa9) {
    iVar6 = CAbstractWizardModel::currentPageId();
    if (iVar6 == 1) goto LAB_10067f33b;
LAB_10067ef0a:
    iVar6 = CAbstractWizardModel::currentPageId();
    if (iVar6 == 0xc) {
      if (lVar7 != 0) {
        local_148.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar7 + 0x48);
        if (1 < *(int *)local_148.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + 1;
          local_31 = *(int *)local_148.field0_0x0 != 0;
          UNLOCK();
        }
        QString::operator=((QString *)(param_1 + 200),&local_148);
        if (*(int *)local_148.field0_0x0 != -1) {
          if (*(int *)local_148.field0_0x0 != 0) {
            LOCK();
            *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
            local_31 = *(int *)local_148.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067ef94;
          }
          QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
        }
      }
LAB_10067ef94:
      CAbstractWizardModel::goToPage(param_1,1,0);
      goto LAB_10067f33b;
    }
  }
  else if (param_2 == -0x7ffeeff7) goto LAB_10067ef0a;
  local_150.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_158.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if ((((lVar7 == 0) || (iVar16 == -0x7ffffff7)) || (iVar16 != param_2)) ||
     ((iVar16 == -0x7ffffd8b || (lVar10 = FUN_1002c6ac0(lVar7), lVar10 == 0)))) {
    MessageUtils::getMessageString((int)&local_188,SUB41(iVar16,0));
    QString::operator=(&local_150,&local_188);
    if (*(int *)local_188.field0_0x0 != -1) {
      if (*(int *)local_188.field0_0x0 != 0) {
        LOCK();
        *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
        local_31 = *(int *)local_188.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067f1a6;
      }
      QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
    }
LAB_10067f1a6:
    MessageUtils::getMessageString((int)&local_190,SUB41(iVar16,0));
    QString::operator=(&local_158,&local_190);
    if (*(int *)local_190.field0_0x0 != -1) {
      if (*(int *)local_190.field0_0x0 != 0) {
        LOCK();
        *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
        local_31 = *(int *)local_190.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067f200;
      }
      QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
    }
  }
  else {
    FUN_1002c6ac0(lVar7);
    CSdkRequest::getErrorEventHandle();
    local_170 = local_160;
    if (local_160 != 0) {
      _PrlHandle_AddRef();
    }
    MessageUtils::getMessageString(&local_168,&local_170,1);
    QString::operator=(&local_150,&local_168);
    if (*(int *)local_168.field0_0x0 != -1) {
      if (*(int *)local_168.field0_0x0 != 0) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
        local_31 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067f097;
      }
      QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
    }
LAB_10067f097:
    if (local_170 != 0) {
      _PrlHandle_Free();
    }
    local_180 = local_160;
    if (local_160 != 0) {
      _PrlHandle_AddRef();
    }
    MessageUtils::getMessageString(&local_178,&local_180,0);
    QString::operator=(&local_158,&local_178);
    if (*(int *)local_178.field0_0x0 != -1) {
      if (*(int *)local_178.field0_0x0 != 0) {
        LOCK();
        *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
        local_31 = *(int *)local_178.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067f11e;
      }
      QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
    }
LAB_10067f11e:
    if (local_180 != 0) {
      _PrlHandle_Free();
    }
    if (local_160 != 0) {
      _PrlHandle_Free();
    }
  }
LAB_10067f200:
  FUN_1006221e0(&local_198,iVar16,*(undefined1 *)(param_1 + 0x160));
  QString::append(&local_158);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067f260;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10067f260:
  pMVar11 = (MessageParams *)CMessageManager::instance();
  CAbstractWizardModel::wizardCtrl();
  pQVar12 = (QWidget *)CWizardController::parentWidget();
  MessageParams::MessageParams((MessageParams *)local_248,iVar16,pQVar12);
  pQVar13 = (QString *)MessageParams::setShortMsg(local_248);
  pCVar14 = (CSlotInfo *)MessageParams::setLongMsg(pQVar13);
  MessageParams::setCloseMsgSlot(pCVar14);
  CMessageManager::showMessageBox(pMVar11);
  FUN_1001f39d0(local_248);
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_31 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067f305;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_10067f305:
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_31 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067f33b;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_10067f33b:
  QVariant::~QVariant((QVariant *)&local_68);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    local_31 = *local_88 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_88 != (int *)0x0)) {
      operator_delete(local_88);
    }
  }
  return;
}

