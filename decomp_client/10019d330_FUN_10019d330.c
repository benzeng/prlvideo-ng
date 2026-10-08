
void FUN_10019d330(long param_1)

{
  long lVar1;
  Connection local_38 [8];
  Connection local_30 [8];
  Connection local_28 [8];
  
  QObject::connect(local_28,*(undefined8 *)(param_1 + 0xe0),"2clicked()",param_1,"1onContinue()",0);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,*(undefined8 *)(param_1 + 0xd8),"2clicked()",param_1,"1onCancel()",0);
  QMetaObject::Connection::~Connection(local_30);
  lVar1 = *(long *)(*(long *)(param_1 + 0xf0) + 0x20);
  if (lVar1 != 0) {
    QObject::connect(local_38,lVar1,"2OldHddConverted(PRL_RESULT)",param_1,
                     "1onConversionFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_38);
  }
  return;
}

