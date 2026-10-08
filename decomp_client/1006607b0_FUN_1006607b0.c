
void FUN_1006607b0(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  QVariant local_c8;
  undefined *local_b8;
  undefined1 local_b0 [88];
  undefined1 local_58 [47];
  undefined1 local_29;
  
  if (param_2 == 1) {
    CAbstractWizardPage::wizardModel();
    uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    puVar1 = PTR_shared_null_1021e1288;
    local_b8 = PTR_shared_null_1021e1288;
    FUN_1002f6080(local_b0,&local_b8);
    FUN_100675fb0(uVar2);
    FUN_100252c80(local_58);
    FUN_100252e70(local_b0);
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_29 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100660860;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_100660860:
  lVar3 = CDeclarativeWizardPage::pageContentItem();
  if (lVar3 != 0) {
    pcVar4 = (char *)CDeclarativeWizardPage::pageContentItem();
    QVariant::QVariant(&local_c8,false);
    QObject::setProperty(pcVar4,(QVariant *)"showUpgradeInfo");
    QVariant::~QVariant(&local_c8);
  }
  CAbstractWizardPage::leavePage(param_1,param_2);
  return;
}

