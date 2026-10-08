
void FUN_100332a30(QObject *param_1)

{
  undefined1 uVar1;
  QObject *pQVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  pQVar2 = (QObject *)FUN_100319390(uVar3);
  QObject::disconnect(pQVar2,"2vmHWUpgradeFinished()",param_1,"1onVmUpgradeFinished()");
  uVar1 = FUN_100330ac0(param_1);
  FUN_100331470(param_1,uVar1);
  return;
}

