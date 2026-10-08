
void FUN_10019ae40(QObject *param_1,long *param_2,QObject *param_3)

{
  long lVar1;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021fd540;
  lVar1 = *param_2;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  return;
}

