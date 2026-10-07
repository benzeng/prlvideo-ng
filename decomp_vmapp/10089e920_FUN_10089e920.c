
int FUN_10089e920(code *param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  size_t sVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char *local_118;
  char *local_e8;
  int local_b0;
  int local_ac;
  int local_9c;
  char local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar14 = 0;
  if (param_4 < 0) {
    param_4 = 0;
  }
  if (0 < param_4) {
    do {
      iVar1 = (*param_1)(param_2," ",1);
      iVar16 = -1;
      if (iVar1 == 0) goto LAB_10089ee2e;
      iVar14 = iVar14 + 1;
    } while (iVar14 < param_4);
  }
  uVar6 = param_5 & 0xf0000;
  local_b0 = 3;
  local_e8 = " + ";
  iVar16 = -1;
  if (uVar6 < 0x30000) {
    if (uVar6 == 0x10000) {
      iVar1 = 1;
      local_e8 = "+";
      local_118 = ",";
      local_b0 = 1;
      iVar14 = 0;
    }
    else {
      if (uVar6 != 0x20000) goto LAB_10089ee2e;
      local_118 = ", ";
LAB_10089ea3c:
      iVar1 = 2;
      iVar14 = 0;
    }
  }
  else {
    if (uVar6 == 0x30000) {
      local_118 = "; ";
      goto LAB_10089ea3c;
    }
    if (uVar6 != 0x40000) goto LAB_10089ee2e;
    iVar1 = 1;
    local_118 = "\n";
    iVar14 = param_4;
  }
  pcVar13 = " = ";
  if ((param_5 & 0x800000) == 0) {
    pcVar13 = "=";
  }
  iVar2 = FUN_1008bb840(param_3);
  iVar16 = param_4;
  if (0 < iVar2) {
    uVar15 = (uint)((param_5 & 0x800000) >> 0x16) | 1;
    uVar12 = (uint)param_5 & 0x600000;
    local_ac = -1;
    local_9c = 0;
    do {
      iVar16 = local_9c;
      if ((param_5 & 0x100000) != 0) {
        iVar16 = (iVar2 + -1) - local_9c;
      }
      lVar7 = FUN_1008bb800(param_3,iVar16);
      if (local_ac != -1) {
        if (local_ac == *(int *)(lVar7 + 0x10)) {
          iVar3 = (*param_1)(param_2,local_e8,local_b0);
          iVar16 = -1;
          if (iVar3 == 0) break;
          param_4 = param_4 + local_b0;
        }
        else {
          iVar3 = (*param_1)(param_2,local_118,iVar1);
          iVar16 = -1;
          if (iVar3 == 0) break;
          iVar3 = 0;
          if (0 < iVar14) {
            do {
              iVar5 = (*param_1)(param_2," ",1);
              if (iVar5 == 0) goto LAB_10089ee2e;
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar14);
          }
          param_4 = param_4 + iVar1 + iVar14;
        }
      }
      local_ac = *(int *)(lVar7 + 0x10);
      uVar8 = FUN_1008bc010(lVar7);
      uVar9 = FUN_1008bb7e0(lVar7);
      iVar3 = FUN_100821ab0(uVar8);
      if (uVar12 != 0x600000) {
        if ((uVar12 == 0x400000) || (iVar3 == 0)) {
          pcVar10 = local_88;
          FUN_100822110(pcVar10,0x50,uVar8,1);
          iVar5 = 0;
        }
        else if (uVar12 == 0x200000) {
          pcVar10 = (char *)FUN_1008219f0(iVar3);
          iVar5 = 0x19;
        }
        else {
          iVar5 = 0;
          pcVar10 = "";
          if ((param_5 & 0x600000) == 0) {
            pcVar10 = (char *)FUN_100821930(iVar3);
            iVar5 = 10;
          }
        }
        sVar11 = _strlen(pcVar10);
        iVar18 = (int)sVar11;
        iVar4 = (*param_1)(param_2,pcVar10,sVar11 & 0xffffffff);
        iVar16 = -1;
        if (iVar4 == 0) break;
        if (((param_5 & 0x2000000) != 0) && (iVar18 < iVar5)) {
          iVar17 = 0;
          iVar4 = iVar5 - iVar18;
          if (iVar4 != 0 && iVar18 <= iVar5) {
            do {
              iVar5 = (*param_1)(param_2," ",1);
              if (iVar5 == 0) goto LAB_10089ee2e;
              iVar17 = iVar17 + 1;
            } while (iVar17 < iVar4);
          }
          param_4 = param_4 + iVar4;
        }
        iVar5 = (*param_1)(param_2,pcVar13,uVar15);
        if (iVar5 == 0) break;
        param_4 = iVar18 + uVar15 + param_4;
      }
      uVar6 = (ulong)(iVar3 == 0) << 7;
      if ((param_5 & 0x1000000) == 0) {
        uVar6 = 0;
      }
      iVar3 = FUN_10089ef70(param_1,param_2,uVar6 | param_5,uVar9);
      iVar16 = -1;
      if (iVar3 < 0) break;
      iVar16 = param_4 + iVar3;
      local_9c = local_9c + 1;
      param_4 = iVar16;
    } while (local_9c < iVar2);
  }
LAB_10089ee2e:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar16;
}

