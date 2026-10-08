
void FUN_10001dc30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = _objc_loadWeakRetained(param_1 + 0x20);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_updatePosition_1022692d0);
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  uVar3 = _objc_loadWeakRetained(param_1 + 0x20);
  (*(code *)puVar1)(uVar3,PTR_s_updateTrackingArea_1022692d8);
  (*(code *)puVar2)(uVar3);
  return;
}

