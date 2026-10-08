
undefined8 FUN_1006e8570(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_1006915d0();
  lVar3 = FUN_100691620(uVar2,0x60,*(undefined8 *)PTR_self_1021e1388);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = QAction::isVisible();
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = QAction::isEnabled();
    }
  }
  return uVar2;
}

