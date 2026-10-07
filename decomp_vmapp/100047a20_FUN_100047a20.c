
QByteArray * FUN_100047a20(QByteArray *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  uint *puVar2;
  
  QByteArray::QByteArray(param_1,0x24,'\0');
  puVar2 = *(uint **)param_1;
  if ((1 < *puVar2) || (*(long *)(puVar2 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar2[1] + 1,puVar2[2] >> 0x1f);
    puVar2 = *(uint **)param_1;
  }
  lVar1 = *(long *)(puVar2 + 4);
  if (param_3 == 0x9043) {
    *(undefined4 *)((long)puVar2 + lVar1) = 2;
  }
  else if (param_3 == 0x9041) {
    *(undefined4 *)((long)puVar2 + lVar1) = 1;
  }
  *(undefined4 *)(lVar1 + 4 + (long)puVar2) = 4;
  return param_1;
}

