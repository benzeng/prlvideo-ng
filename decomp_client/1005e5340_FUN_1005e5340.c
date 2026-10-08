
void FUN_1005e5340(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    uVar2 = CDeclarativeWizardPage::pageContentItem();
    local_30 = (QArrayData *)QString::fromAscii_helper("checkOutInstructions",0x14);
    pcVar3 = (char *)qt_qFindChild_helper(uVar2,&local_30,PTR_staticMetaObject_1021e1368,1);
    QVariant::QVariant(&local_40,false);
    QObject::setProperty(pcVar3,(QVariant *)"visible");
    QVariant::~QVariant(&local_40);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005e53f3;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_1005e53f3:
  CAbstractWizardPage::leavePage(param_1,param_2);
  return;
}

