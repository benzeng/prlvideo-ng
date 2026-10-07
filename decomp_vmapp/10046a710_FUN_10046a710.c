
undefined8 FUN_10046a710(QByteArray *param_1,QByteArray *param_2)

{
  int *piVar1;
  uint *puVar2;
  
  QByteArray::operator=(param_2,param_1);
  puVar2 = *(uint **)param_2;
  if ((1 < *puVar2) || (*(long *)(puVar2 + 4) != 0x18)) {
    QByteArray::reallocData(param_2,puVar2[1] + 1,puVar2[2] >> 0x1f);
    puVar2 = *(uint **)param_2;
  }
  piVar1 = (int *)(*(long *)(puVar2 + 4) + 8 + (long)puVar2);
  *piVar1 = *piVar1 + 10000000;
  return 0;
}

