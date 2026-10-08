
void FUN_100085e60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    uVar1 = FUN_1006915d0();
    uVar2 = FUN_100060bb0();
    uVar2 = FUN_1000609c0(uVar2);
    lVar3 = FUN_100691620(uVar1,0x15,uVar2);
    if (lVar3 != 0) {
      QAction::activate(lVar3,0);
      return;
    }
  }
  return;
}

