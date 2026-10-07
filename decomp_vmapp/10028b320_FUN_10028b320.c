
void FUN_10028b320(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  int iVar8;
  size_t sVar9;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffff50;
  uint uVar11;
  void *local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_38;
  
  uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 0x20);
  uVar11 = (uint)((ulong)in_stack_ffffffffffffff50 >> 0x20);
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar6 = *(long *)(param_2 + 0x88);
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_38 = lVar5;
  sVar7 = FUN_100288be0(lVar6 + 0x30,&local_90);
  if (sVar7 != 0) {
    FUN_100288820(param_1,3,2,0,param_2);
    goto LAB_10028b75e;
  }
  lVar2 = param_2 + 0xc0;
  lVar1 = lVar6 + 0x18;
  uVar3 = *(undefined1 *)(lVar6 + 4);
  bVar4 = *(byte *)(lVar6 + 0x18);
  if (0x41 < bVar4) {
    if (bVar4 < 0x9e) {
      if (bVar4 < 0x57) {
        if (bVar4 == 0x42) {
          if (*(short *)(param_1 + 0x3a3a0) == 1) {
            iVar8 = FUN_10028b100(param_1,lVar1,uVar3,local_90,local_88,lVar2,CONCAT44(uVar10,0x12),
                                  param_1 + 0x3a338);
            goto LAB_10028b73a;
          }
        }
        else if (bVar4 == 0x56) goto switchD_10028b472_caseD_16;
      }
      else {
        if (bVar4 == 0x57) goto switchD_10028b472_caseD_17;
        if (bVar4 == 0x5a) {
          iVar8 = FUN_100411cf0(lVar1,uVar3,local_90,local_88,lVar2,0x12,param_1 + 0x3a338,
                                (ulong)uVar11 << 0x20);
          goto LAB_10028b73a;
        }
      }
      goto switchD_10028b472_caseD_18;
    }
    if (bVar4 == 0x9e) {
LAB_10028b543:
      iVar8 = FUN_100410570(lVar1,uVar3,local_90,local_88,lVar2,0x12,
                            *(undefined8 *)(param_1 + 0x3a2d0),
                            CONCAT44(uVar11,*(undefined4 *)(param_1 + 0x3a3b0)),
                            *(undefined4 *)(param_1 + 0x3a2dc),*(undefined2 *)(param_1 + 0x3a3a0));
    }
    else {
      if (bVar4 != 0xa0) goto switchD_10028b472_caseD_18;
      iVar8 = FUN_100410bd0(lVar1,uVar3,local_90,local_88,0,0);
    }
    goto LAB_10028b73a;
  }
  if (bVar4 < 0x16) {
    if (bVar4 < 4) {
      if (bVar4 == 0) {
        iVar8 = FUN_1004104c0(lVar1,uVar3,0,0,lVar2,0x12);
      }
      else {
        if (bVar4 != 3) goto switchD_10028b472_caseD_18;
        iVar8 = FUN_100288b90(lVar6,local_90,local_88);
      }
    }
    else if (bVar4 == 4) {
      iVar8 = FUN_100410490(lVar1,uVar3,0,0,lVar2,0x12);
    }
    else {
      if (bVar4 != 0x12) goto switchD_10028b472_caseD_18;
      if (*(char *)(lVar6 + 0x19) == '\0') {
        if (*(char *)(lVar6 + 0x1a) == '\0') {
          if (CONCAT11((char)*(undefined2 *)(lVar6 + 0x1b),
                       (char)((ushort)*(undefined2 *)(lVar6 + 0x1b) >> 8)) <= local_88) {
            local_88 = (uint)CONCAT11((char)*(undefined2 *)(lVar6 + 0x1b),
                                      (char)((ushort)*(undefined2 *)(lVar6 + 0x1b) >> 8));
          }
          local_68 = 0x2050000;
          if (3 < local_88) {
            local_68 = (ulong)CONCAT14((char)local_88 + -5,0x2050000);
          }
          local_68 = CONCAT26(0x200,(undefined6)local_68);
          uStack_60 = 0x2020202020202020;
          local_58 = *(undefined8 *)(param_1 + 0x3a374);
          uStack_50 = *(undefined8 *)(param_1 + 0x3a37c);
          local_48 = *(undefined4 *)(param_1 + 0x3a36c);
          sVar9 = 0x24;
          if (local_88 < 0x24) {
            sVar9 = (size_t)local_88;
          }
          iVar8 = (int)sVar9;
          _memcpy(local_90,&local_68,sVar9);
        }
        else {
          iVar8 = FUN_1004103f0(0x52400,lVar2,0x12,0);
        }
      }
      else {
        iVar8 = FUN_100410c80(lVar1,uVar3,local_90,local_88,lVar2,0x12,param_1 + 0x3a338);
      }
    }
    goto LAB_10028b73a;
  }
  if (bVar4 < 0x25) {
    switch(bVar4) {
    case 0x16:
switchD_10028b472_caseD_16:
      iVar8 = FUN_1004104b0(lVar1,uVar3,0,0,lVar2,0x12);
      break;
    case 0x17:
switchD_10028b472_caseD_17:
      iVar8 = FUN_1004104a0(lVar1,uVar3,0,0,lVar2,0x12);
      break;
    default:
      goto switchD_10028b472_caseD_18;
    case 0x1a:
      iVar8 = FUN_1004117f0(lVar1,uVar3,local_90,local_88,lVar2,0x12,param_1 + 0x3a338,
                            (ulong)uVar11 << 0x20);
      break;
    case 0x1b:
      goto switchD_10028b472_caseD_1b;
    case 0x1c:
      iVar8 = FUN_1004104d0(lVar1,uVar3,0,0,lVar2,0x12);
    }
LAB_10028b73a:
    if (-1 < iVar8) {
switchD_10028b472_caseD_1b:
      FUN_1002886c0(param_1,param_2);
      goto LAB_10028b75e;
    }
  }
  else if (bVar4 == 0x25) goto LAB_10028b543;
switchD_10028b472_caseD_18:
  FUN_100288630(param_1,*(undefined4 *)(param_1 + 0x90),param_2);
LAB_10028b75e:
  FUN_10008d3f0(&local_80);
  if (lVar5 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

