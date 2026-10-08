
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::update(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  bool bVar11;
  QArrayData *local_58 [2];
  QArrayData *local_48;
  char local_40;
  undefined1 local_31;
  
  lVar8 = _messageProvider;
  lVar9 = _vm;
  if (((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
     (*(long *)(_vm + 8 + param_1) == 0)) {
    pcVar10 = "VmWrap";
LAB_100013229:
    FUN_100df99c0("","prl_client_app",0,"%s object does not exist!",pcVar10);
    return;
  }
  if (((*(long *)(param_1 + _messageProvider) == 0) ||
      (*(int *)(*(long *)(param_1 + _messageProvider) + 4) == 0)) ||
     (*(long *)(_messageProvider + 8 + param_1) == 0)) {
    pcVar10 = "CStatusMessageProvider";
    goto LAB_100013229;
  }
  iVar4 = FUN_10018a9d0();
  if (iVar4 == 0x30000004) {
    uVar7 = 0;
    if ((*(long *)(param_1 + lVar9) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar9) + 4) != 0)) {
      uVar7 = *(undefined8 *)(lVar9 + 8 + param_1);
    }
    cVar3 = FUN_10018ffc0(uVar7);
    bVar11 = true;
    if (cVar3 == '\0') {
      uVar7 = 0;
      if ((*(long *)(param_1 + lVar9) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar9) + 4) != 0)) {
        uVar7 = *(undefined8 *)(lVar9 + 8 + param_1);
      }
      cVar3 = FUN_10018ff50(uVar7);
      if (cVar3 == '\0') goto LAB_100012f3b;
    }
  }
  else {
LAB_100012f3b:
    uVar7 = 0;
    if ((*(long *)(param_1 + lVar8) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar8) + 4) != 0)) {
      uVar7 = *(undefined8 *)(lVar8 + 8 + param_1);
    }
    FUN_10037f160(&local_48,uVar7);
    bVar11 = local_40 != '\0';
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100012f94;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100012f94:
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setBusy__102268df8,bVar11);
  IVar5 = textTitleMessage(param_1,PTR_s_textTitleMessage_102268d38);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar7 = 0;
  if ((*(long *)(param_1 + lVar8) != 0) &&
     (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar8) + 4) != 0)) {
    uVar7 = *(undefined8 *)(lVar8 + 8 + param_1);
  }
  FUN_10037f160(local_58,uVar7);
  IVar5 = NSString::stringWithQString_((ID)puVar1,PTR_s_stringWithQString__102268d00,local_58);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setTitleText__102268e00,uVar7);
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  if (*(int *)local_58[0] != -1) {
    if (*(int *)local_58[0] != 0) {
      LOCK();
      *(int *)local_58[0] = *(int *)local_58[0] + -1;
      local_31 = *(int *)local_58[0] != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100013057;
    }
    QArrayData::deallocate(local_58[0],2,8);
  }
LAB_100013057:
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar7 = 0;
  if ((*(long *)(param_1 + lVar9) != 0) &&
     (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar9) + 4) != 0)) {
    uVar7 = *(undefined8 *)(lVar9 + 8 + param_1);
  }
  uVar7 = FUN_10018c280(uVar7);
  lVar8 = FUN_100319960(uVar7);
  cVar3 = isDevicesHidden(param_1,PTR_s_isDevicesHidden_102268e08);
  (*(code *)puVar1)(param_1,PTR_s_setStackContainerHidden__102268ca0,(int)cVar3);
  IVar5 = textTitleMessage(param_1,PTR_s_textTitleMessage_102268d38);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
  bVar11 = true;
  if (lVar8 != 0) {
    iVar4 = FUN_100325aa0(lVar8);
    bVar11 = iVar4 == 4;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setHidden__102268e10,bVar11);
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  IVar5 = editVmButton(param_1,PTR_s_editVmButton_102268cb0);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  uVar7 = 0;
  if ((*(long *)(param_1 + lVar9) != 0) &&
     (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar9) + 4) != 0)) {
    uVar7 = *(undefined8 *)(lVar9 + 8 + param_1);
  }
  cVar3 = FUN_10018ffc0(uVar7);
  bVar11 = true;
  if (cVar3 == '\0') {
    uVar7 = 0;
    if ((*(long *)(param_1 + lVar9) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + lVar9) + 4) != 0)) {
      uVar7 = *(undefined8 *)(lVar9 + 8 + param_1);
    }
    iVar4 = FUN_10018bce0(uVar7);
    bVar11 = iVar4 != 0;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setHidden__102268e10,bVar11);
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  IVar5 = buyButton(param_1,PTR_s_buyButton_102268e18);
  lVar9 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)puVar2)(lVar9);
  if (lVar9 != 0) {
    IVar5 = buyButton(param_1,PTR_s_buyButton_102268e18);
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
    (*(code *)puVar1)(uVar7,PTR_s_setKeyEquivalent__102268e20,&cf_creturn_s_);
    (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  }
  updateDevices(param_1,PTR_s_updateDevices_102268e28);
  return;
}

