
long * FUN_1007ba3d0(undefined8 param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  QWidget::actions();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_1007ba49b:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007ba49b;
    }
    plVar3 = (long *)0x0;
    if (local_40 == 0) goto LAB_1007ba592;
  }
  plVar3 = (long *)0x0;
  if (local_50 != local_48) {
    do {
      plVar3 = (long *)QMetaObject::cast((QObject *)&PTR_PTR_10222d7a0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x60))(&local_68,plVar3);
        cVar1 = operator==(&local_68,param_2);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ba534;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_1007ba534:
        if (cVar1 != '\0') break;
        iVar2 = FUN_1007b57b0(plVar3);
        if ((iVar2 == 1) && (lVar5 = QAction::menu(), lVar5 != 0)) {
          uVar4 = QAction::menu();
          plVar3 = (long *)FUN_1007ba3d0(uVar4,param_2);
          if (plVar3 != (long *)0x0) break;
        }
      }
      local_50 = local_50 + 8;
      local_40 = 1;
      plVar3 = (long *)0x0;
    } while (local_50 != local_48);
  }
LAB_1007ba592:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return plVar3;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return plVar3;
}

