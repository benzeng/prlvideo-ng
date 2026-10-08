
void FUN_100075a40(QWidget *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = MacUtils::getWindowRef(param_1);
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar1,PTR_s_respondsToSelector__102269d98,
                     PTR_s_invalidateRestorableState_102269e78);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100075a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar1,PTR_s_performSelector__102269300,PTR_s_invalidateRestorableState_102269e78);
    return;
  }
  return;
}

