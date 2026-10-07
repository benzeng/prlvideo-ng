
void FUN_100613fc0(long *param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  
  QByteArray::fill((char)param_2,0);
  lVar3 = *param_1;
  if (param_3 < *(uint *)(lVar3 + 4)) {
    if (0 < (int)*(uint *)(lVar3 + 4)) {
      lVar7 = 0;
      uVar4 = 0;
      do {
        puVar5 = (uint *)*param_2;
        uVar6 = *puVar5;
        if ((1 < uVar6) || (*(long *)(puVar5 + 4) != 0x18)) {
          QByteArray::reallocData(param_2,puVar5[1] + 1,puVar5[2] >> 0x1f);
          puVar5 = (uint *)*param_2;
          lVar3 = *param_1;
          uVar6 = *puVar5;
        }
        bVar1 = *(byte *)(lVar7 + lVar3 + *(long *)(lVar3 + 0x10));
        bVar2 = *(byte *)((long)puVar5 + *(long *)(puVar5 + 4) + (ulong)uVar4);
        if ((1 < uVar6) || (*(long *)(puVar5 + 4) != 0x18)) {
          QByteArray::reallocData(param_2,puVar5[1] + 1,puVar5[2] >> 0x1f);
          puVar5 = (uint *)*param_2;
        }
        *(byte *)((long)puVar5 + (ulong)uVar4 + *(long *)(puVar5 + 4)) = bVar1 ^ bVar2;
        uVar4 = uVar4 + 1;
        if (param_3 < uVar4) {
          uVar4 = 0;
        }
        lVar7 = lVar7 + 1;
        lVar3 = *param_1;
      } while (lVar7 < *(int *)(lVar3 + 4));
    }
  }
  else {
    puVar5 = (uint *)*param_2;
    if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar5[1] + 1,puVar5[2] >> 0x1f);
      puVar5 = (uint *)*param_2;
      lVar3 = *param_1;
    }
    _memcpy((void *)((long)puVar5 + *(long *)(puVar5 + 4)),(void *)(*(long *)(lVar3 + 0x10) + lVar3)
            ,(long)*(int *)(lVar3 + 4));
  }
  return;
}

