
void FUN_1009990c0(long param_1)

{
  QArrayData *pQVar1;
  QArrayData *local_20;
  
  if (*(int *)(param_1 + 0x48) != 1) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("","TransporterWizardModel",1,"Wrong page state %d");
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 3;
  FUN_1009bf320(param_1,3);
  if (DAT_10230ffd0 < 2) goto LAB_1009991ad;
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toUtf8();
  FUN_100df99c0("","TransporterWizardModel",2,"Page \"%s\" - completed",
                local_20 + *(long *)(local_20 + 0x10));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_10099917d;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_10099917d:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1009991ad;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1009991ad:
  CAbstractWizardPage::pageFinished();
  return;
}

