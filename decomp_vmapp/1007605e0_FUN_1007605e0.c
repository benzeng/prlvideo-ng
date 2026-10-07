
ulong * FUN_1007605e0(undefined8 param_1,long param_2,undefined8 param_3,int *param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  ulong *local_60;
  ulong *local_50;
  long local_40;
  
  uVar2 = *(int *)(param_2 + 0x18) - 1;
  if (uVar2 < 3) {
    uVar1 = *(ulong *)(&DAT_100b4ae80 + (long)(int)uVar2 * 8);
    iVar6 = 0;
    local_50 = (ulong *)0x0;
    local_60 = (ulong *)0x0;
    uVar7 = 0;
    puVar4 = (ulong *)0x0;
    do {
      iVar3 = FUN_10075ffe0();
      if (iVar3 == 0) {
        puVar5 = puVar4;
        if (puVar4 == (ulong *)0x0) {
          puVar5 = _calloc(0x18,1);
          puVar4 = puVar5;
          if (local_50 != (ulong *)0x0) {
            local_50[2] = (ulong)puVar5;
            puVar4 = local_60;
          }
          *puVar5 = uVar7;
          iVar6 = iVar6 + 1;
          local_60 = puVar4;
        }
      }
      else {
        if (iVar3 < 0) {
          FUN_1008e3970("","dbgdump",0,"Fatal error during pagetable parsing");
          if (local_60 != (ulong *)0x0) {
            do {
              puVar4 = (ulong *)local_60[2];
              _free(local_60);
              local_60 = puVar4;
            } while (puVar4 != (ulong *)0x0);
            return (ulong *)0x0;
          }
          return (ulong *)0x0;
        }
        if (puVar4 == (ulong *)0x0) {
          puVar5 = (ulong *)0x0;
        }
        else {
          puVar4[1] = uVar7 - 1;
          puVar5 = (ulong *)0x0;
          local_50 = puVar4;
        }
      }
      uVar7 = uVar7 + local_40;
      puVar4 = puVar5;
    } while (uVar7 < uVar1);
    if (puVar5 != (ulong *)0x0) {
      puVar5[1] = uVar1;
    }
    *param_4 = iVar6;
  }
  else {
    local_60 = (ulong *)0x0;
    FUN_1008e3970("","dbgdump",0,"Wrong memory translatoin mode %d");
  }
  return local_60;
}

