
void FUN_1005e7150(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_b8;
  undefined1 local_b0 [88];
  undefined1 local_58 [47];
  undefined1 local_29;
  
  if (param_2 == 1) {
    uVar2 = FUN_1005ec990(param_1 + 0x38);
    puVar1 = PTR_shared_null_1021e1288;
    local_b8 = PTR_shared_null_1021e1288;
    FUN_1002f6080(local_b0,&local_b8);
    FUN_1005b9a00(uVar2,local_b0);
    FUN_100252c80(local_58);
    FUN_100252e70(local_b0);
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_29 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005e71f4;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_1005e71f4:
  CAbstractWizardPage::leavePage(param_1,param_2);
  return;
}

