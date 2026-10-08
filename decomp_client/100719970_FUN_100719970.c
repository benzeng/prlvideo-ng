
QKeySequence * FUN_100719970(QKeySequence *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  QKeySequence local_40 [8];
  QKeySequence local_38 [8];
  QKeySequence local_30 [8];
  
  FUN_100714b80(local_30);
  QKeySequence::QKeySequence(local_38,DAT_100e27200,0,0,0);
  cVar1 = QKeySequence::operator==(local_30,local_38);
  QKeySequence::~QKeySequence(local_38);
  QKeySequence::~QKeySequence(local_30);
  if (cVar1 == '\0') {
    FUN_100714b80(param_1,param_2);
  }
  else {
    uVar4 = FUN_100152280();
    lVar5 = FUN_1001548f0(uVar4,param_3);
    if (((lVar5 != 0) && (iVar2 = FUN_10018f860(lVar5), iVar2 == 8)) &&
       (uVar3 = FUN_10018f890(lVar5), 0x805 < uVar3)) {
      lVar5 = FUN_10018c280(lVar5);
      QKeySequence::QKeySequence(local_40,(QKeySequence *)(lVar5 + 0x178));
      cVar1 = QKeySequence::isEmpty();
      if (cVar1 != '\0') {
        FUN_100df99c0("","prl_client_app",0,"Switch guest language shortcut not valid.");
      }
      QKeySequence::QKeySequence(param_1,local_40);
      QKeySequence::~QKeySequence(local_40);
      return param_1;
    }
    QKeySequence::QKeySequence(param_1);
  }
  return param_1;
}

