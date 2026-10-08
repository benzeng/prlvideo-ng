
void FUN_100326d00(long param_1)

{
  char cVar1;
  long lVar2;
  Connection local_68 [8];
  QImage local_60 [32];
  QImage local_40 [32];
  
  if ((((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
      (*(long *)(param_1 + 0x18) != 0)) && (lVar2 = FUN_100319390(), lVar2 != 0)) {
    lVar2 = FUN_100198a70(lVar2,*(undefined4 *)(param_1 + 0x30));
    if ((lVar2 != 0) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
      QObject::connect(local_68,lVar2,"2taskFinished(PRL_RESULT)",param_1,
                       "1onSuspendedScreenImageReceived( PRL_RESULT )",0);
      QMetaObject::Connection::~Connection(local_68);
      CAbstractTask::execute();
      return;
    }
    QImage::QImage(local_60);
    FUN_100326b80(param_1,local_60);
    QImage::~QImage(local_60);
    return;
  }
  QImage::QImage(local_40);
  FUN_100326b80(param_1,local_40);
  QImage::~QImage(local_40);
  return;
}

