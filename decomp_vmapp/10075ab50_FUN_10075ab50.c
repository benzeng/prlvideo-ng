
undefined8
FUN_10075ab50(uint param_1,long param_2,long param_3,void *param_4,ulong param_5,undefined8 *param_6
             ,uint param_7)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long local_88;
  long local_80;
  undefined1 local_78 [32];
  uint local_58;
  ulong local_40;
  int local_38;
  uint local_34;
  
  local_34 = 0;
  if (param_7 < 0x68) {
    return 0;
  }
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
  *(uint *)((long)param_6 + 4) = param_7 + 0x1000;
  *(undefined4 *)((long)param_6 + 0xc) = 800;
  *(undefined4 *)(param_6 + 2) = 2000;
  *(undefined4 *)((long)param_6 + 0x14) = 0x1068;
  param_7 = param_7 - 4;
  uVar20 = (ulong)param_7;
  *(undefined4 *)((long)param_6 + uVar20) = 0;
  *(int *)(param_6 + 1) = *(int *)((long)param_6 + 4) + -4;
  *(undefined4 *)((long)param_6 + 0x44) = 0xffffffff;
  *(undefined4 *)param_6 = 0x300;
  *(undefined4 *)(param_6 + 3) = 0;
  uVar18 = 0x10a0;
  if ((param_5 & 4) != 0) {
    uVar2 = *(ushort *)((long)param_4 + 0x2b0);
    if (uVar2 + 0x10a0 < param_7) {
      *(undefined4 *)((long)param_6 + 0x1c) = 0x10a0;
      uVar18 = (ulong)((uVar2 + 7 & 0x1fff8) + 0x10a0);
    }
    else {
      *(undefined4 *)((long)param_6 + 0x44) = 0xffffffff;
    }
  }
  if ((param_5 & 8) != 0) {
    uVar2 = *(ushort *)((long)param_4 + 0x2a8);
    iVar7 = (int)uVar18;
    if ((uint)uVar2 + iVar7 < param_7) {
      *(int *)(param_6 + 4) = iVar7;
      uVar18 = (ulong)((uVar2 + 7 & 0x1fff8) + iVar7);
    }
    else {
      *(undefined4 *)((long)param_6 + 0x44) = 0xffffffff;
    }
  }
  if ((param_5 & 0x10) != 0) {
    lVar9 = *(long *)((long)param_4 + 0x2c0);
    if (lVar9 + uVar18 < uVar20) {
      *(int *)((long)param_6 + 0x24) = (int)uVar18;
      uVar18 = (ulong)((int)uVar18 + ((int)lVar9 + 7U & 0xfffffff8));
    }
    else {
      *(undefined4 *)((long)param_6 + 0x44) = 0xffffffff;
    }
  }
  if (((param_5 & 0x20) != 0) &&
     (lVar9 = (**(code **)(param_3 + 0x20))
                        (param_3,*(undefined8 *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x28)),
     lVar9 != 0)) {
    iVar7 = (int)uVar18;
    if (iVar7 + 0x1fffU < param_7) {
      iVar3 = *(int *)(param_2 + 0x28);
      *(int *)(param_6 + 5) = iVar7;
      *(undefined4 *)((long)param_6 + 0x2c) = 0x1fff;
      *(int *)(param_6 + 9) = iVar3 + -100;
      uVar18 = (ulong)(iVar7 + 0x2000);
    }
    else {
      *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
    }
  }
  if ((param_5 & 0x400) != 0) {
    if (uVar18 + 0x360 < uVar20) {
      *(int *)(param_6 + 0xb) = (int)uVar18;
      *(undefined4 *)((long)param_6 + 0x5c) = 0x360;
      uVar18 = uVar18 + 0x360 & 0xffffffff;
    }
    else {
      *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
    }
  }
  if ((param_5 & 0x40) != 0) {
    FUN_10075bd80(param_2,param_3,*(undefined8 *)((long)param_4 + 0x48),&local_34,&local_38);
    if ((ulong)local_34 != 0) {
      if ((ulong)local_34 * 0x4c + uVar18 < uVar20) {
        *(int *)(param_6 + 6) = (int)uVar18;
        *(uint *)((long)param_6 + 0x34) = local_34;
        uVar18 = (ulong)((local_34 * 0x4c + 7 & 0xfffffff8) + (int)uVar18);
      }
      else {
        *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
      }
      local_38 = local_34 * 6 + local_38;
      if (local_38 != 0) {
        uVar12 = local_38 + (int)uVar18;
        if (uVar12 < param_7) {
          *(int *)(param_6 + 7) = (int)uVar18;
          *(int *)((long)param_6 + 0x3c) = local_38;
          uVar18 = (ulong)(uVar12 + 7 & 0xfffffff8);
        }
        else {
          *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
        }
      }
    }
  }
  if ((param_5 & 0x800) != 0) {
    lVar19 = (ulong)param_1 * 0x768;
    puVar1 = (undefined8 *)(param_2 + 0x90 + lVar19);
    lVar9 = (**(code **)(param_3 + 0x20))
                      (param_3,*(undefined8 *)(param_2 + 0x90 + lVar19),
                       *(undefined8 *)(param_2 + lVar19));
    if (lVar9 != 0) {
      uVar21 = *(ulong *)(param_2 + lVar19);
      if ((uVar21 < *(uint *)(param_6 + 9)) ||
         (*(uint *)(param_6 + 9) + *(int *)((long)param_6 + 0x2c) < uVar21)) {
        uVar21 = uVar21 & 0xfffffffffffff000;
        uVar17 = uVar21 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar12 = 0;
          puVar16 = &DAT_1011bf9a8;
          uVar10 = uVar21;
          do {
            uVar4 = *puVar16;
            uVar21 = uVar10;
            if ((uVar10 < uVar4) && (uVar5 = puVar16[-1], uVar5 < uVar17)) {
              uVar21 = uVar4;
              if (uVar10 < uVar5) {
                if (uVar17 <= uVar4) {
                  uVar17 = uVar5;
                  uVar21 = uVar10;
                }
              }
              else if (uVar17 <= uVar4) goto LAB_10075af85;
            }
            uVar12 = uVar12 + 1;
            puVar16 = puVar16 + 2;
            uVar10 = uVar21;
          } while (uVar12 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075af85;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar21,uVar17);
        uVar10 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar10 * 2] = uVar21;
        (&DAT_1011bf9a8)[uVar10 * 2] = uVar17;
      }
    }
LAB_10075af85:
    lVar9 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x28 + lVar19));
    if (lVar9 != 0) {
      uVar21 = *(ulong *)(param_2 + 0x28 + lVar19);
      if ((uVar21 < *(uint *)(param_6 + 9)) ||
         (*(uint *)(param_6 + 9) + *(int *)((long)param_6 + 0x2c) < uVar21)) {
        uVar21 = uVar21 & 0xfffffffffffff000;
        uVar17 = uVar21 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar12 = 0;
          puVar16 = &DAT_1011bf9a8;
          uVar10 = uVar21;
          do {
            uVar4 = *puVar16;
            uVar21 = uVar10;
            if ((uVar10 < uVar4) && (uVar5 = puVar16[-1], uVar5 < uVar17)) {
              uVar21 = uVar4;
              if (uVar10 < uVar5) {
                if (uVar17 <= uVar4) {
                  uVar21 = uVar10;
                  uVar17 = uVar5;
                }
              }
              else if (uVar17 <= uVar4) goto LAB_10075b085;
            }
            uVar12 = uVar12 + 1;
            puVar16 = puVar16 + 2;
            uVar10 = uVar21;
          } while (uVar12 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075b085;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar21,uVar17);
        uVar10 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar10 * 2] = uVar21;
        (&DAT_1011bf9a8)[uVar10 * 2] = uVar17;
      }
    }
LAB_10075b085:
    lVar9 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x30 + lVar19));
    if (lVar9 != 0) {
      uVar21 = *(ulong *)(param_2 + 0x30 + lVar19);
      if ((uVar21 < *(uint *)(param_6 + 9)) ||
         (*(uint *)(param_6 + 9) + *(int *)((long)param_6 + 0x2c) < uVar21)) {
        uVar21 = uVar21 & 0xfffffffffffff000;
        uVar17 = uVar21 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar12 = 0;
          puVar16 = &DAT_1011bf9a8;
          uVar10 = uVar21;
          do {
            uVar4 = *puVar16;
            uVar21 = uVar10;
            if ((uVar10 < uVar4) && (uVar5 = puVar16[-1], uVar5 < uVar17)) {
              uVar21 = uVar4;
              if (uVar10 < uVar5) {
                if (uVar17 <= uVar4) {
                  uVar21 = uVar10;
                  uVar17 = uVar5;
                }
              }
              else if (uVar17 <= uVar4) goto LAB_10075b185;
            }
            uVar12 = uVar12 + 1;
            puVar16 = puVar16 + 2;
            uVar10 = uVar21;
          } while (uVar12 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075b185;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar21,uVar17);
        uVar10 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar10 * 2] = uVar21;
        (&DAT_1011bf9a8)[uVar10 * 2] = uVar17;
      }
    }
LAB_10075b185:
    lVar9 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x20 + lVar19));
    if (lVar9 != 0) {
      uVar21 = *(ulong *)(param_2 + 0x20 + lVar19);
      if ((uVar21 < *(uint *)(param_6 + 9)) ||
         (*(uint *)(param_6 + 9) + *(int *)((long)param_6 + 0x2c) < uVar21)) {
        uVar21 = uVar21 & 0xfffffffffffff000;
        uVar17 = uVar21 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar12 = 0;
          puVar16 = &DAT_1011bf9a8;
          uVar10 = uVar21;
          do {
            uVar4 = *puVar16;
            uVar21 = uVar10;
            if ((uVar10 < uVar4) && (uVar5 = puVar16[-1], uVar5 < uVar17)) {
              uVar21 = uVar4;
              if (uVar10 < uVar5) {
                if (uVar17 <= uVar4) {
                  uVar21 = uVar10;
                  uVar17 = uVar5;
                }
              }
              else if (uVar17 <= uVar4) goto LAB_10075b285;
            }
            uVar12 = uVar12 + 1;
            puVar16 = puVar16 + 2;
            uVar10 = uVar21;
          } while (uVar12 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075b285;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar21,uVar17);
        uVar10 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar10 * 2] = uVar21;
        (&DAT_1011bf9a8)[uVar10 * 2] = uVar17;
      }
    }
LAB_10075b285:
    lVar9 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x38 + lVar19));
    if (lVar9 != 0) {
      uVar21 = *(ulong *)(param_2 + 0x38 + lVar19);
      if ((uVar21 < *(uint *)(param_6 + 9)) ||
         (*(uint *)(param_6 + 9) + *(int *)((long)param_6 + 0x2c) < uVar21)) {
        uVar21 = uVar21 & 0xfffffffffffff000;
        uVar17 = uVar21 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar12 = 0;
          puVar16 = &DAT_1011bf9a8;
          uVar10 = uVar21;
          do {
            uVar4 = *puVar16;
            uVar21 = uVar10;
            if ((uVar10 < uVar4) && (uVar5 = puVar16[-1], uVar5 < uVar17)) {
              uVar21 = uVar4;
              if (uVar10 < uVar5) {
                if (uVar17 <= uVar4) {
                  uVar21 = uVar10;
                  uVar17 = uVar5;
                }
              }
              else if (uVar17 <= uVar4) goto LAB_10075b385;
            }
            uVar12 = uVar12 + 1;
            puVar16 = puVar16 + 2;
            uVar10 = uVar21;
          } while (uVar12 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075b385;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar21,uVar17);
        uVar10 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar10 * 2] = uVar21;
        (&DAT_1011bf9a8)[uVar10 * 2] = uVar17;
      }
    }
LAB_10075b385:
    lVar9 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x40 + lVar19));
    if (lVar9 != 0) {
      uVar21 = *(ulong *)(param_2 + 0x40 + lVar19);
      if ((uVar21 < *(uint *)(param_6 + 9)) ||
         (*(uint *)(param_6 + 9) + *(int *)((long)param_6 + 0x2c) < uVar21)) {
        uVar21 = uVar21 & 0xfffffffffffff000;
        uVar17 = uVar21 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar12 = 0;
          puVar16 = &DAT_1011bf9a8;
          uVar10 = uVar21;
          do {
            uVar4 = *puVar16;
            uVar21 = uVar10;
            if ((uVar10 < uVar4) && (uVar5 = puVar16[-1], uVar5 < uVar17)) {
              uVar21 = uVar4;
              if (uVar10 < uVar5) {
                if (uVar17 <= uVar4) {
                  uVar21 = uVar10;
                  uVar17 = uVar5;
                }
              }
              else if (uVar17 <= uVar4) goto LAB_10075b485;
            }
            uVar12 = uVar12 + 1;
            puVar16 = puVar16 + 2;
            uVar10 = uVar21;
          } while (uVar12 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075b485;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar21,uVar17);
        uVar10 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar10 * 2] = uVar21;
        (&DAT_1011bf9a8)[uVar10 * 2] = uVar17;
      }
    }
LAB_10075b485:
    lVar9 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x10 + lVar19));
    if (lVar9 != 0) {
      uVar21 = *(ulong *)(param_2 + 0x10 + lVar19);
      if ((uVar21 < *(uint *)(param_6 + 9)) ||
         (*(uint *)(param_6 + 9) + *(int *)((long)param_6 + 0x2c) < uVar21)) {
        uVar21 = uVar21 & 0xfffffffffffff000;
        uVar17 = uVar21 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar12 = 0;
          puVar16 = &DAT_1011bf9a8;
          uVar10 = uVar21;
          do {
            uVar4 = *puVar16;
            uVar21 = uVar10;
            if ((uVar10 < uVar4) && (uVar5 = puVar16[-1], uVar5 < uVar17)) {
              uVar21 = uVar4;
              if (uVar10 < uVar5) {
                if (uVar17 <= uVar4) {
                  uVar21 = uVar10;
                  uVar17 = uVar5;
                }
              }
              else if (uVar17 <= uVar4) goto LAB_10075b585;
            }
            uVar12 = uVar12 + 1;
            puVar16 = puVar16 + 2;
            uVar10 = uVar21;
          } while (uVar12 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075b585;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar21,uVar17);
        uVar10 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar10 * 2] = uVar21;
        (&DAT_1011bf9a8)[uVar10 * 2] = uVar17;
      }
    }
LAB_10075b585:
    lVar9 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 0x18 + lVar19));
    if (lVar9 != 0) {
      uVar21 = *(ulong *)(param_2 + 0x18 + lVar19);
      if ((uVar21 < *(uint *)(param_6 + 9)) ||
         (*(uint *)(param_6 + 9) + *(int *)((long)param_6 + 0x2c) < uVar21)) {
        uVar21 = uVar21 & 0xfffffffffffff000;
        uVar17 = uVar21 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar12 = 0;
          puVar16 = &DAT_1011bf9a8;
          uVar10 = uVar21;
          do {
            uVar4 = *puVar16;
            uVar21 = uVar10;
            if ((uVar10 < uVar4) && (uVar5 = puVar16[-1], uVar5 < uVar17)) {
              uVar21 = uVar4;
              if (uVar10 < uVar5) {
                if (uVar17 <= uVar4) {
                  uVar21 = uVar10;
                  uVar17 = uVar5;
                }
              }
              else if (uVar17 <= uVar4) goto LAB_10075b67f;
            }
            uVar12 = uVar12 + 1;
            puVar16 = puVar16 + 2;
            uVar10 = uVar21;
          } while (uVar12 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075b67f;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar21,uVar17);
        uVar10 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar10 * 2] = uVar21;
        (&DAT_1011bf9a8)[uVar10 * 2] = uVar17;
      }
    }
LAB_10075b67f:
    uVar12 = 0;
    lVar9 = (**(code **)(param_3 + 0x20))(param_3,*puVar1,*(undefined8 *)(param_2 + 8 + lVar19));
    if (lVar9 != 0) {
      uVar21 = *(ulong *)(param_2 + 8 + lVar19);
      if ((uVar21 < *(uint *)(param_6 + 9)) ||
         (*(uint *)(param_6 + 9) + *(int *)((long)param_6 + 0x2c) < uVar21)) {
        uVar21 = uVar21 & 0xfffffffffffff000;
        uVar17 = uVar21 + 0x1000;
        if (DAT_1011bf990 != 0) {
          uVar13 = 0;
          puVar16 = &DAT_1011bf9a8;
          uVar10 = uVar21;
          do {
            uVar4 = *puVar16;
            uVar21 = uVar10;
            if ((uVar10 < uVar4) && (uVar5 = puVar16[-1], uVar5 < uVar17)) {
              uVar21 = uVar4;
              if (uVar10 < uVar5) {
                if (uVar17 <= uVar4) {
                  uVar21 = uVar10;
                  uVar17 = uVar5;
                }
              }
              else if (uVar17 <= uVar4) goto LAB_10075b77f;
            }
            uVar13 = uVar13 + 1;
            puVar16 = puVar16 + 2;
            uVar10 = uVar21;
          } while (uVar13 < DAT_1011bf990);
          if (0x3f < DAT_1011bf990) goto LAB_10075b77f;
        }
        FUN_1008e3970("","dbgdump",0,"Data range was added: 0x%llx-0x%llx",uVar21,uVar17);
        uVar10 = (ulong)DAT_1011bf990;
        DAT_1011bf990 = DAT_1011bf990 + 1;
        (&DAT_1011bf9a0)[uVar10 * 2] = uVar21;
        (&DAT_1011bf9a8)[uVar10 * 2] = uVar17;
      }
    }
LAB_10075b77f:
    *(undefined4 *)((long)param_6 + 100) = 0;
    if (DAT_1011bf990 != 0) {
      piVar14 = (int *)&DAT_1011bf9a8;
      uVar13 = DAT_1011bf990;
      do {
        uVar15 = (int)uVar18 + 0x10 + ((*piVar14 + 7) - piVar14[-2] & 0xfffffff8U);
        if (param_7 <= uVar15) break;
        if (uVar12 == 0) {
          *(int *)(param_6 + 0xc) = (int)uVar18;
          uVar13 = DAT_1011bf990;
        }
        uVar12 = uVar12 + 1;
        piVar14 = piVar14 + 4;
        uVar18 = (ulong)uVar15;
      } while (uVar12 < uVar13);
      *(uint *)((long)param_6 + 100) = uVar12;
    }
  }
  uVar18 = (ulong)*(uint *)((long)param_6 + 0x14);
  if (uVar18 != 0) {
    *(undefined4 *)((uVar18 - 0x1000) + (long)param_6) = 1;
    *(undefined4 *)((uVar18 - 0xffc) + (long)param_6) = 0x34;
    *(undefined4 *)((uVar18 - 0xff8) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x238);
    *(undefined4 *)((uVar18 - 0xff4) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x230);
    *(undefined4 *)((uVar18 - 0xff0) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x248);
    *(undefined4 *)((uVar18 - 0xfec) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x240);
    *(int *)((uVar18 - 0xfe8) + (long)param_6) = (int)(*(ulong *)((long)param_4 + 0x100) >> 0xc);
    *(undefined4 *)((uVar18 - 0xfe4) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x250);
    *(int *)((uVar18 - 0xfe0) + (long)param_6) = (int)(*(ulong *)((long)param_4 + 0x140) >> 0xc);
    *(undefined4 *)((uVar18 - 0xfd8) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x150);
    *(undefined4 *)((uVar18 - 0xfd4) + (long)param_6) = *(undefined4 *)((long)param_4 + 600);
    *(undefined4 *)((uVar18 - 0xfd0) + (long)param_6) = *(undefined4 *)((long)param_4 + 0x260);
  }
  local_40 = 0;
  if (*(long *)((long)param_4 + 0x218) != 0) {
    cVar8 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),
                          *(long *)((long)param_4 + 0x218) + (ulong)param_1 * 4,&local_40,4);
    if (cVar8 == '\0') {
      FUN_1008e3970("","dbgdump",0,
                    "Failed to read prcb address for vcpu%u using KiProcessorBlock=0x%llx",param_1,
                    *(undefined8 *)((long)param_4 + 0x218));
    }
    if (local_40 != 0) goto LAB_10075b9a3;
  }
  cVar8 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),
                        *(undefined8 *)(param_2 + 0x6a0 + (ulong)param_1 * 0x768),local_78,0x38);
  if (cVar8 == '\0') {
    FUN_1008e3970("","dbgdump",0,"Failed to read prcb address for vcpu%u using fs_base=0x%llx",
                  param_1,*(undefined8 *)(param_2 + 0x6a0 + (ulong)param_1 * 0x768));
  }
  else {
    local_40 = (ulong)local_58;
  }
LAB_10075b9a3:
  if ((ulong)*(uint *)((long)param_6 + 0x1c) != 0) {
    if (local_40 == 0) {
      *(undefined4 *)((long)param_6 + 0x1c) = 0;
      *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
    }
    else {
      cVar8 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),local_40,
                            ((ulong)*(uint *)((long)param_6 + 0x1c) - 0x1000) + (long)param_6,
                            *(undefined2 *)((long)param_4 + 0x2b0));
      if (cVar8 == '\0') {
        FUN_1008e3970("","dbgdump",0,"Failed to read prcb for vcpu%u using PRCB=0x%llx",param_1,
                      local_40);
      }
    }
  }
  local_80 = 0;
  if ((local_40 != 0) &&
     (cVar8 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),local_40 + 4,&local_80,4),
     cVar8 == '\0')) {
    FUN_1008e3970("","dbgdump",0,"Failed to read Current Thread for vcpu%u using PRCB=0x%llx",
                  param_1,local_40);
  }
  uVar12 = *(uint *)(param_6 + 4);
  if ((ulong)uVar12 != 0) {
    local_88 = 0;
    if (local_80 == 0) {
      *(undefined4 *)(param_6 + 4) = 0;
      *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
    }
    else {
      cVar8 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),
                            (ulong)*(ushort *)((long)param_4 + 0x2a0) + local_80,&local_88,4);
      if (cVar8 == '\0') {
        FUN_1008e3970("","dbgdump",0,
                      "Failed to read PROCESS va for vcpu%u using Thread APC PROCESS=0x%llx",param_1
                      ,(ulong)*(ushort *)((long)param_4 + 0x2a0) + local_80);
      }
      if ((local_88 != 0) &&
         (cVar8 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),local_88,
                                ((ulong)uVar12 - 0x1000) + (long)param_6,
                                *(undefined2 *)((long)param_4 + 0x2a8)), cVar8 == '\0')) {
        FUN_1008e3970("","dbgdump",0,
                      "Failed to read KPROCESS for vcpu%u using Thread APC PROCESS=0x%llx",param_1,
                      local_88);
      }
    }
  }
  if ((ulong)*(uint *)((long)param_6 + 0x24) != 0) {
    if (local_80 == 0) {
      *(undefined4 *)((long)param_6 + 0x24) = 0;
      *(byte *)((long)param_6 + 0x45) = *(byte *)((long)param_6 + 0x45) | 1;
    }
    else {
      cVar8 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),local_80,
                            ((ulong)*(uint *)((long)param_6 + 0x24) - 0x1000) + (long)param_6,
                            *(undefined4 *)((long)param_4 + 0x2c0));
      if (cVar8 == '\0') {
        FUN_1008e3970("","dbgdump",0,"Failed to read KTHREAD for vcpu%u using Thread address=0x%llx"
                      ,param_1,local_80);
      }
    }
  }
  if (((ulong)*(uint *)(param_6 + 5) != 0) &&
     (cVar8 = FUN_10078c4e0(param_3,*(undefined8 *)(param_2 + 0x90),*(undefined4 *)(param_6 + 9),
                            ((ulong)*(uint *)(param_6 + 5) - 0x1000) + (long)param_6,
                            *(undefined4 *)((long)param_6 + 0x2c)), cVar8 == '\0')) {
    FUN_1008e3970("","dbgdump",0,"Failed to read STACK for vcpu%u using Stack=0x%x",param_1,
                  *(undefined4 *)(param_6 + 9));
  }
  if ((ulong)*(uint *)(param_6 + 0xb) != 0) {
    _memcpy((void *)(((ulong)*(uint *)(param_6 + 0xb) - 0x1000) + (long)param_6),param_4,0x360);
  }
  if ((*(int *)(param_6 + 6) != 0) && (*(int *)(param_6 + 7) != 0)) {
    FUN_10075cef0(param_2,param_3,*(undefined8 *)((long)param_4 + 0x48),param_6 + -0x200);
  }
  uVar18 = (ulong)*(uint *)(param_6 + 0xc);
  uVar21 = (ulong)*(uint *)((long)param_6 + 100);
  if (uVar21 != 0) {
    lVar9 = (long)param_6 + uVar21 * 0x10 + (uVar18 - 0x1000);
    lVar19 = 0;
    do {
      lVar11 = *(long *)((long)&DAT_1011bf9a0 + lVar19);
      if (*(short *)(param_2 + 0x220) == 0x20) {
        lVar11 = (long)(int)lVar11;
      }
      *(long *)((long)param_6 + lVar19 + (uVar18 - 0x1000)) = lVar11;
      *(int *)((long)param_6 + lVar19 + (uVar18 - 0xff8)) = (int)lVar9 - ((int)param_6 + -0x1000);
      uVar6 = *(undefined8 *)((long)&DAT_1011bf9a0 + lVar19);
      *(int *)((long)param_6 + lVar19 + (uVar18 - 0xff4)) =
           *(int *)((long)&DAT_1011bf9a8 + lVar19) - (int)uVar6;
      FUN_10078c670(param_3,*(undefined8 *)(param_2 + 0x90),uVar6,lVar9);
      lVar9 = lVar9 + (ulong)(*(int *)((long)param_6 + lVar19 + (uVar18 - 0xff4)) + 7U & 0xfffffff8)
      ;
      lVar19 = lVar19 + 0x10;
      uVar12 = (int)uVar21 - 1;
      uVar21 = (ulong)uVar12;
    } while (uVar12 != 0);
  }
  *(undefined4 *)((long)param_6 + uVar20) = 0x44475254;
  return 1;
}

