
QHostAddress * FUN_10059d920(QHostAddress *param_1,QHostAddress *param_2)

{
  if (param_2 == (QHostAddress *)0x0) {
    QHostAddress::QHostAddress(param_1);
  }
  else {
    QHostAddress::QHostAddress(param_1,param_2);
  }
  return param_1;
}

