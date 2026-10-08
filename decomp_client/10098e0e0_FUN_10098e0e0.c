
void FUN_10098e0e0(QObject *param_1)

{
  undefined8 *puVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1022334e0;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == (undefined8 *)0x0) goto LAB_10098e13a;
  pQVar2 = (QArrayData *)*puVar1;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_10098e132;
      pQVar2 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar2,1,8);
  }
LAB_10098e132:
  operator_delete(puVar1);
LAB_10098e13a:
  QObject::~QObject(param_1);
  return;
}

