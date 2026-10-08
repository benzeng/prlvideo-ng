
void FUN_1000d0210(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 2) {
    uVar1 = FUN_1006915d0();
    uVar2 = FUN_100152280();
    uVar2 = FUN_1001548f0(uVar2,param_1 + 0x10);
    uVar1 = FUN_100691620(uVar1,0x85,uVar2);
    QAction::activate(uVar1,0);
    return;
  }
  return;
}

