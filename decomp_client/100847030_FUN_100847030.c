
void FUN_100847030(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_102221c90;
  pQVar1 = (QArrayData *)param_1[9];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100847078;
      pQVar1 = (QArrayData *)param_1[9];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100847078:
  FUN_100824650(param_1);
  return;
}

