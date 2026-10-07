
void FUN_100289e00(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bb0ca0;
  param_1[1] = &PTR_metaObject_100bb0de0;
  param_1[0xd] = &PTR_FUN_100bb0e58;
  param_1[0x7428] = &PTR_FUN_100bb0e88;
  FUN_10028a300();
  pQVar1 = (QArrayData *)param_1[0x7477];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100289e77;
      pQVar1 = (QArrayData *)param_1[0x7477];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100289e77:
  pQVar1 = (QArrayData *)param_1[0x7466];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100289ead;
      pQVar1 = (QArrayData *)param_1[0x7466];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100289ead:
  pQVar1 = (QArrayData *)param_1[0x7463];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100289ee3;
      pQVar1 = (QArrayData *)param_1[0x7463];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_100289ee3:
  FUN_100098f20(param_1 + 0x745d);
  FUN_100401dd0(param_1 + 0x7429);
  FUN_100286ec0(param_1);
  return;
}

