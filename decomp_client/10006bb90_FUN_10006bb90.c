
void FUN_10006bb90(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  
  QWidget::setAttribute(*(undefined8 *)(param_1 + 0x10),0x78,1);
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_CVmConsoleWindowToolbarController_10226a9f8,PTR_s_alloc_102268b58);
  uVar1 = (*(code *)puVar2)(uVar1,PTR_s_initWithVmConsoleWindow__102269d00,
                            *(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  cVar3 = MacUtils::isWindowPrimaryInFullScreen(*(QWidget **)(param_1 + 0x10));
  if (cVar3 != '\0') {
    MacUtils::setWindowToBePrimaryInFullScreen(*(QWidget **)(param_1 + 0x10),false);
    return;
  }
  return;
}

