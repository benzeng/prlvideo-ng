
undefined8 FUN_100029bf0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  uint *puVar2;
  
  QByteArray::resize((int)param_2);
  puVar2 = (uint *)*param_2;
  if ((1 < *puVar2) || (*(long *)(puVar2 + 4) != 0x18)) {
    QByteArray::reallocData(param_2,puVar2[1] + 1,puVar2[2] >> 0x1f);
    puVar2 = (uint *)*param_2;
  }
  lVar1 = *(long *)(puVar2 + 4);
  *(undefined8 *)(lVar1 + 0x10 + (long)puVar2) = 0x20000000c;
  *(undefined8 *)(lVar1 + 0x18 + (long)puVar2) = 0xa28f00000001;
  return 0;
}

