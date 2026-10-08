
bool FUN_1009a78c0(void)

{
  long lVar1;
  bool bVar2;
  QVariant local_30;
  QArrayData *local_20;
  undefined1 local_11;
  
  lVar1 = CDeclarativeWizardPage::pageContentItem();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    CDeclarativeWizardPage::pageContentItem();
    QObject::property((char *)&local_30);
    QVariant::toString();
    QVariant::~QVariant(&local_30);
    bVar2 = *(int *)(local_20 + 4) != 0;
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return bVar2;
        }
        local_11 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  return bVar2;
}

