
long * FUN_100b9f630(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  bool bVar17;
  long *local_88;
  char *local_80;
  char local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_88 = _malloc(0x70);
  if (local_88 != (long *)0x0) {
    local_88[0xb] = 0;
    local_88[10] = 0;
    local_88[9] = 0;
    local_88[8] = 0;
    local_88[7] = 0;
    local_88[6] = 0;
    local_88[5] = 0;
    local_88[4] = 0;
    local_88[3] = 0;
    local_88[2] = 0;
    local_88[1] = 0;
    *local_88 = 0;
    plVar1 = local_88 + 0xc;
    local_88[0xd] = (long)plVar1;
    local_88[0xc] = (long)plVar1;
    lVar4 = FUN_100ba2960(param_1,"\r\n",param_2);
    bVar17 = *local_88 == 0;
    if ((lVar4 != 0) && (lVar4 != param_1)) {
      param_2 = param_2 - param_1;
      do {
        lVar16 = lVar4 - param_1;
        if (!bVar17) {
          lVar8 = FUN_100ba29f0(param_1,0x3a,lVar16);
          if ((lVar8 != 0) && (puVar9 = _malloc(0x20), puVar9 != (undefined8 *)0x0)) {
            lVar14 = lVar8 - param_1;
            lVar10 = FUN_100ba2ae0(param_1,lVar14);
            lVar11 = FUN_100ba2b60(lVar10,lVar8 - lVar10);
            if (lVar11 == 0) {
              lVar11 = lVar8;
            }
            pvVar12 = (void *)FUN_100ba2ba0(lVar10,lVar11 - lVar10);
            puVar9[2] = pvVar12;
            if (((pvVar12 != (void *)0x0) && (lVar14 + 1 != lVar16)) &&
               (lVar16 = FUN_100ba2ae0(lVar8 + 1,(lVar16 + -1) - lVar14), lVar16 != 0)) {
              lVar16 = FUN_100ba2ba0(lVar16,lVar4 - lVar16);
              puVar9[3] = lVar16;
              if (lVar16 != 0) {
                puVar2 = (undefined8 *)local_88[0xd];
                puVar9[1] = puVar2;
                *puVar9 = plVar1;
                *puVar2 = puVar9;
                local_88[0xd] = (long)puVar9;
                goto LAB_100b9f990;
              }
              _free(pvVar12);
            }
            _free(puVar9);
          }
          goto LAB_100b9f9e9;
        }
        pcVar5 = (char *)FUN_100ba2ba0(param_1,lVar16);
        *local_88 = (long)pcVar5;
        if (pcVar5 == (char *)0x0) goto LAB_100b9f9e9;
        local_80 = (char *)0x0;
        sVar6 = _strlen(pcVar5);
        if ((sVar6 < 0xf) ||
           ((pcVar7 = local_78, 0x3f < sVar6 && (pcVar7 = _malloc(sVar6 + 1), pcVar7 == (char *)0x0)
            ))) goto LAB_100b9f9e9;
        _memcpy(pcVar7,pcVar5,sVar6);
        pcVar7[sVar6] = '\0';
        local_80 = pcVar7;
        pcVar5 = _strtok_r(pcVar7," \t/",&local_80);
        iVar13 = 0;
        if (pcVar5 == (char *)0x0) {
          iVar3 = 0;
        }
        else {
          do {
            if (iVar13 == 2) {
              iVar3 = _atoi(pcVar5);
              *(int *)(local_88 + 0xb) = iVar3;
              sVar6 = 0x3f;
              pcVar5 = local_80;
              plVar15 = local_88 + 3;
LAB_100b9f82c:
              _strncpy((char *)plVar15,pcVar5,sVar6);
              iVar3 = 0;
            }
            else {
              if (iVar13 == 1) {
                sVar6 = 0x10;
                plVar15 = local_88 + 1;
                goto LAB_100b9f82c;
              }
              iVar3 = 0;
              if (iVar13 == 0) {
                iVar3 = _strcasecmp("HTTP",pcVar5);
                iVar3 = -(uint)(iVar3 != 0);
              }
            }
            pcVar5 = _strtok_r(local_80," \t/",&local_80);
          } while ((iVar3 == 0) && (iVar13 = iVar13 + 1, pcVar5 != (char *)0x0));
        }
        if (pcVar7 != local_78) {
          _free(pcVar7);
        }
        if (iVar3 != 0) goto LAB_100b9f9e9;
LAB_100b9f990:
        param_1 = lVar4 + 2;
        lVar4 = FUN_100ba2960(param_1,"\r\n",param_2 + 2 + lVar4);
        bVar17 = *local_88 == 0;
      } while ((lVar4 != 0) && (param_1 != lVar4));
    }
    if (bVar17) {
LAB_100b9f9e9:
      FUN_100b9fa30(local_88);
      local_88 = (long *)0x0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_88;
}

