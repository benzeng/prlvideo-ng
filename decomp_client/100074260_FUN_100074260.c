
QDataStream * FUN_100074260(QDataStream *param_1,QString *param_2)

{
  int local_1c;
  
  operator>>(param_1,param_2);
  QDataStream::operator>>(param_1,&local_1c);
  FUN_100076080(param_1,param_2 + 2);
  FUN_100076080(param_1,param_2 + 3);
  *(int *)&param_2[1].field0_0x0 = local_1c;
  return param_1;
}

