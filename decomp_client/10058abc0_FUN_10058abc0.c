
void FUN_10058abc0(CBaseDialog *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10221cf90;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221d180;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221d1d0;
  pQVar1 = *(QArrayData **)(param_1 + 0x108);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10058ac27;
      pQVar1 = *(QArrayData **)(param_1 + 0x108);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10058ac27:
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

