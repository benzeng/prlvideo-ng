
void FUN_1006468c0(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString *pQVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar1 = param_1[9].field0_0x0;
  uVar3 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_100648530(pQVar1,uVar3);
  FUN_100623da0(&local_28);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100646929;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100646929:
  pQVar2 = *(QString **)(param_1[9].field0_0x0 + 0xc0);
  QLabel::text();
  FUN_1001c72b0(&local_40);
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  QLabel::setText(pQVar2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10064699e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10064699e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006469ce;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006469ce:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

