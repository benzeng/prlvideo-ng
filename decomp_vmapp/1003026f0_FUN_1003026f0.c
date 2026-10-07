
void FUN_1003026f0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  void *pvVar16;
  byte bVar17;
  
  bVar17 = 0;
  lVar4 = *(long *)(param_1 + 0x48);
  lVar9 = 0;
  lVar8 = *(long *)(param_1 + 0x50) - lVar4;
  if (lVar8 != 0) {
    lVar9 = lVar8 * 0x80 + -1;
  }
  lVar8 = *(long *)(param_1 + 0x60);
  lVar10 = *(long *)(param_1 + 0x68);
  if (lVar9 - lVar8 == lVar10) {
    FUN_100307b60();
    lVar10 = *(long *)(param_1 + 0x68);
    lVar4 = *(long *)(param_1 + 0x48);
    lVar8 = *(long *)(param_1 + 0x60);
  }
  *(uint *)(*(long *)(lVar4 + ((ulong)(lVar8 + lVar10) >> 10) * 8) + (lVar8 + lVar10 & 0x3ffU) * 4)
       = param_2;
  *(long *)(param_1 + 0x68) = lVar10 + 1;
  if ((param_2 & 0x20) != 0) {
    uVar1 = *(uint *)(param_1 + 0x15a8);
    uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
    uVar15 = (ulong)uVar1;
    if (uVar2 < 0x20) {
      uVar7 = 0x20;
      uVar15 = (ulong)uVar1;
      do {
        uVar7 = uVar7 >> 1;
        uVar15 = (ulong)((uint)uVar15 ^ (uint)uVar15 >> (sbyte)uVar7);
      } while (uVar2 < uVar7);
    }
    for (puVar11 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (uVar15 & 0xff) * 8);
        puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 4)) {
      if (*puVar11 == uVar1) {
        lVar4 = *(long *)(puVar11 + 2);
        if (lVar4 != 0) {
          lVar8 = *(long *)(lVar4 + 0x220);
          lVar10 = 0;
          lVar9 = *(long *)(lVar4 + 0x228) - lVar8;
          if (lVar9 != 0) {
            lVar10 = lVar9 * 0x40 + -1;
          }
          lVar9 = *(long *)(lVar4 + 0x238);
          lVar5 = *(long *)(lVar4 + 0x240);
          if (lVar10 - lVar9 == lVar5) {
            FUN_1003081f0();
            lVar5 = *(long *)(lVar4 + 0x240);
            lVar8 = *(long *)(lVar4 + 0x220);
            lVar9 = *(long *)(lVar4 + 0x238);
          }
          *(undefined8 *)
           (*(long *)(lVar8 + ((ulong)(lVar9 + lVar5) >> 9) * 8) + (lVar9 + lVar5 & 0x1ffU) * 8) =
               *(undefined8 *)(lVar4 + 0x248);
          *(long *)(lVar4 + 0x240) = *(long *)(lVar4 + 0x240) + 1;
        }
        break;
      }
    }
    lVar8 = 0;
    lVar4 = *(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78);
    if (lVar4 != 0) {
      lVar8 = lVar4 * 0x200 + -1;
    }
    lVar4 = *(long *)(param_1 + 0x98);
    if (lVar8 - *(long *)(param_1 + 0x90) == lVar4) {
      FUN_100308880();
      lVar4 = *(long *)(param_1 + 0x98);
    }
    *(long *)(param_1 + 0x98) = lVar4 + 1;
  }
  if ((param_2 & 0x4000) != 0) {
    uVar1 = *(uint *)(param_1 + 0x15ac);
    uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
    uVar15 = (ulong)uVar1;
    if (uVar2 < 0x20) {
      uVar7 = 0x20;
      uVar15 = (ulong)uVar1;
      do {
        uVar7 = uVar7 >> 1;
        uVar15 = (ulong)((uint)uVar15 ^ (uint)uVar15 >> (sbyte)uVar7);
      } while (uVar2 < uVar7);
    }
    for (puVar11 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (uVar15 & 0xff) * 8);
        puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 4)) {
      if (*puVar11 == uVar1) {
        lVar4 = *(long *)(puVar11 + 2);
        if (lVar4 != 0) {
          lVar9 = *(long *)(lVar4 + 0x170);
          lVar10 = *(long *)(lVar4 + 0x178);
          lVar8 = 0;
          if (lVar10 - lVar9 != 0) {
            lVar8 = (lVar10 - lVar9) * 4 + -1;
          }
          lVar5 = *(long *)(lVar4 + 0x188);
          lVar12 = *(long *)(lVar4 + 400);
          if (lVar8 - lVar5 == lVar12) {
            FUN_100308f10();
            lVar12 = *(long *)(lVar4 + 400);
            lVar5 = *(long *)(lVar4 + 0x188);
            lVar9 = *(long *)(lVar4 + 0x170);
            lVar10 = *(long *)(lVar4 + 0x178);
          }
          puVar13 = (undefined4 *)0x0;
          if (lVar10 != lVar9) {
            puVar13 = (undefined4 *)
                      ((lVar12 + lVar5 & 0x1fU) * 0x80 +
                      *(long *)(lVar9 + ((ulong)(lVar12 + lVar5) >> 5) * 8));
          }
          puVar14 = (undefined4 *)(lVar4 + 0x198);
          for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar13 = *puVar14;
            puVar14 = puVar14 + (ulong)bVar17 * -2 + 1;
            puVar13 = puVar13 + (ulong)bVar17 * -2 + 1;
          }
          *(long *)(lVar4 + 400) = *(long *)(lVar4 + 400) + 1;
        }
        break;
      }
    }
    lVar4 = *(long *)(param_1 + 0xb0);
    lVar8 = *(long *)(param_1 + 0xb8);
    lVar9 = 0;
    if (lVar8 - lVar4 != 0) {
      lVar9 = (lVar8 - lVar4) * 0x20 + -1;
    }
    lVar10 = *(long *)(param_1 + 200);
    lVar5 = *(long *)(param_1 + 0xd0);
    if (lVar9 - lVar10 == lVar5) {
      FUN_100309590(param_1 + 0xa8);
      lVar5 = *(long *)(param_1 + 0xd0);
      lVar10 = *(long *)(param_1 + 200);
      lVar4 = *(long *)(param_1 + 0xb0);
      lVar8 = *(long *)(param_1 + 0xb8);
    }
    puVar6 = (undefined8 *)0x0;
    if (lVar8 != lVar4) {
      puVar6 = (undefined8 *)
               ((lVar5 + lVar10 & 0xffU) * 0x10 +
               *(long *)(lVar4 + ((ulong)(lVar5 + lVar10) >> 8) * 8));
    }
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    puVar6[1] = *(undefined8 *)(param_1 + 0xe0);
    *puVar6 = uVar3;
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) + 1;
  }
  if ((param_2 & 0x200) != 0) {
    lVar4 = *(long *)(param_1 + 0xf0);
    lVar8 = *(long *)(param_1 + 0xf8);
    lVar9 = 0;
    if (lVar8 - lVar4 != 0) {
      lVar9 = (lVar8 - lVar4) * 0x20 + -1;
    }
    lVar10 = *(long *)(param_1 + 0x108);
    lVar5 = *(long *)(param_1 + 0x110);
    if (lVar9 - lVar10 == lVar5) {
      FUN_100309c20(param_1 + 0xe8);
      lVar5 = *(long *)(param_1 + 0x110);
      lVar10 = *(long *)(param_1 + 0x108);
      lVar4 = *(long *)(param_1 + 0xf0);
      lVar8 = *(long *)(param_1 + 0xf8);
    }
    puVar6 = (undefined8 *)0x0;
    if (lVar8 != lVar4) {
      puVar6 = (undefined8 *)
               ((lVar5 + lVar10 & 0xffU) * 0x10 +
               *(long *)(lVar4 + ((ulong)(lVar5 + lVar10) >> 8) * 8));
    }
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    puVar6[1] = *(undefined8 *)(param_1 + 0x120);
    *puVar6 = uVar3;
    *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + 1;
  }
  if ((param_2 & 0x40000) != 0) {
    lVar8 = *(long *)(param_1 + 0x130);
    lVar9 = *(long *)(param_1 + 0x138);
    lVar4 = 0;
    if (lVar9 - lVar8 != 0) {
      lVar4 = (lVar9 - lVar8) * 2 + -1;
    }
    lVar10 = *(long *)(param_1 + 0x148);
    lVar5 = *(long *)(param_1 + 0x150);
    if (lVar4 - lVar10 == lVar5) {
      FUN_10030a2b0();
      lVar5 = *(long *)(param_1 + 0x150);
      lVar10 = *(long *)(param_1 + 0x148);
      lVar8 = *(long *)(param_1 + 0x130);
      lVar9 = *(long *)(param_1 + 0x138);
    }
    pvVar16 = (void *)0x0;
    if (lVar9 != lVar8) {
      pvVar16 = (void *)((lVar5 + lVar10 & 0xfU) * 0x2c4 +
                        *(long *)(lVar8 + ((ulong)(lVar5 + lVar10) >> 4) * 8));
    }
    _memcpy(pvVar16,(void *)(param_1 + 0x158),0x2c4);
    *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100302b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)DAT_1011c4a88[0xd1])(*DAT_1011c4a88,param_2,param_2,(code *)DAT_1011c4a88[0xd1]);
  return;
}

