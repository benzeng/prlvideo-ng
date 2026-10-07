
void FUN_1003a2100(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar5;
  char local_ac [4];
  undefined1 local_a8 [8];
  long local_a0;
  long local_90;
  undefined1 local_80 [8];
  long local_78;
  long local_68;
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  long local_38;
  char *pcVar4;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = *param_1;
  FUN_10038e870(local_80,local_40,8);
  FUN_10039ebd0(local_80,*param_1,0,"xyzw");
  FUN_10038e870(local_a8,local_58,0x10);
  FUN_1003a18f0(*(undefined8 *)(param_1 + 2),local_a8,*param_1,param_1[1]);
  uVar5 = uVar5 & 0xf000000;
  if ((uVar5 == 0x9000000) || (uVar5 == 0xa000000)) {
    uVar1 = *param_1;
    local_ac[0] = "xyzw"[uVar1 >> 0x10 & 3];
    local_ac[1] = "xyzw"[uVar1 >> 0x12 & 3];
    local_ac[2] = "xyzw"[uVar1 >> 0x14 & 3];
    local_ac[3] = "xyzw"[uVar1 >> 0x16 & 3];
    if (local_a0 == 0) {
      local_a0 = local_90;
    }
    iVar2 = (int)local_ac[(ulong)(uVar5 != 0x9000000) | 2];
    FUN_10038e8e0(param_2,
                  "vec4((%s.%c == 0.0) ? 1.0 : %s.%c/%s.%c, (%s.%c == 0.0) ? 1.0 : %s.%c/%s.%c, %s.%c, %s.%c)"
                  ,local_a0,iVar2,local_a0,(int)"xyzw"[uVar1 >> 0x10 & 3],local_a0,iVar2,local_a0,
                  iVar2,local_a0,(int)"xyzw"[uVar1 >> 0x12 & 3],local_a0,iVar2,local_a0,
                  (int)"xyzw"[uVar1 >> 0x14 & 3],local_a0,(int)"xyzw"[uVar1 >> 0x16 & 3]);
  }
  else {
    uVar5 = *param_1 & 0xf000000;
    pcVar4 = (char *)0x0;
    pcVar3 = (char *)0x0;
    if (uVar5 < 0x4000000) {
      if (uVar5 < 0x2000000) {
        if (uVar5 == 0) {
          pcVar3 = "%s%s";
        }
        else {
          pcVar3 = pcVar4;
          if (uVar5 == 0x1000000) {
            pcVar3 = "(-%s%s)";
          }
        }
      }
      else if (uVar5 == 0x2000000) {
        pcVar3 = "(%s%s - 0.5)";
      }
      else {
        pcVar3 = pcVar4;
        if (uVar5 == 0x3000000) {
          pcVar3 = "(0.5 - %s%s)";
        }
      }
    }
    else if (uVar5 < 0x8000000) {
      if (uVar5 < 0x6000000) {
        if (uVar5 == 0x4000000) {
          pcVar3 = "(2.0*%s%s - 1.0)";
        }
        else {
          pcVar3 = pcVar4;
          if (uVar5 == 0x5000000) {
            pcVar3 = "(1.0 - 2.0*%s%s)";
          }
        }
      }
      else if (uVar5 == 0x6000000) {
        pcVar3 = "(1.0 - %s%s)";
      }
      else if (uVar5 == 0x7000000) {
        pcVar3 = "2.0*%s%s";
      }
    }
    else if (uVar5 < 0xc000000) {
      if (uVar5 == 0x8000000) {
        pcVar3 = "(-2.0*%s%s)";
      }
      else if (uVar5 == 0xb000000) {
        pcVar3 = "abs(%s%s)";
      }
    }
    else if (uVar5 == 0xc000000) {
      pcVar3 = "(-abs(%s%s))";
    }
    else if (uVar5 == 0xd000000) {
      pcVar3 = "!%s%s";
    }
    if (local_a0 == 0) {
      local_a0 = local_90;
    }
    if (local_78 == 0) {
      local_78 = local_68;
    }
    FUN_10038e8e0(param_2,pcVar3,local_a0,local_78);
  }
  FUN_10038e8c0(local_a8);
  FUN_10038e8c0(local_80);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

