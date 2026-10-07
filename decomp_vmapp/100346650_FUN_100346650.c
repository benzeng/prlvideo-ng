
undefined8 FUN_100346650(byte *param_1,ushort *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  
  if (*(uint *)(param_2 + 2) < 0xc) {
    return 9;
  }
  uVar2 = *param_2;
  lVar9 = 0;
  if (uVar2 == 0xc) {
    lVar9 = 0;
    if (*(byte **)(param_1 + 0x12858) != (byte *)0x0) {
      pbVar4 = *(byte **)(param_1 + 0x12858);
      pbVar8 = param_1 + 0x12858;
      do {
        while (pbVar6 = pbVar4, *(uint *)(pbVar6 + 0x20) < *(uint *)(param_2 + 4)) {
          pbVar1 = pbVar6 + 8;
          pbVar6 = pbVar8;
          pbVar4 = *(byte **)pbVar1;
          if (*(byte **)pbVar1 == (byte *)0x0) goto LAB_1003466c0;
        }
        pbVar4 = *(byte **)pbVar6;
        pbVar8 = pbVar6;
      } while (*(byte **)pbVar6 != (byte *)0x0);
LAB_1003466c0:
      lVar9 = 0;
      if ((pbVar6 != param_1 + 0x12858) &&
         (lVar9 = 0, *(uint *)(pbVar6 + 0x20) <= *(uint *)(param_2 + 4))) {
        lVar9 = *(long *)(pbVar6 + 0x28);
      }
    }
  }
  uVar3 = *(uint *)(param_2 + 4);
  plVar10 = (long *)0x0;
  if (uVar3 != 0) {
    puVar7 = *(uint **)(param_1 +
                       (ulong)((uVar3 >> 0xc ^ uVar3) & 0xfff ^ uVar3 >> 0x18) * 8 + 0x2810);
    plVar10 = (long *)0x0;
    if (puVar7 != (uint *)0x0) {
      plVar10 = (long *)0x0;
      do {
        if (*puVar7 == uVar3) {
          plVar10 = *(long **)(puVar7 + 2);
          break;
        }
        puVar7 = *(uint **)(puVar7 + 4);
      } while (puVar7 != (uint *)0x0);
    }
    if ((lVar9 == 0) && (plVar10 == (long *)0x0)) {
      return 7;
    }
  }
  if (uVar2 < 0xb) {
    if (uVar2 != 10) {
      return 0;
    }
    lVar9 = 0;
    if ((plVar10 != (long *)0x0) && (lVar9 = (**(code **)(*plVar10 + 0x10))(), lVar9 == 0)) {
      return 7;
    }
    if (*(long *)(param_1 + 0x618) != lVar9) {
      *(long *)(param_1 + 0x618) = lVar9;
      *param_1 = *param_1 | 0x40;
    }
  }
  else if (uVar2 < 0xc) {
    lVar9 = 0;
    if ((plVar10 != (long *)0x0) && (lVar9 = (**(code **)(*plVar10 + 0x20))(), lVar9 == 0)) {
      return 7;
    }
    if (*(long *)(param_1 + 0x628) != lVar9) {
      *(long *)(param_1 + 0x628) = lVar9;
      param_1[1] = param_1[1] | 1;
    }
  }
  else if (uVar2 < 0x51) {
    if (uVar2 == 0xc) {
      lVar5 = 0;
      if ((plVar10 != (long *)0x0) && (lVar5 = (**(code **)(*plVar10 + 0x18))(), lVar5 == 0)) {
        return 7;
      }
      if (*(long *)(param_1 + 0x620) != lVar5) {
        *(long *)(param_1 + 0x620) = lVar5;
        *param_1 = *param_1 | 0x80;
      }
      if (*(long *)(param_1 + 0x2750) == lVar9) {
        return 0;
      }
      *(long *)(param_1 + 0x2750) = lVar9;
      param_1[1] = param_1[1] | 0x20;
      return 0;
    }
    if (uVar2 != 0x50) {
      return 0;
    }
    lVar9 = 0;
    if ((plVar10 != (long *)0x0) && (lVar9 = (**(code **)(*plVar10 + 0x28))(), lVar9 == 0)) {
      return 7;
    }
    if (*(long *)(param_1 + 0x630) != lVar9) {
      *(long *)(param_1 + 0x630) = lVar9;
      param_1[2] = param_1[2] | 2;
    }
  }
  else if (uVar2 == 0x51) {
    lVar9 = 0;
    if ((plVar10 != (long *)0x0) && (lVar9 = (**(code **)(*plVar10 + 0x30))(), lVar9 == 0)) {
      return 7;
    }
    if (*(long *)(param_1 + 0x638) != lVar9) {
      *(long *)(param_1 + 0x638) = lVar9;
      param_1[2] = param_1[2] | 4;
    }
  }
  else {
    if (uVar2 != 0x52) {
      return 0;
    }
    lVar9 = 0;
    if ((plVar10 != (long *)0x0) && (lVar9 = (**(code **)(*plVar10 + 0x38))(), lVar9 == 0)) {
      return 7;
    }
    if (*(long *)(param_1 + 0x640) != lVar9) {
      *(long *)(param_1 + 0x640) = lVar9;
      *param_1 = *param_1 | 0x40;
    }
  }
  return 0;
}

