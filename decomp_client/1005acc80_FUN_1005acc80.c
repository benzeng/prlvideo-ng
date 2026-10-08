
void FUN_1005acc80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  QVariant local_98;
  QString local_88 [2];
  QString local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  Data_conflict local_50;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0)) ||
     (*(long *)(param_1 + 0x28) == 0)) goto LAB_1005acfeb;
  QObject::property((char *)&local_48);
  QVariant::toString();
  QVariant::~QVariant(&local_48);
  local_50.field7 = QString::fromAscii_helper("Antivirus",9);
  if (*(int *)(local_38 + 4) == 0) {
    local_60 = (QArrayData *)QString::fromAscii_helper("HavPromoOff",0xb);
    QString::fromUtf8_helper((char *)&local_58,0x1e2468c);
    QString::append(&local_58);
    QString::append((QString *)&local_50);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_19 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005acf16;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1005acf16:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_19 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005acf46;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_78,0x1e2468c);
    QString::append(&local_78);
    local_70.field0_0x0 = local_78.field0_0x0;
    if (1 < *(int *)local_78.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
      local_19 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
    QString::append(&local_70);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005acd8d;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_1005acd8d:
    local_68.field0_0x0 = local_70.field0_0x0;
    if (1 < *(int *)local_70.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
      local_19 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_28,0x1dc363e);
    QString::append(&local_68);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005acdf8;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_1005acdf8:
    QString::append((QString *)&local_50);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_19 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005ace35;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1005ace35:
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_19 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005ace65;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1005ace65:
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_19 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005acf46;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
  }
LAB_1005acf46:
  QSettings::QSettings((QSettings *)local_88,(QObject *)0x0);
  QVariant::QVariant(&local_98,true);
  QSettings::setValue(local_88,(QVariant *)&local_50);
  QVariant::~QVariant(&local_98);
  QSettings::~QSettings((QSettings *)local_88);
  if (*(int *)local_50.field15 != -1) {
    if (*(int *)local_50.field15 != 0) {
      LOCK();
      *(int *)local_50.field15 = *(int *)local_50.field15 + -1;
      local_19 = *(int *)local_50.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005acfbb;
    }
    QArrayData::deallocate((QArrayData *)local_50.field15,2,8);
  }
LAB_1005acfbb:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005acfeb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005acfeb:
  CAbstractWizardModel::wizardCtrl();
  lVar1 = CWizardController::parentWidget();
  if (lVar1 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
  }
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221dc70);
  FUN_1005a82a0(uVar2,0x80000275);
  return;
}

