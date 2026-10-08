
void FUN_1005f17f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = QMetaObject::cast((QObject *)&DAT_1021f4b00);
  uVar2 = FUN_1005ec990(param_1 + 0x38);
  FUN_1005b9a00(uVar2,lVar1 + 0x10);
  lVar1 = FUN_1005ec990(param_1 + 0x38);
  *(undefined4 *)(lVar1 + 0x50) = 8;
  return;
}

