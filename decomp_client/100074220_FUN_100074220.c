
QDataStream * FUN_100074220(QDataStream *param_1,QString *param_2)

{
  operator<<(param_1,param_2);
  QDataStream::operator<<(param_1,*(int *)&param_2[1].field0_0x0);
  FUN_100075ff0(param_1,param_2 + 2);
  FUN_100075ff0(param_1,param_2 + 3);
  return param_1;
}

