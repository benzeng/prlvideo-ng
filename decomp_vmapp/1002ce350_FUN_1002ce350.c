
void FUN_1002ce350(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  uint local_50;
  
  uVar2 = *(uint *)(*param_2 + 0x24);
  lVar5 = FUN_1002c8420();
  if (lVar5 == 0) {
    return;
  }
  *(undefined4 *)(lVar5 + 0xa4) = *(undefined4 *)(param_1 + 0x1488);
  local_50 = *(uint *)(*param_2 + 0x28) & 0x7ff;
  uVar3 = *(uint *)(*param_2 + 0x2c);
  plVar1 = (long *)(lVar5 + 0x18);
  uVar10 = *(uint *)(lVar5 + 0x28);
  if (uVar10 == 0) {
    *(undefined4 *)(lVar5 + 0x10) = 0;
    if ((*(int *)(lVar5 + 0xa0) != 0) && (0 < DAT_1011c568c)) {
      FUN_1008e3970("","USB",0,"[%s] trash=%d",lVar5 + 0xcf);
    }
    *(undefined4 *)(lVar5 + 0xa0) = 0;
  }
  else if (7 < uVar10) {
    uVar9 = *(int *)(lVar5 + 8) << 3;
    uVar10 = uVar10 << 3;
    goto LAB_1002ce482;
  }
  plVar6 = (long *)*plVar1;
  uVar9 = 0;
  if (plVar6 == plVar1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      iVar4 = (int)plVar6[0x92];
      if (*(int *)((long)plVar6 + 0x464) != 0) {
        iVar4 = 0;
      }
      uVar9 = uVar9 + iVar4;
      uVar10 = ((int)plVar6[0x92] + uVar10) - *(int *)((long)plVar6 + 0x494);
      plVar6 = (long *)*plVar6;
    } while (plVar6 != plVar1);
  }
LAB_1002ce482:
  if ((*(uint *)(lVar5 + 0x94) <= uVar10) && (uVar9 <= *(uint *)(lVar5 + 0x98) >> 1)) {
    if (1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] guest does not keep up %u/%u %u/%u",lVar5 + 0xcf,uVar10,
                    *(uint *)(lVar5 + 0x94),uVar9,*(uint *)(lVar5 + 0x98));
    }
    if ((*(byte *)(lVar5 + 0x90) & 4) != 0) {
      plVar6 = (long *)*plVar1;
      while (((plVar6 != plVar1 && (*(int *)(lVar5 + 8) + 1 < *(int *)(lVar5 + 0x28))) &&
             (*(int *)((long)plVar6 + 0x464) != 0))) {
        uVar10 = uVar10 - (int)plVar6[0x92];
        iVar4 = FUN_1002d9440(lVar5);
        *(int *)(lVar5 + 0xa0) = *(int *)(lVar5 + 0xa0) - iVar4;
        FUN_1002c8620(param_1,lVar5);
        FUN_1002c8930(plVar6);
        plVar6 = *(long **)(lVar5 + 0x18);
      }
    }
  }
  if (uVar9 < *(uint *)(lVar5 + 0x98)) {
    iVar4 = (uVar3 & 3) * local_50;
    do {
      if (*(uint *)(lVar5 + 0x94) <= uVar10) {
        return;
      }
      lVar7 = FUN_1002c8f00(1);
      if (lVar7 == 0) {
        return;
      }
      if ((uVar10 == 0) && (1 < DAT_1011c568c)) {
        FUN_1008e3970("","USB",0,"[%s] EHC Stream starts at %u ahead of %u",lVar5 + 0xcf,param_3,
                      *(uint *)(*(long *)(param_1 + 0x40) + 0x102c) >> 3);
      }
      *(ulong *)(lVar7 + 0x480) = (ulong)param_3;
      *(uint *)(lVar7 + 0x448) = uVar2 & 0x7f;
      *(undefined4 *)(lVar7 + 0x450) = 0x69;
      *(uint *)(lVar7 + 0x44c) = uVar2 >> 8 & 0xf | 0x80;
      *(long *)(lVar7 + 0x458) = lVar5;
      *(undefined4 *)(lVar7 + 0x460) = 1;
      *(undefined4 *)(lVar7 + 0x490) = 8;
      *(int *)(lVar7 + 0x43c) = iVar4 * 8;
      *(undefined4 *)(lVar7 + 0x498) = 0;
      uVar8 = (undefined2)iVar4;
      *(undefined2 *)(lVar7 + 0x49c) = uVar8;
      *(undefined4 *)(lVar7 + 0x4a0) = 0;
      *(undefined2 *)(lVar7 + 0x4a4) = uVar8;
      *(undefined4 *)(lVar7 + 0x4a8) = 0;
      *(undefined2 *)(lVar7 + 0x4ac) = uVar8;
      *(undefined4 *)(lVar7 + 0x4b0) = 0;
      *(undefined2 *)(lVar7 + 0x4b4) = uVar8;
      *(undefined4 *)(lVar7 + 0x4b8) = 0;
      *(undefined2 *)(lVar7 + 0x4bc) = uVar8;
      *(undefined4 *)(lVar7 + 0x4c0) = 0;
      *(undefined2 *)(lVar7 + 0x4c4) = uVar8;
      *(undefined4 *)(lVar7 + 0x4c8) = 0;
      *(undefined2 *)(lVar7 + 0x4cc) = uVar8;
      *(undefined4 *)(lVar7 + 0x4d0) = 0;
      *(undefined2 *)(lVar7 + 0x4d4) = uVar8;
      if (1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] EHC SUBMIT_IN %x %u/%u",lVar5 + 0xcf,param_3,uVar9,uVar10);
      }
      FUN_1002c8590(param_1,lVar7);
      uVar9 = uVar9 + *(int *)(lVar7 + 0x490);
      uVar10 = uVar10 + *(int *)(lVar7 + 0x490);
    } while (uVar9 < *(uint *)(lVar5 + 0x98));
  }
  return;
}

