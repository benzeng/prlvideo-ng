
undefined4 FUN_10004ead0(undefined8 param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  uint local_170 [2];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [280];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar4 = (uint)*(ushort *)(param_2 + 0x14);
  local_38 = lVar3;
  if (uVar4 < 0x10) {
    uVar5 = 0xf0000002;
    if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar11 = 0x10;
    pcVar9 = "Invalid UIEMU request from guest: pr=%p, request=0x%x, inlineBytes=%u (must be > %u)";
LAB_10004ec5a:
    uVar5 = 0xf0000002;
    FUN_1008e3970("UIEMU","vm",1,pcVar9,param_2,uVar2,uVar4,uVar11);
    goto switchD_10004eb8a_default;
  }
  puVar6 = (uint *)FUN_1002a6010(param_2);
  if (puVar6 == (uint *)0x0) {
    uVar5 = *(undefined4 *)(param_2 + 8);
    pcVar9 = "Error: failed to get inline bytes for pr=%p, request=0x%x, inlineBytes=%u";
LAB_10004ebfd:
    FUN_1008e3970("UIEMU","vm",0,pcVar9,param_2,uVar5);
    uVar5 = 0xf000001c;
    goto switchD_10004eb8a_default;
  }
  uVar4 = *puVar6;
  if (uVar4 != 1) {
    uVar5 = 0xf0000002;
    if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar11 = puVar6[1];
    pcVar9 = 
    "Invalid UIEMU request from guest: pr=%p, request=0x%x, ver={%u, %u} (must be {%u, %u})";
    goto LAB_10004ec5a;
  }
  uVar5 = 0xf0000021;
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0x8340:
    uVar4 = puVar6[2];
    if (uVar4 == 1) {
      uVar1 = *(ushort *)(param_2 + 0x14);
      if (uVar1 < 0x18) {
        uVar5 = 0xf0000002;
        if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
        pcVar9 = "Invalid size of inline data for UIEMU_CMD_CTL request: %u (must be >= %u)";
LAB_10004eccd:
        uVar4 = (uint)uVar1;
        uVar5 = 0xf0000002;
        uVar10 = 0x18;
        goto LAB_10004f1db;
      }
      if (*(short *)(param_2 + 0x16) == 0) {
        uVar5 = 0xf0000002;
        if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
        pcVar9 = "Invalid buffers count for UIEMU_CMD_CTL request: %u (must be >= %u)";
LAB_10004f1cd:
        uVar5 = 0xf0000002;
        uVar4 = 0;
      }
      else {
        lVar7 = FUN_1002a6120(param_2,0,1);
        if (lVar7 == 0) {
          uVar5 = *(undefined4 *)(param_2 + 8);
          pcVar9 = "Error: failed to get paged buffer (0, 1): pr=%p, pr->Request()=0x%x";
          goto LAB_10004ebfd;
        }
        uVar4 = *(uint *)(lVar7 + 8);
        if (uVar4 < 0x100) {
          uVar5 = 0xf0000002;
          if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
          pcVar9 = "Invalid buffer[0] size for UIEMU_CMD_CTL request: %u (must be >= %u)";
          uVar10 = 0x100;
          goto LAB_10004f1db;
        }
        FUN_1002a5990(lVar7,0,local_170,4);
        if (local_170[0] == 1) {
          uVar5 = FUN_10004f330(param_1,param_2,puVar6[4] != 0,puVar6[5] != 0);
          goto switchD_10004eb8a_default;
        }
        if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
        pcVar9 = "Invalid ctl code for UIEMU_CMD_CTL request: %u (must be WAIT=%u)";
        uVar4 = local_170[0];
      }
    }
    else {
      uVar5 = 0xf0000002;
      if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
      pcVar9 = "Invalid cmdId for UIEMU_CMD_CTL request: %u (must be %u)";
    }
    uVar10 = 1;
    goto LAB_10004f1db;
  case 0x8341:
    uVar4 = puVar6[2];
    if (uVar4 == 2) {
      uVar1 = *(ushort *)(param_2 + 0x14);
      if (uVar1 < 0x18) {
        uVar5 = 0xf0000002;
        if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
        pcVar9 = 
        "Invalid size of inline data for UIEMU_CMD_ELEMENT_AT_POS request: %u (must be >= %u)";
        goto LAB_10004eccd;
      }
      if (*(short *)(param_2 + 0x16) == 0) {
        uVar5 = 0xf0000002;
        if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
        pcVar9 = "Invalid buffers count for UIEMU_CMD_ELEMENT_AT_POS request: %u (must be >= %u)";
        goto LAB_10004f1cd;
      }
      lVar7 = FUN_1002a6120(param_2,0,0);
      if (lVar7 == 0) {
        uVar5 = *(undefined4 *)(param_2 + 8);
        pcVar9 = "Error: failed to get paged buffer (0, 0): pr=%p, pr->Request()=0x%x";
        goto LAB_10004ebfd;
      }
      uVar4 = *(uint *)(lVar7 + 8);
      if (0x6b < uVar4) {
        FUN_1002a5990(lVar7,0,local_150,0x6c);
        FUN_10004f500(param_1,local_150);
        puVar8 = (undefined8 *)FUN_1002a6010(param_2);
        local_158 = puVar8[2];
        local_168 = *puVar8;
        local_160 = puVar8[1];
        uVar10 = 0x84;
        break;
      }
      uVar5 = 0xf0000002;
      if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
      pcVar9 = "Invalid buffer[0] size for UIEMU_CMD_ELEMENT_AT_POS request: %u (must be >= %u)";
      uVar10 = 0x6c;
    }
    else {
      uVar5 = 0xf0000002;
      if (DAT_1011b55f8 < 1) goto switchD_10004eb8a_default;
      pcVar9 = "Invalid cmdId for UIEMU_CMD_ELEMENT_AT_POS request: %u (must be %u)";
      uVar10 = 2;
    }
LAB_10004f1db:
    FUN_1008e3970("UIEMU","vm",1,pcVar9,uVar4,uVar10);
    goto switchD_10004eb8a_default;
  case 0x8342:
    uVar5 = 0xf0000002;
    if (((puVar6[2] != 3) || (*(ushort *)(param_2 + 0x14) < 0x18)) ||
       (*(short *)(param_2 + 0x16) == 0)) goto switchD_10004eb8a_default;
    lVar7 = FUN_1002a6120(param_2,0,0);
    uVar5 = 0xf000001c;
    if ((lVar7 == 0) || (uVar5 = 0xf0000002, *(uint *)(lVar7 + 8) < 0x40))
    goto switchD_10004eb8a_default;
    FUN_1002a5990(lVar7,0,local_150,0x40);
    puVar8 = (undefined8 *)FUN_1002a6010(param_2);
    local_158 = puVar8[2];
    local_168 = *puVar8;
    local_160 = puVar8[1];
    uVar10 = 0x58;
    break;
  case 0x8343:
    uVar5 = 0xf0000002;
    if (((puVar6[2] != 4) || (*(ushort *)(param_2 + 0x14) < 0x18)) ||
       (*(short *)(param_2 + 0x16) == 0)) goto switchD_10004eb8a_default;
    lVar7 = FUN_1002a6120(param_2,0,0);
    uVar5 = 0xf000001c;
    if ((lVar7 == 0) || (uVar5 = 0xf0000002, *(uint *)(lVar7 + 8) < 0x2c))
    goto switchD_10004eb8a_default;
    FUN_1002a5990(lVar7,0,local_150,0x2c);
    puVar8 = (undefined8 *)FUN_1002a6010(param_2);
    local_158 = puVar8[2];
    local_168 = *puVar8;
    local_160 = puVar8[1];
    uVar10 = 0x44;
    break;
  case 0x8344:
    uVar5 = 0xf0000002;
    if (((puVar6[2] != 5) || (*(ushort *)(param_2 + 0x14) < 0x18)) ||
       (*(short *)(param_2 + 0x16) == 0)) goto switchD_10004eb8a_default;
    lVar7 = FUN_1002a6120(param_2,0,0);
    uVar5 = 0xf000001c;
    if ((lVar7 == 0) || (uVar5 = 0xf0000002, *(uint *)(lVar7 + 8) < 0x18))
    goto switchD_10004eb8a_default;
    FUN_1002a5990(lVar7,0,local_150,0x18);
    puVar8 = (undefined8 *)FUN_1002a6010(param_2);
    local_158 = puVar8[2];
    local_168 = *puVar8;
    local_160 = puVar8[1];
    uVar10 = 0x30;
    break;
  case 0x8345:
    uVar5 = 0xf0000002;
    if (((puVar6[2] != 6) || (*(ushort *)(param_2 + 0x14) < 0x18)) ||
       (*(short *)(param_2 + 0x16) == 0)) goto switchD_10004eb8a_default;
    lVar7 = FUN_1002a6120(param_2,0,0);
    uVar5 = 0xf000001c;
    if ((lVar7 == 0) || (uVar5 = 0xf0000002, *(uint *)(lVar7 + 8) < 0x84))
    goto switchD_10004eb8a_default;
    FUN_1002a5990(lVar7,0,local_150,0x84);
    puVar8 = (undefined8 *)FUN_1002a6010(param_2);
    local_158 = puVar8[2];
    local_168 = *puVar8;
    local_160 = puVar8[1];
    uVar10 = 0x9c;
    break;
  case 0x8346:
    uVar5 = 0xf0000002;
    if (((puVar6[2] != 7) || (*(ushort *)(param_2 + 0x14) < 0x18)) ||
       (*(short *)(param_2 + 0x16) == 0)) goto switchD_10004eb8a_default;
    lVar7 = FUN_1002a6120(param_2,0,0);
    uVar5 = 0xf000001c;
    if ((lVar7 == 0) || (uVar5 = 0xf0000002, *(uint *)(lVar7 + 8) < 0x114))
    goto switchD_10004eb8a_default;
    FUN_1002a5990(lVar7,0,local_150,0x114);
    puVar8 = (undefined8 *)FUN_1002a6010(param_2);
    local_158 = puVar8[2];
    local_168 = *puVar8;
    local_160 = puVar8[1];
    uVar10 = 300;
    break;
  default:
    goto switchD_10004eb8a_default;
  }
  uVar5 = 0;
  FUN_10004f880(param_1,&local_168,uVar10);
switchD_10004eb8a_default:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

