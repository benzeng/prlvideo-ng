
undefined8 FUN_10023f3a0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  QWidget *pQVar5;
  undefined8 uVar6;
  int *piVar7;
  int *local_58;
  QObject *local_50;
  int *local_48;
  QWidget *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar4 = FUN_100370280();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_38,uVar6);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100323e20(uVar6);
  pQVar5 = (QWidget *)FUN_1003704b0(uVar4,&local_38,uVar2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10023f437;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10023f437:
  if (pQVar5 != (QWidget *)0x0) {
    iVar3 = MacUtils::tabsCountInWindow(pQVar5);
    if ((0 < iVar3) && (cVar1 = MacUtils::isWindowVisible(pQVar5), cVar1 != '\0')) {
      MacUtils::showNextTabInWindow(pQVar5);
    }
    uVar6 = FUN_100370280();
    local_48 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar5);
    local_40 = pQVar5;
    FUN_100373d30(uVar6,&local_48,*(undefined1 *)(param_1 + 0x2c));
    if (local_48 != (int *)0x0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_29 = *local_48 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_48 != (int *)0x0)) {
        operator_delete(local_48);
      }
    }
  }
  uVar4 = FUN_100370280();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  piVar7 = (int *)0x0;
  local_50 = (QObject *)FUN_100323e30(uVar6,0);
  if (local_50 != (QObject *)0x0) {
    piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_50);
  }
  local_58 = piVar7;
  FUN_100370810(uVar4,&local_58);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    local_29 = *local_58 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_58 != (int *)0x0)) {
      operator_delete(local_58);
    }
  }
  FUN_10023ae00(param_1,1);
  return 0;
}

