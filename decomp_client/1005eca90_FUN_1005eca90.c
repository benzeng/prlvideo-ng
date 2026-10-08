
void FUN_1005eca90(void)

{
  undefined *puVar1;
  long *plVar2;
  QString *pQVar3;
  char *pcVar4;
  QVariant local_50;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  plVar2 = (long *)CDeclarativeWizardProxyPage::sourcePage();
  (**(code **)(*plVar2 + 0x1a0))(plVar2);
  local_38.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper
                 ("QWizardPage { background-color: transparent; }* { color: rgba( 255, 255, 255, 35% ); }"
                  ,0x56);
  puVar1 = PTR_s_QMenu___background_color___33343_102271048;
  if (PTR_s_QMenu___background_color___33343_102271048 != (undefined *)0x0) {
    _strlen(PTR_s_QMenu___background_color___33343_102271048);
  }
  QString::fromUtf8_helper((char *)&local_30,(int)puVar1);
  QString::append(&local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005ecb2c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005ecb2c:
  puVar1 = PTR_s_QWidget___color__rgba__255__255__102271080;
  if (PTR_s_QWidget___color__rgba__255__255__102271080 != (undefined *)0x0) {
    _strlen(PTR_s_QWidget___color__rgba__255__255__102271080);
  }
  QString::fromUtf8_helper((char *)&local_28,(int)puVar1);
  QString::append(&local_38);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005ecb94;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005ecb94:
  FUN_10019bb00(&local_40);
  QString::append(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005ecbda;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005ecbda:
  pQVar3 = (QString *)CDeclarativeWizardProxyPage::sourcePage();
  QWidget::setStyleSheet(pQVar3);
  pcVar4 = (char *)CDeclarativeWizardProxyPage::sourcePage();
  QVariant::QVariant(&local_50,"darkLinen");
  QObject::setProperty(pcVar4,(QVariant *)"theme");
  QVariant::~QVariant(&local_50);
  CDeclarativeWizardProxyPage::initializePage();
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

