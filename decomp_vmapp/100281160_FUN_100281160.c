
void FUN_100281160(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100baffb0;
  param_1[5] = &PTR_FUN_100bb01d8;
  param_1[6] = &PTR_metaObject_100bb0250;
  param_1[0x27] = &PTR_FUN_100bb02c8;
  FUN_10026b7f0(param_1 + 0x27,1,0);
  param_1[0x27] = &PTR_FUN_100baf230;
  FUN_1003e08f0(param_1 + 0x2d);
  pQVar1 = (QArrayData *)param_1[0x2a];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100281203;
      pQVar1 = (QArrayData *)param_1[0x2a];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100281203:
  FUN_10027fed0(param_1);
  return;
}

