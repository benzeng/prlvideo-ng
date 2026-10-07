
uint FUN_1002d35b0(long param_1,long param_2,undefined8 *param_3,ulong param_4,uint param_5,
                  int param_6)

{
  long lVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long local_48 [2];
  undefined4 local_38;
  
  uVar13 = (ulong)param_5;
  lVar1 = param_1 + param_4 * 0x510;
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = 0;
  FUN_10008d2d0(local_48,*(undefined8 *)(param_1 + 0x1b10 + param_4 * 0x510),0x400);
  if (param_5 < 3) {
    bVar6 = 0;
  }
  else {
    bVar6 = (byte)param_5 << 7;
  }
  uVar7 = 0x800;
  if ((*(uint *)(lVar1 + 0x1624 + uVar13 * 0x28) & 0xff000000) == 0x1000000) {
    lVar9 = (long)(int)(param_5 - 1) * 0x20;
    uVar12 = *(ulong *)(local_48[0] + 0x20 + lVar9);
    uVar11 = (uint)uVar12 & 7;
    if (uVar11 != 1) {
      uVar7 = 0;
      if (uVar11 != 3) goto LAB_1002d38a6;
      *(ulong *)(local_48[0] + 0x20 + lVar9) = uVar12 & 0xfffffffffffffff8 | 1;
    }
    lVar9 = FUN_1002c8420(param_1,*(undefined1 *)(local_48[0] + 0xc),bVar6 | (byte)param_5 >> 1);
    puVar2 = (uint *)(lVar1 + 0x1624 + uVar13 * 0x28);
    if (lVar9 == 0) {
      *(undefined1 *)((long)puVar2 + 3) = 4;
LAB_1002d3808:
      param_3[1] = 0;
      *param_3 = 0;
      uVar11 = (int)(param_4 & 0xff) << 0x18 | 0x8000;
      *(uint *)((long)param_3 + 0xc) = uVar11;
      uVar7 = *puVar2;
      *(uint *)(param_3 + 1) = uVar7 & 0xff000000;
      *(uint *)((long)param_3 + 0xc) = (param_5 & 0x1f) << 0x10 | uVar11;
      *(uint *)(param_3 + 1) =
           (*(uint *)(param_2 + 8) & 0x1ffff) - *(int *)(lVar1 + 0x1630 + uVar13 * 0x28) & 0xffffff
           | uVar7 & 0xff000000;
      if ((*puVar2 >> 0x18 != 1) && (*puVar2 >> 0x18 != 0xd)) {
        FUN_1002d2ca0(param_1,param_4 & 0xff,param_5 & 0xff,2);
      }
      uVar7 = *(uint *)(param_2 + 8) >> 0x16 | 0x2c00;
    }
    else {
      plVar3 = (long *)(lVar1 + 0x1610 + uVar13 * 0x28);
      plVar14 = (long *)(lVar9 + 0x18);
      do {
        lVar4 = *(long *)(lVar1 + 0x1628 + uVar13 * 0x28);
        if (lVar4 != 0) {
          uVar12 = (ulong)*(uint *)(lVar4 + 0x434);
          if (*(uint *)(lVar4 + 0x434) < *(uint *)(lVar4 + 0x430)) {
            do {
              if (*(long *)(lVar4 + 0x10 + uVar12 * 8) == *plVar3) {
                uVar7 = 0x4800;
                if ((int)uVar12 != -1) goto LAB_1002d38a6;
                break;
              }
              uVar12 = uVar12 + 1;
            } while ((uint)uVar12 < *(uint *)(lVar4 + 0x430));
          }
        }
        plVar5 = (long *)*plVar14;
        if (plVar5 != plVar14) {
          plVar8 = plVar5;
          do {
            for (uVar12 = (ulong)*(uint *)((long)plVar8 + 0x434);
                (uint)uVar12 < *(uint *)(plVar8 + 0x86); uVar12 = uVar12 + 1) {
              if (plVar8[uVar12 + 2] == *plVar3) {
                if ((uint)uVar12 != 0xffffffff) {
                  uVar7 = 0x4800;
                  if ((*(int *)(lVar1 + 0x1634 + uVar13 * 0x28) != 0) ||
                     (*(int *)((long)plVar8 + 0x464) == 0)) goto LAB_1002d38a6;
                  plVar10 = (long *)0x0;
                  if (plVar5 != plVar14) {
                    plVar10 = plVar5;
                  }
                  if ((plVar8 != plVar10) ||
                     (uVar7 = FUN_1002d3350(param_1,param_2,plVar3,lVar9,param_6),
                     (uVar7 & 0x2000) == 0)) goto LAB_1002d38a6;
                  goto LAB_1002d3808;
                }
                break;
              }
            }
            plVar8 = (long *)*plVar8;
          } while (plVar8 != plVar14);
        }
        uVar11 = FUN_1002d3120(param_1,param_2,plVar3,lVar9,param_6);
        uVar7 = 0x4800;
      } while ((param_6 != 0x2d) && (uVar7 = uVar11, (uVar11 & 0x8000) == 0));
    }
  }
LAB_1002d38a6:
  FUN_10008d3f0(local_48);
  return uVar7;
}

