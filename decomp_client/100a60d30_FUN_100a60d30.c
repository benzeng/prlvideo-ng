
QByteArray * FUN_100a60d30(QByteArray *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_30 [16];
  char *local_20;
  int local_18;
  
  cVar1 = FUN_100a602a0(param_2,"macln",5,local_30);
  if (cVar1 == '\0') {
    *(undefined **)param_1 = PTR_shared_null_1021e1288;
  }
  else {
    QByteArray::QByteArray(param_1,local_20,local_18);
  }
  return param_1;
}

