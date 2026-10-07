
ulong FUN_10034f3a0(long param_1,long param_2,uint param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  
  lVar1 = *(long *)(param_2 + 8);
  if ((*(ushort *)(lVar1 + 0xb0) & 0x40) == 0) {
switchD_10034f3ff_caseD_7f:
    uVar14 = param_3;
  }
  else {
    uVar14 = 0x28;
    if ((int)param_3 < 0x7d) {
      if ((int)param_3 < 0x2f) {
        if (param_3 - 0x1f < 3) goto switchD_10034f3ff_caseD_7d;
        if (param_3 - 0x28 < 3) goto switchD_10034f3ff_caseD_86;
      }
      else {
        if (param_3 - 0x2f < 2) goto switchD_10034f3ff_caseD_7e;
        if (param_3 - 0x3d < 2) goto switchD_10034f3ff_caseD_82;
      }
      goto switchD_10034f3ff_caseD_7f;
    }
    switch(param_3) {
    case 0x7d:
switchD_10034f3ff_caseD_7d:
      uVar14 = 0x1f;
      break;
    case 0x7e:
switchD_10034f3ff_caseD_7e:
      uVar14 = 0x2f;
      break;
    default:
      goto switchD_10034f3ff_caseD_7f;
    case 0x82:
switchD_10034f3ff_caseD_82:
      uVar14 = 0x3d;
      break;
    case 0x86:
      break;
    }
  }
switchD_10034f3ff_caseD_86:
  plVar11 = *(long **)(lVar1 + 0x40);
  uVar8 = 0;
  uVar12 = (uint)((ulong)(*(long *)(lVar1 + 0x48) - (long)plVar11) >> 3);
  if (uVar12 != 0) {
    do {
      if (*(uint *)(plVar11[uVar8] + 0x1c) == uVar14) break;
      uVar8 = uVar8 + 1;
    } while ((uint)uVar8 < uVar12);
  }
  if ((uint)uVar8 != uVar12) {
    return uVar8;
  }
  if ((uVar12 != 0) && (*(int *)(lVar1 + 8) != 0x76)) {
    uVar12 = *(uint *)(*plVar11 + 0x1c);
    iVar4 = FUN_10038e210(uVar12);
    iVar5 = FUN_10038e210(uVar14);
    lVar10 = param_2;
    if (iVar5 == 0) {
      if (iVar4 == 0) {
        if ((int)uVar14 < 0x66) {
          if (uVar14 < 9) {
            uVar6 = 0x10a >> (uVar14 & 0x1f);
joined_r0x00010034f4f6:
            if ((uVar6 & 1) != 0) {
              if ((int)uVar12 < 0x66) {
                if (uVar12 < 9) {
                  uVar6 = 0x10a >> (uVar12 & 0x1f);
joined_r0x00010034f522:
                  if ((uVar6 & 1) != 0) goto LAB_10034f524;
                }
              }
              else if (uVar12 - 0x66 < 0xd) {
                uVar6 = 0x1015 >> (uVar12 - 0x66 & 0x1f);
                goto joined_r0x00010034f522;
              }
              goto joined_r0x00010034f550;
            }
          }
        }
        else if (uVar14 - 0x66 < 0xd) {
          uVar6 = 0x1015 >> (uVar14 - 0x66 & 0x1f);
          goto joined_r0x00010034f4f6;
        }
LAB_10034f524:
        cVar3 = FUN_10038e230(uVar12);
        if ((cVar3 == '\0') || (cVar3 = FUN_10038e230(uVar14), cVar3 != '\0')) goto LAB_10034f76b;
      }
    }
    else if ((iVar4 != 1) || (iVar5 != 2)) goto LAB_10034f76b;
joined_r0x00010034f550:
    for (; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x10)) {
      uVar6 = FUN_10032dee0(lVar1,*(undefined4 *)(lVar10 + 4));
      uVar12 = *(uint *)(lVar1 + 0x1c);
      if (uVar12 != 0) {
        uVar15 = 0;
        do {
          if ((*(uint *)(*(long *)(lVar1 + 0x90) + (ulong)uVar6 * 4) >> (uVar15 & 0x1f) & 1) == 0) {
            bVar2 = (byte)uVar15;
            local_40 = *(uint *)(lVar1 + 0xc) >> (bVar2 & 0x1f);
            if (*(uint *)(lVar1 + 0xc) >> (bVar2 & 0x1f) == 0) {
              local_40 = 1;
            }
            local_3c = *(uint *)(lVar1 + 0x10) >> (bVar2 & 0x1f);
            if (*(uint *)(lVar1 + 0x10) >> (bVar2 & 0x1f) == 0) {
              local_3c = 1;
            }
            local_34 = *(uint *)(lVar1 + 0x14) >> (bVar2 & 0x1f);
            if (*(uint *)(lVar1 + 0x14) >> (bVar2 & 0x1f) == 0) {
              local_34 = 1;
            }
            local_48 = 0;
            local_44 = 0;
            local_38 = 0;
            FUN_10035e890(*(undefined8 *)(param_1 + 0x2778),lVar1,&local_48,uVar6,uVar15);
            uVar12 = *(uint *)(lVar1 + 0x1c);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar12);
      }
    }
    plVar11 = *(long **)(lVar1 + 0x40);
    plVar9 = *(long **)(lVar1 + 0x48);
    if (plVar9 != plVar11) {
      if ((long *)*plVar11 != (long *)0x0) {
        (**(code **)(*(long *)*plVar11 + 8))();
        plVar11 = *(long **)(lVar1 + 0x40);
        plVar9 = *(long **)(lVar1 + 0x48);
      }
      if (plVar9 != plVar11) {
        *(ulong *)(lVar1 + 0x48) =
             (~((long)plVar9 + (-8 - (long)plVar11)) & 0xfffffffffffffff8U) + (long)plVar9;
      }
    }
  }
  FUN_10035e3b0(*(undefined8 *)(param_1 + 0x2778),lVar1,uVar14);
  if (*(int *)(lVar1 + 0x24) == 1) {
    if (*(char *)(lVar1 + 0xb4) != '\0') {
      lVar10 = *(long *)(lVar1 + 0x40);
      lVar13 = *(long *)(lVar1 + 0x48);
      if ((int)((ulong)(lVar13 - lVar10) >> 3) != 0) {
        FUN_100362eb0(*(undefined8 *)(param_1 + 0x2778),lVar1,0,0);
        lVar10 = *(long *)(lVar1 + 0x40);
        lVar13 = *(long *)(lVar1 + 0x48);
      }
      FUN_100362e90(*(undefined8 *)(param_1 + 0x2778),lVar1,0,param_5,
                    (int)((ulong)(lVar13 - lVar10) >> 3) + -1);
    }
  }
  else if (param_2 != 0) {
    uVar14 = *(uint *)(lVar1 + 0x20);
    do {
      uVar7 = FUN_10032dee0(lVar1,*(undefined4 *)(param_2 + 4));
      if (uVar14 < 2) {
        uVar12 = 0;
        if (*(int *)(lVar1 + 0x1c) != 0) {
          do {
            FUN_10035e0e0(*(undefined8 *)(param_1 + 0x2778),lVar1,0,uVar7,uVar12);
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(lVar1 + 0x1c));
        }
      }
      else {
        FUN_100365b90(*(undefined8 *)(param_1 + 0x2778),lVar1,uVar7);
      }
      param_2 = *(long *)(param_2 + 0x10);
    } while (param_2 != 0);
  }
LAB_10034f76b:
  return (ulong)((int)((ulong)(*(long *)(lVar1 + 0x48) - *(long *)(lVar1 + 0x40)) >> 3) - 1);
}

