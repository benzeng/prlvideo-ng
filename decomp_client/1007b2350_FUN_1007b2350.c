
void FUN_1007b2350(CBaseDialog *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10222d340;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222d548;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222d598;
  pQVar1 = *(QArrayData **)(param_1 + 0xa8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1007b23b7;
      pQVar1 = *(QArrayData **)(param_1 + 0xa8);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1007b23b7:
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

