
void FUN_1007e0840(void)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  QVariant local_30;
  QArrayData *local_20;
  undefined1 local_11;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 != 0) {
    uVar2 = CDeclarativeWizardPage::pageContentItem();
    local_20 = (QArrayData *)QString::fromAscii_helper("doNotShowAgainItem",0x12);
    pcVar3 = (char *)qt_qFindChild_helper(uVar2,&local_20,PTR_staticMetaObject_1021e1368,1);
    QVariant::QVariant(&local_30,false);
    QObject::setProperty(pcVar3,(QVariant *)"visible");
    QVariant::~QVariant(&local_30);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return;
        }
        local_11 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  return;
}

