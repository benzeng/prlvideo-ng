
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::update(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  void *pvVar12;
  char *pcVar13;
  QArrayData *local_80 [2];
  QArrayData *local_70;
  char local_68;
  undefined1 local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  
  lVar7 = _messageProvider;
  lVar11 = _vm;
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
     (*(long *)(_vm + 8 + param_1) == 0)) {
    pcVar13 = "VmWrap";
LAB_100019188:
    FUN_100df99c0("","prl_client_app",0,"%s object does not exist!",pcVar13);
    return;
  }
  if (((*(long *)(param_1 + _messageProvider) == 0) ||
      (*(int *)(*(long *)(param_1 + _messageProvider) + 4) == 0)) ||
     (*(long *)(_messageProvider + 8 + param_1) == 0)) {
    pcVar13 = "CStatusMessageProvider";
    goto LAB_100019188;
  }
  iVar4 = FUN_10018a9d0();
  if (iVar4 == 0x30000004) {
    uVar6 = 0;
    if ((*(long *)(param_1 + lVar11) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar11) + 4) != 0)) {
      uVar6 = *(undefined8 *)(lVar11 + 8 + param_1);
    }
    cVar3 = FUN_10018ffc0(uVar6);
    if (cVar3 == '\0') {
      uVar6 = 0;
      if ((*(long *)(param_1 + lVar11) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar11) + 4) != 0)) {
        uVar6 = *(undefined8 *)(lVar11 + 8 + param_1);
      }
      cVar3 = FUN_10018ff50(uVar6);
      if (cVar3 == '\0') goto LAB_10001907b;
    }
LAB_1000190d8:
    lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (param_1,PTR_s_indexOfToolbarItemWithItemIdenti_102269128,&cf_Title);
    if (lVar5 != 0x7fffffffffffffff) {
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,
                         &cf_ProgressIndicator,1,lVar5 + 1);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    }
  }
  else {
LAB_10001907b:
    uVar6 = 0;
    if ((*(long *)(param_1 + lVar7) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar7) + 4) != 0)) {
      uVar6 = *(undefined8 *)(lVar7 + 8 + param_1);
    }
    FUN_10037f160(&local_70,uVar6);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_59 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1000190d0;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1000190d0:
    puVar2 = PTR__objc_msgSend_1021e1c68;
    if (local_68 != '\0') goto LAB_1000190d8;
    local_40 = &cf_ProgressIndicator;
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                       &local_40,1);
    (*(code *)puVar2)(param_1,PTR_s_removeToolbarItems__102269130,uVar6);
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + lVar11) != 0) &&
     (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar11) + 4) != 0)) {
    uVar6 = *(undefined8 *)(lVar11 + 8 + param_1);
  }
  uVar6 = FUN_10018c280(uVar6);
  lVar5 = FUN_100319960(uVar6);
  if ((lVar5 == 0) ||
     (iVar4 = FUN_100325aa0(lVar5), puVar2 = PTR__objc_msgSend_1021e1c68, iVar4 == 4)) {
    puVar2 = PTR__objc_msgSend_1021e1c68;
    local_48 = &cf_TitleMessage;
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                       &local_48,1);
    (*(code *)puVar2)(param_1,PTR_s_removeToolbarItems__102269130,uVar6);
  }
  else {
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,&cf_TitleMessage,1,1
                      );
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = (*(code *)puVar2)(uVar8,PTR_s_view_102269138);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
    uVar6 = 0;
    if ((*(long *)(param_1 + lVar7) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar7) + 4) != 0)) {
      uVar6 = *(undefined8 *)(lVar7 + 8 + param_1);
    }
    FUN_10037f160(local_80,uVar6);
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar2,PTR_s_stringWithQString__102268d00,local_80);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (puVar2,PTR_s_stringWithFormat__102268d88,&cf___,uVar6);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_setStringValue__102269098,uVar10);
    puVar2 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar10);
    (*(code *)puVar2)(uVar6);
    if (*(int *)local_80[0] != -1) {
      if (*(int *)local_80[0] != 0) {
        LOCK();
        *(int *)local_80[0] = *(int *)local_80[0] + -1;
        local_59 = *(int *)local_80[0] != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_10001936b;
      }
      QArrayData::deallocate(local_80[0],2,8);
    }
LAB_10001936b:
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_updateTextToolbarItemSizes__102269140,uVar8);
    (*(code *)puVar2)(uVar9);
    (*(code *)puVar2)(uVar8);
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + lVar11) != 0) &&
     (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar11) + 4) != 0)) {
    uVar6 = *(undefined8 *)(lVar11 + 8 + param_1);
  }
  lVar7 = FUN_10018d490(uVar6);
  if (lVar7 == 0) {
LAB_100019509:
    puVar2 = PTR__objc_msgSend_1021e1c68;
    local_50 = &cf_BuyProduct;
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                       &local_50,1);
    (*(code *)puVar2)(param_1,PTR_s_removeToolbarItems__102269130,uVar6);
  }
  else {
    uVar8 = FUN_1006915d0();
    uVar6 = 0;
    if ((*(long *)(param_1 + lVar11) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar11) + 4) != 0)) {
      uVar6 = *(undefined8 *)(lVar11 + 8 + param_1);
    }
    uVar6 = FUN_10018d490(uVar6);
    lVar7 = FUN_100691620(uVar8,0x8e,uVar6);
    if ((lVar7 == 0) ||
       (cVar3 = QAction::isVisible(), puVar2 = PTR__objc_msgSend_1021e1c68, cVar3 == '\0'))
    goto LAB_100019509;
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar8 = (*(code *)puVar2)(uVar6,PTR_s_toolbar_102269000);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_items_102269008);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_count_102268e68);
    uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                       (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,&cf_BuyProduct,1,
                        uVar10);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    puVar2 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar9);
    (*(code *)puVar2)(uVar8);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar10,PTR_s_view_102269138);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setKeyEquivalent__102268e20,&cf_creturn_s_);
    puVar2 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    (*(code *)puVar2)(uVar10);
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + lVar11) != 0) &&
     (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar11) + 4) != 0)) {
    uVar6 = *(undefined8 *)(lVar11 + 8 + param_1);
  }
  cVar3 = FUN_10018ffc0(uVar6);
  if (cVar3 == '\0') {
    uVar6 = 0;
    if ((*(long *)(param_1 + lVar11) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + lVar11) + 4) != 0)) {
      uVar6 = *(undefined8 *)(lVar11 + 8 + param_1);
    }
    iVar4 = FUN_10018bce0(uVar6);
    if (iVar4 == 0) {
      lVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (param_1,PTR_s_indexOfToolbarItemWithItemIdenti_102269128,&cf_Feedback);
      if ((lVar11 == 0x7fffffffffffffff) &&
         (lVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (param_1,PTR_s_indexOfToolbarItemWithItemIdenti_102269128,
                              &cf_BuyProduct), puVar2 = PTR__objc_msgSend_1021e1c68,
         lVar11 == 0x7fffffffffffffff)) {
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar8 = (*(code *)puVar2)(uVar6,PTR_s_toolbar_102269000);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_items_102269008);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        lVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_count_102268e68);
        puVar2 = PTR__objc_release_1021e1c70;
        (*(code *)PTR__objc_release_1021e1c70)(uVar9);
        (*(code *)puVar2)(uVar8);
        (*(code *)puVar2)(uVar6);
      }
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,&cf_ConfigureVM,1,
                         lVar11);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)PTR__objc_release_1021e1c70)(uVar6);
      goto LAB_1000196db;
    }
  }
  puVar2 = PTR__objc_msgSend_1021e1c68;
  local_58 = &cf_ConfigureVM;
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00,
                     &local_58,1);
  (*(code *)puVar2)(param_1,PTR_s_removeToolbarItems__102269130,uVar6);
LAB_1000196db:
  lVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (param_1,PTR_s_indexOfToolbarItemWithItemIdenti_102269128,&cf_BuyProduct);
  puVar2 = PTR__objc_msgSend_1021e1c68;
  if (lVar11 == 0x7fffffffffffffff) {
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_window_102268c08);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar8 = (*(code *)puVar2)(uVar6,PTR_s_toolbar_102269000);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_items_102269008);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    lVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_count_102268e68);
    puVar2 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar9);
    (*(code *)puVar2)(uVar8);
    (*(code *)puVar2)(uVar6);
  }
  if (DAT_102310820 == (void *)0x0) {
    pvVar12 = operator_new(0x18);
    FUN_10002bc90(pvVar12);
    DAT_10226c0b0 = 1;
    DAT_102310820 = pvVar12;
  }
  cVar3 = FUN_10002bdd0(DAT_102310820);
  if (cVar3 != '\0') {
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (param_1,PTR_s_toolbarItemWithItemIdentifier_cr_102269020,&cf_Feedback,1,
                       lVar11);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  }
  puVar2 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateTitle_102269148);
  (*(code *)puVar2)(param_1,PTR_s_updateDevices_102268e28);
  (*(code *)puVar2)(param_1,PTR_s_updateSize_102269150);
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

