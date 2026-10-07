
void FUN_10039e1d0(long param_1,undefined1 param_2,char param_3,byte param_4)

{
  uint uVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  byte local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar1 = *(uint *)(param_1 + 4);
  local_2c = ((uVar1 & 0x80) == 0 | param_4 ^ 1) ^ 1;
  if (param_3 == '\0') {
    if (0x54 < (int)uVar1) {
      if ((int)uVar1 < 0xd5) {
        if ((int)uVar1 < 0x90) {
          if (uVar1 - 0x84 < 2) goto LAB_10039e2d5;
          if ((uVar1 != 0x55) && (uVar1 == 0x81)) goto LAB_10039e3be;
        }
        else if (uVar1 - 0x90 < 2) goto LAB_10039e38a;
      }
      goto switchD_10039e220_caseD_2;
    }
    if ((int)uVar1 < 0x10) {
      if (uVar1 < 2) {
LAB_10039e3be:
        local_44 = 0x2600;
        local_48 = 0x2600;
        goto LAB_10039e422;
      }
      if (uVar1 - 4 < 2) {
LAB_10039e2d5:
        local_44 = 0x2601;
        local_48 = 0x2600;
        goto LAB_10039e422;
      }
      goto switchD_10039e220_caseD_2;
    }
    if (1 < uVar1 - 0x10) goto switchD_10039e220_caseD_2;
LAB_10039e38a:
    local_44 = 0x2600;
  }
  else {
    if ((int)uVar1 < 0x55) {
      if ((int)uVar1 < 0x10) {
        switch(uVar1) {
        case 0:
          local_44 = 0x2600;
          local_48 = 0x2700;
          goto LAB_10039e422;
        case 1:
switchD_10039e220_caseD_1:
          local_44 = 0x2600;
          local_48 = 0x2702;
          goto LAB_10039e422;
        case 4:
switchD_10039e220_caseD_4:
          local_44 = 0x2601;
          local_48 = 0x2700;
          goto LAB_10039e422;
        case 5:
switchD_10039e220_caseD_5:
          local_44 = 0x2601;
          local_48 = 0x2702;
          goto LAB_10039e422;
        }
      }
      else {
        switch(uVar1) {
        case 0x10:
switchD_10039e304_caseD_10:
          local_44 = 0x2600;
          local_48 = 0x2701;
          goto LAB_10039e422;
        case 0x11:
switchD_10039e304_caseD_11:
          local_44 = 0x2600;
          local_48 = 0x2703;
          goto LAB_10039e422;
        case 0x14:
switchD_10039e304_caseD_14:
          local_44 = 0x2601;
          local_48 = 0x2701;
          goto LAB_10039e422;
        case 0x15:
          goto switchD_10039e304_caseD_15;
        }
      }
    }
    else if ((int)uVar1 < 0xd5) {
      if ((int)uVar1 < 0x90) {
        if ((int)uVar1 < 0x84) {
          if (uVar1 == 0x55) goto switchD_10039e304_caseD_15;
          if (uVar1 == 0x81) goto switchD_10039e220_caseD_1;
        }
        else {
          if (uVar1 == 0x84) goto switchD_10039e220_caseD_4;
          if (uVar1 == 0x85) goto switchD_10039e220_caseD_5;
        }
      }
      else {
        switch(uVar1) {
        case 0x90:
          goto switchD_10039e304_caseD_10;
        case 0x91:
          goto switchD_10039e304_caseD_11;
        case 0x94:
          goto switchD_10039e304_caseD_14;
        case 0x95:
          goto switchD_10039e304_caseD_15;
        }
      }
    }
    else if (uVar1 == 0xd5) {
switchD_10039e304_caseD_15:
      local_44 = 0x2601;
      local_48 = 0x2703;
      goto LAB_10039e422;
    }
switchD_10039e220_caseD_2:
    local_44 = 0x2601;
  }
  local_48 = 0x2601;
LAB_10039e422:
  uVar1 = *(int *)(param_1 + 8) - 1;
  local_3c = 0x812f;
  local_40 = 0x812f;
  if (uVar1 < 5) {
    local_40 = *(undefined4 *)(&DAT_100b3f2e0 + (long)(int)uVar1 * 4);
  }
  uVar1 = *(int *)(param_1 + 0xc) - 1;
  if (uVar1 < 5) {
    local_3c = *(undefined4 *)(&DAT_100b3f2e0 + (long)(int)uVar1 * 4);
  }
  uVar1 = *(int *)(param_1 + 0x10) - 1;
  local_38 = 0x812f;
  if (uVar1 < 5) {
    local_38 = *(undefined4 *)(&DAT_100b3f2e0 + (long)(int)uVar1 * 4);
  }
  local_34 = *(undefined4 *)(param_1 + 0x14);
  local_30 = *(undefined4 *)(param_1 + 0x18);
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    local_28 = 0x200;
    break;
  case 2:
    local_28 = 0x201;
    break;
  case 3:
    local_28 = 0x202;
    break;
  case 4:
    local_28 = 0x203;
    break;
  case 5:
    local_28 = 0x204;
    break;
  case 6:
    local_28 = 0x205;
    break;
  case 7:
    local_28 = 0x206;
    break;
  case 8:
    local_28 = 0x207;
  }
  local_24 = *(undefined8 *)(param_1 + 0x20);
  local_1c = *(undefined8 *)(param_1 + 0x28);
  local_14 = *(undefined4 *)(param_1 + 0x30);
  local_10 = *(undefined4 *)(param_1 + 0x34);
  local_c = param_2;
  FUN_10039e9e0(&local_48);
  return;
}

