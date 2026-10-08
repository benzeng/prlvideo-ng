
void FUN_10063f910(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  pQVar1 = param_1[9].field0_0x0;
  uVar2 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_1006452e0(pQVar1,uVar2);
  FUN_100623da0(&local_28);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10063f979;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10063f979:
  FUN_100640290(*(undefined8 *)(param_1[9].field0_0x0 + 0x78));
  return;
}

