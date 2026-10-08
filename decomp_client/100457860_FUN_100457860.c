
void FUN_100457860(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_102213700;
  param_1[2] = &PTR_FUN_102213908;
  pQVar1 = (QArrayData *)param_1[0xc];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1004578b6;
      pQVar1 = (QArrayData *)param_1[0xc];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1004578b6:
  FUN_10044e270(param_1);
  return;
}

