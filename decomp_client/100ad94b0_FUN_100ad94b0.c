
void FUN_100ad94b0(char *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  
  QByteArray::clear();
  QByteArray::append(param_1,param_2);
  puVar3 = *(uint **)param_1;
  if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar3[1] + 1,puVar3[2] >> 0x1f);
    puVar3 = *(uint **)param_1;
  }
  lVar2 = *(long *)(puVar3 + 4);
  *(undefined4 *)((long)puVar3 + lVar2) = 0x20;
  puVar1 = (undefined8 *)((long)puVar3 + lVar2 + 4);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}

