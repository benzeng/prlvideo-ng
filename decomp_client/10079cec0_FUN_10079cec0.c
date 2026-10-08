
void FUN_10079cec0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  QObject *pQVar3;
  char cVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  QObject *pQVar9;
  long lVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  QString local_38;
  undefined1 local_29;
  
  if (param_3 != 1) {
    return;
  }
  QVariant::toString();
  uVar5 = FUN_100794960();
  uVar5 = FUN_100795f20(uVar5,&local_38);
  pvVar6 = operator_new(0x38);
  FUN_10023f880(pvVar6,uVar5,&local_38,1);
  CAbstractTask::execute();
  local_48 = 0;
  uStack_40 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (lVar1 == 0) {
LAB_10079cf97:
    lVar8 = 0;
  }
  else {
    lVar10 = 0;
    do {
      while (lVar8 = lVar1, cVar4 = operator<((QString *)(lVar8 + 0x18),&local_38), cVar4 == '\0') {
        lVar1 = *(long *)(lVar8 + 8);
        lVar10 = lVar8;
        if (*(long *)(lVar8 + 8) == 0) goto LAB_10079cf86;
      }
      lVar1 = *(long *)(lVar8 + 0x10);
    } while (*(long *)(lVar8 + 0x10) != 0);
    lVar8 = lVar10;
    if (lVar10 == 0) goto LAB_10079cf97;
LAB_10079cf86:
    cVar4 = operator<(&local_38,(QString *)(lVar8 + 0x18));
    if (cVar4 != '\0') goto LAB_10079cf97;
  }
  puVar7 = &local_48;
  if (lVar8 != 0) {
    puVar7 = (undefined8 *)(lVar8 + 0x20);
  }
  piVar2 = (int *)*puVar7;
  if (piVar2 == (int *)0x0) goto LAB_10079d0a4;
  pQVar3 = (QObject *)puVar7[1];
  LOCK();
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  pQVar9 = (QObject *)0x0;
  if (piVar2[1] != 0) {
    pQVar9 = pQVar3;
  }
  LOCK();
  *piVar2 = *piVar2 + -1;
  local_29 = *piVar2 != 0;
  UNLOCK();
  if (!(bool)local_29) {
    operator_delete(piVar2);
  }
  if (pQVar9 == (QObject *)0x0) goto LAB_10079d0a4;
  QObject::removeEventFilter(pQVar9);
  local_58 = 0;
  uStack_50 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (lVar1 == 0) {
LAB_10079d052:
    lVar8 = 0;
  }
  else {
    lVar10 = 0;
    do {
      while (lVar8 = lVar1, cVar4 = operator<((QString *)(lVar8 + 0x18),&local_38), cVar4 == '\0') {
        lVar1 = *(long *)(lVar8 + 8);
        lVar10 = lVar8;
        if (*(long *)(lVar8 + 8) == 0) goto LAB_10079d041;
      }
      lVar1 = *(long *)(lVar8 + 0x10);
    } while (*(long *)(lVar8 + 0x10) != 0);
    lVar8 = lVar10;
    if (lVar10 == 0) goto LAB_10079d052;
LAB_10079d041:
    cVar4 = operator<(&local_38,(QString *)(lVar8 + 0x18));
    if (cVar4 != '\0') goto LAB_10079d052;
  }
  puVar7 = &local_58;
  if (lVar8 != 0) {
    puVar7 = (undefined8 *)(lVar8 + 0x20);
  }
  piVar2 = (int *)*puVar7;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_29 = *piVar2 != 0;
    UNLOCK();
  }
  QWidget::close();
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar2);
    }
  }
LAB_10079d0a4:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

