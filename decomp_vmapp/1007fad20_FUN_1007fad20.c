
ulong FUN_1007fad20(long param_1,undefined1 *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  size_t sVar14;
  char *pcVar15;
  long lVar16;
  long local_f0;
  uint *local_e8;
  uint local_cc;
  ulong local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [48];
  undefined8 local_88 [10];
  long local_38;
  
  lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar4 = *(long *)(param_1 + 0x80);
  if (param_3 == 0) {
    local_f0 = lVar4 + 0x18;
    local_e8 = (uint *)(lVar4 + 0x120);
    pcVar15 = (char *)(lVar4 + 0xc);
    puVar10 = (undefined8 *)(param_1 + 0xd8);
  }
  else {
    local_e8 = (uint *)(lVar4 + 0x158);
    local_f0 = lVar4 + 100;
    pcVar15 = (char *)(lVar4 + 0x58);
    puVar10 = (undefined8 *)(param_1 + 0xf0);
  }
  uVar5 = *puVar10;
  local_38 = lVar16;
  uVar11 = FUN_100894720();
  uVar8 = FUN_1008946d0(uVar11);
  uVar12 = 0xffffffff;
  if (-1 < (int)uVar8) {
    uVar12 = (ulong)(int)uVar8;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    sVar14 = 0x30 - SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x30)) % auVar6,0);
    uVar2 = *local_e8;
    uVar3 = local_e8[1];
    *local_e8 = uVar2 & 0xff;
    local_c8 = uVar12;
    if (((param_3 == 0) &&
        (uVar13 = FUN_100894310(*(undefined8 *)(param_1 + 0xd0)), (uVar13 & 0xf0007) == 2)) &&
       (cVar7 = FUN_1007ff040(uVar5), cVar7 != '\0')) {
      ___memcpy_chk(local_88,local_f0,uVar12,0x4b);
      _memcpy((void *)((long)local_88 + (ulong)uVar8),&DAT_1011a90f0,sVar14);
      iVar9 = (int)sVar14;
      *(undefined8 *)((long)local_88 + (ulong)(uVar8 + iVar9)) = *(undefined8 *)pcVar15;
      *(char *)((long)local_88 + (ulong)(uVar8 + 8 + iVar9)) = (char)*local_e8;
      *(undefined1 *)((long)local_88 + (ulong)(uVar8 + 9 + iVar9)) =
           *(undefined1 *)((long)local_e8 + 5);
      *(char *)((long)local_88 + (ulong)(uVar8 + 10 + iVar9)) = (char)local_e8[1];
      iVar9 = FUN_1007ff070(uVar5,param_2,&local_c8,local_88,*(undefined8 *)(local_e8 + 6),
                            local_e8[1] + uVar12,uVar3 + uVar12 + (ulong)(uVar2 >> 8),local_f0,uVar8
                            ,1);
      lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
      uVar12 = 0xffffffff;
      if (iVar9 < 1) goto LAB_1007fb177;
    }
    else {
      FUN_10088a650(local_b8);
      local_b9 = (undefined1)*local_e8;
      *param_2 = *(undefined1 *)((long)local_e8 + 5);
      param_2[1] = (char)local_e8[1];
      iVar9 = FUN_10088ab60(local_b8,uVar5);
      if ((((iVar9 < 1) || (iVar9 = FUN_10088a910(local_b8,local_f0,local_c8), iVar9 < 1)) ||
          ((iVar9 = FUN_10088a910(local_b8,&DAT_1011a90f0,sVar14), iVar9 < 1 ||
           ((iVar9 = FUN_10088a910(local_b8,pcVar15,8), iVar9 < 1 ||
            (iVar9 = FUN_10088a910(local_b8,&local_b9,1), iVar9 < 1)))))) ||
         ((iVar9 = FUN_10088a910(local_b8,param_2,2), iVar9 < 1 ||
          (((((iVar9 = FUN_10088a910(local_b8,*(undefined8 *)(local_e8 + 6),local_e8[1]), iVar9 < 1
              || (iVar9 = FUN_10088a9c0(local_b8,param_2,0), iVar9 < 1)) ||
             (iVar9 = FUN_10088ab60(local_b8,uVar5), iVar9 < 1)) ||
            ((iVar9 = FUN_10088a910(local_b8,local_f0,local_c8), iVar9 < 1 ||
             (iVar9 = FUN_10088a910(local_b8,&DAT_1011a9120,sVar14), iVar9 < 1)))) ||
           ((iVar9 = FUN_10088a910(local_b8,param_2,local_c8), iVar9 < 1 ||
            (iVar9 = FUN_10088a9c0(local_b8,param_2,&local_cc), iVar9 < 1)))))))) {
        FUN_10088aa50(local_b8);
        lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
        uVar12 = 0xffffffff;
        goto LAB_1007fb177;
      }
      local_c8 = (ulong)local_cc;
      FUN_10088aa50(local_b8);
      lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    pcVar1 = pcVar15 + 7;
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 == '\0') {
      pcVar1 = pcVar15 + 6;
      *pcVar1 = *pcVar1 + '\x01';
      if (*pcVar1 == '\0') {
        pcVar1 = pcVar15 + 5;
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 == '\0') {
          pcVar1 = pcVar15 + 4;
          *pcVar1 = *pcVar1 + '\x01';
          if (*pcVar1 == '\0') {
            pcVar1 = pcVar15 + 3;
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 == '\0') {
              pcVar1 = pcVar15 + 2;
              *pcVar1 = *pcVar1 + '\x01';
              if (*pcVar1 == '\0') {
                pcVar1 = pcVar15 + 1;
                *pcVar1 = *pcVar1 + '\x01';
                if (*pcVar1 == '\0') {
                  *pcVar15 = *pcVar15 + '\x01';
                }
              }
            }
          }
        }
      }
    }
    uVar12 = local_c8 & 0xffffffff;
  }
LAB_1007fb177:
  if (lVar16 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

