
void FUN_100785690(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_1006915d0();
  uVar2 = FUN_100060bb0();
  uVar2 = FUN_1000609c0(uVar2);
  lVar3 = FUN_100691620(uVar1,0x54,uVar2);
  if (lVar3 != 0) {
    QAction::activate(lVar3,0);
    return;
  }
  return;
}

