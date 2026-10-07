
void FUN_10078ec70(QIODevice *param_1)

{
  *(undefined ***)param_1 = &PTR_metaObject_100bcf1a0;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
  }
  QIODevice::~QIODevice(param_1);
  operator_delete(param_1);
  return;
}

