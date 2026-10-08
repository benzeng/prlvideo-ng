
void FUN_100805f70(CBaseDialog *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fda20;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fdc10;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1021fdc60;
  pQVar1 = *(QArrayData **)(param_1 + 0xe8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100805fd4;
      pQVar1 = *(QArrayData **)(param_1 + 0xe8);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100805fd4:
  CBaseDialog::~CBaseDialog(param_1);
  operator_delete(param_1);
  return;
}

