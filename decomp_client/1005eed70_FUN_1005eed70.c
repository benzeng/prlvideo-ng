
void FUN_1005eed70(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_38;
  undefined1 local_30 [8];
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    CAbstractWizardPage::wizardCtrl();
    CWizardController::goNext();
    return;
  }
  uVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  lVar3 = FUN_1005ee670(uVar2);
  if (lVar3 == 0) goto LAB_1005eee5a;
  CAppliance::getAppliancePresentation();
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1005ccbb0(&local_28,local_30,&local_38);
  iVar1 = *(int *)(local_28 + 4);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005eee1c;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005eee1c:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005eee4c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005eee4c:
  FUN_100036370(local_30);
  if (iVar1 != 0) {
    return;
  }
LAB_1005eee5a:
  CAbstractWizardPage::wizardCtrl();
  CWizardController::goBack();
  return;
}

