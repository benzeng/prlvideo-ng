
void FUN_100859200(CBaseDialog *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102228480;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102228670;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1022286c0;
  pQVar1 = *(QArrayData **)(param_1 + 0xe8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100859264;
      pQVar1 = *(QArrayData **)(param_1 + 0xe8);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100859264:
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

