
void FUN_100292110(undefined8 *param_1)

{
  void *pvVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_100bb1390;
  param_1[1] = &PTR_metaObject_100bb14c8;
  param_1[0xd] = &PTR_FUN_100bb1540;
  param_1[0x20d] = &PTR_FUN_100bb1570;
  FUN_10026b7f0(param_1 + 0x20d,1,0);
  pvVar1 = (void *)param_1[0x239];
  if (pvVar1 != (void *)0x0) {
    FUN_100284de0(pvVar1);
    operator_delete(pvVar1);
  }
  param_1[0x20d] = &PTR_FUN_100baf230;
  FUN_1003e08f0(param_1 + 0x213);
  pQVar2 = (QArrayData *)param_1[0x210];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1002921ce;
      pQVar2 = (QArrayData *)param_1[0x210];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002921ce:
  FUN_100291a10(param_1);
  return;
}

