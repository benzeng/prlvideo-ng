
void FUN_10033b130(QObject *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  long in_RAX;
  QObject *pQVar2;
  undefined8 uVar3;
  bool bVar4;
  long local_38;
  
  if (param_3 == '\0') {
    if (DAT_102310878 == (QObject *)0x0) {
      pQVar2 = operator_new(0x18);
      FUN_10008fa10(pQVar2);
      DAT_102271180 = 1;
      DAT_102310878 = pQVar2;
    }
    QObject::disconnect(DAT_102310878,
                        "2stateChanged(CMacPrevInputSourceShortcutRecognizer::State, CMacPrevInputSourceShortcutRecognizer::State)"
                        ,param_1,
                        "1onShortcutRecognizerStateChanged(CMacPrevInputSourceShortcutRecognizer::State, CMacPrevInputSourceShortcutRecognizer::State)"
                       );
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    bVar4 = false;
  }
  else {
    local_38 = in_RAX;
    if (DAT_102310878 == (QObject *)0x0) {
      pQVar2 = operator_new(0x18);
      FUN_10008fa10(pQVar2);
      DAT_102271180 = 1;
      DAT_102310878 = pQVar2;
    }
    QObject::connect(&local_38,DAT_102310878,
                     "2stateChanged(CMacPrevInputSourceShortcutRecognizer::State, CMacPrevInputSourceShortcutRecognizer::State)"
                     ,param_1,
                     "1onShortcutRecognizerStateChanged(CMacPrevInputSourceShortcutRecognizer::State, CMacPrevInputSourceShortcutRecognizer::State)"
                     ,0);
    if (local_38 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (DAT_102310878 == (QObject *)0x0) {
      pQVar2 = operator_new(0x18);
      FUN_10008fa10(pQVar2);
      DAT_102271180 = 1;
      DAT_102310878 = pQVar2;
    }
    iVar1 = FUN_10008fb50(DAT_102310878);
    bVar4 = iVar1 == 1;
  }
  FUN_100a5ed00(uVar3,bVar4);
  FUN_100a5ead0(*(undefined8 *)(param_1 + 0x20),param_3);
  return;
}

