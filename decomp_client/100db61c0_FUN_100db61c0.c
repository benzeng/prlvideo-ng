
void FUN_100db61c0(uint *param_1,void *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar4 = param_4 + param_3;
    uVar8 = 0;
    uVar5 = 0;
    puVar2 = param_1;
    do {
      uVar3 = puVar2[4];
      uVar1 = uVar3 + uVar5;
      if (param_3 < uVar1) {
        if (uVar4 <= uVar5) {
          return;
        }
        pvVar7 = *(void **)(puVar2 + 2);
        if (uVar5 < param_3) {
          pvVar7 = (void *)((long)pvVar7 + (ulong)(param_3 - uVar5));
          uVar3 = uVar3 - (param_3 - uVar5);
        }
        if (uVar4 < uVar1) {
          uVar3 = (uVar3 + uVar4) - uVar1;
        }
        _memcpy(pvVar7,param_2,(ulong)uVar3);
        param_2 = (void *)((long)param_2 + (ulong)uVar3);
        uVar6 = param_1[1];
      }
      uVar8 = uVar8 + 1;
      uVar5 = uVar1;
      puVar2 = puVar2 + 4;
    } while (uVar8 < uVar6);
  }
  return;
}

