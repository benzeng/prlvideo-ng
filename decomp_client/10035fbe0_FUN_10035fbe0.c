
QCursor * FUN_10035fbe0(QCursor *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x10);
  QCursor::QCursor(param_1,(QCursor *)(lVar1 + 0x20));
  param_1[0x18] = *(QCursor *)(lVar1 + 0x38);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(param_1 + 8) = uVar2;
  return param_1;
}

