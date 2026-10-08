
undefined1 (*) [16] FUN_10036e360(undefined1 (*param_1) [16],long param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  QWidget *pQVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  QString local_30;
  undefined1 local_23;
  
  *(undefined4 *)*param_1 = 0;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(undefined4 *)(*param_1 + 8) = 0xffffffff;
  *(undefined4 *)(*param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[1] = 0;
  *(undefined4 *)(param_1[1] + 4) = 0;
  *(undefined4 *)(param_1[1] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[1] + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[2] = 0;
  *(undefined4 *)(param_1[2] + 4) = 0;
  *(undefined **)param_1[3] = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1[3] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[3] + 0xc) = 0xffffffff;
  lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 0x28);
  if ((((lVar4 != 0) && (*(int *)(lVar4 + 4) != 0)) &&
      (*(long *)(*(long *)(param_2 + 0x40) + 0x30) != 0)) && (lVar4 = FUN_1003797e0(), lVar4 != 0))
  {
    lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 0x28);
    uVar5 = 0;
    if ((lVar4 != 0) && (uVar5 = 0, *(int *)(lVar4 + 4) != 0)) {
      lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 0x30);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = FUN_1003797e0(lVar4);
      }
    }
    iVar1 = FUN_100325aa0(uVar5);
    if (iVar1 == 2) goto LAB_10036e459;
  }
  auVar8 = QWidget::frameGeometry();
  *param_1 = auVar8;
  auVar8 = QWidget::normalGeometry();
  param_1[1] = auVar8;
  uVar5 = FUN_10036e140(param_2);
  *(undefined8 *)(param_1[3] + 8) = uVar5;
LAB_10036e459:
  pQVar6 = (QWidget *)QApplication::desktop();
  uVar2 = QDesktopWidget::screenNumber(pQVar6);
  *(undefined4 *)(param_1[2] + 4) = uVar2;
  uVar3 = QWidget::windowState();
  *(uint *)param_1[2] = uVar3 & 0xfffffffe;
  plVar7 = (long *)CHostDesktopWorkspacesController::instance();
  iVar1 = (**(code **)(*plVar7 + 0x70))(plVar7,param_2);
  *(int *)(param_1[2] + 8) = iVar1;
  if (0 < iVar1) {
    plVar7 = (long *)CHostDesktopWorkspacesController::instance();
    (**(code **)(*plVar7 + 0xb0))(&local_30,plVar7,iVar1);
    QString::operator=((QString *)(param_1 + 3),&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_30.field0_0x0 != 0) {
          return param_1;
        }
        local_23 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  return param_1;
}

