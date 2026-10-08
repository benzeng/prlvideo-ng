
undefined8 FUN_1007c5490(QObject *param_1,long param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  QString local_48;
  QString local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_29;
  
  sVar2 = *(short *)(param_2 + 0x10);
  if (sVar2 != 0x6e) goto LAB_1007c5596;
  lVar4 = QMenu::activeAction();
  if ((((lVar4 == 0) ||
       (lVar4 = ___dynamic_cast(lVar4,PTR_typeinfo_1021e1718,&PTR_vtable_10222da30,0), lVar4 == 0))
      || (iVar3 = FUN_1007b5c70(lVar4), iVar3 != 1)) ||
     (cVar1 = FUN_100132520(lVar4), cVar1 != '\0')) {
    local_38 = 0;
    local_34 = 0;
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QToolTip::showText((QPoint *)&local_38,&local_40,(QWidget *)0x0);
    if (*(int *)local_40.field0_0x0 != -1) {
      local_48.field0_0x0 = local_40.field0_0x0;
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        iVar3 = *(int *)local_40.field0_0x0;
        UNLOCK();
        goto joined_r0x0001007c553c;
      }
      goto LAB_1007c5582;
    }
  }
  else {
    QAction::toolTip();
    QToolTip::showText((QPoint *)(param_2 + 0x1c),&local_48,(QWidget *)0x0);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        iVar3 = *(int *)local_48.field0_0x0;
        UNLOCK();
joined_r0x0001007c553c:
        local_29 = iVar3 != 0;
        if ((bool)local_29) goto LAB_1007c5591;
      }
LAB_1007c5582:
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1007c5591:
  sVar2 = *(short *)(param_2 + 0x10);
LAB_1007c5596:
  if (sVar2 == 0x34) {
    if (*(int *)(param_1 + 0x6c) == 0) {
      uVar5 = QMenu::event((QEvent *)param_1);
    }
    else {
      QTimer::singleShot(1,param_1,"1deleteLater()");
      uVar5 = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    uVar5 = QMenu::event((QEvent *)param_1);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  }
  return uVar5;
}

