
undefined8 FUN_1003fc130(long param_1,QString *param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  QString::operator=((QString *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  pvVar1 = _malloc(*(long *)(param_1 + 0x68) << 4);
  *(void **)(param_1 + 0x38) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    QTime::start();
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
    uVar2 = CONCAT71((int7)((ulong)*(undefined8 *)(param_1 + 0x38) >> 8),1);
  }
  return uVar2;
}

