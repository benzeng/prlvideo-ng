
void FUN_100810660(QThread *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102201140;
  QImage::~QImage((QImage *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x10) != 0) {
    _PrlHandle_Free();
  }
  QThread::~QThread(param_1);
  return;
}

