
void FUN_1006b3b60(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018a9d0(uVar3);
  if ((iVar2 == 0x30000004) && (cVar1 = QHostAddress::isNull(), cVar1 == '\0')) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = FUN_10018f5c0(uVar3);
    FUN_1007c7cf0(uVar3);
  }
  QAction::setEnabled(SUB81(param_1,0));
  return;
}

