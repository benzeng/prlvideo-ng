
void FUN_100020d20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_setAnimationIsInProgress__102269518,0);
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_updateInstrinsicSize_1022694c8);
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  return;
}

