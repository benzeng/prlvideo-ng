
undefined1 FUN_100459230(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  uVar3 = 1;
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_10044e660(param_1);
    uVar4 = FUN_10044e5b0(param_1);
    uVar4 = FUN_1003b1cd0(uVar4);
    cVar2 = FUN_1003bf710(uVar1,uVar4);
    if (cVar2 == '\0') {
      uVar3 = QAbstractButton::isChecked();
    }
  }
  return uVar3;
}

