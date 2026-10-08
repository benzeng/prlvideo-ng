
void FUN_1003a3290(long param_1)

{
  QPoint *pQVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  QArrayData *local_38;
  undefined1 local_30 [16];
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = QLayout::contentsMargins();
  QStackedWidget::currentWidget();
  plVar3 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  if (plVar3 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x1f8))(plVar3);
    if (lVar4 != 0) {
      FUN_10044e7e0(&local_38,lVar4);
      goto LAB_1003a32fc;
    }
  }
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
LAB_1003a32fc:
  iVar2 = 0;
  if (*(int *)(local_38 + 4) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x28);
    iVar2 = (*(int *)(lVar4 + 0x20) + 1) - *(int *)(lVar4 + 0x18);
  }
  local_30._4_4_ = iVar2;
  QLayout::setContentsMargins(*(QMargins **)(*(long *)(param_1 + 0x18) + 8));
  pQVar1 = *(QPoint **)(param_1 + 0x58);
  local_18 = QWidget::pos();
  local_14 = 0;
  QWidget::move(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      local_18 = CONCAT31(local_18._1_3_,*(int *)local_38 != 0);
      if (*(int *)local_38 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

