
long FUN_100a3c290(undefined8 *param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  long lVar2;
  
  QByteArray::resize((int)param_1);
  puVar1 = (uint *)*param_1;
  if ((1 < *puVar1) || (*(long *)(puVar1 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar1[1] + 1,puVar1[2] >> 0x1f);
    puVar1 = (uint *)*param_1;
  }
  lVar2 = *(long *)(puVar1 + 4);
  *(undefined4 *)((long)puVar1 + lVar2) = 0x20000;
  *(undefined4 *)((long)puVar1 + lVar2 + 4) = 2;
  *(undefined4 *)((long)puVar1 + lVar2 + 8) = param_3;
  *(int *)((long)puVar1 + lVar2 + 0xc) = param_2 + 0x10;
  lVar2 = FUN_100a40000(param_1);
  return lVar2 + 0x10;
}

