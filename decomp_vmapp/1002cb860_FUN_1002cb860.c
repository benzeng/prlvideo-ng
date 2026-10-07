
void FUN_1002cb860(long param_1,long *param_2,long param_3,long *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_994;
  undefined1 local_978 [2368];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = *(long *)(param_3 + 0x458);
  uVar2 = *(uint *)(param_3 + 0x440);
  uVar3 = *(uint *)(param_3 + 0x454);
  uVar8 = (*(uint *)(*param_4 + 8) >> 0x15) + 1 & 0x7ff;
  uVar9 = uVar3 - uVar2;
  if (uVar8 <= uVar9) {
    uVar9 = uVar8;
  }
  local_994 = 0;
  if (((*(byte *)(*param_4 + 7) & 1) != 0) && (local_994 = 4, 2 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"IOC");
    local_994 = 4;
  }
  if (*(int *)(param_3 + 0x468) == 0) {
    if ((((*(int *)(param_3 + 0x460) == 0) && (*(int *)(param_3 + 0x450) == 0x69)) &&
        (*(int *)(param_3 + 0x440) == 0)) &&
       ((*(int *)(param_3 + 0x454) != 0 && (0 < DAT_1011c568c)))) {
      FUN_1008e3970("","USB",0,"[%s] Control Response %u");
      if (0 < DAT_1011c568c) {
        uVar8 = 0x400;
        if (*(uint *)(param_3 + 0x454) < 0x400) {
          uVar8 = *(uint *)(param_3 + 0x454);
        }
        FUN_1002da020(local_978,0x940,param_3 + 0x4d8,uVar8);
        FUN_1008e3970("","USB",0,"[%s] Control Response:%s",lVar4 + 0xcf,local_978);
      }
    }
    *(uint *)(*param_4 + 4) = *(uint *)(*param_4 + 4) & 0xfffff800 | uVar9 + 0x7ff & 0x7ff;
    lVar7 = *param_4;
    uVar8 = *(uint *)(lVar7 + 8);
    bVar5 = false;
    if ((((uVar8 & 0xff) == 0x69) && (bVar5 = false, (*(byte *)(lVar7 + 7) & 0x20) != 0)) &&
       (bVar5 = false, uVar9 < ((uVar8 >> 0x15) + 1 & 0x7ff))) {
      if (2 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[UHC] SPD");
        lVar7 = *param_4;
        uVar8 = *(uint *)(lVar7 + 8);
      }
      local_994 = local_994 | 8;
      bVar5 = true;
    }
    if (((uVar9 != 0) && ((uVar8 & 0xff) == 0x69)) && (*(int *)(lVar7 + 0xc) != 0)) {
      FUN_10008c9b0(DAT_1011c3688,*(int *)(lVar7 + 0xc),
                    param_3 + 0x4d8 + (ulong)*(uint *)(param_3 + 0x440),uVar9);
    }
    uVar8 = *(int *)(param_3 + 0x440) + uVar9;
    *(uint *)(param_3 + 0x440) = uVar8;
    if ((uVar8 < *(uint *)(param_3 + 0x454)) && (uVar9 < *(uint *)(lVar4 + 0x104))) {
      uVar8 = 0x400000;
      if (*(char *)(*param_4 + 8) == 'i') {
        uVar8 = 0x100000;
      }
      puVar1 = (uint *)(*param_4 + 4);
      *puVar1 = *puVar1 | uVar8;
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[UHC:%02x.%02x] TD_ERROR: %p: %d < %d && %d < %d",
                      *(undefined4 *)(param_3 + 0x448),*(undefined4 *)(param_3 + 0x44c),param_3,
                      *(undefined4 *)(param_3 + 0x440),*(undefined4 *)(param_3 + 0x454),uVar9,
                      *(undefined4 *)(lVar4 + 0x104));
      }
      local_994 = local_994 | 0x10;
      bVar5 = true;
      bVar10 = false;
      bVar6 = true;
    }
    else {
      bVar5 = !bVar5;
      if (bVar5) {
        *(undefined4 *)(*param_2 + 4) = *(undefined4 *)*param_4;
      }
      bVar6 = !bVar5;
      bVar5 = !bVar5;
      bVar10 = false;
    }
  }
  else {
    *(uint *)(*param_4 + 4) = *(uint *)(*param_4 + 4) | 0x7ff;
    uVar8 = 0x100000;
    if (*(int *)(param_3 + 0x468) != 8) {
      uVar8 = 0x400000;
    }
    *(uint *)(*param_4 + 4) = *(uint *)(*param_4 + 4) | uVar8;
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[UHC:%02x.%02x] UHC ERROR %u/0x%x %u",
                    *(undefined4 *)(param_3 + 0x448),*(undefined4 *)(param_3 + 0x44c),
                    *(undefined4 *)(param_3 + 0x468),*(undefined4 *)(param_3 + 0x46c),uVar9);
    }
    local_994 = local_994 | 0x10;
    bVar10 = *(char *)(*param_4 + 8) == 'i';
    bVar5 = true;
    bVar6 = true;
  }
  *(uint *)(*param_4 + 4) = *(uint *)(*param_4 + 4) & 0xff7fffff;
  *(uint *)(param_1 + 0x470) = *(uint *)(param_1 + 0x470) | local_994;
  if ((bVar6) || (*(uint *)(param_3 + 0x440) < *(uint *)(param_3 + 0x454))) {
    if (bVar5) goto LAB_1002cbd91;
  }
  else if ((((uVar3 <= uVar2) || (*(char *)(*param_4 + 8) != 'i')) ||
           (uVar9 < *(uint *)(lVar4 + 0x104))) ||
          ((bVar5 || (*(uint *)(param_3 + 0x43c) <= *(uint *)(param_3 + 0x454))))) {
LAB_1002cbd91:
    FUN_1002c8620(param_1,lVar4);
    FUN_1002c8930(param_3);
    goto LAB_1002cbda1;
  }
  *(undefined8 *)(param_3 + 0x430) = 0;
  uVar2 = *(uint *)(*param_2 + 4);
  *(undefined4 *)(param_3 + 0x430) = 1;
  *(ulong *)(param_3 + 0x10) = (ulong)uVar2;
LAB_1002cbda1:
  if ((bVar10) && (*(long *)(lVar4 + 0x18) != lVar4 + 0x18)) {
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] clear queue %d",lVar4 + 0xcf,*(undefined4 *)(lVar4 + 0x28));
    }
    FUN_1002d94a0(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

