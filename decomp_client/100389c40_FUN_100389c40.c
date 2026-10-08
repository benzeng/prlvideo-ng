
void FUN_100389c40(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  QGraphicsView::scene();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220f3d0);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    if ((iVar1 + 0xfefffffcU < 2) || (iVar1 == 0x20)) {
      FUN_1003883c0(lVar2,0);
      return;
    }
    if (iVar1 == 0x1000023) {
      FUN_100386020(lVar2,0);
      return;
    }
  }
  return;
}

