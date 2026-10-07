
undefined8 FUN_1000b1aa0(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x5e0) == 0) {
    return 0x80000291;
  }
  uVar3 = *(uint *)(param_1 + 0x1164);
  if (uVar3 == 0) {
    uVar3 = *(uint *)(param_1 + 0x5d8);
    *(uint *)(param_1 + 0x1164) = uVar3;
  }
  if (uVar3 < param_2) {
    return 0x80027201;
  }
  uVar3 = *(uint *)(param_1 + 0x1168);
  if (uVar3 == 0) {
    uVar3 = *(uint *)(param_1 + 0x5dc);
    *(uint *)(param_1 + 0x1168) = uVar3;
    uVar4 = 0;
    uVar5 = 0;
    if (uVar3 == 0) goto LAB_1000b1b20;
  }
  uVar4 = 0;
  uVar2 = uVar3;
  do {
    uVar4 = (uVar2 & 1) + uVar4;
    uVar2 = uVar2 >> 1;
    uVar5 = uVar3;
  } while (uVar2 != 0);
LAB_1000b1b20:
  uVar1 = 0;
  if ((uVar4 != param_2) && (uVar1 = 0x80000291, uVar4 < param_2)) {
    uVar3 = 0;
    do {
      if ((uVar5 >> (uVar3 & 0x1f) & 1) == 0) {
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 | 1 << ((byte)uVar3 & 0x1f);
      }
      uVar3 = uVar3 + 1;
    } while (uVar4 < param_2);
    uVar1 = 0x80000003;
    if ((uVar5 & 1) != 0) {
      *(uint *)(param_1 + 0x1168) = uVar5;
      FUN_1002a4820(uVar5);
      uVar1 = 0;
    }
  }
  return uVar1;
}

