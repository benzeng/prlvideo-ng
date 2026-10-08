
void FUN_10063b4f0(CBaseDialog *param_1,CDownloadedKeyList *param_2,CDownloadedKeyInfo *param_3,
                  undefined8 *param_4,undefined8 param_5)

{
  int *piVar1;
  void *pvVar2;
  
  CBaseDialog::CBaseDialog(param_1,param_5,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102222cc0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102222eb0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102222f00;
  pvVar2 = operator_new(0x78);
  *(void **)(param_1 + 0x60) = pvVar2;
  CDownloadedKeyList::CDownloadedKeyList((CDownloadedKeyList *)(param_1 + 0x68),param_2);
  CDownloadedKeyInfo::CDownloadedKeyInfo((CDownloadedKeyInfo *)(param_1 + 0x108),param_3);
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x1f8) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined **)(param_1 + 0x200) = PTR_shared_null_1021e1288;
  FUN_10063b660(param_1);
  FUN_10063ce20(param_1);
  return;
}

