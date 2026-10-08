
void FUN_100859340(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  param_1[-2] = &PTR_FUN_102228480;
  *param_1 = &PTR_FUN_102228670;
  param_1[4] = &PTR_FUN_1022286c0;
  pQVar1 = (QArrayData *)param_1[0x1b];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1008593a8;
      pQVar1 = (QArrayData *)param_1[0x1b];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1008593a8:
  CBaseDialog::~CBaseDialog((CBaseDialog *)(param_1 + -2));
  return;
}

