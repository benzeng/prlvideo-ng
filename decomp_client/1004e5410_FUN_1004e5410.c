
void FUN_1004e5410(QObject *param_1,QObject *param_2,undefined8 param_3,QMacToolBar *param_4,
                  undefined8 param_5,long *param_6)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  CMacToolbarSearchField *this;
  QShortcut *pQVar5;
  long lVar6;
  long lVar7;
  long local_60;
  QKeySequence local_58 [8];
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f2930;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  param_1[0x28] = (QObject)0x0;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e15e8;
  piVar1 = (int *)*param_6;
  *(int **)(param_1 + 0x38) = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(param_1 + 0x38));
      lVar2 = *(long *)(param_1 + 0x38);
      lVar6 = (long)*(int *)(lVar2 + 8);
      lVar3 = *param_6;
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar6 * 8) &&
         (lVar7 = *(int *)(lVar2 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar6 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar7 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_31 = *piVar1 != 0;
      UNLOCK();
    }
  }
  FUN_1004e7450(param_1 + 0x40,param_5);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  this = operator_new(0x18);
  CMacToolbarSearchField::CMacToolbarSearchField(this,param_4);
  *(CMacToolbarSearchField **)(param_1 + 0x20) = this;
  QObject::connect(&local_40,this,"2textChanged(const QString&)",param_1,
                   "1onTextChanged(const QString&)",0);
  if (local_40 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x20),"2highlighted(int)",param_1,
                   "1onHighlighted(int)",0);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else if (local_48 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QObject::connect(&local_50,*(undefined8 *)(param_1 + 0x20),"2selected(int)",param_1,
                   "1onSelected(int)",0);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else if (local_50 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  pQVar5 = operator_new(0x10);
  QKeySequence::QKeySequence(local_58,0x16);
  QShortcut::QShortcut(pQVar5,local_58,*(undefined8 *)(param_1 + 0x18),0,0,1);
  QKeySequence::~QKeySequence(local_58);
  QObject::connect(&local_60,pQVar5,"2activated()",param_1,"1startSearching()",0);
  if ((cVar4 != '\0') && (local_60 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  return;
}

