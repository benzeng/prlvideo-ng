
QHostAddress * FUN_1005995f0(QHostAddress *param_1,QHostAddress *param_2)

{
  if (param_2 == (QHostAddress *)0x0) {
    QHostAddress::QHostAddress(param_1);
    QHostAddress::QHostAddress(param_1 + 8);
    QHostAddress::QHostAddress(param_1 + 0x10);
  }
  else {
    QHostAddress::QHostAddress(param_1,param_2);
    QHostAddress::QHostAddress(param_1 + 8,param_2 + 8);
    QHostAddress::QHostAddress(param_1 + 0x10,param_2 + 0x10);
  }
  return param_1;
}

