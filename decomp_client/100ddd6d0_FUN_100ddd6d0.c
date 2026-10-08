
ulong FUN_100ddd6d0(uint *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffffffffffea;
  }
  if (*param_1 <= param_3) {
    return 0xffffffffffffffea;
  }
  uVar4 = (uint)param_2;
  if (*param_1 < uVar4) {
    return 0xffffffffffffffea;
  }
  uVar1 = 0xffffffffffffffff;
  if (uVar4 == 0) {
    return 0xffffffffffffffff;
  }
  uVar9 = uVar4 & 0x7fff;
  uVar2 = param_2 >> 0xf & 0x1ffff;
  uVar5 = (uint)uVar2;
  if ((param_2 & 0x7fff) != 0) {
    lVar8 = *(long *)(param_1 + uVar2 * 2 + 2);
    if (lVar8 == 1) {
      return (ulong)(uVar4 | 0x7fff);
    }
    if (uVar5 == param_3 >> 0xf) {
LAB_100ddd80a:
      if (lVar8 == 0) {
        return 0xffffffffffffffff;
      }
      param_3 = param_3 & 0x7fff;
      goto LAB_100ddd819;
    }
    if (lVar8 != 0) {
      uVar7 = (ulong)(uVar9 >> 6);
      if ((param_2 & 0x3f) == 0) {
LAB_100ddd77c:
        uVar6 = (param_2 & 0x7fc0) >> 6;
        do {
          uVar7 = uVar6 - 1;
          uVar3 = *(ulong *)(lVar8 + uVar7 * 8);
          if ((long)uVar6 < 2) goto LAB_100ddd7af;
          uVar6 = uVar7;
        } while (uVar3 == 0);
      }
      else {
        uVar3 = 0xffffffffffffffffU >> (0x40 - ((byte)param_2 & 0x3f) & 0x3f) &
                *(ulong *)(lVar8 + uVar7 * 8);
        if (uVar9 >> 6 == 0) {
LAB_100ddd7af:
          if (uVar3 == 0) goto LAB_100ddd7d0;
        }
        else if (uVar3 == 0) goto LAB_100ddd77c;
      }
      uVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      uVar7 = uVar6 ^ 0x3f | uVar7 << 6;
      if (uVar7 != 0xffffffffffffffc0) {
        return (ulong)(uVar5 << 0xf) + (uVar7 ^ 0x3f);
      }
    }
  }
LAB_100ddd7d0:
  do {
    uVar5 = (int)uVar2 - 1;
    lVar8 = *(long *)(param_1 + (ulong)uVar5 * 2 + 2);
    if (uVar5 <= param_3 >> 0xf) {
      uVar9 = 0x8000;
      if (lVar8 == 1) {
LAB_100ddd887:
        return (ulong)((int)uVar2 * 0x8000 - 1);
      }
      goto LAB_100ddd80a;
    }
    if (lVar8 == 1) goto LAB_100ddd887;
    uVar2 = (ulong)uVar5;
  } while (lVar8 == 0);
  param_3 = 0;
  uVar9 = 0x8000;
LAB_100ddd819:
  uVar2 = (ulong)(uVar9 >> 6);
  if ((lVar8 != 0) && (param_3 < uVar9)) {
    if ((uVar9 & 0x3f) == 0) goto LAB_100ddd870;
    uVar7 = 0xffffffffffffffffU >> (0x40U - (char)(uVar9 & 0x3f) & 0x3f) &
            *(ulong *)(lVar8 + uVar2 * 8);
    if (uVar9 >> 6 != param_3 >> 6) {
      do {
        if (uVar7 != 0) goto LAB_100ddd8be;
LAB_100ddd870:
        uVar2 = uVar2 - 1;
        uVar7 = *(ulong *)(lVar8 + uVar2 * 8);
      } while ((long)(ulong)(param_3 >> 6) < (long)uVar2);
    }
    uVar1 = 0xffffffffffffffff;
    uVar7 = uVar7 & -1L << ((byte)param_3 & 0x3f);
    if (uVar7 != 0) {
LAB_100ddd8be:
      uVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      uVar2 = uVar1 ^ 0x3f | uVar2 << 6;
      uVar1 = 0xffffffffffffffff;
      if (uVar2 != 0xffffffffffffffc0) {
        uVar1 = (ulong)(uVar5 << 0xf) + (uVar2 ^ 0x3f);
      }
    }
  }
  return uVar1;
}

