
undefined8 FUN_1003ae100(undefined8 param_1,uint *param_2,ulong *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  byte bVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar8 = (uint *)*param_3;
  uVar5 = *puVar8;
  *param_2 = uVar5;
  if (puVar8 < param_4) {
    puVar10 = puVar8 + 1;
    *param_3 = (ulong)puVar10;
    if ((int)uVar5 < 0) {
      uVar6 = *puVar10;
      param_2[1] = uVar6;
      if (param_4 <= puVar10) {
        return 1;
      }
      puVar10 = puVar8 + 2;
      *param_3 = (ulong)puVar10;
    }
    else {
      uVar6 = param_2[1];
    }
    if ((int)uVar6 < 0) {
      uVar3 = 4;
    }
    else if ((uVar5 & 0xff000) == 0x4000) {
      *(byte *)(param_2 + 0xb) = (byte)param_2[0xb] | 1;
      if ((uVar5 & 3) == 2) {
        *(undefined1 *)(param_2 + 2) = 4;
        uVar5 = 4;
      }
      else {
        if ((uVar5 & 3) != 1) {
          return 0xb;
        }
        *(undefined1 *)(param_2 + 2) = 1;
        uVar5 = 1;
      }
      puVar8 = (uint *)*param_3;
      lVar7 = 0;
      do {
        param_2[lVar7 + 3] = *puVar8;
        if (param_4 <= puVar8) {
          return 1;
        }
        puVar8 = puVar8 + 1;
        *param_3 = (ulong)puVar8;
        lVar7 = lVar7 + 1;
        uVar3 = 0;
      } while ((uint)lVar7 < uVar5);
    }
    else {
      uVar6 = uVar5 >> 0x14;
      bVar9 = (byte)uVar6 & 3;
      *(byte *)(param_2 + 2) = bVar9;
      uVar3 = 6;
      if (((uVar6 & 3) != 3) && (uVar3 = 0, (uVar6 & 3) != 0)) {
        param_2 = param_2 + 6;
        uVar6 = 0;
        bVar4 = 0x16;
        do {
          uVar1 = 3 << (bVar4 & 0x1f) & uVar5;
          uVar2 = uVar1 >> (bVar4 & 0x1f);
          if ((uVar1 >> (bVar4 & 0x1f) == 0) || (uVar2 == 3)) {
            param_2[-3] = *puVar10;
            if (param_4 <= puVar10) {
              return 1;
            }
            puVar10 = puVar10 + 1;
            *param_3 = (ulong)puVar10;
          }
          if ((uVar2 & 0xfffffffe) == 2) {
            uVar1 = *puVar10;
            param_2[-1] = uVar1;
            if (param_4 <= puVar10) {
              return 1;
            }
            puVar8 = puVar10 + 1;
            *param_3 = (ulong)puVar8;
            if ((int)uVar1 < 0) {
              uVar2 = *puVar8;
              *param_2 = uVar2;
              if (param_4 <= puVar8) {
                return 1;
              }
              puVar11 = puVar10 + 2;
              *param_3 = (ulong)puVar11;
              puVar10 = puVar8;
            }
            else {
              uVar2 = *param_2;
              puVar11 = puVar8;
            }
            if ((int)uVar2 < 0) {
              return 4;
            }
            if ((uVar1 & 0xf00000) != 0x100000) {
              return 5;
            }
            if ((uVar1 & 0xff000) == 0x4000) {
              return 5;
            }
            param_2[-2] = *puVar11;
            if (param_4 <= puVar11) {
              return 1;
            }
            puVar10 = puVar10 + 2;
            *param_3 = (ulong)puVar10;
          }
          uVar6 = uVar6 + 1;
          param_2 = param_2 + 4;
          bVar4 = bVar4 + 3;
          uVar3 = 0;
        } while (uVar6 < bVar9);
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

