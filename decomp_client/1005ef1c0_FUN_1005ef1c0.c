
void FUN_1005ef1c0(long param_1,char *param_2)

{
  long lVar1;
  QVariant local_30;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  lVar1 = FUN_1005ec990(param_1 + 0x38);
  if ((*(long *)(lVar1 + 0xa0) == 0) &&
     (lVar1 = FUN_1005ec990(param_1 + 0x38), *(int *)(lVar1 + 0x50) != 8)) {
    QVariant::QVariant(&local_30,"ProgressState");
    QObject::setProperty(param_2,(QVariant *)"state");
    QVariant::~QVariant(&local_30);
    return;
  }
  FUN_1005ecf60(*(undefined8 *)(param_1 + 0x40));
  return;
}

