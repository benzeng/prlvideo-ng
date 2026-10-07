
undefined8 FUN_10002c410(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_1006e6090();
  QByteArray::resize((int)param_3);
  puVar2 = (uint *)*param_3;
  if ((1 < *puVar2) || (*(long *)(puVar2 + 4) != 0x18)) {
    QByteArray::reallocData(param_3,puVar2[1] + 1,puVar2[2] >> 0x1f);
    puVar2 = (uint *)*param_3;
  }
  *(undefined4 *)(*(long *)(puVar2 + 4) + 0xc + (long)puVar2) = uVar1;
  return 0;
}

