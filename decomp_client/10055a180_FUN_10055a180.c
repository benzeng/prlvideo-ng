
QKeySequence * FUN_10055a180(QKeySequence *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  QKeySequence *pQVar4;
  QKeySequence local_58 [8];
  QKeySequence local_50 [8];
  QKeySequence local_48 [8];
  QKeySequence local_40 [8];
  QKeySequence local_38 [8];
  QKeySequence local_30 [8];
  undefined4 local_28;
  
  if (DAT_102274244 == 0) {
    DAT_102274244 = FUN_100559f60("CRemapInfo",0xffffffffffffffff,1);
  }
  uVar1 = DAT_102274244;
  uVar3 = QVariant::userType();
  if (uVar1 == uVar3) {
    pQVar4 = (QKeySequence *)QVariant::constData();
    QKeySequence::QKeySequence(param_1,pQVar4);
    QKeySequence::QKeySequence(param_1 + 8,pQVar4 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(pQVar4 + 0x10);
  }
  else {
    QKeySequence::QKeySequence(local_40);
    QKeySequence::QKeySequence(local_48);
    FUN_100714b00(local_38,local_40,local_48,2);
    QKeySequence::~QKeySequence(local_48);
    QKeySequence::~QKeySequence(local_40);
    cVar2 = QVariant::convert(param_2,(void *)(ulong)uVar1);
    if (cVar2 == '\0') {
      QKeySequence::QKeySequence(local_50);
      QKeySequence::QKeySequence(local_58);
      FUN_100714b00(param_1,local_50,local_58,2);
      QKeySequence::~QKeySequence(local_58);
      QKeySequence::~QKeySequence(local_50);
    }
    else {
      QKeySequence::QKeySequence(param_1,local_38);
      QKeySequence::QKeySequence(param_1 + 8,local_30);
      *(undefined4 *)(param_1 + 0x10) = local_28;
    }
    QKeySequence::~QKeySequence(local_30);
    QKeySequence::~QKeySequence(local_38);
  }
  return param_1;
}

