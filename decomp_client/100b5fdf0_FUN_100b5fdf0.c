
void FUN_100b5fdf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  QMapNodeBase *pQVar2;
  QArrayData *pQVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)0x0) goto LAB_100b5fe99;
  pQVar2 = (QMapNodeBase *)puVar1[2];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100b5fe59;
      pQVar2 = (QMapNodeBase *)puVar1[2];
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100b5fe59:
  pQVar3 = (QArrayData *)*puVar1;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100b5fe89;
      pQVar3 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100b5fe89:
  operator_delete(puVar1);
  param_1[1] = 0;
LAB_100b5fe99:
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  pQVar3 = (QArrayData *)*param_1;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return;
}

