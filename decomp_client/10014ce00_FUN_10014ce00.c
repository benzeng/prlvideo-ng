
void FUN_10014ce00(long *param_1)

{
  QString QVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  undefined4 in_stack_fffffffffffffe4c;
  QArrayData *local_188;
  QArrayData *local_180;
  int *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  Data_conflict local_158;
  undefined4 local_150;
  undefined1 local_148;
  int *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  Data_conflict local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_f8 [32];
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60 [32];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QLineEdit::text();
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  QString::trimmed();
  iVar4 = *(int *)(local_60._24_8_ + 4);
  if (*(int *)local_60._24_8_ != -1) {
    if (*(int *)local_60._24_8_ != 0) {
      LOCK();
      *(int *)local_60._24_8_ = *(int *)local_60._24_8_ + -1;
      local_29 = *(int *)local_60._24_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10014ce77;
    }
    QArrayData::deallocate((QArrayData *)local_60._24_8_,2,8);
  }
LAB_10014ce77:
  if (iVar4 == 0) {
    iVar4 = CMessageManager::instance();
    local_60._16_8_ = PTR_shared_null_1021e1288;
    local_60._8_8_ = PTR_shared_null_1021e15e8;
    local_60._0_8_ = PTR_shared_null_1021e15e8;
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_80 = 0;
    local_88 = 0;
    local_70 = 0x80000000;
    local_78.field7 = 0;
    local_68 = 1;
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    local_a8 = 1;
    CMessageManager::showMessageBox
              (iVar4,(QString *)0x3ad7,(QStringList *)(local_60 + 0x10),
               (QStringList *)(local_60 + 8),(CSlotInfo *)local_60,SUB81(&local_98,0),
               (QWidget *)CONCAT44(in_stack_fffffffffffffe4c,1),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_b8);
    if (local_d8 != (int *)0x0) {
      LOCK();
      *local_d8 = *local_d8 + -1;
      local_29 = *local_d8 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_d8 != (int *)0x0)) {
        operator_delete(local_d8);
      }
    }
    QVariant::~QVariant((QVariant *)&local_78);
    if (local_98 != (int *)0x0) {
      LOCK();
      *local_98 = *local_98 + -1;
      local_29 = *local_98 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_98 != (int *)0x0)) {
        operator_delete(local_98);
      }
    }
    FUN_100039a80(local_60);
    FUN_100039a80(local_60 + 8);
    if (*(int *)local_60._16_8_ != -1) {
      if (*(int *)local_60._16_8_ != 0) {
        LOCK();
        *(int *)local_60._16_8_ = *(int *)local_60._16_8_ + -1;
        local_29 = *(int *)local_60._16_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10014d495;
      }
      QArrayData::deallocate((QArrayData *)local_60._16_8_,2,8);
    }
  }
  else {
    QString::trimmed();
    iVar4 = *(int *)(local_f8._24_8_ + 4);
    if (*(int *)local_f8._24_8_ != -1) {
      if (*(int *)local_f8._24_8_ != 0) {
        LOCK();
        *(int *)local_f8._24_8_ = *(int *)local_f8._24_8_ + -1;
        local_29 = *(int *)local_f8._24_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10014cec8;
      }
      QArrayData::deallocate((QArrayData *)local_f8._24_8_,2,8);
    }
LAB_10014cec8:
    if (iVar4 == 0) {
      iVar4 = CMessageManager::instance();
      local_f8._16_8_ = PTR_shared_null_1021e1288;
      local_f8._8_8_ = PTR_shared_null_1021e15e8;
      local_f8._0_8_ = PTR_shared_null_1021e15e8;
      local_138 = (int *)0x0;
      uStack_130 = 0;
      local_120 = 0;
      local_128 = 0;
      local_110 = 0x80000000;
      local_118.field7 = 0;
      local_108 = 1;
      local_178 = (int *)0x0;
      uStack_170 = 0;
      local_160 = 0;
      local_168 = 0;
      local_150 = 0x80000000;
      local_158.field7 = 0;
      local_148 = 1;
      CMessageManager::showMessageBox
                (iVar4,(QString *)0x3ad6,(QStringList *)(local_f8 + 0x10),
                 (QStringList *)(local_f8 + 8),(CSlotInfo *)local_f8,SUB81(&local_138,0),
                 (QWidget *)CONCAT44(in_stack_fffffffffffffe4c,1),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_158);
      if (local_178 != (int *)0x0) {
        LOCK();
        *local_178 = *local_178 + -1;
        local_29 = *local_178 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_178 != (int *)0x0)) {
          operator_delete(local_178);
        }
      }
      QVariant::~QVariant((QVariant *)&local_118);
      if (local_138 != (int *)0x0) {
        LOCK();
        *local_138 = *local_138 + -1;
        local_29 = *local_138 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_138 != (int *)0x0)) {
          operator_delete(local_138);
        }
      }
      FUN_100039a80(local_f8);
      FUN_100039a80(local_f8 + 8);
      if (*(int *)local_f8._16_8_ != -1) {
        if (*(int *)local_f8._16_8_ != 0) {
          LOCK();
          *(int *)local_f8._16_8_ = *(int *)local_f8._16_8_ + -1;
          local_29 = *(int *)local_f8._16_8_ != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10014d495;
        }
        QArrayData::deallocate((QArrayData *)local_f8._16_8_,2,8);
      }
    }
    else {
      cVar3 = FUN_10015a680(param_1[0x20]);
      if ((cVar3 == '\0') && (cVar3 = QString::startsWith(&local_40,0x7e,1), cVar3 != '\0')) {
        FUN_10015a260(&local_180,param_1[0x20]);
        QString::replace(&local_40,0x7e,&local_180,1);
        if (*(int *)local_180 != -1) {
          if (*(int *)local_180 != 0) {
            LOCK();
            *(int *)local_180 = *(int *)local_180 + -1;
            local_29 = *(int *)local_180 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10014cf5c;
          }
          QArrayData::deallocate(local_180,2,8);
        }
      }
LAB_10014cf5c:
      cVar3 = FUN_10014d9e0(param_1,&local_38);
      if (((cVar3 != '\0') && (cVar3 = FUN_10014e310(), cVar3 != '\0')) &&
         (cVar3 = FUN_10014efb0(param_1,&local_38,&local_40), cVar3 != '\0')) {
        QAbstractButton::isChecked();
        QAbstractButton::isChecked();
        QTextEdit::toPlainText();
        pQVar2 = local_38;
        QVar1.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[0x22];
        if (1 < *(int *)local_38 + 1U) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + 1;
          local_29 = *(int *)local_38 != 0;
          UNLOCK();
        }
        CVmSharedFolder::setName(QVar1);
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_29 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10014d030;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_10014d030:
        pQVar2 = local_40;
        QVar1.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[0x22];
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
        }
        CVmSharedFolder::setPath(QVar1);
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_29 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10014d096;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_10014d096:
        CVmSharedFolder::setReadOnly(SUB81(param_1[0x22],0));
        CVmSharedFolder::setEnabled(SUB81(param_1[0x22],0));
        QVar1.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[0x22];
        if (1 < *(int *)local_188 + 1U) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + 1;
          local_29 = *(int *)local_188 != 0;
          UNLOCK();
        }
        CVmSharedFolder::setDescription(QVar1);
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_29 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10014d121;
          }
          QArrayData::deallocate(local_188,2,8);
        }
LAB_10014d121:
        (**(code **)(*param_1 + 0x1b8))(param_1);
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_29 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10014d495;
          }
          QArrayData::deallocate(local_188,2,8);
        }
      }
    }
  }
LAB_10014d495:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10014d4c5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10014d4c5:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

