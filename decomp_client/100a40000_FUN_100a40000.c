
long FUN_100a40000(undefined8 *param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  if ((1 < *puVar1) || (*(long *)(puVar1 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar1[1] + 1,puVar1[2] >> 0x1f);
    puVar1 = (uint *)*param_1;
  }
  return (long)puVar1 + *(long *)(puVar1 + 4);
}

