
undefined8
FUN_10075d300(uint param_1,long param_2,long param_3,void *param_4,ulong param_5,undefined8 *param_6
             ,uint param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long local_160;
  long local_158;
  undefined1 local_150 [32];
  long local_130;
  long local_40;
  int local_38;
  uint local_34;
  
  local_34 = 0;
  if (param_7 < 0x80) {
    return 0;
  }
  param_6[0xf] = 0;
  param_6[0xe] = 0;
  param_6[0xd] = 0;
  param_6[0xc] = 0;
  param_6[0xb] = 0;
  param_6[10] = 0;
  param_6[9] = 0;
  param_6[8] = 0;
  param_6[7] = 0;
  param_6[6] = 0;
  param_6[5] = 0;
  param_6[4] = 0;
  param_6[3] = 0;
  param_6[2] = 0;
  param_6[1] = 0;
  *param_6 = 0;
  *(uint *)((long)param_6 + 4) = param_7 + 0x2000;
  *(undefined4 *)((long)param_6 + 0xc) = 0x348;
  *(undefined4 *)(param_6 + 2) = 0xf00;
  *(undefined4 *)((long)param_6 + 0x14) = 0x2080;
  param_7 = param_7 - 4;
  uVar23 = (ulong)param_7;
  *(undefined4 *)((long)param_6 + uVar23) = 0;
  *(int *)(param_6 + 1) = *(int *)((long)param_6 + 4) + -4;
  *(undefined4 *)((long)param_6 + 0x44) = 0xffffffff;
  *(undefined4 *)param_6 = 0x300;
  *(undefined4 *)(param_6 + 3) = 0;
  uVar21 = 0x20d0;
  if (((param_5 & 4) != 0) && (uVar3 = *(ushort *)((long)param_4 + 0x2b0), uVar3 != 0)) {
    if (uVar3 + 0x20d0 < param_7) {
      *(undefined4 *)((long)param_6 + 0x1c) = 0x20d0;
      uVar21 = (ulong)((uVar3 + 7 & 0x1fff8) + 0x20d0);
    }
    else {
      *(undefined4 *)((long)param_6 + 0x44) = 0xffffffff;
    }
  }
  if ((param_5 & 8) != 0) {
    uVar3 = *(ushort *)((long)param_4 + 0x2a8);
    iVar7 = (int)uVar21;
    if ((uint)uVar3 + iVar7 < param_7) {
      *(int *)(param_6 + 4) = iVar7;
      uVar21 = (ulong)((uVar3 + 7 & 0x1fff8) + iVar7);
    }
    else {
      *(undefined4 *)((long)param_6 + 0x44) = 0xffffffff;
    }
  }
  if ((param_5 & 0x10) != 0) {
    lVar12 = *(long *)((long)param_4 + 0x2c0);
    if (lVar12 + uVar21 < uVar23) {
      *(int *)((long)param_6 + 0x24) = (int)uVar21;
      uVar21 = (ulong)((int)uVar21 + ((int)lVar12 + 7U & 0xfffffff8));
    }
    else {
      *(undefined4 *)((long)param_6 + 0x44) = 0xffffffff;
    }
  }
  if (((param_5 & 0x20) != 0) &&
     (lVar12 = (**(code **)(param_3 + 0x20))
                         (param_3,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x28),0)
     , lVar12 != 0)) {
    iVar7 = (int)uVar21;
    if (iVar7 + 0x1fffU < param_7) {
      lVar12 = *(long *)(param_2 + 0x28);
      *(int *)(param_6 + 5) = iVar7;
      *(undefined4 *)((long)param_6 + 0x2c) = 0x1fff;
      param_6[9] = lVar12 + -100;
      uVar21 = (ulong)(iVar7 + 0x2000);
    }
    else {
      *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
    }
  }
  if ((param_5 & 0x400) != 0) {
    if (uVar21 + 0x360 < uVar23) {
      *(int *)(param_6 + 0xe) = (int)uVar21;
      *(undefined4 *)((long)param_6 + 0x74) = 0x360;
      uVar21 = uVar21 + 0x360 & 0xffffffff;
    }
    else {
      *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
    }
  }
  if ((param_5 & 0x40) != 0) {
    FUN_10075bd80(param_2,param_3,*(undefined8 *)((long)param_4 + 0x48),&local_34,&local_38);
    if ((ulong)local_34 != 0) {
      if ((ulong)local_34 * 0x90 + uVar21 < uVar23) {
        *(int *)(param_6 + 6) = (int)uVar21;
        *(uint *)((long)param_6 + 0x34) = local_34;
        uVar21 = (ulong)(local_34 * 0x90 + (int)uVar21);
      }
      else {
        *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
      }
      local_38 = local_34 * 6 + local_38;
      if (local_38 != 0) {
        uVar15 = local_38 + (int)uVar21;
        if (uVar15 < param_7) {
          *(int *)(param_6 + 7) = (int)uVar21;
          *(int *)((long)param_6 + 0x3c) = local_38;
          uVar21 = (ulong)(uVar15 + 7 & 0xfffffff8);
        }
        else {
          *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
        }
      }
    }
  }
  if ((param_5 & 0x800) != 0) {
    lVar22 = (ulong)param_1 * 0x768;
    puVar1 = (undefined8 *)(param_2 + 0x90 + lVar22);
    lVar12 = (**(code **)(param_3 + 0x20))
                       (param_3,*(undefined8 *)(param_2 + 0x90 + lVar22),
                        *(undefined8 *)(param_2 + lVar22));
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar20 = uVar5;
                  uVar24 = uVar13;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075d735;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075d735;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075d735:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x28 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x28 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075d845;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075d845;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075d845:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x30 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x30 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075d955;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075d955;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075d955:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x20 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x20 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075da65;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075da65;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075da65:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x38 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x38 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075db75;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075db75;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075db75:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x40 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x40 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075dc85;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075dc85;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075dc85:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x10 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x10 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075dd95;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075dd95;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075dd95:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x18 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x18 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075dea5;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075dea5;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075dea5:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 8 + lVar22));
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 8 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075dfb5;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075dfb5;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075dfb5:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x48 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x48 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075e0c5;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075e0c5;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075e0c5:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x50 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x50 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075e1d5;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075e1d5;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075e1d5:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x58 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x58 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075e2e5;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075e2e5;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075e2e5:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x60 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x60 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075e3f5;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075e3f5;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075e3f5:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x68 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x68 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075e505;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075e505;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075e505:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x70 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x70 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075e615;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075e615;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075e615:
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x78 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x78 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar15 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075e71f;
            }
            uVar15 = uVar15 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar15 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075e71f;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075e71f:
    uVar15 = 0;
    lVar12 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x80 + lVar22))
    ;
    if (lVar12 != 0) {
      uVar24 = *(ulong *)(param_2 + 0x80 + lVar22);
      if ((uVar24 < (ulong)param_6[9]) ||
         ((ulong)*(uint *)((long)param_6 + 0x2c) + param_6[9] < uVar24)) {
        uVar24 = uVar24 & 0xfffffffffffff000;
        uVar20 = uVar24 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar16 = 0;
          puVar19 = &DAT_1011bf9a8;
          uVar13 = uVar24;
          do {
            uVar4 = *puVar19;
            uVar24 = uVar13;
            if ((uVar13 < uVar4) && (uVar5 = puVar19[-1], uVar5 < uVar20)) {
              uVar24 = uVar4;
              if (uVar13 < uVar5) {
                if (uVar20 <= uVar4) {
                  uVar24 = uVar13;
                  uVar20 = uVar5;
                }
              }
              else if (uVar20 <= uVar4) goto LAB_10075e82f;
            }
            uVar16 = uVar16 + 1;
            puVar19 = puVar19 + 2;
            uVar13 = uVar24;
          } while (uVar16 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075e82f;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar24,uVar20);
        uVar13 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar13 * 2] = uVar24;
        (&DAT_1011bf9a8)[uVar13 * 2] = uVar20;
      }
    }
LAB_10075e82f:
    *(undefined4 *)((long)param_6 + 0x7c) = 0;
    if (DAT_1011bf990 != 0) {
      piVar17 = (int *)&DAT_1011bf9a8;
      uVar16 = DAT_1011bf990;
      do {
        uVar18 = (int)uVar21 + 0x10 + ((*piVar17 + 7) - piVar17[-2] & 0xfffffff8U);
        if (param_7 <= uVar18) break;
        if (uVar15 == 0) {
          *(int *)(param_6 + 0xf) = (int)uVar21;
          uVar16 = DAT_1011bf990;
        }
        uVar15 = uVar15 + 1;
        piVar17 = piVar17 + 4;
        uVar21 = (ulong)uVar18;
      } while (uVar15 < uVar16);
      *(uint *)((long)param_6 + 0x7c) = uVar15;
    }
  }
  uVar21 = (ulong)*(uint *)((long)param_6 + 0x14);
  if (uVar21 != 0) {
    *(undefined4 *)((uVar21 - 0x1ffc) + (long)param_6) = 0x50;
    *(undefined4 *)((uVar21 - 0x2000) + (long)param_6) = 1;
    *(undefined4 *)((uVar21 - 0x1ff8) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x238);
    *(undefined4 *)((uVar21 - 0x1ff4) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x230);
    *(undefined4 *)((uVar21 - 0x1ff0) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x248);
    *(undefined4 *)((uVar21 - 0x1fec) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x240);
    *(ulong *)((uVar21 - 0x1fe8) + (long)param_6) = *(ulong *)((long)param_4 + 0x100) >> 0xc;
    *(undefined8 *)((uVar21 - 0x1fe0) + (long)param_6) = *(undefined8 *)((long)param_4 + 0x250);
    *(ulong *)((uVar21 - 0x1fd8) + (long)param_6) = *(ulong *)((long)param_4 + 0x140) >> 0xc;
    *(undefined8 *)((uVar21 - 0x1fc8) + (long)param_6) = *(undefined8 *)((long)param_4 + 0x150);
    uVar8 = *(undefined4 *)((long)param_4 + 0x25c);
    uVar9 = *(undefined4 *)((long)param_4 + 0x260);
    uVar10 = *(undefined4 *)((long)param_4 + 0x264);
    puVar2 = (undefined4 *)((uVar21 - 0x1fc0) + (long)param_6);
    *puVar2 = *(undefined4 *)((long)param_4 + 600);
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
  }
  local_40 = 0;
  if (*(long *)((long)param_4 + 0x218) != 0) {
    cVar11 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),
                           *(long *)((long)param_4 + 0x218) + (ulong)param_1 * 8,&local_40,8);
    if (cVar11 == '\0') {
      FUN_1008e3970("","dbgdump",0,
                    "Failed to read prcb address for vcpu%u using KiProcessorBlock=0x%llx",param_1,
                    *(undefined8 *)((long)param_4 + 0x218));
    }
    if (local_40 != 0) goto LAB_10075ea4d;
  }
  cVar11 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),
                         *(undefined8 *)(param_2 + 0x6d0 + (ulong)param_1 * 0x768),local_150,0x110);
  if (cVar11 == '\0') {
    FUN_1008e3970("","dbgdump",0,"Failed to read prcb address for vcpu%u using gs_base=0x%llx",
                  param_1,*(undefined8 *)(param_2 + 0x6d0 + (ulong)param_1 * 0x768));
  }
  else {
    local_40 = local_130;
  }
LAB_10075ea4d:
  if ((ulong)*(uint *)((long)param_6 + 0x1c) != 0) {
    if (local_40 == 0) {
      *(undefined4 *)((long)param_6 + 0x1c) = 0;
      *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
    }
    else {
      cVar11 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),local_40,
                             ((ulong)*(uint *)((long)param_6 + 0x1c) - 0x2000) + (long)param_6,
                             *(undefined2 *)((long)param_4 + 0x2b0));
      if (cVar11 == '\0') {
        FUN_1008e3970("","dbgdump",0,"Failed to read prcb for vcpu%u using PRCB=0x%llx",param_1,
                      local_40);
      }
    }
  }
  local_158 = 0;
  if ((local_40 != 0) &&
     (cVar11 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),local_40 + 8,&local_158,8),
     cVar11 == '\0')) {
    FUN_1008e3970("","dbgdump",0,"Failed to read Current Thread for vcpu%u using PRCB=0x%llx",
                  param_1,local_40);
  }
  uVar15 = *(uint *)(param_6 + 4);
  if ((ulong)uVar15 != 0) {
    if (local_158 == 0) {
      *(undefined4 *)(param_6 + 4) = 0;
      *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
    }
    else {
      local_160 = 0;
      cVar11 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),
                             (ulong)*(ushort *)((long)param_4 + 0x2a0) + local_158,&local_160,8);
      if (cVar11 == '\0') {
        FUN_1008e3970("","dbgdump",0,
                      "Failed to read KPROCESS va for vcpu%u using Thread APC PROCESS=0x%llx",
                      param_1,(ulong)*(ushort *)((long)param_4 + 0x2a0) + local_158);
      }
      if ((local_160 != 0) &&
         (cVar11 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),local_160,
                                 ((ulong)uVar15 - 0x2000) + (long)param_6,
                                 *(undefined2 *)((long)param_4 + 0x2a8)), cVar11 == '\0')) {
        FUN_1008e3970("","dbgdump",0,
                      "Failed to read KPROCESS for vcpu%u using Thread APC PROCESS=0x%llx",param_1,
                      local_160);
      }
    }
  }
  if ((ulong)*(uint *)((long)param_6 + 0x24) != 0) {
    if (local_158 == 0) {
      *(undefined4 *)((long)param_6 + 0x24) = 0;
      *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
    }
    else {
      cVar11 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),local_158,
                             ((ulong)*(uint *)((long)param_6 + 0x24) - 0x2000) + (long)param_6,
                             *(undefined4 *)((long)param_4 + 0x2c0));
      if (cVar11 == '\0') {
        FUN_1008e3970("","dbgdump",0,"Failed to read KTHREAD for vcpu%u using Thread address=0x%llx"
                      ,param_1,local_158);
      }
    }
  }
  if (((ulong)*(uint *)(param_6 + 5) != 0) &&
     (cVar11 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),param_6[9],
                             ((ulong)*(uint *)(param_6 + 5) - 0x2000) + (long)param_6,
                             *(undefined4 *)((long)param_6 + 0x2c)), cVar11 == '\0')) {
    FUN_1008e3970("","dbgdump",0,"Failed to read KTHREAD for vcpu%u using Stack=0x%llx",param_1,
                  param_6[9]);
  }
  if ((ulong)*(uint *)(param_6 + 0xe) != 0) {
    _memcpy((void *)(((ulong)*(uint *)(param_6 + 0xe) - 0x2000) + (long)param_6),param_4,0x360);
  }
  if ((*(int *)(param_6 + 6) != 0) && (*(int *)(param_6 + 7) != 0)) {
    FUN_10075cef0(param_2,param_3,*(undefined8 *)((long)param_4 + 0x48),param_6 + -0x400);
  }
  uVar21 = (ulong)*(uint *)(param_6 + 0xf);
  uVar24 = (ulong)*(uint *)((long)param_6 + 0x7c);
  if (uVar24 != 0) {
    lVar12 = (long)param_6 + uVar24 * 0x10 + (uVar21 - 0x2000);
    lVar22 = 0;
    do {
      lVar14 = *(long *)((long)&DAT_1011bf9a0 + lVar22);
      if (*(short *)(param_2 + 0x220) == 0x20) {
        lVar14 = (long)(int)lVar14;
      }
      *(long *)((long)param_6 + lVar22 + (uVar21 - 0x2000)) = lVar14;
      *(int *)((long)param_6 + lVar22 + (uVar21 - 0x1ff8)) = (int)lVar12 - ((int)param_6 + -0x2000);
      uVar6 = *(undefined8 *)((long)&DAT_1011bf9a0 + lVar22);
      *(int *)((long)param_6 + lVar22 + (uVar21 - 0x1ff4)) =
           *(int *)((long)&DAT_1011bf9a8 + lVar22) - (int)uVar6;
      FUN_10078c670(param_3,*(undefined8 *)(param_2 + 0x90),uVar6,lVar12);
      lVar12 = lVar12 + (ulong)(*(int *)((long)param_6 + lVar22 + (uVar21 - 0x1ff4)) + 7U &
                               0xfffffff8);
      lVar22 = lVar22 + 0x10;
      uVar15 = (int)uVar24 - 1;
      uVar24 = (ulong)uVar15;
    } while (uVar15 != 0);
  }
  *(undefined4 *)((long)param_6 + uVar23) = 0x44475254;
  return 1;
}

