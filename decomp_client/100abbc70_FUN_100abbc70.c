
void FUN_100abbc70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,
                     PTR_s_sharedPreviewPanelExists_10226a4d0);
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  if (cVar1 != '\0') {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,PTR_s_sharedPreviewPanel_10226a4d8
                      );
    cVar1 = (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_isVisible_10226a4e0);
    if (cVar1 != '\0') {
      FUN_100abbd10(param_1,param_2,param_3);
      uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                        (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,
                         PTR_s_sharedPreviewPanel_10226a4d8);
                    /* WARNING: Could not recover jumptable at 0x000100abbcf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_reloadData_10226a4f0);
      return;
    }
  }
  return;
}

