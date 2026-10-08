
undefined8 FUN_100b945e0(ulong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  char *pcVar9;
  undefined8 uVar10;
  size_t sVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_58;
  undefined8 uStack_50;
  code *local_48;
  undefined8 uStack_40;
  int local_34;
  
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = *param_1;
  if ((uVar5 & 1) == 0) {
    param_1[2] = 0;
  }
  else {
    uVar5 = FUN_100b9c1d0();
    param_1[2] = uVar5;
    if (uVar5 == 0) goto LAB_100b948d2;
    uVar5 = *param_1;
  }
  if ((uVar5 & 6) == 0) {
    param_1[4] = 0;
    param_1[3] = 0;
  }
  else {
    lVar6 = FUN_100b929d0(&local_34);
    iVar4 = local_34;
    if (lVar6 == 0) goto LAB_100b948d2;
    sVar11 = (size_t)(local_34 * 8 + 8);
    pvVar7 = _malloc(sVar11);
    param_1[3] = (ulong)pvVar7;
    pvVar8 = _malloc(sVar11);
    param_1[4] = (ulong)pvVar8;
    if ((pvVar7 == (void *)0x0) || (pvVar8 == (void *)0x0)) {
      FUN_100b92cc0(lVar6);
      goto LAB_100b94832;
    }
    if (0 < iVar4) {
      pcVar12 = (char *)(lVar6 + 0x4a);
      lVar14 = 0;
      do {
        pcVar9 = _strdup(pcVar12 + 0x40);
        *(char **)(param_1[4] + lVar14 * 8) = pcVar9;
        pcVar9 = _strdup(pcVar12);
        *(char **)(param_1[3] + lVar14 * 8) = pcVar9;
        if ((*(long *)(param_1[3] + lVar14 * 8) == 0) ||
           (pvVar8 = (void *)param_1[4], *(long *)((long)pvVar8 + lVar14 * 8) == 0)) {
          FUN_100b9d470(0xfffffffe,0);
          puVar1 = (undefined8 *)param_1[4];
          pvVar8 = (void *)*puVar1;
          puVar13 = puVar1;
          while (pvVar8 != (void *)0x0) {
            puVar13 = puVar13 + 1;
            _free(pvVar8);
            pvVar8 = (void *)*puVar13;
          }
          _free(puVar1);
          puVar1 = (undefined8 *)param_1[3];
          pvVar8 = (void *)*puVar1;
          puVar13 = puVar1;
          while (pvVar8 != (void *)0x0) {
            puVar13 = puVar13 + 1;
            _free(pvVar8);
            pvVar8 = (void *)*puVar13;
          }
          _free(puVar1);
          param_1[4] = 0;
          param_1[3] = 0;
          FUN_100b92cc0(lVar6);
          goto LAB_100b948d2;
        }
        lVar14 = lVar14 + 1;
        pcVar12 = pcVar12 + 0xac;
        iVar4 = local_34;
      } while (lVar14 < local_34);
    }
    *(undefined8 *)((long)pvVar8 + (long)iVar4 * 8) = 0;
    *(undefined8 *)(param_1[3] + (long)iVar4 * 8) = 0;
    FUN_100b92cc0(lVar6);
    uVar5 = *param_1;
  }
  param_1[5] = (ulong)&DAT_1023142c0;
  param_1[6] = (ulong)PTR_s_x86_64_1022cfff8;
  if ((uVar5 & 0x10) == 0) {
    pcVar12 = _strdup("Unknown");
  }
  else {
    pcVar12 = (char *)FUN_100b949b0();
  }
  param_1[8] = (ulong)pcVar12;
  if (pcVar12 != (char *)0x0) {
    if ((*param_1 & 0x20) == 0) {
      pcVar12 = "Unknown";
    }
    pcVar12 = _strdup(pcVar12);
    param_1[9] = (ulong)pcVar12;
    if (pcVar12 == (char *)0x0) {
LAB_100b94832:
      FUN_100b9d470(0xfffffffe,0);
      uVar10 = FUN_100b9d560();
      return uVar10;
    }
    iVar4 = 0;
    if ((*param_1 & 0x80) != 0) {
      iVar2 = FUN_100bc14f0();
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)((long)param_1 + 0x54) = iVar4;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    uVar3 = FUN_100b93810();
    if (((9 < uVar3) || ((0x270U >> (uVar3 & 0x1f) & 1) == 0)) ||
       (iVar4 = FUN_100b962a0(&local_58), iVar4 == 0)) {
      pcVar12 = (char *)FUN_100b97120(1,"nr_vms");
      iVar4 = 0;
      if (pcVar12 != (char *)0x0) {
        iVar4 = _atoi(pcVar12);
        _free(pcVar12);
      }
      *(int *)((long)param_1 + 100) = iVar4;
      if (local_48 == (code *)0x0) {
        pcVar12 = (char *)FUN_100b97120(6,"capacity");
        iVar4 = 0;
        if (pcVar12 != (char *)0x0) {
          iVar4 = _atoi(pcVar12);
          _free(pcVar12);
        }
      }
      else {
        iVar4 = (*local_48)("capacity");
      }
      *(int *)((long)param_1 + 0x6c) = iVar4;
      if (local_48 == (code *)0x0) {
        pcVar12 = (char *)FUN_100b97120(6,"replicas");
        iVar4 = 0;
        if (pcVar12 != (char *)0x0) {
          iVar4 = _atoi(pcVar12);
          _free(pcVar12);
        }
      }
      else {
        iVar4 = (*local_48)("replicas");
      }
      *(int *)(param_1 + 0xe) = iVar4;
      *(int *)((long)param_1 + 0x5c) = (int)local_58;
      *(int *)(param_1 + 0xd) = (int)((ulong)local_58 >> 0x20);
      *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_50;
      return 0;
    }
  }
LAB_100b948d2:
  uVar10 = FUN_100b9d560();
  return uVar10;
}

