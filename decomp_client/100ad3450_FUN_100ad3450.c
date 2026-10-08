
undefined8 * FUN_100ad3450(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  uint *puVar4;
  
  *param_1 = PTR_shared_null_1021e1288;
  FUN_100ae5dc0(param_3);
  QByteArray::resize((int)param_1);
  puVar4 = (uint *)*param_1;
  if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar4[1] + 1,puVar4[2] >> 0x1f);
    puVar4 = (uint *)*param_1;
  }
  lVar1 = *(long *)(puVar4 + 4);
  *(undefined8 *)((long)puVar4 + lVar1 + 8) = 0;
  *(undefined8 *)((long)puVar4 + lVar1) = 0;
  *(undefined4 *)((long)puVar4 + lVar1) = *(undefined4 *)(param_2 + 0x9b0);
  *(undefined4 *)((long)puVar4 + lVar1 + 4) = *(undefined4 *)(param_2 + 0x9b4);
  *(int *)((long)puVar4 + lVar1 + 8) = (int)(long)*(double *)(param_2 + 0xac0);
  pvVar3 = (void *)FUN_100ae5db0(param_3);
  uVar2 = FUN_100ae5dc0(param_3);
  _memcpy((void *)((long)puVar4 + lVar1 + 0x10),pvVar3,(ulong)uVar2);
  return param_1;
}

