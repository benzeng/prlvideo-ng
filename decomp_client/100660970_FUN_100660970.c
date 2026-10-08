
void FUN_100660970(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  QVariant local_50;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  QString::fromUtf8_helper((char *)&local_38,0x1e0b98a);
  QString::operator=((QString *)(param_1 + 0x38),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006609dc;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1006609dc:
  FUN_100660b40(param_1);
  if (param_2 == 0) {
    uVar1 = FUN_100748240();
    local_40 = (QArrayData *)QString::fromAscii_helper("desktop.mac",0xb);
    uVar1 = FUN_100748290(uVar1,&local_40);
    FUN_1007469d0(uVar1,0);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100660a4c;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100660a4c:
  lVar2 = CDeclarativeWizardPage::pageContentItem();
  if (lVar2 != 0) {
    pcVar3 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_50,true);
    QObject::setProperty(pcVar3,(QVariant *)"showUpgradeInfo");
    QVariant::~QVariant(&local_50);
  }
  CAbstractWizardPage::enterPage(param_1,param_2);
  return;
}

