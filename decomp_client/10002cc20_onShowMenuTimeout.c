
/* Function Stack Size: 0x10 bytes */

void PDFullScreenMouseHandler::onShowMenuTimeout(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_menuAreaHandler_102269880);
  lVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2);
  (*(code *)PTR__objc_release_1021e1c70)(lVar2);
  return;
}

