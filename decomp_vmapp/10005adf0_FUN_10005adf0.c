
QByteArray * FUN_10005adf0(QByteArray *param_1,undefined8 param_2)

{
  QDataStream local_58 [24];
  undefined4 local_40;
  QBuffer local_38 [24];
  
  *(undefined **)param_1 = PTR_shared_null_100ba20d0;
  QBuffer::QBuffer(local_38,param_1,(QObject *)0x0);
  QBuffer::open(local_38,3);
  QDataStream::QDataStream(local_58,(QIODevice *)local_38);
  local_40 = 7;
  FUN_10005a6c0(local_58,param_2);
  QDataStream::~QDataStream(local_58);
  QBuffer::~QBuffer(local_38);
  return param_1;
}

