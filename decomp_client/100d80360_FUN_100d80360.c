
QString * FUN_100d80360(QString *param_1,QString *param_2)

{
  if (param_2 != param_1) {
    QString::operator=(param_1,param_2);
    QString::operator=(param_1 + 1,param_2 + 1);
  }
  return param_1;
}

