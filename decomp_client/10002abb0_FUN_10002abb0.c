
void FUN_10002abb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_window_102268c08);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  cVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_isKeyWindow_1022697d8);
  puVar3 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  (*(code *)puVar3)(uVar1);
  if (cVar4 != '\0') {
    uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_showPopover_1022697e0);
    (*(code *)PTR__objc_release_1021e1c70)(uVar1);
    return;
  }
  return;
}

