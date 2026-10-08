
void FUN_1005ec550(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 in_R9;
  
  uVar1 = FUN_1005ec990(param_1 + 0x38);
  lVar2 = FUN_1005b87b0(uVar1);
  if (lVar2 != 0) {
    FUN_100060bb0();
    uVar1 = QMetaObject::className();
    lVar2 = FUN_100060e80(uVar1,lVar2);
    if (lVar2 != 0) {
      QWidget::close();
    }
    uVar1 = FUN_1005ec980(param_1 + 0x38);
    QMetaObject::invokeMethod
              (uVar1,"vmCustomized",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  }
  return;
}

