
void FUN_100214590(QThread *param_1,long *param_2,QObject *param_3)

{
  long lVar1;
  
  QThread::QThread(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102201140;
  lVar1 = *param_2;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  QImage::QImage((QImage *)(param_1 + 0x18));
  return;
}

