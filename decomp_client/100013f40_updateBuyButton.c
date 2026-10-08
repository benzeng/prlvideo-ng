
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::updateBuyButton(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  double dVar13;
  QArrayData *local_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar6 = _vm;
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if ((((*(long *)(param_1 + _vm) == 0) || (*(int *)(*(long *)(param_1 + _vm) + 4) == 0)) ||
      (*(long *)(_vm + 8 + param_1) == 0)) || (lVar3 = FUN_10018d490(), lVar3 == 0)) {
LAB_10001441d:
    IVar7 = buyButtonView(param_1,PTR_s_buyButtonView_102268ed0);
    lVar6 = _objc_retainAutoreleasedReturnValue(IVar7);
    (*(code *)PTR__objc_release_1021e1c70)(lVar6);
    UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
    if (lVar6 != 0) {
      IVar7 = buyButtonView(param_1,PTR_s_buyButtonView_102268ed0);
      uVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
      (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_removeAdditionalView__102268ed8,uVar5);
      (*(code *)PTR__objc_release_1021e1c70)(uVar5);
      setBuyButton_(param_1,PTR_s_setBuyButton__102268c40,0);
      if (lVar1 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0001000144b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setBuyButtonView__102268c48,0);
        return;
      }
      goto LAB_1000144c7;
    }
  }
  else {
    uVar4 = FUN_1006915d0();
    lVar3 = *(long *)(param_1 + lVar6);
    uVar5 = 0;
    if ((lVar3 != 0) && (uVar5 = 0, *(int *)(lVar3 + 4) != 0)) {
      uVar5 = *(undefined8 *)(lVar6 + 8 + param_1);
    }
    uVar5 = FUN_10018d490(uVar5);
    lVar6 = FUN_100691620(uVar4,0x8e,uVar5);
    if (((lVar6 == 0) || (cVar2 = QAction::isVisible(), cVar2 == '\0')) ||
       ((*(long *)(param_1 + _vmConsoleWindow) == 0 ||
        (((*(int *)(*(long *)(param_1 + _vmConsoleWindow) + 4) == 0 ||
          (lVar6 = *(long *)(_vmConsoleWindow + 8 + param_1), lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x28),
         (*(int *)(lVar6 + 0x1c) + 1) - *(int *)(lVar6 + 0x14) < 0x140)))))) goto LAB_10001441d;
    IVar7 = buyButtonView(param_1,PTR_s_buyButtonView_102268ed0);
    lVar6 = _objc_retainAutoreleasedReturnValue(IVar7);
    (*(code *)PTR__objc_release_1021e1c70)(lVar6);
    if (lVar6 == 0) {
      IVar7 = NSView::alloc((ID)PTR__OBJC_CLASS___NSView_10226a810,PTR_s_alloc_102268b58);
      IVar7 = NSView::init(IVar7,PTR_s_init_102268ca8);
      NSView::setTranslatesAutoresizingMaskIntoConstraints_
                (IVar7,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
      setBuyButtonView_(param_1,PTR_s_setBuyButtonView__102268c48,IVar7);
      IVar8 = NSButton::alloc((ID)PTR__OBJC_CLASS___NSButton_10226a7b8,PTR_s_alloc_102268b58);
      IVar8 = NSButton::init(IVar8,PTR_s_init_102268ca8);
      setBuyButton_(param_1,PTR_s_setBuyButton__102268c40,IVar8);
      NSButton::setTranslatesAutoresizingMaskIntoConstraints_
                (IVar8,PTR_s_setTranslatesAutoresizingMaskInt_102268cf8,0);
      NSButton::setBezelStyle_(IVar8,PTR_s_setBezelStyle__102268cc0,1);
      NSButton::setRefusesFirstResponder_(IVar8,PTR_s_setRefusesFirstResponder__102268cf0,1);
      NSButton::setTarget_(IVar8,PTR_s_setTarget__102268cd8,param_1);
      NSButton::setAction_(IVar8,PTR_s_setAction__102268ce8,PTR_s_onBuyButtonClicked_102268ee0);
      NSButton::setKeyEquivalent_(IVar8,PTR_s_setKeyEquivalent__102268e20,&cf_creturn_s_);
      UNRECOVERED_JUMPTABLE = PTR__OBJC_CLASS___NSString_10226a7c8;
      QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,(int)PTR_s_Buy_102270ae0);
      IVar9 = NSString::stringWithQString_
                        ((ID)UNRECOVERED_JUMPTABLE,PTR_s_stringWithQString__102268d00,&local_68);
      uVar5 = _objc_retainAutoreleasedReturnValue(IVar9);
      NSButton::setTitle_(IVar8,PTR_s_setTitle__102268ee8,uVar5);
      (*(code *)PTR__objc_release_1021e1c70)(uVar5);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_59 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_100014201;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100014201:
      NSView::addSubview_(IVar7,PTR_s_addSubview__102268d70,IVar8);
      IVar9 = NSButton::attributedTitle(IVar8,PTR_s_attributedTitle_102268ef0);
      uVar5 = _objc_retainAutoreleasedReturnValue(IVar9);
      dVar13 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_size_102268ef8);
      dVar13 = dVar13 + DAT_100e11058;
      (*(code *)PTR__objc_release_1021e1c70)(uVar5);
      iVar12 = 0x3a;
      if (0x39 < (int)dVar13) {
        iVar12 = (int)dVar13;
      }
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (0,(double)iVar12,PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0,
                         PTR_s_constraintWithItem_attribute_rel_102268d78,IVar8,7,0,0,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (0,DAT_100e11040,PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0,
                         PTR_s_constraintWithItem_attribute_rel_102268d78,IVar8,8,0,0,0);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar10 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (DAT_100e11050,DAT_100e11050,PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0
                          ,PTR_s_constraintWithItem_attribute_rel_102268d78,IVar7,2,0,IVar8,2);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                         (DAT_100e11050,0,PTR__OBJC_CLASS___NSLayoutConstraint_10226a7e0,
                          PTR_s_constraintWithItem_attribute_rel_102268d78,IVar7,10,0,IVar8,10);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      local_58 = uVar5;
      local_50 = uVar4;
      local_48 = uVar10;
      local_40 = uVar11;
      IVar9 = NSArray::arrayWithObjects_count_
                        ((ID)PTR__OBJC_CLASS___NSArray_10226a818,
                         PTR_s_arrayWithObjects_count__102268f00,&local_58,4);
      NSView::addConstraints_(IVar7,PTR_s_addConstraints__102268d98,IVar9);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                ((double)(iVar12 + 6),param_1,PTR_s_addAdditionalView_withWidth__102268d10,IVar7);
      UNRECOVERED_JUMPTABLE = PTR__objc_release_1021e1c70;
      (*(code *)PTR__objc_release_1021e1c70)(uVar11);
      (*(code *)UNRECOVERED_JUMPTABLE)(uVar10);
      (*(code *)UNRECOVERED_JUMPTABLE)(uVar4);
      (*(code *)UNRECOVERED_JUMPTABLE)(uVar5);
      (*(code *)UNRECOVERED_JUMPTABLE)(IVar8);
      (*(code *)UNRECOVERED_JUMPTABLE)(IVar7);
    }
  }
  if (lVar1 == local_38) {
    return;
  }
LAB_1000144c7:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

