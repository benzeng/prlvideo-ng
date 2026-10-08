
void FUN_1005e3540(undefined8 param_1)

{
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  CDeclarativeWizardPage::pageContentItem();
  QObject::property((char *)&local_38);
  QVariant::toString();
  FUN_1008411b0(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005e35b1;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005e35b1:
  QVariant::~QVariant(&local_38);
  return;
}

