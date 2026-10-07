
void FUN_1006a9420(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bcd1a0;
  FUN_1006ab6c0();
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 0x28))();
    (**(code **)(*(long *)param_1[0xd] + 0x10))();
    param_1[0xd] = 0;
  }
  pQVar1 = (QArrayData *)param_1[0xf];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1006a9494;
      pQVar1 = (QArrayData *)param_1[0xf];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006a9494:
  pQVar1 = (QArrayData *)param_1[0xe];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1006a94c4;
      pQVar1 = (QArrayData *)param_1[0xe];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006a94c4:
  FUN_1006ab900(param_1);
  return;
}

