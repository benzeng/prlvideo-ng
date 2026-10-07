
undefined1 FUN_100527c70(long param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar1 = (ulong)param_3 * 4 + 0x3ff;
    if ((uint)(uVar1 >> 10) == *(int *)(param_1 + 0x81c) + 0x3ffU >> 10) {
      puVar3 = *(uint **)(param_1 + 0x810);
    }
    else {
      _free(*(void **)(param_1 + 0x810));
      uVar9 = (uint)uVar1 & 0xfffffc00;
      *(uint *)(param_1 + 0x81c) = uVar9;
      puVar3 = _malloc((ulong)uVar9);
      *(uint **)(param_1 + 0x810) = puVar3;
      if (puVar3 == (uint *)0x0) {
        FUN_1008e3970("CHRSERVER","ChrDAStorage",0,"Failed to allocate memory (%d bytes) for zorder"
                      ,uVar9);
        *(undefined4 *)(param_1 + 0x81c) = 0;
        return 0;
      }
    }
    uVar9 = *(uint *)(param_1 + 0x818);
    *(undefined4 *)(param_1 + 0x818) = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar8 = 0;
    do {
      uVar2 = *param_2;
      uVar6 = uVar2 >> 0x10 ^ uVar2;
      for (puVar4 = *(undefined8 **)(param_1 + 8 + (ulong)((uVar6 >> 8 ^ uVar6) & 0xff) * 8);
          puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
        if (*(uint *)(puVar4 + 1) == uVar2) {
          if ((*(byte *)(puVar4 + 3) & 0x40) == 0) {
            if ((*puVar3 != uVar2) || (uVar9 <= uVar7)) {
              *puVar3 = uVar2;
              uVar7 = *(uint *)(param_1 + 0x818);
              uVar8 = 1;
            }
            puVar3 = puVar3 + 1;
            uVar7 = uVar7 + 1;
            *(uint *)(param_1 + 0x818) = uVar7;
          }
          break;
        }
      }
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 1;
    } while (uVar5 != param_3);
  }
  return uVar8;
}

