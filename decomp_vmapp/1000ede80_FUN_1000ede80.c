
undefined1
FUN_1000ede80(long param_1,uint *param_2,uint *param_3,long param_4,uint param_5,undefined4 *param_6
             ,uint param_7,uint param_8,uint param_9,undefined4 param_10)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 uVar18;
  int *local_50;
  uint local_34;
  
  local_34 = param_9;
  if (param_7 < 0x80) {
    uVar16 = (ulong)param_7;
    puVar7 = (undefined8 *)(&DAT_1011b7180 + uVar16 * 8);
    puVar10 = param_2;
    do {
      if ((undefined4 *)((ulong)param_5 + param_4) < param_6 + 4) {
        uVar12 = *(undefined8 *)(puVar10 + 0xb);
        uVar18 = 0x10;
        pcVar5 = "Ptr is out of range. Item %s[%u] (%p,0x%zx,%p,0x%x), line=%u";
        goto LAB_1000edfbd;
      }
      if (param_3 < puVar10) {
        FUN_1008e3970("","vm",0,"Current item is out of range. Cur=%p, End=%p %s[%u], line=%u",
                      puVar10,param_3,*(undefined8 *)(param_3 + 0xb),param_9,0x717);
        return 0;
      }
      *puVar7 = puVar10;
      uVar14 = *puVar10;
      iVar15 = (int)uVar16;
      if ((int)uVar14 < 10) {
        if (uVar14 != 0) {
LAB_1000ee008:
          FUN_1008e3970("","vm",0,"Unexpected type 0x%x, item=%s[%u], line=%u",uVar14,
                        *(undefined8 *)(puVar10 + 0xb),param_9,0x751);
          return 0;
        }
        if ((iVar15 == 0) ||
           (local_50 = *(int **)(&DAT_1011b7180 + (ulong)(iVar15 - 1) * 8), *local_50 != 0xb)) {
          uVar14 = (int)((ulong)((long)param_3 - (long)puVar10) >> 2) * -0x11111111 - 1;
          bVar1 = false;
          local_50 = (int *)0x0;
        }
        else {
          uVar14 = local_50[3];
          bVar1 = true;
        }
        *param_6 = param_10;
        param_6[1] = 0x8a9ffffa;
        uVar6 = (ulong)uVar14;
        param_6[2] = uVar14 * 0x10 + 0x20;
        uVar8 = (ulong)(uint)param_6[3];
        *(undefined4 *)(param_4 + uVar8) = 0;
        *(undefined4 *)(param_4 + 4 + uVar8) = 0x8a9ffffd;
        *(uint *)(param_4 + 0xc + uVar8) = uVar14 * 0x10;
        *(undefined4 *)(param_4 + 8 + uVar8) = 0;
        if ((int)DAT_1011c37a0 != 0) {
          FUN_1000eabc0("Saving",puVar10,param_4,param_4 + uVar8,uVar16 & 0xffffffff);
        }
        puVar10 = puVar10 + 0xf;
        if (uVar14 == 0) goto LAB_1000ee398;
        lVar13 = uVar8 + 0x10 + param_4;
        uVar17 = 0;
        goto LAB_1000ee123;
      }
      if ((uVar14 == 0x10) || (uVar14 == 0xc)) {
        if ((puVar10[7] & param_8) == 0) {
          return 1;
        }
        uVar3 = FUN_1000eb330(param_1,puVar10,param_3,param_4,param_5,param_6,iVar15 + 1,
                              *(undefined8 *)(puVar10 + 5));
        return uVar3;
      }
      if (1 < uVar14 - 10) goto LAB_1000ee008;
      if ((param_8 & puVar10[7]) == 0) {
        return 1;
      }
      param_2 = *(uint **)(puVar10 + 1);
      if (uVar14 == 0xb) {
        param_3 = param_2 + 0x1e;
      }
      else {
        param_3 = param_2 + (long)(int)puVar10[3] * 0xf + 0xf;
      }
      if ((puVar10[7] & 0x40) == 0) {
        if ((param_2[7] & 0x100) == 0) {
          if ((param_2[7] & 0x200) == 0) goto LAB_1000edf87;
          param_1 = **(long **)(param_2 + 1);
        }
        else {
          param_1 = *(long *)(param_2 + 1);
        }
        if (param_1 == 0) {
          return 1;
        }
      }
      else {
        param_1 = param_1 + (ulong)puVar10[8];
      }
LAB_1000edf87:
      uVar16 = uVar16 + 1;
      puVar7 = puVar7 + 1;
      param_7 = (uint)uVar16;
      puVar10 = param_2;
    } while (param_7 < 0x80);
  }
  uVar12 = *(undefined8 *)(param_2 + 0xb);
  param_6 = (undefined4 *)(ulong)param_7;
  uVar18 = 0x70a;
  pcVar5 = "Too deep recursion. %s[%u], lev=%u, line=%u";
LAB_1000edfbd:
  FUN_1008e3970("","vm",0,pcVar5,uVar12,param_9,param_6,uVar18);
  return 0;
LAB_1000ee123:
  uVar4 = *puVar10;
  if (uVar4 < 0x17) {
    if ((0x40e200U >> (uVar4 & 0x1f) & 1) == 0) {
      if (uVar4 == 1) goto LAB_1000ee398;
      if ((uVar4 != 0x13) || (local_34 == 0)) goto LAB_1000ee160;
    }
    puVar10 = puVar10 + 0xf;
    if (param_3 < puVar10) {
      FUN_1008e3970("","vm",0,"Current item is out of range. Cur=%p, End=%p %s[%u], line=%u",puVar10
                    ,param_3,*(undefined8 *)(param_3 + 0xb),local_34,0x778);
      return 0;
    }
    uVar17 = uVar17 + 1;
    goto LAB_1000ee123;
  }
LAB_1000ee160:
  *(undefined4 *)(lVar13 + 0xc) = param_6[2] + param_6[3];
  puVar9 = puVar10;
  lVar11 = param_1;
  if (local_50 != (int *)0x0) {
    local_34 = uVar17;
    if ((*(byte *)((long)local_50 + 0x1d) & 4) == 0) {
      lVar11 = (ulong)(local_50[4] * uVar17) + param_1;
    }
    else {
      if (*(code **)(local_50 + 5) == (code *)0x0) {
        uVar12 = *(undefined8 *)(local_50 + 0xb);
        uVar18 = 0x114;
        pcVar5 = "Invalid fArrSysPtrOpt option for item %s[%u], pGetPtr is NULL, line=%u";
LAB_1000ee215:
        FUN_1008e3970("","vm",0,pcVar5,uVar12,uVar17,uVar18);
        lVar11 = 0;
      }
      else {
        lVar11 = (**(code **)(local_50 + 5))(uVar17);
        if ((lVar11 == 0) && ((int)DAT_1011c37a0 != 0)) {
          uVar12 = *(undefined8 *)(local_50 + 0xb);
          uVar18 = 0x11d;
          pcVar5 = "Skipping absent item %s[%u], line=%u";
          goto LAB_1000ee215;
        }
      }
      if (lVar11 == 0) {
        puVar9 = &DAT_10110cd50;
      }
    }
  }
  if ((*puVar9 < 0x11) && ((0x11c00U >> (*puVar9 & 0x1f) & 1) != 0)) {
    cVar2 = FUN_1000ede80(lVar11,puVar9,param_3,param_4,param_5,lVar13,iVar15 + 1,param_8,local_34,
                          uVar17);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  else {
    cVar2 = FUN_1000eda70(lVar11,puVar9,local_50,lVar13,param_4,param_5,local_34,uVar17);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  uVar4 = *(uint *)(lVar13 + 8);
  if ((uVar4 & 0xf) != 0) {
    uVar4 = (uVar4 + 0x10) - (uVar4 & 0xf);
  }
  param_6[2] = param_6[2] + uVar4;
  if ((int)DAT_1011c37a0 != 0) {
    FUN_1000eabc0("Saving",puVar9,param_4,lVar13,uVar16 & 0xffffffff);
  }
  puVar9 = puVar10 + 0xf;
  if (bVar1) {
    puVar9 = puVar10;
  }
  puVar10 = puVar9;
  uVar17 = uVar17 + 1;
  lVar13 = lVar13 + 0x10;
  if (uVar14 <= uVar17) {
LAB_1000ee398:
    lVar13 = (ulong)(uint)param_6[3] + param_4;
    *(undefined4 *)(lVar13 + (uVar6 * 2 + 2) * 8) = 0;
    *(undefined4 *)(uVar6 * 0x10 + 0x14 + lVar13) = 0x8a9ffffb;
    *(undefined4 *)(uVar6 * 0x10 + 0x1c + lVar13) = 0;
    *(undefined4 *)(lVar13 + (uVar6 * 2 + 3) * 8) = 0;
    if ((int)DAT_1011c37a0 != 0) {
      FUN_1000eabc0("Saving",puVar10,param_4,lVar13 + (uVar6 * 2 + 2) * 8,uVar16 & 0xffffffff);
    }
    return 1;
  }
  goto LAB_1000ee123;
}

