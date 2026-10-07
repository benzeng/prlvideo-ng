
void FUN_1000e1020(long param_1,long *param_2)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 local_34;
  
  pvVar2 = (void *)*param_2;
  bVar1 = *(byte *)((long)*(void **)(param_1 + 8) + 1);
  _memcpy(pvVar2,*(void **)(param_1 + 8),(ulong)bVar1);
  pvVar7 = (void *)((ulong)bVar1 + *param_2);
  *param_2 = (long)pvVar7;
  *(uint *)(param_2 + 3) = (int)param_2[3] + (uint)bVar1;
  pbVar3 = *(byte **)(param_1 + 0x10);
  pbVar6 = pbVar3;
  if (pbVar3 != *(byte **)(param_1 + 0x18)) {
    do {
      if ((*pbVar3 & 1) == 0) {
        uVar9 = (ulong)(*pbVar3 >> 1);
        pbVar6 = pbVar3 + 1;
      }
      else {
        uVar9 = *(ulong *)(pbVar3 + 8);
        pbVar6 = *(byte **)(pbVar3 + 0x10);
      }
      uVar8 = uVar9 + 1 & 0xffffffff;
      _memcpy(pvVar7,pbVar6,uVar8);
      pvVar7 = (void *)(uVar8 + *param_2);
      *param_2 = (long)pvVar7;
      *(int *)(param_2 + 3) = (int)param_2[3] + (int)(uVar9 + 1);
      pbVar6 = pbVar3 + 0x18;
      pbVar3 = pbVar6;
    } while (pbVar6 != *(byte **)(param_1 + 0x18));
    pbVar3 = *(byte **)(param_1 + 0x10);
  }
  local_34 = 0;
  uVar5 = (pbVar6 == pbVar3) + 1;
  _memcpy(pvVar7,&local_34,(ulong)uVar5);
  lVar4 = *param_2 + (ulong)uVar5;
  *param_2 = lVar4;
  *(uint *)(param_2 + 3) = (int)param_2[3] + uVar5;
  uVar5 = (int)lVar4 - (int)pvVar2;
  if (*(uint *)(param_2 + 2) < uVar5) {
    *(uint *)(param_2 + 2) = uVar5;
  }
  return;
}

