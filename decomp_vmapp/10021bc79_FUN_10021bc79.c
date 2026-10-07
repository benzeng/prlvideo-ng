
int * FUN_10021bc79(undefined4 *param_1,long param_2)

{
  double dVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  uint local_fc;
  ulong local_e8;
  ulong local_c8;
  ulong local_b0;
  ulong local_98;
  long local_58;
  ulong local_50;
  ulong local_20;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    return (int *)0x0;
  }
  piVar5 = (int *)FUN_1002145ad(*param_1);
  if (piVar5 == (int *)0x0) {
    return (int *)0x0;
  }
  lVar6 = FUN_10021b97a(param_1);
  if (lVar6 == 0) {
    _xmlSchemaFreeValue(piVar5);
    return (int *)0x0;
  }
  puVar7 = (ulong *)(piVar5 + 4);
  if ((*(ulong *)(lVar6 + 0x18) & 0xf) == 0) {
    *(ulong *)(lVar6 + 0x18) = *(ulong *)(lVar6 + 0x18) & 0xfffffffffffffff0 | 1;
  }
  *(double *)(param_2 + 0x20) =
       *(double *)(param_2 + 0x20) -
       (double)((short)((short)((int)*(undefined8 *)(lVar6 + 0x28) << 3) >> 4) * 0x3c);
  *(ulong *)(lVar6 + 0x28) = *(ulong *)(lVar6 + 0x28) & 0xffffffffffffe001;
  if ((*(ulong *)(lVar6 + 0x18) & 0x1f0) == 0) {
    *(ulong *)(lVar6 + 0x18) = *(ulong *)(lVar6 + 0x18) & 0xfffffffffffffe0f | 0x10;
  }
  lVar8 = (ulong)((uint)*(undefined8 *)(lVar6 + 0x18) & 0xf) + *(long *)(param_2 + 0x10);
  dVar9 = (double)_floor((double)(lVar8 + -1) / DAT_100b35ce0);
  *(ulong *)(piVar5 + 6) =
       *(ulong *)(piVar5 + 6) & 0xfffffffffffffff0 |
       (ulong)((uint)(long)(DAT_100b44c90 + (double)(lVar8 + -1) + DAT_100b35ce8 * dVar9) & 0xf);
  dVar9 = (double)_floor((double)(lVar8 + -1) / DAT_100b35ce0);
  *puVar7 = *(long *)(lVar6 + 0x10) + (long)dVar9;
  if (*puVar7 == 0) {
    if (*(long *)(lVar6 + 0x10) < 1) {
      *puVar7 = *puVar7 + 1;
    }
    else {
      *puVar7 = *puVar7 - 1;
    }
  }
  *(ulong *)(piVar5 + 10) =
       *(ulong *)(piVar5 + 10) & 0xffffffffffffe001 |
       (ulong)((ushort)((short)((int)*(undefined8 *)(lVar6 + 0x28) << 3) >> 4) & 0xfff) * 2;
  *(ulong *)(piVar5 + 10) =
       *(ulong *)(piVar5 + 10) & 0xfffffffffffffffe |
       (ulong)((uint)*(undefined8 *)(lVar6 + 0x28) & 1);
  *(double *)(piVar5 + 8) = *(double *)(param_2 + 0x20) + *(double *)(lVar6 + 0x20);
  dVar9 = (double)_floor((double)(long)*(double *)(piVar5 + 8) / DAT_100b4aed8);
  if ((*(double *)(piVar5 + 8) != 0.0) || (NAN(*(double *)(piVar5 + 8)))) {
    dVar1 = *(double *)(piVar5 + 8);
    dVar10 = (double)_floor(*(double *)(piVar5 + 8) / DAT_100b4aed8);
    *(double *)(piVar5 + 8) = DAT_100b35cf0 * dVar10 + dVar1;
  }
  lVar8 = (long)dVar9 + (ulong)((uint)(*(ulong *)(lVar6 + 0x18) >> 0xe) & 0x3f);
  dVar9 = (double)_floor((double)lVar8 / DAT_100b4aed8);
  *(ulong *)(piVar5 + 6) =
       *(ulong *)(piVar5 + 6) & 0xfffffffffff03fff |
       (ulong)((uint)(long)(DAT_100b35cf0 * dVar9 + (double)lVar8) & 0x3f) << 0xe;
  dVar9 = (double)_floor((double)lVar8 / DAT_100b4aed8);
  lVar8 = (long)dVar9 + (ulong)((uint)(*(ulong *)(lVar6 + 0x18) >> 9) & 0x1f);
  dVar9 = (double)_floor((double)lVar8 / DAT_100b35cf8);
  *(ulong *)(piVar5 + 6) =
       *(ulong *)(piVar5 + 6) & 0xffffffffffffc1ff |
       (ulong)((uint)(long)(DAT_100b35d00 * dVar9 + (double)lVar8) & 0x1f) << 9;
  dVar9 = (double)_floor((double)lVar8 / DAT_100b35cf8);
  if (((*puVar7 != 0) && ((*(ulong *)(piVar5 + 6) & 0xf) != 0)) &&
     (((uint)*(undefined8 *)(piVar5 + 6) & 0xf) < 0xd)) {
    if ((((*puVar7 & 3) == 0) &&
        (uVar3 = *puVar7,
        uVar3 + (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + uVar3) >> 6
                 ) - ((long)uVar3 >> 0x3f)) * -100 != 0)) ||
       (uVar3 = *puVar7,
       uVar3 + (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + uVar3) >> 8)
               - ((long)uVar3 >> 0x3f)) * -400 == 0)) {
      local_fc = *(uint *)(&DAT_100b35ae0 +
                          (long)(int)(((uint)*(undefined8 *)(piVar5 + 6) & 0xf) - 1) * 4);
    }
    else {
      local_fc = *(uint *)(&DAT_100b35aa0 +
                          (long)(int)(((uint)*(undefined8 *)(piVar5 + 6) & 0xf) - 1) * 4);
    }
    if (local_fc < ((uint)(*(ulong *)(lVar6 + 0x18) >> 4) & 0x1f)) {
      if ((((*puVar7 & 3) == 0) &&
          (uVar3 = *puVar7,
          uVar3 + (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + uVar3) >>
                   6) - ((long)uVar3 >> 0x3f)) * -100 != 0)) ||
         (uVar3 = *puVar7,
         uVar3 + (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + uVar3) >>
                  8) - ((long)uVar3 >> 0x3f)) * -400 == 0)) {
        uVar2 = *(uint *)(&DAT_100b35ae0 +
                         (long)(int)(((uint)*(undefined8 *)(piVar5 + 6) & 0xf) - 1) * 4);
      }
      else {
        uVar2 = *(uint *)(&DAT_100b35aa0 +
                         (long)(int)(((uint)*(undefined8 *)(piVar5 + 6) & 0xf) - 1) * 4);
      }
      local_e8 = (ulong)uVar2;
      local_50 = local_e8;
      goto LAB_10021c4be;
    }
  }
  if ((*(ulong *)(lVar6 + 0x18) >> 4 & 0x1f) == 0) {
    local_50 = 1;
  }
  else {
    local_50 = (ulong)((uint)(*(ulong *)(lVar6 + 0x18) >> 4) & 0x1f);
  }
LAB_10021c4be:
  local_50 = local_50 + *(long *)(param_2 + 0x18) + (long)dVar9;
  do {
    if ((long)local_50 < 1) {
      uVar4 = *(undefined8 *)(piVar5 + 6);
      dVar9 = (double)_floor((double)(int)(((uint)*(undefined8 *)(piVar5 + 6) & 0xf) - 2) /
                             DAT_100b35ce0);
      lVar8 = (long)(DAT_100b44c90 + (double)(int)(((uint)uVar4 & 0xf) - 2) + DAT_100b35ce8 * dVar9)
      ;
      local_20 = *puVar7;
      dVar9 = (double)_floor((double)(int)(((uint)*(undefined8 *)(piVar5 + 6) & 0xf) - 2) /
                             DAT_100b35ce0);
      local_20 = local_20 + (long)dVar9;
      if (local_20 == 0) {
        local_20 = 0xffffffffffffffff;
      }
      if ((((local_20 & 3) == 0) &&
          (local_20 +
           (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)local_20),8) + local_20) >>
            6) - ((long)local_20 >> 0x3f)) * -100 != 0)) ||
         (local_20 +
          (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)local_20),8) + local_20) >> 8
           ) - ((long)local_20 >> 0x3f)) * -400 == 0)) {
        uVar2 = *(uint *)(&DAT_100b35ae0 + (lVar8 + -1) * 4);
      }
      else {
        uVar2 = *(uint *)(&DAT_100b35aa0 + (lVar8 + -1) * 4);
      }
      local_c8 = (ulong)uVar2;
      local_58 = -1;
    }
    else {
      if ((((*puVar7 & 3) == 0) &&
          (uVar3 = *puVar7,
          uVar3 + (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + uVar3) >>
                   6) - ((long)uVar3 >> 0x3f)) * -100 != 0)) ||
         (uVar3 = *puVar7,
         uVar3 + (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + uVar3) >>
                  8) - ((long)uVar3 >> 0x3f)) * -400 == 0)) {
        uVar2 = *(uint *)(&DAT_100b35ae0 +
                         (long)(int)(((uint)*(undefined8 *)(piVar5 + 6) & 0xf) - 1) * 4);
      }
      else {
        uVar2 = *(uint *)(&DAT_100b35aa0 +
                         (long)(int)(((uint)*(undefined8 *)(piVar5 + 6) & 0xf) - 1) * 4);
      }
      local_b0 = (ulong)uVar2;
      if ((long)local_50 <= (long)local_b0) {
        *(ulong *)(piVar5 + 6) =
             *(ulong *)(piVar5 + 6) & 0xfffffffffffffe0f | (ulong)((uint)local_50 & 0x1f) << 4;
        if (*piVar5 != 0xb) {
          if ((((*(ulong *)(piVar5 + 6) & 0x3e00) != 0) || ((*(ulong *)(piVar5 + 6) & 0xfc000) != 0)
              ) || ((*(double *)(piVar5 + 8) != 0.0 || (NAN(*(double *)(piVar5 + 8)))))) {
            *piVar5 = 0xb;
          }
          else if (*piVar5 != 10) {
            if ((((uint)*(undefined8 *)(piVar5 + 6) & 0xf) == 1) ||
               (((uint)*(undefined8 *)(piVar5 + 6) & 0x1f0) == 0x10)) {
              if ((*piVar5 != 9) && (((uint)*(undefined8 *)(piVar5 + 6) & 0xf) != 1)) {
                *piVar5 = 9;
              }
            }
            else {
              *piVar5 = 10;
            }
          }
        }
        _xmlSchemaFreeValue(lVar6);
        return piVar5;
      }
      if ((((*puVar7 & 3) == 0) &&
          (uVar3 = *puVar7,
          uVar3 + (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + uVar3) >>
                   6) - ((long)uVar3 >> 0x3f)) * -100 != 0)) ||
         (uVar3 = *puVar7,
         uVar3 + (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + uVar3) >>
                  8) - ((long)uVar3 >> 0x3f)) * -400 == 0)) {
        uVar2 = *(uint *)(&DAT_100b35ae0 +
                         (long)(int)(((uint)*(undefined8 *)(piVar5 + 6) & 0xf) - 1) * 4);
      }
      else {
        uVar2 = *(uint *)(&DAT_100b35aa0 +
                         (long)(int)(((uint)*(undefined8 *)(piVar5 + 6) & 0xf) - 1) * 4);
      }
      local_98 = (ulong)uVar2;
      local_c8 = -local_98;
      local_58 = 1;
    }
    local_50 = local_50 + local_c8;
    local_58 = (ulong)((uint)*(undefined8 *)(piVar5 + 6) & 0xf) + local_58;
    dVar9 = (double)_floor((double)(local_58 + -1) / DAT_100b35ce0);
    *(ulong *)(piVar5 + 6) =
         *(ulong *)(piVar5 + 6) & 0xfffffffffffffff0 |
         (ulong)((uint)(long)(DAT_100b44c90 + (double)(local_58 + -1) + DAT_100b35ce8 * dVar9) & 0xf
                );
    uVar3 = *puVar7;
    dVar9 = (double)_floor((double)(local_58 + -1) / DAT_100b35ce0);
    *puVar7 = uVar3 + ((long)dVar9 & 0xffffffffU);
    if (*puVar7 == 0) {
      if (local_58 < 1) {
        *puVar7 = *puVar7 - 1;
      }
      else {
        *puVar7 = *puVar7 + 1;
      }
    }
  } while( true );
}

