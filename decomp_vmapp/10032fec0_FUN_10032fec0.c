
undefined8 FUN_10032fec0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  long *plVar15;
  uint uVar16;
  ulong *puVar17;
  ulong *puVar18;
  long *plVar19;
  undefined2 *puVar20;
  undefined8 uStack_60;
  ulong local_58;
  long local_50;
  undefined2 local_42;
  long local_40;
  long local_38;
  
  puVar18 = &local_58;
  puVar11 = &local_58;
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar4;
  if ((*(char *)(DAT_1011c8478 + 0x33) != '\0') &&
     (iVar8 = *(int *)(*(long *)(param_1 + 0x10) + 0x840), *(int *)(param_1 + 0x94) != iVar8)) {
    *(int *)(param_1 + 0x94) = iVar8;
    uStack_60 = 0x10032ff18;
    FUN_10032fdc0(param_1);
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0xf0);
  *plVar2 = *plVar2 + 1;
  puVar17 = &local_58;
  uVar12 = 0xf0000002;
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0x400:
    uVar12 = 0xf0000003;
    puVar17 = &local_58;
    if ((*(short *)(param_2 + 0x16) == 0) &&
       (puVar17 = &local_58, *(short *)(param_2 + 0x14) == 0x10)) {
      uStack_60 = 0x10032ffd8;
      uVar12 = FUN_1002a6010(param_2);
      uStack_60 = 0x10032ffe3;
      FUN_1003304e0(param_1,uVar12);
      uVar12 = 0;
      puVar17 = &local_58;
    }
    break;
  case 0x401:
    local_42 = 0;
    uVar12 = 0;
    puVar17 = &local_58;
    if (*(short *)(param_2 + 0x14) == 0x70) {
      uStack_60 = 0x10033000a;
      puVar9 = (ulong *)FUN_1002a6010(param_2);
      if (((short)puVar9[3] != 0x32) && ((short)puVar9[3] != 0x35)) {
        uVar12 = 0;
        if (1 < *(uint *)((long)puVar9 + 0x14)) {
          uVar12 = 0xf000001c;
        }
        if (lVar4 == local_38) {
          return uVar12;
        }
        goto LAB_10033045b;
      }
      uStack_60 = 0x100330031;
      lVar13 = FUN_1002a6120(param_2,0,0);
      if (lVar13 == 0) {
        local_58 = 0;
        puVar20 = &local_42;
      }
      else {
        uVar16 = *(uint *)(lVar13 + 8) >> 1;
        local_58 = (ulong)uVar16;
        lVar6 = -((ulong)(uVar16 + 1) * 2 + 0xf & 0xfffffffffffffff0);
        puVar17 = (ulong *)((long)&local_58 + lVar6);
        *(undefined8 *)((long)&uStack_60 + lVar6) = 0x10033006a;
        FUN_1002a5990(lVar13,0,puVar17,(ulong)(uVar16 * 2));
        *(undefined2 *)((ulong)(uVar16 * 2) + (long)puVar17) = 0;
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)((long)&uStack_60 + lVar6) = 0x10033007a;
        uVar16 = FUN_1002adb60(uVar12);
        uVar5 = local_58;
        puVar11 = puVar17;
        puVar20 = (undefined2 *)puVar17;
        if ((0x9ffff < *(int *)((long)puVar9 + 0x14)) && ((uVar16 & 0x7fb00) == 0x2a000)) {
          *(undefined8 *)((long)&uStack_60 + lVar6) = 0x1003300a8;
          lVar13 = FUN_10038ebb0(puVar17,uVar5,0);
          if (lVar13 != 0) {
            *(undefined8 *)((long)&uStack_60 + lVar6) = 0x1003300c0;
            iVar8 = FUN_10038eb50(lVar13,"jvafng.rkr");
            uVar12 = 0xf000001c;
            if (iVar8 == 0) break;
          }
        }
      }
      uVar5 = *puVar9;
      puVar17 = puVar11;
      if (*(long **)(param_1 + 0x28) == (long *)0x0) {
LAB_100330405:
        uVar3 = *(undefined4 *)((long)puVar9 + 0x14);
        *(undefined8 *)((long)puVar11 + -8) = 0x100330410;
        lVar13 = FUN_1003312e0(param_1,uVar5,uVar3);
        uVar12 = 0xf000001c;
        if (lVar13 == 0) break;
      }
      else {
        plVar2 = *(long **)(param_1 + 0x28);
        plVar19 = (long *)(param_1 + 0x28);
        do {
          while (plVar15 = plVar2, (ulong)plVar15[4] < uVar5) {
            plVar1 = plVar15 + 1;
            plVar15 = plVar19;
            plVar2 = (long *)*plVar1;
            if ((long *)*plVar1 == (long *)0x0) goto LAB_1003303f1;
          }
          plVar2 = (long *)*plVar15;
          plVar19 = plVar15;
        } while ((long *)*plVar15 != (long *)0x0);
LAB_1003303f1:
        if (((plVar15 == (long *)(param_1 + 0x28)) || (uVar5 < (ulong)plVar15[4])) ||
           (lVar13 = plVar15[5], lVar13 == 0)) goto LAB_100330405;
      }
      uVar5 = local_58;
      *(undefined8 *)((long)puVar11 + -8) = 0x100330431;
      cVar7 = FUN_100359c40(lVar13,puVar9,puVar20,uVar5);
LAB_100330431:
      uVar12 = 0xf000001c;
      if (cVar7 != '\0') {
        uVar12 = 0;
      }
    }
    break;
  case 0x402:
    uVar12 = 0xf0000003;
    puVar17 = &local_58;
    if (*(short *)(param_2 + 0x14) == 8) {
      uStack_60 = 0x1003300ef;
      puVar10 = (undefined8 *)FUN_1002a6010(param_2);
      uStack_60 = 0x1003300fa;
      FUN_100330810(param_1,*puVar10);
      uVar12 = 0;
      puVar17 = &local_58;
    }
    break;
  case 0x403:
  case 0x404:
  case 0x40b:
  case 0x40e:
  case 0x40f:
    break;
  case 0x405:
    uVar12 = 0xf0000003;
    puVar17 = &local_58;
    if (*(short *)(param_2 + 0x14) == 0xc) {
      uStack_60 = 0x10033011e;
      puVar11 = (ulong *)FUN_1002a6010(param_2);
      uVar12 = 0;
      puVar17 = &local_58;
      if (*(long **)(param_1 + 0x28) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x28);
        plVar19 = (long *)(param_1 + 0x28);
        do {
          while (plVar15 = plVar2, (ulong)plVar15[4] < *puVar11) {
            plVar1 = plVar15 + 1;
            plVar2 = (long *)*plVar1;
            plVar15 = plVar19;
            if ((long *)*plVar1 == (long *)0x0) goto LAB_1003302f7;
          }
          plVar2 = (long *)*plVar15;
          plVar19 = plVar15;
        } while ((long *)*plVar15 != (long *)0x0);
LAB_1003302f7:
        puVar17 = &local_58;
        if ((plVar15 != (long *)(param_1 + 0x28)) &&
           (puVar17 = &local_58, (ulong)plVar15[4] <= *puVar11)) {
          uStack_60 = 0x10033030b;
          FUN_100359f40(plVar15[5],(int)puVar11[1]);
          puVar17 = &local_58;
        }
      }
    }
    break;
  case 0x406:
    puVar17 = &local_58;
    uVar12 = 0xf0000003;
    if (*(short *)(param_2 + 0x14) == 0x18) {
      uStack_60 = 0x100330180;
      puVar11 = (ulong *)FUN_1002a6010(param_2);
      uVar12 = 0;
      puVar17 = &local_58;
      if (*(long **)(param_1 + 0x28) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x28);
        plVar19 = (long *)(param_1 + 0x28);
        do {
          while (plVar15 = plVar2, (ulong)plVar15[4] < *puVar11) {
            plVar1 = plVar15 + 1;
            plVar15 = plVar19;
            plVar2 = (long *)*plVar1;
            if ((long *)*plVar1 == (long *)0x0) goto LAB_100330310;
          }
          plVar2 = (long *)*plVar15;
          plVar19 = plVar15;
        } while ((long *)*plVar15 != (long *)0x0);
LAB_100330310:
        puVar17 = &local_58;
        if (((plVar15 != (long *)(param_1 + 0x28)) &&
            (puVar17 = &local_58, (ulong)plVar15[4] <= *puVar11)) &&
           (puVar17 = &local_58, uVar12 = 0, plVar15[5] != 0)) {
          uStack_60 = 0x10033032c;
          FUN_10035a1d0(plVar15[5],puVar11);
          puVar17 = &local_58;
        }
      }
    }
    break;
  case 0x407:
  case 0x408:
  case 0x409:
  case 0x40a:
    puVar17 = &local_58;
    uVar12 = 0xf0000003;
    if (*(short *)(param_2 + 0x14) == 0x50) {
      uStack_60 = 0x10032ff67;
      lVar13 = FUN_1002a6010(param_2);
      switch(*(undefined4 *)(param_2 + 8)) {
      case 0x407:
        uVar12 = 0xf0000002;
        puVar17 = &local_58;
        if (*(char *)(param_1 + 0x90) != '\0') {
          uStack_60 = 0x10032ffa8;
          FUN_100330df0(param_1,lVar13);
          uVar12 = 0;
          puVar17 = &local_58;
        }
        break;
      case 0x408:
        if (*(char *)(param_1 + 0x90) == '\0') {
          uStack_60 = 0x10033046b;
          FUN_100331080(param_1,lVar13);
          *(undefined1 *)(param_1 + 0x90) = 1;
          uVar12 = 0;
          puVar17 = &local_58;
        }
        else {
          uStack_60 = 0x100330347;
          FUN_100330fa0(param_1,lVar13);
          uVar12 = 0;
          puVar17 = &local_58;
        }
        break;
      case 0x409:
        uVar12 = 0;
        puVar17 = &local_58;
        if (*(char *)(param_1 + 0x90) != '\0') {
          *(undefined1 *)(param_1 + 0x90) = 0;
          uStack_60 = 0x100330371;
          FUN_1002fca60(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar13 + 0x44));
          puVar17 = &local_58;
        }
        break;
      case 0x40a:
        uVar12 = 0xf0000002;
        puVar17 = &local_58;
        if (*(char *)(param_1 + 0x90) != '\0') {
          uStack_60 = 0x10033039b;
          FUN_1002fc9e0(*(undefined8 *)(param_1 + 0x10),(int)*(short *)(lVar13 + 0x14),
                        (int)*(short *)(lVar13 + 0x18));
          uVar12 = 0;
          puVar17 = &local_58;
        }
        break;
      default:
        goto switchD_10032ff49_default;
      }
    }
    break;
  case 0x40c:
    puVar17 = &local_58;
    uVar12 = 0xf0000003;
    if (*(short *)(param_2 + 0x14) == 8) {
      uStack_60 = 0x1003301e0;
      lVar13 = FUN_1002a6010(param_2);
      puVar17 = &local_58;
      uVar12 = 0xf000001c;
      if (*(char *)(DAT_1011c8478 + 0x3c) != '\0') {
        uStack_60 = 0x1003301ff;
        cVar7 = FUN_1002fcb70(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar13 + 4));
        puVar17 = &local_58;
        goto LAB_100330431;
      }
    }
    break;
  case 0x40d:
    puVar17 = &local_58;
    uVar12 = 0xf0000026;
    if (*(short *)(param_2 + 0x14) == 0x14) {
      puVar18 = &local_58;
      if (lVar4 == local_38) {
        uVar12 = FUN_100330900(param_1,param_2);
        return uVar12;
      }
      goto LAB_10033045b;
    }
    break;
  case 0x410:
    puVar17 = &local_58;
    uVar12 = 0xf0000003;
    if (*(short *)(param_2 + 0x14) == 8) {
      uStack_60 = 0x10033025b;
      lVar13 = FUN_1002a6120(param_2,0,0);
      puVar17 = &local_58;
      if (lVar13 != 0) {
        uStack_60 = 0x100330268;
        puVar14 = (undefined4 *)FUN_1002a6010(param_2);
        uStack_60 = 0x10033027b;
        FUN_1002a6180(&local_50,param_2,0,0);
        local_40 = local_50;
        uStack_60 = 0x100330293;
        cVar7 = FUN_1002fce50(*(undefined8 *)(param_1 + 0x10),*puVar14,&local_40);
        if (cVar7 == '\0') {
          if (local_50 != 0) {
            uStack_60 = 0x1003302a5;
            FUN_1002a5f70();
          }
          local_50 = 0;
        }
        goto switchD_10032ff49_default;
      }
    }
    break;
  case 0x411:
    puVar17 = &local_58;
    uVar12 = 0xf0000003;
    if (*(short *)(param_2 + 0x14) == 8) {
      uStack_60 = 0x1003302c7;
      puVar14 = (undefined4 *)FUN_1002a6010(param_2);
      uStack_60 = 0x1003302d2;
      FUN_1002fd070(*(undefined8 *)(param_1 + 0x10),*puVar14);
      goto switchD_10032ff49_default;
    }
    break;
  default:
switchD_10032ff49_default:
    puVar17 = &local_58;
    uVar12 = 0xf0000002;
  }
  puVar18 = puVar17;
  if (lVar4 == local_38) {
    return uVar12;
  }
LAB_10033045b:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)puVar18 + -8) = 0x100330460;
  ___stack_chk_fail();
}

