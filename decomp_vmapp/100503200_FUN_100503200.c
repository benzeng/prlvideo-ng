
undefined8 FUN_100503200(long param_1,ulong param_2,void *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *param_5 = 0;
  if (param_2 < *(uint *)(param_1 + 0x50)) {
    uVar1 = *(uint *)(param_1 + 0x50) - (int)param_2;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    *param_5 = uVar1;
    puVar2 = *(uint **)(param_1 + 0x58);
    puVar4 = (undefined8 *)(param_1 + 0x58);
    if ((ulong)puVar2[1] < uVar1 + param_2) {
      QByteArray::resize((int)puVar4);
      puVar2 = (uint *)*puVar4;
    }
    if ((1 < *puVar2) || (*(long *)(puVar2 + 4) != 0x18)) {
      QByteArray::reallocData(puVar4,puVar2[1] + 1,puVar2[2] >> 0x1f);
      puVar2 = (uint *)*puVar4;
    }
    _memcpy((void *)(param_2 + *(long *)(puVar2 + 4) + (long)puVar2),param_3,(ulong)*param_5);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

