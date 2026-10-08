
void FUN_100806170(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  param_1[-6] = &PTR_FUN_1021fda20;
  param_1[-4] = &PTR_FUN_1021fdc10;
  *param_1 = &PTR_FUN_1021fdc60;
  pQVar1 = (QArrayData *)param_1[0x17];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1008061d8;
      pQVar1 = (QArrayData *)param_1[0x17];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1008061d8:
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -6));
  return;
}

