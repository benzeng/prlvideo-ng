
void FUN_1004eb930(exception *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10111ce28;
  pQVar1 = *(QArrayData **)(param_1 + 8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1004eb973;
      pQVar1 = *(QArrayData **)(param_1 + 8);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1004eb973:
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}

