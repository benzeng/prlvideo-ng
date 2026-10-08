
void FUN_1005f1900(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_c0;
  undefined1 local_b8 [88];
  undefined1 local_60 [47];
  undefined1 local_31;
  
  if (param_2 != 1) goto LAB_1005f19bb;
  uVar2 = FUN_1005ec990(param_1 + 0x38);
  puVar1 = PTR_shared_null_1021e1288;
  local_c0 = PTR_shared_null_1021e1288;
  FUN_1002f6080(local_b8,&local_c0);
  FUN_1005b9a00(uVar2,local_b8);
  FUN_100252c80(local_60);
  FUN_100252e70(local_b8);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f19a9;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1005f19a9:
  uVar2 = FUN_1005ec990(param_1 + 0x38);
  FUN_1005bf430(uVar2,0);
LAB_1005f19bb:
  CAbstractWizardPage::leavePage(param_1,param_2);
  return;
}

