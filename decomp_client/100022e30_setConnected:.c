
/* Function Stack Size: 0x14 bytes */

void PDBarButtonItem::setConnected_(ID param_1,SEL param_2,char param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _connected) == param_3) {
    return;
  }
  *(char *)(param_1 + _connected) = param_3;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_connectionStatusView_102269610);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_setStatusVisible__102269630,param_3 == '\0');
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  return;
}

