
void FUN_100281ff0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bb0340;
  param_1[5] = &PTR_FUN_100bb05a0;
  param_1[6] = &PTR_metaObject_100bb0618;
  param_1[0x27] = &PTR_FUN_100bb0690;
  FUN_1002837e0();
  pQVar1 = (QArrayData *)param_1[0x65];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100282067;
      pQVar1 = (QArrayData *)param_1[0x65];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100282067:
  pQVar1 = (QArrayData *)param_1[0x62];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10028209d;
      pQVar1 = (QArrayData *)param_1[0x62];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10028209d:
  FUN_100098f20(param_1 + 0x5c);
  FUN_100401dd0(param_1 + 0x29);
  FUN_10027fed0(param_1);
  return;
}

