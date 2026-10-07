
void FUN_1004ebed0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  for (lVar1 = *(long *)(param_1 + 8); (param_2 != param_3 && (lVar3 = param_2, lVar1 != param_1));
      lVar1 = *(long *)(lVar1 + 8)) {
    QString::operator=((QString *)(lVar1 + 0x10),(QString *)(param_2 + 0x10));
    *(undefined2 *)(lVar1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    QString::operator=((QString *)(lVar1 + 0x30),(QString *)(param_2 + 0x30));
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    param_2 = *(long *)(param_2 + 8);
    lVar3 = param_3;
  }
  if (lVar1 != param_1) {
    FUN_1004ec1c0(param_1,lVar1,param_1);
    return;
  }
  FUN_1004ebf90(param_1,param_1,lVar3,param_3,0);
  return;
}

