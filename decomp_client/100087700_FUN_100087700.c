
void FUN_100087700(QObject *param_1)

{
  int *piVar1;
  void *pvVar2;
  QImage local_40 [39];
  undefined1 local_19;
  
  if (((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
     (*(QObject **)(param_1 + 0x58) != (QObject *)0x0)) {
    QObject::disconnect(*(QObject **)(param_1 + 0x58),"2imageUpdated(const QImage&)",param_1,
                        "1onVmThumbnailUpdated(const QImage&)");
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_19 = *piVar1 != 0;
      UNLOCK();
      if ((!(bool)local_19) && (pvVar2 = *(void **)(param_1 + 0x50), pvVar2 != (void *)0x0)) {
        operator_delete(pvVar2);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    QImage::QImage(local_40);
    FUN_10008b0f0(param_1,local_40);
    QImage::~QImage(local_40);
  }
  return;
}

