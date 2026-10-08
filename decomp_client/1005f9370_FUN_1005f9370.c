
void FUN_1005f9370(void)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  QTimer::stop();
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = CDeclarativeWizardPage::pageContentItem();
  local_28 = (QArrayData *)QString::fromAscii_helper("emptySource",0xb);
  pcVar3 = (char *)qt_qFindChild_helper(uVar2,&local_28,PTR_staticMetaObject_1021e1368,1);
  QVariant::QVariant(&local_38,false);
  QObject::setProperty(pcVar3,(QVariant *)"visible");
  QVariant::~QVariant(&local_38);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005f942e;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005f942e:
  uVar2 = CDeclarativeWizardPage::pageContentItem();
  local_40 = (QArrayData *)QString::fromAscii_helper("checkOutInstructions",0x14);
  pcVar3 = (char *)qt_qFindChild_helper(uVar2,&local_40,PTR_staticMetaObject_1021e1368,1);
  QVariant::QVariant(&local_50,false);
  QObject::setProperty(pcVar3,(QVariant *)"visible");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

