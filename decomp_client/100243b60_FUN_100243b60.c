
void FUN_100243b60(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QWidget *pQVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  QArrayData *local_30;
  undefined1 local_22;
  
  CAbstractTask::finish((int)param_1);
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) goto LAB_100243c72;
  uVar2 = FUN_100370280();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_30,uVar4);
  pQVar3 = (QWidget *)FUN_1003704b0(uVar2,&local_30,DAT_100e152b8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100243c09;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100243c09:
  if (pQVar3 != (QWidget *)0x0) {
    WidgetUtils::setWindowResizeEnabled(pQVar3,true);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_10018c280(uVar4);
    uVar1 = FUN_10036acc0(pQVar3);
    lVar5 = FUN_1003192a0(uVar4,uVar1);
    if ((lVar5 != 0) && (lVar6 = FUN_100325f60(lVar5), lVar6 != 0)) {
      plVar7 = (long *)FUN_100325f60(lVar5);
      (**(code **)(*plVar7 + 0x78))(plVar7);
    }
  }
LAB_100243c72:
  FUN_100815b20(param_1);
  if ((*(long *)(param_1 + 0x30) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x30) + 0x10))) {
    QTimer::stop();
  }
  if ((*(long *)(param_1 + 0x38) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x38) + 0x10))) {
    QTimer::stop();
  }
  if ((*(long *)(param_1 + 0x40) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x40) + 0x10))) {
    QTimer::stop();
  }
  return;
}

