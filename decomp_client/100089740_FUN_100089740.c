
void FUN_100089740(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_1006915d0();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  lVar3 = FUN_100691620(uVar2,0xc,uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = QAction::isVisible();
  }
                    /* WARNING: Could not recover jumptable at 0x00010008979a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setDevPanelAvailable__10226a0d8,uVar1);
  return;
}

