
QDataStream * FUN_1006b0d70(QDataStream *param_1,long param_2)

{
  QDataStream::operator<<(param_1,*(bool *)param_2);
  operator<<(param_1,(QKeySequence *)(param_2 + 8));
  return param_1;
}

