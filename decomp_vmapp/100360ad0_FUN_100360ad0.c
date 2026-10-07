
undefined8 FUN_100360ad0(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  int *piVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  undefined *in_stack_ffffffffffffffb8;
  undefined4 uVar17;
  
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar16 = *(uint *)(param_2 + 8);
  uVar13 = *(uint *)(param_2 + 0xc);
  lVar15 = *(long *)(param_1 + 0x98);
  if ((*(uint *)(lVar15 + 0x38) != uVar13) || (*(long *)(lVar15 + 0x30) == 0)) {
    *(uint *)(lVar15 + 0x38) = uVar13;
    lVar9 = 0;
    if (*(long **)(param_2 + 0xbb10) != (long *)0x0) {
      plVar8 = *(long **)(param_2 + 0xbb10);
      plVar11 = (long *)(param_2 + 0xbb10);
      do {
        while (plVar14 = plVar8, *(uint *)(plVar14 + 4) < uVar13) {
          plVar1 = plVar14 + 1;
          plVar14 = plVar11;
          plVar8 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_100360b50;
        }
        plVar8 = (long *)*plVar14;
        plVar11 = plVar14;
      } while ((long *)*plVar14 != (long *)0x0);
LAB_100360b50:
      lVar9 = 0;
      if ((plVar14 != (long *)(param_2 + 0xbb10)) && (lVar9 = 0, *(uint *)(plVar14 + 4) <= uVar13))
      {
        lVar9 = plVar14[5];
      }
    }
    *(long *)(lVar15 + 0x30) = lVar9;
    puVar2 = *(ulong **)(param_1 + 0xa0);
    *puVar2 = *puVar2 | *(ulong *)(*(long *)puVar2[1] + 0x3020);
  }
  if ((*(uint *)(lVar15 + 0x48) != uVar16) || (*(long *)(lVar15 + 0x40) == 0)) {
    *(uint *)(lVar15 + 0x48) = uVar16;
    lVar9 = 0;
    if (*(long **)(param_2 + 0xbb28) != (long *)0x0) {
      plVar8 = *(long **)(param_2 + 0xbb28);
      plVar11 = (long *)(param_2 + 0xbb28);
      do {
        while (plVar14 = plVar8, *(uint *)(plVar14 + 4) < uVar16) {
          plVar1 = plVar14 + 1;
          plVar14 = plVar11;
          plVar8 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_100360bd0;
        }
        plVar8 = (long *)*plVar14;
        plVar11 = plVar14;
      } while ((long *)*plVar14 != (long *)0x0);
LAB_100360bd0:
      lVar9 = 0;
      if ((plVar14 != (long *)(param_2 + 0xbb28)) && (lVar9 = 0, *(uint *)(plVar14 + 4) <= uVar16))
      {
        lVar9 = plVar14[5];
      }
    }
    *(long *)(lVar15 + 0x40) = lVar9;
    puVar2 = *(ulong **)(param_1 + 0xa0);
    *puVar2 = *puVar2 | *(ulong *)(*(long *)puVar2[1] + 0x3040);
  }
  if ((uVar10 != *(uint *)(lVar15 + 0x28)) ||
     (plVar8 = *(long **)(lVar15 + 0x20), plVar8 == (long *)0x0)) {
    plVar8 = (long *)0x0;
    if (*(long **)(param_2 + 0xbb40) != (long *)0x0) {
      plVar8 = *(long **)(param_2 + 0xbb40);
      plVar11 = (long *)(param_2 + 0xbb40);
      do {
        while (plVar14 = plVar8, *(uint *)(plVar14 + 4) < uVar10) {
          plVar1 = plVar14 + 1;
          plVar14 = plVar11;
          plVar8 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_100360c50;
        }
        plVar8 = (long *)*plVar14;
        plVar11 = plVar14;
      } while ((long *)*plVar14 != (long *)0x0);
LAB_100360c50:
      plVar8 = (long *)0x0;
      if ((plVar14 != (long *)(param_2 + 0xbb40)) &&
         (plVar8 = (long *)0x0, *(uint *)(plVar14 + 4) <= uVar10)) {
        plVar8 = (long *)plVar14[5];
      }
    }
    *(long **)(lVar15 + 0x20) = plVar8;
    *(uint *)(lVar15 + 0x28) = uVar10;
    puVar2 = *(ulong **)(param_1 + 0xa0);
    *puVar2 = *puVar2 | *(ulong *)(*(long *)puVar2[1] + 0x3028);
    if (plVar8 == (long *)0x0) {
      return 0;
    }
  }
  if (plVar8[1] == *plVar8) {
    uVar6 = 0;
  }
  else {
    cVar3 = FUN_100360430(param_1,param_2,1,1);
    uVar17 = (undefined4)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
    if (cVar3 == '\0') {
      uVar6 = 0;
    }
    else {
      lVar15 = *(long *)(param_1 + 0x98);
      uVar10 = *(uint *)(lVar15 + 0x110) & 0xffffffef;
      if (uVar10 != 0) {
        uVar5 = 0;
        do {
          if ((uVar10 & 1) != 0) {
            lVar15 = *(long *)(param_1 + 0x98);
            lVar9 = uVar5 * 0x20;
            uVar7 = (ulong)*(uint *)(lVar15 + 0x6c + lVar9);
            uVar16 = *(uint *)(lVar15 + 0x68 + lVar9);
            if ((*(uint *)(*(long *)(*(long *)(lVar15 + 0x58 + lVar9) + 0x88) + uVar7 * 4) >>
                 (uVar16 & 0x1f) & 1) == 0) {
              in_stack_ffffffffffffffb8 = &DAT_100b3c970;
              (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                        (*(long **)(param_1 + 0x20),*(undefined8 *)(lVar15 + 0x60 + lVar9),0,uVar7,1
                         ,uVar16,&DAT_100b3c970);
            }
          }
          uVar17 = (undefined4)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
          uVar5 = (ulong)((int)uVar5 + 1);
          uVar16 = uVar10 >> 1;
          uVar10 = uVar10 >> 1;
        } while (uVar16 != 0);
        lVar15 = *(long *)(param_1 + 0x98);
      }
      lVar9 = *(long *)(lVar15 + 0xf8);
      if (lVar9 != 0) {
        if ((*(uint *)(*(long *)(lVar9 + 0x88) + (ulong)*(uint *)(lVar15 + 0x10c) * 4) >>
             (*(uint *)(lVar15 + 0x108) & 0x1f) & 1) == 0) {
          (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
                    (0,*(long **)(param_1 + 0x20),*(undefined8 *)(lVar15 + 0x100),0,
                     (ulong)*(uint *)(lVar15 + 0x10c),1,*(uint *)(lVar15 + 0x108),CONCAT44(uVar17,1)
                     ,(*(byte *)(lVar9 + 0xac) & 2) >> 1,0);
          lVar15 = *(long *)(param_1 + 0x98);
          if (*(long *)(lVar15 + 0xd8) != 0) {
            if ((*(uint *)(*(long *)(*(long *)(lVar15 + 0xd8) + 0x88) +
                          (ulong)*(uint *)(lVar15 + 0xec) * 4) >> (*(uint *)(lVar15 + 0xe8) & 0x1f)
                & 1) == 0) {
              (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                        (*(long **)(param_1 + 0x20),*(undefined8 *)(lVar15 + 0xe0),0,
                         (ulong)*(uint *)(lVar15 + 0xec),1,*(uint *)(lVar15 + 0xe8),&DAT_100b3c970);
              lVar15 = *(long *)(param_1 + 0x98);
            }
          }
        }
      }
      uVar10 = 0xf0000;
      if (((*(byte *)(param_2 + 0xbb6c) & 1) == 0) && (*(long *)(lVar15 + 0x30) != 0)) {
        uVar10 = *(int *)(*(long *)(lVar15 + 0x30) + 0xf0) << 0x10;
      }
      uVar16 = 0xffff;
      if (*(long *)(lVar15 + 0x40) != 0) {
        uVar16 = *(uint *)(*(long *)(lVar15 + 0x40) + 0xe0);
      }
      piVar12 = (int *)(param_2 + 0x8770);
      lVar9 = 0;
      uVar13 = 0;
      do {
        if (piVar12[-0x40] != 0) {
          uVar13 = uVar13 | 1 << ((byte)lVar9 & 0x1f);
        }
        if (*piVar12 != 0) {
          uVar13 = uVar13 | 1 << ((byte)lVar9 + 1 & 0x1f);
        }
        lVar9 = lVar9 + 2;
        piVar12 = piVar12 + 0x80;
      } while (lVar9 != 0x14);
      uVar4 = FUN_1003516c0(lVar15,uVar13 & (uVar16 | uVar10));
      lVar15 = *(long *)(param_1 + 0x98);
      uVar17 = *(undefined4 *)(lVar15 + 0x10);
      *(undefined4 *)(lVar15 + 0x10) = uVar4;
      *(undefined4 *)(lVar15 + 0x14) = uVar17;
      uVar5 = **(ulong **)(param_1 + 0xa0) | *(ulong *)(param_2 + 0x188);
      **(ulong **)(param_1 + 0xa0) = uVar5;
      if (uVar5 != 0) {
        FUN_10037e1f0(*(undefined8 *)(param_1 + 0xb0),param_2);
        **(undefined8 **)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_2 + 0x188) = 0;
      }
      if (**(long **)(param_1 + 0xc0) == 0) {
        uVar6 = 0;
      }
      else if (*(int *)(**(long **)(param_1 + 0xc0) + 8) == 0) {
        uVar6 = 0;
      }
      else {
        FUN_100360f40(param_1,param_2);
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}

