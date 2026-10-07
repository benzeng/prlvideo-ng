
void FUN_10070b220(void *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_2[1];
  if (uVar7 != 0) {
    uVar4 = param_4 + param_3;
    uVar8 = 0;
    uVar5 = 0;
    puVar2 = param_2;
    do {
      uVar3 = puVar2[4];
      uVar1 = uVar3 + uVar5;
      if (param_3 < uVar1) {
        if (uVar4 <= uVar5) {
          return;
        }
        pvVar6 = *(void **)(puVar2 + 2);
        if (uVar5 < param_3) {
          pvVar6 = (void *)((long)pvVar6 + (ulong)(param_3 - uVar5));
          uVar3 = uVar3 - (param_3 - uVar5);
        }
        if (uVar4 < uVar1) {
          uVar3 = (uVar3 + uVar4) - uVar1;
        }
        _memcpy(param_1,pvVar6,(ulong)uVar3);
        param_1 = (void *)((long)param_1 + (ulong)uVar3);
        uVar7 = param_2[1];
      }
      uVar8 = uVar8 + 1;
      uVar5 = uVar1;
      puVar2 = puVar2 + 4;
    } while (uVar8 < uVar7);
  }
  return;
}

