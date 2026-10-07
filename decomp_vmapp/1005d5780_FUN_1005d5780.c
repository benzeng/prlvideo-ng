
void FUN_1005d5780(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  for (lVar1 = *(long *)(param_1 + 8); (param_2 != param_3 && (lVar3 = param_2, lVar1 != param_1));
      lVar1 = *(long *)(lVar1 + 8)) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    FUN_10051afa0(lVar1 + 0x20,param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    QDateTime::operator=((QDateTime *)(lVar1 + 0x38),(QDateTime *)(param_2 + 0x38));
    if (lVar1 != param_2) {
      FUN_1005d5780(lVar1 + 0x40,*(undefined8 *)(param_2 + 0x48),param_2 + 0x40,0);
    }
    param_2 = *(long *)(param_2 + 8);
    lVar3 = param_3;
  }
  if (lVar1 != param_1) {
    FUN_1005d5cc0(param_1,lVar1,param_1);
    return;
  }
  FUN_1005d5850(param_1,param_1,lVar3,param_3,0);
  return;
}

