
void FUN_100679900(long param_1,int param_2,QString *param_3,QString *param_4)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  QString local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x58) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  if (param_2 == 0) {
    CContentModel::setBusy(SUB81(param_1,0));
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::operator=((QString *)(param_1 + 0x140),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2c = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2c) goto LAB_10067999a;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10067999a:
  *(undefined1 *)(param_1 + 0x15e) = 0;
  *(int *)(param_1 + 0x100) = param_2;
  QString::operator=((QString *)(param_1 + 0x108),param_3);
  QString::operator=((QString *)(param_1 + 0x110),param_4);
  *(undefined1 *)(param_1 + 0x169) = 0;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
  }
  pQVar1 = (QObject *)FUN_100689160(*(undefined8 *)(param_1 + 0x20),uVar4,param_2,param_3,param_4);
  piVar2 = (int *)0x0;
  if (pQVar1 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  }
  piVar3 = *(int **)(param_1 + 0x120);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_2b = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x120);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_2a = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_2a) && (*(void **)(param_1 + 0x120) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x120));
      }
    }
    *(int **)(param_1 + 0x120) = piVar2;
    *(QObject **)(param_1 + 0x128) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar2);
    }
  }
  return;
}

