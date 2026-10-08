
QKeySequence * FUN_1007196e0(QKeySequence *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  QKeySequence local_68 [8];
  QKeySequence local_60 [8];
  QKeySequence local_58 [8];
  QKeySequence local_50 [8];
  QKeySequence local_48 [8];
  QKeySequence local_40 [8];
  QKeySequence local_38 [8];
  QKeySequence local_30 [8];
  
  FUN_100714b50(local_30);
  QKeySequence::QKeySequence(local_38,DAT_100e271fc,0,0,0);
  cVar1 = QKeySequence::operator==(local_30,local_38);
  cVar2 = '\x01';
  if (cVar1 == '\0') {
    FUN_100714b50(local_40,param_2);
    QKeySequence::QKeySequence(local_48,DAT_100e271f8,0,0,0);
    cVar2 = QKeySequence::operator==(local_40,local_48);
    QKeySequence::~QKeySequence(local_48);
    QKeySequence::~QKeySequence(local_40);
  }
  QKeySequence::~QKeySequence(local_38);
  QKeySequence::~QKeySequence(local_30);
  if (cVar2 == '\0') {
    FUN_100714b50(param_1,param_2);
  }
  else {
    uVar7 = FUN_100152280();
    lVar8 = FUN_1001548f0(uVar7,param_3);
    if (((lVar8 != 0) && (iVar4 = FUN_10018f860(lVar8), iVar4 == 8)) &&
       (uVar5 = FUN_10018f890(lVar8), 0x805 < uVar5)) {
      if (DAT_102310a18 == (void *)0x0) {
        pvVar9 = operator_new(0x20);
        FUN_1007eff80(pvVar9);
        DAT_10226c4da = 1;
        DAT_102310a18 = pvVar9;
      }
      pvVar9 = DAT_102310a18;
      FUN_100714b50(local_58,param_2);
      QKeySequence::QKeySequence(local_60,DAT_100e271f8,0,0,0);
      bVar3 = QKeySequence::operator==(local_58,local_60);
      FUN_1007f0520(local_50,pvVar9,bVar3 ^ 1);
      QKeySequence::~QKeySequence(local_60);
      QKeySequence::~QKeySequence(local_58);
      cVar1 = QKeySequence::isEmpty();
      if (cVar1 != '\0') {
        FUN_100714b50(local_68,param_2);
        uVar6 = QKeySequence::operator[]((uint)local_68);
        FUN_100df99c0("","prl_client_app",0,"Switch host language shortcut \'%d\' not valid.",uVar6)
        ;
        QKeySequence::~QKeySequence(local_68);
      }
      QKeySequence::QKeySequence(param_1,local_50);
      QKeySequence::~QKeySequence(local_50);
      return param_1;
    }
    QKeySequence::QKeySequence(param_1);
  }
  return param_1;
}

