
void FUN_100a469c0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100a46880();
  if (lVar1 != 0) {
    uVar2 = FUN_1006915d0();
    lVar1 = FUN_100691620(uVar2,0x3e,lVar1);
    if (lVar1 != 0) {
      QAction::activate(lVar1,0);
      return;
    }
  }
  return;
}

