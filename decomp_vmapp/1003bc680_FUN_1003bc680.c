
undefined8 FUN_1003bc680(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 local_698 [336];
  long local_548;
  long local_538;
  long local_4a0;
  long local_490;
  char local_480;
  undefined1 local_478 [8];
  char *local_470;
  uint local_468;
  uint local_464;
  undefined4 local_3d8;
  undefined1 *local_3d0;
  undefined1 *local_3c0;
  undefined4 local_330;
  undefined1 *local_328;
  undefined1 *local_318;
  undefined4 local_288;
  undefined1 *local_280;
  undefined1 *local_270;
  undefined1 local_260;
  undefined1 local_258 [8];
  char *local_250;
  uint local_248;
  uint local_244;
  undefined4 local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a0;
  undefined4 local_110;
  undefined1 *local_108;
  undefined1 *local_f8;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_50;
  undefined1 local_40;
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar10 = *(long *)(param_2 + 0x40);
  uVar11 = 1;
  if (*(short *)(param_2 + 0x4c) != 0x51) {
    uVar11 = 2;
  }
  local_38 = lVar12;
  FUN_1003b9a60(local_258,lVar10 + 0x80,uVar11,0);
  FUN_1003b9a60(local_478,lVar10 + 0xc0,uVar11,0);
  if (*(char *)(lVar10 + 0x38) != '\r') {
    if (*(char *)(lVar10 + 0x78) != '\r') {
      if ((*(byte *)(lVar10 + 0xb9) & 1) == 0) {
        if (((((*(byte *)(lVar10 + 0x30) & *(byte *)(lVar10 + 0xb0)) == 0) ||
             (*(int *)(lVar10 + 0x28) != *(int *)(lVar10 + 0xa8))) ||
            (*(int *)(lVar10 + 0x2c) != *(int *)(lVar10 + 0xac))) ||
           (*(char *)(lVar10 + 0x38) != *(char *)(lVar10 + 0xb8))) {
LAB_1003bc7af:
          if ((((*(byte *)(lVar10 + 0x70) & *(byte *)(lVar10 + 0xb0)) == 0) ||
              (*(int *)(lVar10 + 0x68) != *(int *)(lVar10 + 0xa8))) ||
             ((*(int *)(lVar10 + 0x6c) != *(int *)(lVar10 + 0xac) ||
              (*(char *)(lVar10 + 0x78) != *(char *)(lVar10 + 0xb8))))) goto LAB_1003bc923;
          lVar2 = *(long *)(lVar10 + 0x48);
          if ((lVar2 != 0) && (lVar3 = *(long *)(lVar10 + 0x88), lVar3 != 0)) {
            pcVar8 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
            if (*(long *)(lVar2 + 0x80) == 0) {
              pcVar8 = (char *)(lVar2 + 0x7c);
            }
            pcVar7 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
            if (*(long *)(lVar3 + 0x80) == 0) {
              pcVar7 = (char *)(lVar3 + 0x7c);
            }
            if (*pcVar8 != *pcVar7) goto LAB_1003bc923;
          }
        }
        else {
          lVar2 = *(long *)(lVar10 + 8);
          if ((lVar2 != 0) && (lVar3 = *(long *)(lVar10 + 0x88), lVar3 != 0)) {
            pcVar8 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
            if (*(long *)(lVar2 + 0x80) == 0) {
              pcVar8 = (char *)(lVar2 + 0x7c);
            }
            pcVar7 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
            if (*(long *)(lVar3 + 0x80) == 0) {
              pcVar7 = (char *)(lVar3 + 0x7c);
            }
            if (*pcVar8 != *pcVar7) goto LAB_1003bc7af;
          }
        }
        uVar9 = *(undefined8 *)(param_1 + 8);
        puVar4 = local_1b0;
        if (local_1b0 == (undefined1 *)0x0) {
          puVar4 = local_1a0;
        }
        *puVar4 = 0;
        local_1b8 = 0;
        FUN_1003ba4c0(local_258,local_244,0);
        if ((local_244 & 0xff) < 0xf) {
          pcVar8 = "i";
          switch(local_244 & 0xff) {
          case 1:
            pcVar8 = "u";
            break;
          case 2:
            break;
          default:
switchD_1003bc8a4_caseD_3:
            pcVar8 = "?";
            break;
          case 4:
            pcVar8 = "b";
            break;
          case 8:
            pcVar8 = "";
          }
        }
        else {
          if ((local_244 & 0xff) != 0xf) goto switchD_1003bc8a4_caseD_3;
          pcVar8 = "a";
        }
        puVar4 = local_1b0;
        if (local_1b0 == (undefined1 *)0x0) {
          puVar4 = local_1a0;
        }
        FUN_10038e8e0(uVar9,"%s%s = %s;\n",pcVar8,"Tmp0",puVar4);
        puVar4 = local_1b0;
        if (local_1b0 == (undefined1 *)0x0) {
          puVar4 = local_1a0;
        }
        *puVar4 = 0;
        local_1b8 = 0;
        local_250 = "Tmp0";
        lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
LAB_1003bc923:
      if ((*(byte *)(lVar10 + 0xf9) & 1) == 0) {
        if (((((*(byte *)(lVar10 + 0x30) & *(byte *)(lVar10 + 0xf0)) == 0) ||
             (*(int *)(lVar10 + 0x28) != *(int *)(lVar10 + 0xe8))) ||
            (*(int *)(lVar10 + 0x2c) != *(int *)(lVar10 + 0xec))) ||
           (*(char *)(lVar10 + 0x38) != *(char *)(lVar10 + 0xf8))) {
LAB_1003bc9c4:
          if ((((*(byte *)(lVar10 + 0x70) & *(byte *)(lVar10 + 0xf0)) == 0) ||
              (*(int *)(lVar10 + 0x68) != *(int *)(lVar10 + 0xe8))) ||
             ((*(int *)(lVar10 + 0x6c) != *(int *)(lVar10 + 0xec) ||
              (*(char *)(lVar10 + 0x78) != *(char *)(lVar10 + 0xf8))))) goto LAB_1003bcb3a;
          lVar2 = *(long *)(lVar10 + 0x48);
          if ((lVar2 != 0) && (lVar3 = *(long *)(lVar10 + 200), lVar3 != 0)) {
            pcVar8 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
            if (*(long *)(lVar2 + 0x80) == 0) {
              pcVar8 = (char *)(lVar2 + 0x7c);
            }
            pcVar7 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
            if (*(long *)(lVar3 + 0x80) == 0) {
              pcVar7 = (char *)(lVar3 + 0x7c);
            }
            if (*pcVar8 != *pcVar7) goto LAB_1003bcb3a;
          }
        }
        else {
          lVar2 = *(long *)(lVar10 + 8);
          if ((lVar2 != 0) && (lVar3 = *(long *)(lVar10 + 200), lVar3 != 0)) {
            pcVar8 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
            if (*(long *)(lVar2 + 0x80) == 0) {
              pcVar8 = (char *)(lVar2 + 0x7c);
            }
            pcVar7 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
            if (*(long *)(lVar3 + 0x80) == 0) {
              pcVar7 = (char *)(lVar3 + 0x7c);
            }
            if (*pcVar8 != *pcVar7) goto LAB_1003bc9c4;
          }
        }
        uVar9 = *(undefined8 *)(param_1 + 8);
        puVar4 = local_3d0;
        if (local_3d0 == (undefined1 *)0x0) {
          puVar4 = local_3c0;
        }
        *puVar4 = 0;
        local_3d8 = 0;
        FUN_1003ba4c0(local_478,local_464,0);
        if ((local_464 & 0xff) < 0xf) {
          pcVar8 = "i";
          switch(local_464 & 0xff) {
          case 1:
            pcVar8 = "u";
            break;
          case 2:
            break;
          default:
switchD_1003bcabb_caseD_3:
            pcVar8 = "?";
            break;
          case 4:
            pcVar8 = "b";
            break;
          case 8:
            pcVar8 = "";
          }
        }
        else {
          if ((local_464 & 0xff) != 0xf) goto switchD_1003bcabb_caseD_3;
          pcVar8 = "a";
        }
        puVar4 = local_3d0;
        if (local_3d0 == (undefined1 *)0x0) {
          puVar4 = local_3c0;
        }
        FUN_10038e8e0(uVar9,"%s%s = %s;\n",pcVar8,"Tmp1",puVar4);
        puVar4 = local_3d0;
        if (local_3d0 == (undefined1 *)0x0) {
          puVar4 = local_3c0;
        }
        *puVar4 = 0;
        local_3d8 = 0;
        local_470 = "Tmp1";
        lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
    }
LAB_1003bcb3a:
    uVar9 = 2;
    if (*(char *)(lVar10 + 0x38) != '\r') goto LAB_1003bcd07;
  }
  uVar9 = 0;
  if (*(char *)(lVar10 + 0x78) != '\r') {
    FUN_1003b9a60(local_698,lVar10 + 0x40,uVar11,*(undefined1 *)(lVar10 + 0x70));
    bVar1 = *(byte *)(lVar10 + 0x70);
    if (local_1b0 == (undefined1 *)0x0) {
      local_1b0 = local_1a0;
    }
    *local_1b0 = 0;
    local_1b8 = 0;
    if (local_108 == (undefined1 *)0x0) {
      local_108 = local_f8;
    }
    *local_108 = 0;
    local_110 = 0;
    if (local_60 == (undefined1 *)0x0) {
      local_60 = local_50;
    }
    *local_60 = 0;
    local_68 = 0;
    local_248 = (uint)bVar1;
    local_40 = 1;
    bVar1 = *(byte *)(lVar10 + 0x70);
    if (local_3d0 == (undefined1 *)0x0) {
      local_3d0 = local_3c0;
    }
    *local_3d0 = 0;
    local_3d8 = 0;
    if (local_328 == (undefined1 *)0x0) {
      local_328 = local_318;
    }
    *local_328 = 0;
    local_330 = 0;
    if (local_280 == (undefined1 *)0x0) {
      local_280 = local_270;
    }
    *local_280 = 0;
    local_288 = 0;
    local_468 = (uint)bVar1;
    local_260 = 1;
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar9 = FUN_1003ba9d0(local_698);
    if (local_480 != '\0') {
      FUN_1003ba140(local_698);
    }
    lVar10 = local_548;
    if (local_548 == 0) {
      lVar10 = local_538;
    }
    uVar5 = FUN_1003ba9d0(local_258);
    uVar6 = FUN_1003ba9d0(local_478);
    if (local_480 != '\0') {
      FUN_1003ba140(local_698);
    }
    if (local_4a0 == 0) {
      local_4a0 = local_490;
    }
    FUN_10038e8e0(uVar11,"%s = %s%s * %s%s;\n",uVar9,lVar10,uVar5,uVar6,local_4a0);
    FUN_1003b9b40(local_698);
    uVar9 = 0;
    lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
LAB_1003bcd07:
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (lVar12 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

