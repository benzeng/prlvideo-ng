
QDataStream * FUN_1006b29c0(QDataStream *param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  bool local_48 [8];
  QKeySequence local_40 [12];
  uint local_34;
  
  FUN_1006b2950(param_2);
  QDataStream::operator>>(param_1,(int *)&local_34);
  if ((int)((uint *)*param_2)[1] < (int)local_34) {
    if (*(uint *)*param_2 < 2) {
      QListData::realloc((int)param_2);
    }
    else {
      FUN_10056ea70(param_2);
    }
  }
  if (local_34 != 0) {
    uVar2 = 1;
    do {
      QKeySequence::QKeySequence(local_40);
      QDataStream::operator>>(param_1,local_48);
      operator>>(param_1,local_40);
      FUN_10056cc00(param_2,local_48);
      cVar1 = QDataStream::atEnd();
      QKeySequence::~QKeySequence(local_40);
      if (local_34 <= uVar2) {
        return param_1;
      }
      uVar2 = uVar2 + 1;
    } while (cVar1 != '\x01');
  }
  return param_1;
}

