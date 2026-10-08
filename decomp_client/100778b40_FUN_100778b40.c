
void FUN_100778b40(QObject *param_1,undefined4 param_2)

{
  param_1[0x19] = (QObject)0x1;
  param_1[0x18] = (QObject)((byte)((uint)param_2 >> 0x1f) ^ 1);
  QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6e90,0,(void **)0x0);
  return;
}

