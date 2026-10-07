
void FUN_1002cb140(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  lVar4 = FUN_1002c8420(param_1,*(uint *)(*param_2 + 8) >> 8 & 0x7f,
                        *(uint *)(*param_2 + 8) >> 0xf & 0xf | 0x80);
  if (lVar4 == 0) {
    return;
  }
  *(undefined4 *)(lVar4 + 0xa4) = *(undefined4 *)(param_1 + 0x1488);
  uVar9 = *(uint *)(lVar4 + 0x28);
  if (uVar9 == 0) {
    *(undefined4 *)(lVar4 + 0x10) = 0;
    if ((*(int *)(lVar4 + 0xa0) != 0) && (0 < DAT_1011c568c)) {
      FUN_1008e3970("","USB",0,"[%s] trash=%d",lVar4 + 0xcf);
    }
    *(undefined4 *)(lVar4 + 0xa0) = 0;
  }
  else if (7 < uVar9) {
    uVar11 = *(int *)(lVar4 + 8) << 3;
    uVar9 = uVar9 << 3;
    goto LAB_1002cb24c;
  }
  plVar1 = (long *)(lVar4 + 0x18);
  plVar6 = (long *)*plVar1;
  uVar11 = 0;
  if (plVar6 == plVar1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      iVar10 = (int)plVar6[0x92];
      if (*(int *)((long)plVar6 + 0x464) != 0) {
        iVar10 = 0;
      }
      uVar11 = uVar11 + iVar10;
      uVar9 = ((int)plVar6[0x92] + uVar9) - *(int *)((long)plVar6 + 0x494);
      plVar6 = (long *)*plVar6;
    } while (plVar6 != plVar1);
  }
LAB_1002cb24c:
  if (((*(uint *)(lVar4 + 0x94) <= uVar9) && (uVar11 <= *(uint *)(lVar4 + 0x98) >> 1)) &&
     (1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"[%s] guest does not keep up %u/%u %u/%u",lVar4 + 0xcf,uVar9,
                  *(uint *)(lVar4 + 0x94),uVar11,*(uint *)(lVar4 + 0x98));
  }
  if (uVar11 < *(uint *)(lVar4 + 0x98)) {
    do {
      if (*(uint *)(lVar4 + 0x94) <= uVar9) {
        return;
      }
      lVar5 = FUN_1002c8f00(0);
      if (lVar5 == 0) {
        return;
      }
      if ((uVar9 == 0) && (1 < DAT_1011c568c)) {
        FUN_1008e3970("","USB",0,"[%s] Stream starts at %u ahead of %u",lVar4 + 0xcf,param_3,
                      *(ushort *)(*(long *)(param_1 + 0x40) + 0x2006) & 0x3ff);
      }
      *(ulong *)(lVar5 + 0x480) = (ulong)param_3;
      lVar2 = *param_2;
      *(uint *)(lVar5 + 0x448) = *(uint *)(lVar2 + 8) >> 8 & 0x7f;
      *(undefined4 *)(lVar5 + 0x450) = 0x69;
      *(uint *)(lVar5 + 0x44c) = *(uint *)(lVar2 + 8) >> 0xf & 0xf | 0x80;
      *(long *)(lVar5 + 0x458) = lVar4;
      *(undefined4 *)(lVar5 + 0x460) = 1;
      uVar3 = (*(uint *)(lVar2 + 8) >> 0x15) + 1 & 0x7ff;
      uVar7 = 1;
      if ((*(uint *)(lVar4 + 0x90) & 0x10) == 0) {
        uVar7 = 8;
      }
      *(uint *)(lVar5 + 0x490) = uVar7;
      *(uint *)(lVar5 + 0x43c) = uVar7 * uVar3;
      uVar8 = 0;
      do {
        *(undefined4 *)(lVar5 + 0x498 + uVar8 * 8) = 0;
        *(short *)(lVar5 + 0x49c + uVar8 * 8) = (short)uVar3;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
      if (1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] SUBMIT_IN %x %u/%u",lVar4 + 0xcf,param_3,uVar11,uVar9);
      }
      FUN_1002c8590(param_1,lVar5);
      uVar11 = uVar11 + *(int *)(lVar5 + 0x490);
      uVar9 = uVar9 + *(int *)(lVar5 + 0x490);
    } while (uVar11 < *(uint *)(lVar4 + 0x98));
  }
  return;
}

