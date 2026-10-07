
void FUN_10051c800(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  pQVar1 = (QArrayData *)*param_1;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10051c841;
      pQVar1 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10051c841:
  operator_delete(param_1);
  return;
}

