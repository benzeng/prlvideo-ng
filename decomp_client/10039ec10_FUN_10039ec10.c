
void FUN_10039ec10(long param_1)

{
  QMacToolBar *pQVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  int local_38;
  undefined1 local_29;
  
  pQVar1 = (QMacToolBar *)(param_1 + 0x60);
  MacUtils::setToolbarCustomizable(pQVar1,false);
  FUN_10039f4d0(&local_58,param_1);
  local_50 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_50);
      lVar4 = (long)*(int *)(local_50 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_50 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_50 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar4 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  local_38 = 1;
  if (*(int *)local_58 == -1) {
LAB_10039ed13:
    for (; local_48 != local_40; local_48 = local_48 + 8) {
      FUN_10039f590(param_1,*(undefined8 *)local_48);
      local_38 = 1;
    }
  }
  else {
    if (*(int *)local_58 == 0) {
LAB_10039ece4:
      QListData::dispose(local_58);
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_10039ece4;
    }
    if (local_38 != 0) goto LAB_10039ed13;
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10039ed82;
    }
    QListData::dispose(local_50);
  }
LAB_10039ed82:
  pvVar3 = operator_new(0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_10039f4d0(&local_60,param_1);
  FUN_1004e6b10(pvVar3,uVar2,pQVar1,param_1 + 0x20,&local_60);
  *(void **)(param_1 + 0x50) = pvVar3;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10039eddf;
    }
    QListData::dispose(local_60);
  }
LAB_10039eddf:
  QWidget::window();
  QWidget::winId();
  QWidget::window();
  QWidget::windowHandle();
  QMacToolBar::attachToWindow((QWindow *)pQVar1);
  return;
}

