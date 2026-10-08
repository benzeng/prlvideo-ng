
void FUN_100678dd0(long param_1,QString *param_2,QString *param_3,QString *param_4)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long *)(param_1 + 0x60) != 0)) {
    CContentModel::setBusy(SUB81(param_1,0));
    *(undefined1 *)(param_1 + 0x15f) = 0;
    QString::operator=((QString *)(param_1 + 0x108),param_3);
    QString::operator=((QString *)(param_1 + 0x110),param_4);
    QString::operator=((QString *)(param_1 + 0x118),param_2);
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_100689040(*(undefined8 *)(param_1 + 0x20),uVar1,param_2,param_3,param_4);
    return;
  }
  return;
}

