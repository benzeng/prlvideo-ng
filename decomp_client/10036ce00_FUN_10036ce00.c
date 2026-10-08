
void FUN_10036ce00(QMainWindow *param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *(undefined ***)param_1 = &PTR_FUN_10220dff0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220e1b0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10220e200;
  QWidget::windowTitle();
  QString::toUtf8();
  pQVar2 = local_38 + *(long *)(local_38 + 0x10);
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x40) + 0x20) == 0)) {
    local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_100188480(&local_50);
  }
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Deleting vm console window, name: \"%s\", vmUuid: \"%s\"",
                pQVar2,local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10036cefa;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10036cefa:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10036cf2a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10036cf2a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10036cf5a;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10036cf5a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10036cf8a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10036cf8a:
  CWindowInterface::~CWindowInterface((CWindowInterface *)(param_1 + 0x30));
  QMainWindow::~QMainWindow(param_1);
  return;
}

