
void FUN_1005ef750(long param_1,char *param_2)

{
  long lVar1;
  QVariant local_28;
  
  if (param_2 != (char *)0x0) {
    lVar1 = FUN_1005ec990(param_1 + 0x38);
    if (*(long *)(lVar1 + 0xa0) != 0) {
      FUN_1005ef7e0(param_1);
      return;
    }
    QVariant::QVariant(&local_28,"ProgressState");
    QObject::setProperty(param_2,(QVariant *)"state");
    QVariant::~QVariant(&local_28);
  }
  return;
}

