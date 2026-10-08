
void FUN_100772650(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2,QObject *param_3)

{
  char cVar1;
  int iVar2;
  undefined *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined *local_38;
  undefined *local_30;
  undefined1 local_21;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,0,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10222a200;
  local_38 = PTR_shared_null_1021e1288;
  local_80 = PTR_shared_null_1021e1288;
  iVar2 = *(int *)PTR_shared_null_1021e1288;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
    iVar2 = *(int *)local_38;
  }
  local_78._8_4_ = (int)local_38;
  local_78._0_8_ = local_38;
  local_78._12_4_ = (int)((ulong)local_38 >> 0x20);
  local_30 = PTR_shared_null_1021e15d0;
  local_68 = local_78;
  local_58 = local_78;
  local_48 = local_78;
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007726f7;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1007726f7:
  if (*(int *)(param_2 + 0x24) == 1) {
    cVar1 = FUN_10076d530(&local_80);
  }
  else {
    cVar1 = FUN_10076dab0(&local_80);
  }
  if (cVar1 != '\0') {
    CAbstractWizardPage::setTitle((QString *)param_1);
  }
  FUN_100252e70(&local_80);
  return;
}

