
void FUN_100206cd0(QObject *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x38);
  if (lVar2 != 0) {
    FUN_100206d20(param_1,lVar2);
    return;
  }
  QTimer::singleShot(300,param_1,"1onCheckForVmAdded()");
  return;
}

