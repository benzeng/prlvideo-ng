
void FUN_100382690(long param_1,QString *param_2,QString *param_3,undefined8 param_4)

{
  long lVar1;
  
  QString::operator=((QString *)(*(long *)(param_1 + 0x30) + 0x38),param_2);
  QString::operator=((QString *)(*(long *)(param_1 + 0x30) + 0x40),param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), lVar1 != 0)) {
    FUN_100387010(lVar1,param_3,param_4);
    return;
  }
  return;
}

