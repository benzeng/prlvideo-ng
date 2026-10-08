
undefined1 FUN_10010f120(long *param_1)

{
  undefined1 uVar1;
  QHostAddress local_20 [8];
  
  if (*(int *)(*param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    QHostAddress::QHostAddress(local_20);
    uVar1 = QHostAddress::setAddress((QString *)local_20);
    QHostAddress::~QHostAddress(local_20);
  }
  return uVar1;
}

