
void FUN_100650070(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_100650070(param_1,*param_2);
  FUN_100650070(param_1,param_2[1]);
  pQVar1 = (QArrayData *)param_2[0xf];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1006500cd;
      pQVar1 = (QArrayData *)param_2[0xf];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006500cd:
  operator_delete(param_2);
  return;
}

