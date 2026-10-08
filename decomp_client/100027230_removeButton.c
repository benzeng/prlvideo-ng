
/* Function Stack Size: 0x10 bytes */

void PDAccountTitleButton::removeButton(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((((*(long *)(param_1 + _controller) != 0) &&
       (*(int *)(*(long *)(param_1 + _controller) + 4) != 0)) &&
      (lVar1 = *(long *)(_controller + 8 + param_1), lVar1 != 0)) && (*(long *)(lVar1 + 0x18) != 0))
  {
    uVar2 = CTitleBarControllerQt::nativeTitleBarController();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_nameButton_102269720);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_removeAdditionalView__102268ed8,uVar3);
    UNRECOVERED_JUMPTABLE = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
    (*(code *)UNRECOVERED_JUMPTABLE)(uVar2);
    uVar2 = CTitleBarControllerQt::nativeTitleBarController();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_arrowButton_102269728);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_removeAdditionalView__102268ed8,uVar3);
    (*(code *)UNRECOVERED_JUMPTABLE)(uVar3);
    (*(code *)UNRECOVERED_JUMPTABLE)(uVar2);
    UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setNameButton__102269730,0);
                    /* WARNING: Could not recover jumptable at 0x000100027351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setArrowButton__102269740,0);
    return;
  }
  return;
}

