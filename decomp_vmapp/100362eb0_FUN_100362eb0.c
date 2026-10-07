
void FUN_100362eb0(long param_1,long param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = (ulong)param_3;
  uVar6 = 1 << ((byte)param_4 & 0x1f);
  if ((*(uint *)(*(long *)(param_2 + 0x90) + uVar5 * 4) >> (param_4 & 0x1f) & 1) == 0) {
    uVar4 = 0;
    uVar3 = (uint)((ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40)) >> 3);
    if (uVar3 != 0) {
      do {
        if ((*(uint *)(*(long *)(*(long *)(*(long *)(param_2 + 0x40) + uVar4 * 8) + 0x88) +
                      uVar5 * 4) & uVar6) != 0) {
          uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
          FUN_10038c280(uVar2,param_2,param_3,param_4,uVar4 & 0xffffffff);
          puVar1 = (uint *)(*(long *)(param_2 + 0x90) + uVar5 * 4);
          *puVar1 = *puVar1 | uVar6;
          return;
        }
        uVar4 = uVar4 + 1;
      } while ((uint)uVar4 < uVar3);
    }
  }
  return;
}

