
void FUN_100abba40(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 2) {
    FUN_100abb940(param_1);
    return;
  }
  if (param_2 == 1) {
    cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,
                       PTR_s_sharedPreviewPanelExists_10226a4d0);
    UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
    if (cVar1 != '\0') {
      uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,
                         PTR_s_sharedPreviewPanel_10226a4d8);
      cVar1 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_isVisible_10226a4e0);
      if (cVar1 != '\0') {
        FUN_100abbd10(param_1,param_3,param_4);
        uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                          (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,
                           PTR_s_sharedPreviewPanel_10226a4d8);
                    /* WARNING: Could not recover jumptable at 0x000100abbadf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_reloadData_10226a4f0);
        return;
      }
    }
  }
  else if (param_2 == 0) {
    FUN_100abbb20(param_1,param_3,param_4,param_5);
    return;
  }
  return;
}

