
void FUN_100292d90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_80;
  uint local_7c;
  undefined **local_78;
  long local_70;
  uint local_68;
  undefined1 local_58 [2];
  char local_56;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(param_2 + 0x60);
  uVar12 = **(uint **)(param_2 + 0x48) >> 0x10;
  uVar8 = (uint)(uVar12 == 0) * 2;
  uVar11 = **(uint **)(param_2 + 0x48) >> 6 & 1;
  uVar13 = uVar8 + uVar11 ^ 1;
  bVar9 = *(byte *)(lVar2 + 0x40);
  if (bVar9 < 0xa3) {
    uVar7 = (uint)bVar9;
    if (uVar7 < 0x2a) {
      if (uVar7 != 4) goto LAB_100292e32;
    }
    else if ((0x33 < uVar7 - 0x2a) ||
            ((0x80c0000000011U >> ((ulong)(uVar7 - 0x2a) & 0x3f) & 1) == 0)) goto LAB_100292e32;
  }
  else {
    uVar7 = bVar9 - 0xa3;
    if ((0x1c < uVar7) || ((0x10080081U >> (uVar7 & 0x1f) & 1) == 0)) goto LAB_100292e32;
  }
  uVar13 = uVar8;
LAB_100292e32:
  lVar1 = param_1 + 0x1068;
  if (*(char *)(param_1 + 0x1088) != '\0') {
    FUN_10026cc10(lVar1);
  }
  local_70 = lVar2 + 0x80;
  local_78 = &PTR_FUN_101115f40;
  local_68 = uVar12;
  FUN_100284cb0(*(undefined8 *)(param_1 + 0x11c8),&local_78,&local_7c);
  pcVar10 = (char *)(lVar2 + 0x40);
  if (((*(long *)(*(long *)(param_1 + 0x11c8) + 0x10) == 0) && (local_7c != 0)) &&
     (*pcVar10 != '\0')) {
    *(undefined1 *)(param_2 + 0x39) = 0x50;
    *(undefined1 *)(param_2 + 0x38) = 0x51;
  }
  else {
    if ((uVar13 & 1) == 0) {
      FUN_100284bc0();
    }
    FUN_10026ce00(lVar1,*pcVar10);
    plVar3 = *(long **)(param_1 + 0x1090);
    if (plVar3 == (long *)0x0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x11c8) + 0x10);
      iVar6 = FUN_1003e33e0(param_1 + 0x1098,pcVar10,0xc,uVar4,local_7c,uVar4,local_7c,local_58,0x12
                            ,uVar13,&local_80);
      *(undefined4 *)(param_1 + 0x11b8) = 1;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x11c8) + 0x10);
      iVar6 = (**(code **)(*plVar3 + 0x20))
                        (plVar3,pcVar10,0xc,uVar4,local_7c,uVar4,local_7c,local_58,0x12,uVar13,
                         &local_80);
    }
    if (iVar6 == 0) {
      if (*pcVar10 == '\x1b') {
        FUN_10026cf00(lVar1,pcVar10);
      }
      uVar8 = local_7c;
      if (uVar11 == 0) {
        uVar8 = local_80;
      }
      if (local_80 == 0) {
        *(undefined1 *)(param_2 + 0x39) = 0;
        *(undefined1 *)(param_2 + 0x38) = 0x50;
      }
      else {
        bVar9 = *(byte *)(param_2 + 0x3c);
        uVar11 = (uint)bVar9;
        if ((bVar9 < uVar8) && ((bVar9 & 1) != 0)) {
          uVar11 = (uint)(byte)(bVar9 - 1);
          *(byte *)(param_2 + 0x3c) = bVar9 - 1;
        }
        uVar12 = uVar8;
        if (uVar8 == 0) {
          uVar12 = uVar11;
        }
        *(undefined1 *)(param_2 + 0x38) = 0x50;
        bVar9 = (byte)local_80;
        if ((char)uVar11 == '\0') {
          *(byte *)(param_2 + 0x3c) = bVar9;
          uVar11 = local_80 & 0xff;
        }
        bVar5 = (byte)uVar11;
        if (local_80 < uVar11) {
          *(byte *)(param_2 + 0x3c) = bVar9;
          bVar5 = bVar9;
        }
        if (uVar12 < bVar5) {
          *(char *)(param_2 + 0x3c) = (char)uVar12;
        }
        *(undefined1 *)(param_2 + 0x39) = 0;
      }
      if ((uVar13 & 1) != 0) {
        FUN_100284b10(*(undefined8 *)(param_1 + 0x11c8));
      }
    }
    else {
      *(char *)(param_2 + 0x39) = local_56 << 4;
      *(undefined1 *)(param_2 + 0x38) = 0x51;
      uVar8 = 0;
    }
    FUN_100284d60(*(undefined8 *)(param_1 + 0x11c8));
    (**(code **)(param_2 + 0x50))(param_2,uVar8);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

