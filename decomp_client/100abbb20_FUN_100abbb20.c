
void FUN_100abbb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar4;
  
  cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,
                     PTR_s_sharedPreviewPanelExists_10226a4d0);
  UNRECOVERED_JUMPTABLE = (code *)PTR__objc_msgSend_1021e1c68;
  if (cVar1 != '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,PTR_s_sharedPreviewPanel_10226a4d8
                      );
    cVar1 = (*UNRECOVERED_JUMPTABLE)(uVar3,PTR_s_isVisible_10226a4e0);
    if (cVar1 != '\0') {
      uVar3 = (*UNRECOVERED_JUMPTABLE)
                        (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,
                         PTR_s_sharedPreviewPanel_10226a4d8);
      puVar4 = PTR_s_orderOut__102269d30;
      goto LAB_100abbc51;
    }
  }
  FUN_100abbd10(param_1,param_2,param_3);
  if (DAT_102313af8 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_102313af8);
    if (iVar2 != 0) {
      DAT_102313af0 = PTR_s_setPositionNearPreviewItem__10226a4e8;
      ___cxa_guard_release(&DAT_102313af8);
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,PTR_s_sharedPreviewPanel_10226a4d8);
  cVar1 = (*UNRECOVERED_JUMPTABLE)(uVar3,PTR_s_respondsToSelector__102269d98,DAT_102313af0);
  if (cVar1 != '\0') {
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,PTR_s_sharedPreviewPanel_10226a4d8
                      );
    (*UNRECOVERED_JUMPTABLE)(uVar3,DAT_102313af0,param_4 & 1);
  }
  uVar3 = (*UNRECOVERED_JUMPTABLE)
                    (PTR__OBJC_CLASS___QLPreviewPanel_10226aad8,PTR_s_sharedPreviewPanel_10226a4d8);
  puVar4 = PTR_s_makeKeyAndOrderFront__102269e48;
LAB_100abbc51:
                    /* WARNING: Could not recover jumptable at 0x000100abbc67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3,puVar4,0);
  return;
}

