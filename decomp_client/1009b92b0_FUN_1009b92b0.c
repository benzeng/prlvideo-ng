
undefined1 FUN_1009b92b0(long param_1)

{
  char cVar1;
  long lVar2;
  QWidget *pQVar3;
  long lVar4;
  undefined1 uVar5;
  double extraout_XMM0_Qa;
  QArrayData *local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  int local_28;
  undefined1 local_19;
  
  if (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0) {
    return 0;
  }
  lVar2 = QWidget::window();
  if (lVar2 == 0) {
    return 0;
  }
  pQVar3 = (QWidget *)QWidget::window();
  if ((pQVar3 != (QWidget *)0x0) && (cVar1 = MacUtils::isSheetWindow(pQVar3), cVar1 != '\0')) {
    return 0;
  }
  if ((*(byte *)(*(long *)(pQVar3 + 0x28) + 10) & 1) != 0) {
    return 0;
  }
  cVar1 = QWidget::isMinimized();
  if (cVar1 != '\0') {
    return 0;
  }
  QWidget::windowOpacity();
  if ((extraout_XMM0_Qa == 0.0) && (!NAN(extraout_XMM0_Qa))) {
    return 0;
  }
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(pQVar3,&local_50,PTR_staticMetaObject_1021e1540,&local_48,1);
  local_40 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_40);
      lVar2 = (long)*(int *)(local_40 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_40 + lVar2 * 8) &&
         (lVar4 = *(int *)(local_40 + 0xc) - lVar2, lVar4 != 0 && lVar2 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar2 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
  local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
  local_28 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009b9429;
    }
    QListData::dispose(local_48);
  }
LAB_1009b9429:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009b9459;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009b9459:
  uVar5 = 1;
  if (local_28 != 0) {
    for (; local_38 != local_30; local_38 = local_38 + 8) {
      if ((((*(long *)local_38 != param_1) &&
           (lVar2 = *(long *)(*(long *)local_38 + 0x28), (*(byte *)(lVar2 + 0xc) & 1) != 0)) &&
          ((*(byte *)(lVar2 + 0x12) & 3) != 0)) && ((*(byte *)(lVar2 + 9) & 0x80) != 0)) {
        uVar5 = 0;
        break;
      }
      local_28 = 1;
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar5;
      }
      local_19 = 0;
    }
    QListData::dispose(local_40);
  }
  return uVar5;
}

