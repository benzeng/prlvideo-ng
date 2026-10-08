
void FUN_100abb940(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,
                     PTR_s_sharedPreviewPanelExists_10226a4d0);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (cVar2 != '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,PTR_s_sharedPreviewPanel_10226a4d8
                      );
    cVar2 = (*(code *)puVar1)(uVar3,PTR_s_isVisible_10226a4e0);
    if (cVar2 != '\0') {
      if (*param_1 != 0) {
        (*(code *)PTR__objc_msgSend_1021e1c68)(*param_1,PTR_s_setFocusRect__10226a4a8);
      }
      uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,
                                PTR_s_sharedPreviewPanel_10226a4d8);
      (*(code *)puVar1)(uVar3,PTR_s_orderOut__102269d30,0);
      if (*param_1 != 0) {
        (*(code *)puVar1)(*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_setNextResponder__10226a4f8,0);
        (*(code *)puVar1)(*param_1,PTR_s_release_1022699b8);
        *param_1 = 0;
      }
    }
  }
  return;
}

