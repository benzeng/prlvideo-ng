
void FUN_100590b90(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x58);
  cVar2 = FUN_1005a5f40(param_1 + 0x18);
  CAuthorizationLock::setLockState(uVar1,(cVar2 == '\0') + '\x01');
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x30);
  FUN_1005a5f40(param_1 + 0x18);
  QWidget::setDisabled(SUB81(uVar1,0));
  return;
}

