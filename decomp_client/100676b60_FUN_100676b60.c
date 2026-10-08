
void FUN_100676b60(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  QStringList *pQVar3;
  undefined8 uVar4;
  AnonymousUnion0 *pAVar5;
  undefined4 local_278 [2];
  undefined1 local_270 [16];
  QString local_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined4 local_240;
  Data_conflict local_238;
  undefined4 local_230;
  undefined1 local_228;
  undefined1 local_220 [16];
  QArrayData *local_210;
  QArrayData *local_208;
  AnonymousUnion0 local_200;
  Data_conflict local_1f8;
  undefined4 local_1f0;
  QArrayData *local_1e8;
  int *local_1e0 [4];
  QVariant local_1c0 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  bool local_180;
  Data_conflict local_178;
  undefined4 local_170;
  undefined1 local_168;
  QString local_160;
  undefined1 local_158 [32];
  undefined8 local_138;
  bool local_130;
  Data_conflict local_128;
  undefined4 local_120;
  undefined1 local_118;
  QString local_110;
  undefined1 local_108 [32];
  undefined8 local_e8;
  bool local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_b8 [32];
  undefined8 local_98;
  bool local_90;
  Data_conflict local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_68 [24];
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long **)(param_1 + 0x40) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x1b8))();
  }
  if (-1 < param_2) {
    *(undefined1 *)(param_1 + 0x15e) = 1;
    CContentModel::setBusy(SUB81(param_1,0));
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_1006893a0(*(undefined8 *)(param_1 + 0x20),uVar4);
    return;
  }
  CContentModel::setBusy(SUB81(param_1,0));
  if (param_2 < -0x7ffb8ffe) {
    if (param_2 == -0x7ffffd8b) goto LAB_1006772b7;
LAB_100677103:
    iVar2 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar3 = (QStringList *)CWizardController::parentWidget();
    puVar1 = PTR_shared_null_1021e15e8;
    local_200.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_210 = (QArrayData *)
                QString::fromAscii_helper("http://www.parallels.com/account-@LOCALE@",0x29);
    QLocale::QLocale((QLocale *)(local_220 + 8));
    FUN_100d3f730(&local_208,&local_210,local_220 + 8);
    FUN_1000341d0(&local_200,&local_208);
    local_220._0_8_ = puVar1;
    local_258 = (undefined1  [16])0x0;
    local_240 = 0;
    local_248 = 0;
    local_230 = 0x80000000;
    local_238.field7 = 0;
    local_228 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QWidget *)0x80015302,pQVar3,(QStringList *)&local_200.field0,
               (CSlotInfo *)local_220,SUB81(local_258,0));
    QVariant::~QVariant((QVariant *)&local_238);
    if ((int *)local_258._0_8_ != (int *)0x0) {
      LOCK();
      *(int *)local_258._0_8_ = *(int *)local_258._0_8_ + -1;
      local_31 = *(int *)local_258._0_8_ != 0;
      UNLOCK();
      if ((!(bool)local_31) && ((int *)local_258._0_8_ != (int *)0x0)) {
        operator_delete((void *)local_258._0_8_);
      }
    }
    FUN_100039a80(local_220);
    if (*(int *)local_208 != -1) {
      if (*(int *)local_208 != 0) {
        LOCK();
        *(int *)local_208 = *(int *)local_208 + -1;
        local_31 = *(int *)local_208 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100677269;
      }
      QArrayData::deallocate(local_208,2,8);
    }
LAB_100677269:
    QLocale::~QLocale((QLocale *)(local_220 + 8));
    if (*(int *)local_210 != -1) {
      if (*(int *)local_210 != 0) {
        LOCK();
        *(int *)local_210 = *(int *)local_210 + -1;
        local_31 = *(int *)local_210 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006772ab;
      }
      QArrayData::deallocate(local_210,2,8);
    }
LAB_1006772ab:
    pAVar5 = &local_200;
  }
  else if (param_2 < -0x7ffb8fce) {
    if (param_2 < -0x7ffb8fef) {
      if ((6 < param_2 + 0x7ffb8ffeU) || ((0x51U >> (param_2 + 0x7ffb8ffeU & 0x1f) & 1) == 0))
      goto LAB_100677103;
      iVar2 = CMessageManager::instance();
      CAbstractWizardModel::wizardCtrl();
      pQVar3 = (QStringList *)CWizardController::parentWidget();
      local_68._8_8_ = PTR_shared_null_1021e15e8;
      local_68._0_8_ = PTR_shared_null_1021e15e8;
      local_b8._16_16_ = (undefined1  [16])0x0;
      local_90 = 0;
      local_98 = 0;
      local_80 = 0x80000000;
      local_88.field7 = 0;
      local_78 = 1;
      CMessageManager::showMessageBox
                (iVar2,(QWidget *)0x80015301,pQVar3,(QStringList *)(local_68 + 8),
                 (CSlotInfo *)local_68,(bool)((char)local_b8 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_88);
      if ((QMetaObject *)local_b8._16_8_ != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_b8._16_8_ = *(int *)local_b8._16_8_ + -1;
        local_31 = *(int *)local_b8._16_8_ != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((QMetaObject *)local_b8._16_8_ != (QMetaObject *)0x0)) {
          operator_delete((void *)local_b8._16_8_);
        }
      }
      FUN_100039a80(local_68);
      pAVar5 = (AnonymousUnion0 *)(local_68 + 8);
    }
    else {
      if (param_2 + 0x7ffb8fefU < 2) {
        iVar2 = CMessageManager::instance();
        CAbstractWizardModel::wizardCtrl();
        pQVar3 = (QStringList *)CWizardController::parentWidget();
        puVar1 = PTR_shared_null_1021e15e8;
        local_1a8._8_8_ = PTR_shared_null_1021e15e8;
        FUN_1000341d0(local_1a8 + 8,param_1 + 0x108);
        local_1a8._0_8_ = puVar1;
        local_1e8 = (QArrayData *)
                    QString::fromAscii_helper
                              ("1onSignInErrorMessageClosed(PRL_RESULT,Messaging::ButtonID)",0x3b);
        local_1f0 = 0x80000000;
        local_1f8.field7 = 0;
        FUN_100a1c600(local_1e0,param_1,&local_1e8,&local_1f8);
        CMessageManager::showMessageBox
                  (iVar2,(QWidget *)0x80047011,pQVar3,(QStringList *)(local_1a8 + 8),
                   (CSlotInfo *)local_1a8,SUB81(local_1e0,0));
        QVariant::~QVariant(local_1c0);
        if (local_1e0[0] != (int *)0x0) {
          LOCK();
          *local_1e0[0] = *local_1e0[0] + -1;
          local_31 = *local_1e0[0] != 0;
          UNLOCK();
          if ((!(bool)local_31) && (local_1e0[0] != (int *)0x0)) {
            operator_delete(local_1e0[0]);
          }
        }
        QVariant::~QVariant((QVariant *)&local_1f8);
        if (*(int *)local_1e8 != -1) {
          if (*(int *)local_1e8 != 0) {
            LOCK();
            *(int *)local_1e8 = *(int *)local_1e8 + -1;
            local_31 = *(int *)local_1e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100676f3b;
          }
          QArrayData::deallocate(local_1e8,2,8);
        }
LAB_100676f3b:
        FUN_100039a80(local_1a8);
        FUN_100039a80(local_1a8 + 8);
        return;
      }
      if (param_2 == -0x7ffb8fed) {
        iVar2 = CMessageManager::instance();
        CAbstractWizardModel::wizardCtrl();
        pQVar3 = (QStringList *)CWizardController::parentWidget();
        local_158._8_8_ = PTR_shared_null_1021e15e8;
        local_158._0_8_ = PTR_shared_null_1021e15e8;
        local_160.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        if (*(int *)(param_1 + 0x100) == 2) {
          QString::fromUtf8_helper((char *)&local_50,0x1e0b1cd);
          QString::operator=(&local_160,&local_50);
          if (*(int *)local_50.field0_0x0 != -1) {
            if (*(int *)local_50.field0_0x0 != 0) {
              LOCK();
              *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
              local_31 = *(int *)local_50.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006773a0;
            }
            QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
          }
        }
        else if (*(int *)(param_1 + 0x100) == 1) {
          QString::fromUtf8_helper((char *)&local_40,0x1e0b1c4);
          QString::operator=(&local_160,&local_40);
          if (*(int *)local_40.field0_0x0 != -1) {
            if (*(int *)local_40.field0_0x0 != 0) {
              LOCK();
              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
              local_31 = *(int *)local_40.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006773a0;
            }
            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
          }
        }
LAB_1006773a0:
        FUN_1000341d0(local_158,&local_160);
        local_1a8._16_16_ = (undefined1  [16])0x0;
        local_180 = 0;
        local_188 = 0;
        local_170 = 0x80000000;
        local_178.field7 = 0;
        local_168 = 1;
        CMessageManager::showMessageBox
                  (iVar2,(QWidget *)0x80047013,pQVar3,(QStringList *)(local_158 + 8),
                   (CSlotInfo *)local_158,(bool)((char)local_1a8 + '\x10'));
        QVariant::~QVariant((QVariant *)&local_178);
        if ((QMetaObject *)local_1a8._16_8_ != (QMetaObject *)0x0) {
          LOCK();
          *(int *)local_1a8._16_8_ = *(int *)local_1a8._16_8_ + -1;
          local_31 = *(int *)local_1a8._16_8_ != 0;
          UNLOCK();
          if ((!(bool)local_31) && ((QMetaObject *)local_1a8._16_8_ != (QMetaObject *)0x0)) {
            operator_delete((void *)local_1a8._16_8_);
          }
        }
        if (*(int *)local_160.field0_0x0 != -1) {
          if (*(int *)local_160.field0_0x0 != 0) {
            LOCK();
            *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
            local_31 = *(int *)local_160.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067748f;
          }
          QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
        }
LAB_10067748f:
        FUN_100039a80(local_158);
        pAVar5 = (AnonymousUnion0 *)(local_158 + 8);
      }
      else {
        if (param_2 != -0x7ffb8fea) goto LAB_100677103;
        iVar2 = CMessageManager::instance();
        CAbstractWizardModel::wizardCtrl();
        pQVar3 = (QStringList *)CWizardController::parentWidget();
        local_108._8_8_ = PTR_shared_null_1021e15e8;
        local_108._0_8_ = PTR_shared_null_1021e15e8;
        local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        if (*(int *)(param_1 + 0x100) == 2) {
          QString::fromUtf8_helper(local_68 + 0x10,0x1e0b1cd);
          QString::operator=(&local_110,(QString *)(local_68 + 0x10));
          if (*(int *)local_68._16_8_ != -1) {
            if (*(int *)local_68._16_8_ != 0) {
              LOCK();
              *(int *)local_68._16_8_ = *(int *)local_68._16_8_ + -1;
              local_31 = *(int *)local_68._16_8_ != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100677501;
            }
            QArrayData::deallocate((QArrayData *)local_68._16_8_,2,8);
          }
        }
        else if (*(int *)(param_1 + 0x100) == 1) {
          QString::fromUtf8_helper((char *)&local_48,0x1e0b1c4);
          QString::operator=(&local_110,&local_48);
          if (*(int *)local_48.field0_0x0 != -1) {
            if (*(int *)local_48.field0_0x0 != 0) {
              LOCK();
              *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
              local_31 = *(int *)local_48.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100677501;
            }
            QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
          }
        }
LAB_100677501:
        FUN_1000341d0(local_108,&local_110);
        local_158._16_16_ = (undefined1  [16])0x0;
        local_130 = 0;
        local_138 = 0;
        local_120 = 0x80000000;
        local_128.field7 = 0;
        local_118 = 1;
        CMessageManager::showMessageBox
                  (iVar2,(QWidget *)0x80047016,pQVar3,(QStringList *)(local_108 + 8),
                   (CSlotInfo *)local_108,(bool)((char)local_158 + '\x10'));
        QVariant::~QVariant((QVariant *)&local_128);
        if ((QMetaObject *)local_158._16_8_ != (QMetaObject *)0x0) {
          LOCK();
          *(int *)local_158._16_8_ = *(int *)local_158._16_8_ + -1;
          local_31 = *(int *)local_158._16_8_ != 0;
          UNLOCK();
          if ((!(bool)local_31) && ((QMetaObject *)local_158._16_8_ != (QMetaObject *)0x0)) {
            operator_delete((void *)local_158._16_8_);
          }
        }
        if (*(int *)local_110.field0_0x0 != -1) {
          if (*(int *)local_110.field0_0x0 != 0) {
            LOCK();
            *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
            local_31 = *(int *)local_110.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006775f0;
          }
          QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
        }
LAB_1006775f0:
        FUN_100039a80(local_108);
        pAVar5 = (AnonymousUnion0 *)(local_108 + 8);
      }
    }
  }
  else {
    if (param_2 != -0x7ffb8fce) {
      if (param_2 == -0x7ffb8fbb) {
        *(undefined1 *)(param_1 + 0x160) = 1;
        *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
        CAbstractWizardModel::goToPage(param_1,1,0);
        goto LAB_1006772b7;
      }
      goto LAB_100677103;
    }
    iVar2 = CMessageManager::instance();
    CAbstractWizardModel::wizardCtrl();
    pQVar3 = (QStringList *)CWizardController::parentWidget();
    local_b8._8_8_ = PTR_shared_null_1021e15e8;
    local_b8._0_8_ = PTR_shared_null_1021e15e8;
    local_108._16_16_ = (undefined1  [16])0x0;
    local_e0 = 0;
    local_e8 = 0;
    local_d0 = 0x80000000;
    local_d8.field7 = 0;
    local_c8 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QWidget *)0x80047032,pQVar3,(QStringList *)(local_b8 + 8),
               (CSlotInfo *)local_b8,(bool)((char)local_108 + '\x10'));
    QVariant::~QVariant((QVariant *)&local_d8);
    if ((QMetaObject *)local_108._16_8_ != (QMetaObject *)0x0) {
      LOCK();
      *(int *)local_108._16_8_ = *(int *)local_108._16_8_ + -1;
      local_31 = *(int *)local_108._16_8_ != 0;
      UNLOCK();
      if ((!(bool)local_31) && ((QMetaObject *)local_108._16_8_ != (QMetaObject *)0x0)) {
        operator_delete((void *)local_108._16_8_);
      }
    }
    FUN_100039a80(local_b8);
    pAVar5 = (AnonymousUnion0 *)(local_b8 + 8);
  }
  FUN_100039a80(pAVar5);
LAB_1006772b7:
  local_278[0] = 0;
  local_270._8_4_ = (int)PTR_shared_null_1021e1288;
  local_270._0_8_ = PTR_shared_null_1021e1288;
  local_270._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_260.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x100) = 0;
  QString::operator=((QString *)(param_1 + 0x108),(QString *)local_270);
  QString::operator=((QString *)(param_1 + 0x110),(QString *)(local_270 + 8));
  QString::operator=((QString *)(param_1 + 0x118),&local_260);
  FUN_10064e770(local_278);
  return;
}

