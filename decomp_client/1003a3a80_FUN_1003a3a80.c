
void FUN_1003a3a80(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  
  if (param_2 == 0xc) {
    if (param_3 == 0) {
      puVar8 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar8 = 0xffffffff;
        return;
      }
    }
    else {
      if (param_3 != 2) {
        *(undefined4 *)*param_4 = 0xffffffff;
        return;
      }
      puVar8 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar8 = 0xffffffff;
        return;
      }
    }
    *puVar8 = 2;
    return;
  }
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    iVar6 = *(int *)param_4[2];
    uVar5 = *(undefined4 *)param_4[3];
    cVar4 = MessageUtils::isMessageHidden(*(int *)param_4[1]);
    if ((iVar6 != 0) && (cVar4 != '\x01')) {
      FUN_1003a2210(param_1,iVar6,uVar5);
      return;
    }
    break;
  case 1:
    FUN_1003b0ad0(param_1 + 0x20);
    iVar6 = CMappingModel::getSubmitPolicy();
    if (iVar6 == 1) {
      CProgressIndicator::show();
      bVar2 = (bool)QDialogButtonBox::button
                              (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),0x400);
      QWidget::setEnabled(bVar2);
      return;
    }
    break;
  case 2:
    FUN_1003a2bf0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 3:
    cVar4 = FUN_1003b0b30(param_1 + 0x20);
    if (cVar4 == '\0') {
      FUN_1003b0ad0(param_1 + 0x20);
      CMappingModel::submit();
      return;
    }
    break;
  case 4:
switchD_1003a3ac3_caseD_4:
    QWidget::close();
    return;
  case 5:
    lVar1 = param_4[1];
    lVar9 = FUN_1003b0a30(param_1 + 0x20);
    if (lVar9 == lVar1) goto switchD_1003a3ac3_caseD_4;
    break;
  case 6:
    if (*(int *)param_4[1] == 1) goto switchD_1003a3ac3_caseD_4;
    break;
  case 7:
    FUN_1003a3010(param_1);
    return;
  case 8:
    FUN_1003a1d00(param_1,*(undefined4 *)param_4[1]);
    return;
  case 9:
    FUN_10039eea0(param_1);
    return;
  case 10:
    uVar10 = FUN_1003b0ad0(param_1 + 0x20);
    bVar3 = FUN_1003e5e80(uVar10);
    if (bVar3 != 0) {
      CAuthorizationLock::setLockState(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0);
    }
    uVar10 = FUN_1003b0ad0(param_1 + 0x20);
    FUN_1003e5c00(uVar10,bVar3 ^ 1);
    return;
  case 0xb:
    QStackedWidget::currentWidget();
    plVar7 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
    if (plVar7 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar7 + 0x1d0))(plVar7);
      AppHelpUtils::openHelpTopic(uVar5,0);
      return;
    }
    break;
  case 0xc:
    uVar5 = *(undefined4 *)param_4[1];
    goto LAB_1003a3cf9;
  case 0xd:
    uVar5 = 0;
    goto LAB_1003a3cf9;
  case 0xe:
    FUN_1003a34e0(param_1);
    return;
  case 0xf:
  case 0x12:
    QStackedWidget::currentWidget();
    plVar7 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
    uVar5 = 0;
    if (plVar7 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,0);
    }
LAB_1003a3cf9:
    FUN_1003a2a50(param_1,uVar5);
    return;
  case 0x10:
    FUN_1003a3460(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x11:
    FUN_1003b0ad0(param_1 + 0x20);
    cVar4 = CMappingModel::isSubmiting();
    if (cVar4 == '\0') goto switchD_1003a3ac3_caseD_4;
    break;
  case 0x13:
    uVar11 = *(undefined1 *)param_4[1];
    goto LAB_1003a3d6c;
  case 0x14:
    uVar11 = 0;
LAB_1003a3d6c:
    FUN_1003a30a0(param_1,uVar11);
    return;
  case 0x15:
    FUN_1003a3290(param_1);
    return;
  case 0x16:
    FUN_1003a20e0(param_1,param_4[1],param_4[2]);
    return;
  }
  return;
}

