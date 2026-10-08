
void FUN_100202380(QObject *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x48);
  if (lVar2 != 0) {
    FUN_1002023d0(param_1,lVar2);
    return;
  }
  QTimer::singleShot(300,param_1,"1onCheckForVmAdded()");
  return;
}

