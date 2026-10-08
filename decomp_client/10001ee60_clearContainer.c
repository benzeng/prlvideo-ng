
/* Function Stack Size: 0x10 bytes */

void PDDeviceBarViewContaner::clearContainer(ID param_1,SEL param_2)

{
  undefined *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_internalContainer_1022693c0);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_setHidden__102268e10,1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  uVar1 = (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_internalContainer_1022693c0);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar1,PTR_s_removeFromSuperview_102269230);
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setInternalContainer__1022693b0,0);
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setKeyboardButton__102269428,0);
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setDeviceButtons__102269400,0);
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setSharedFoldersButton__102269430,0);
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setDevelopButton__102269438,0);
                    /* WARNING: Could not recover jumptable at 0x00010001ef36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_setToolsButton__102269440,0);
  return;
}

