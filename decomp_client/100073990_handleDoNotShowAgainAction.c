
/* Function Stack Size: 0x10 bytes */

void MacPromoWindow::handleDoNotShowAgainAction(ID param_1,SEL param_2)

{
  long lVar1;
  QVariant local_48;
  Data_conflict local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  lVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + m_checkbox));
  QSettings::QSettings((QSettings *)local_30,(QObject *)0x0);
  FUN_1000736d0(&local_38,*(undefined4 *)(param_1 + m_promoType));
  ::QVariant::QVariant(&local_48,lVar1 != 1);
  QSettings::setValue(local_30,(QVariant *)&local_38);
  ::QVariant::~QVariant(&local_48);
  if (*(int *)local_38.field15 != -1) {
    if (*(int *)local_38.field15 != 0) {
      LOCK();
      *(int *)local_38.field15 = *(int *)local_38.field15 + -1;
      local_19 = *(int *)local_38.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100073a34;
    }
    QArrayData::deallocate((QArrayData *)local_38.field15,2,8);
  }
LAB_100073a34:
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

