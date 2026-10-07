
void FUN_1002e6320(undefined8 *param_1)

{
  undefined8 uVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  
  *param_1 = &PTR_FUN_100bb4a00;
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[MSC] destructing");
  }
  while ((undefined8 *)param_1[0x34] == param_1) {
    uVar1 = (**(code **)(**(long **)(param_1[1] + 0x28) + 0x70))();
    FUN_1002c1590(uVar1,0xffffffff);
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x28))();
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  if ((void *)param_1[10] != (void *)0x0) {
    _free((void *)param_1[10]);
  }
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[MSC] destructed");
  }
  pDVar2 = (Data *)param_1[0x13d];
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_1002e6452;
      pDVar2 = (Data *)param_1[0x13d];
    }
    QListData::dispose(pDVar2);
  }
LAB_1002e6452:
  pQVar3 = (QArrayData *)param_1[0x12];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1002e6488;
      pQVar3 = (QArrayData *)param_1[0x12];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002e6488:
  pQVar3 = (QArrayData *)param_1[9];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1002e64b8;
      pQVar3 = (QArrayData *)param_1[9];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002e64b8:
  FUN_1002dc020(param_1);
  return;
}

