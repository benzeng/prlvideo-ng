
/* Function Stack Size: 0x10 bytes */

void PDFullScreenMouseHandler::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  objc_super local_38;
  
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_monitor_102269870);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSEvent_10226a8b0;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (lVar4 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_monitor_102269870);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)puVar1)(puVar2,PTR_s_removeMonitor__102269878,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  }
  local_38.super_class = (class_t *)PTR_PDFullScreenMouseHandler_10226abb0;
  local_38.receiver = param_1;
  _objc_msgSendSuper2(&local_38,PTR_s_dealloc_102268c60);
  return;
}

