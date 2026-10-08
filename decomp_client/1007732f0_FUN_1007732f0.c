
void FUN_1007732f0(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2,QObject *param_3)

{
  char cVar1;
  int iVar2;
  undefined *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined *local_30;
  undefined *local_28;
  undefined1 local_19;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10222a330;
  local_30 = PTR_shared_null_1021e1288;
  local_78 = PTR_shared_null_1021e1288;
  iVar2 = *(int *)PTR_shared_null_1021e1288;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
    iVar2 = *(int *)local_30;
  }
  local_70._8_4_ = (int)local_30;
  local_70._0_8_ = local_30;
  local_70._12_4_ = (int)((ulong)local_30 >> 0x20);
  local_28 = PTR_shared_null_1021e15d0;
  local_60 = local_70;
  local_50 = local_70;
  local_40 = local_70;
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100773395;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100773395:
  cVar1 = FUN_10076d530(&local_78);
  if (cVar1 != '\0') {
    CAbstractWizardPage::setTitle((QString *)param_1);
  }
  FUN_100252e70(&local_78);
  return;
}

