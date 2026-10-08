
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100b9a400(long param_1,long ******param_2)

{
  long *******ppppppplVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  long *******ppppppplVar5;
  long ******pppppplVar6;
  long ******pppppplVar7;
  ulong uVar8;
  long lVar9;
  long *******ppppppplVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  long *plVar14;
  long *******local_d8;
  long *******local_d0;
  long *******local_c8;
  long *******local_c0;
  char local_78 [64];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_d8 = (long *******)&local_d8;
  local_d0 = (long *******)&local_d8;
  local_38 = lVar9;
  if ((param_1 != 0) && (param_2 != (long ******)0x0)) {
    if (*(int *)(param_1 + 0x1d8) < 6) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x1d4) & 1;
    }
    ppppppplVar5 = _malloc(0x28);
    if (ppppppplVar5 == (long *******)0x0) {
LAB_100b9a53b:
      iVar3 = FUN_100b9d470(0xfffffffe,0);
LAB_100b9a549:
      if (iVar3 != 0) goto LAB_100b9a9e1;
    }
    else {
      ppppppplVar5[4] = (long ******)0x0;
      ppppppplVar5[3] = (long ******)0x0;
      ppppppplVar5[2] = (long ******)0x0;
      ppppppplVar5[1] = (long ******)0x0;
      *ppppppplVar5 = (long ******)0x0;
      pppppplVar6 = (long ******)_strdup("CLASS");
      ppppppplVar5[2] = pppppplVar6;
      pppppplVar7 = (long ******)_strdup((char *)(param_1 + 0x20));
      ppppppplVar5[3] = pppppplVar7;
      pppppplVar6 = ppppppplVar5[2];
      if ((pppppplVar7 == (long ******)0x0) || (pppppplVar6 == (long ******)0x0)) {
        if (pppppplVar6 != (long ******)0x0) {
          _free(pppppplVar6);
          pppppplVar7 = ppppppplVar5[3];
        }
        if (pppppplVar7 != (long ******)0x0) {
          _free(pppppplVar7);
        }
        if (ppppppplVar5[4] != (long ******)0x0) {
          _free(ppppppplVar5[4]);
        }
        _free(ppppppplVar5);
        goto LAB_100b9a53b;
      }
      ppppppplVar5[1] = (long ******)local_d0;
      *ppppppplVar5 = (long ******)&local_d8;
      *local_d0 = (long ******)ppppppplVar5;
      uVar8 = *(ulong *)(param_1 + 0x18);
      if ((uVar8 & 0x800) != 0) {
        uVar8 = uVar8 | 0x2000;
        *(ulong *)(param_1 + 0x18) = uVar8;
      }
      local_d0 = ppppppplVar5;
      if (PTR_s_OWNER_1022cfd00 != (undefined *)0x0) {
        ppuVar12 = &PTR_s_STATUS_1022cfd28;
        uVar13 = 0;
        do {
          if (((uVar8 >> (uVar13 & 0x3f) & 1) != 0) &&
             (((uVar8 = FUN_100b93860(), (uVar8 & 4) == 0 ||
               (iVar3 = FUN_100ba1610(ppuVar12[-5]), iVar3 == 0)) &&
              (iVar3 = FUN_100ba15c0(ppuVar12[-5]), iVar3 == 0)))) {
            ppppppplVar5 = _malloc(0x28);
            if (ppppppplVar5 != (long *******)0x0) {
              ppppppplVar5[4] = (long ******)0x0;
              ppppppplVar5[3] = (long ******)0x0;
              ppppppplVar5[2] = (long ******)0x0;
              ppppppplVar5[1] = (long ******)0x0;
              *ppppppplVar5 = (long ******)0x0;
              (*(code *)ppuVar12[-1])(*(int *)(ppuVar12 + -4) + param_1,&local_c8,0x50);
              pppppplVar6 = (long ******)_strdup(ppuVar12[-3]);
              ppppppplVar5[2] = pppppplVar6;
              pppppplVar6 = (long ******)_strdup((char *)&local_c8);
              ppppppplVar5[3] = pppppplVar6;
              if ((uVar13 == 1) && (*(char *)(param_1 + 0x1e8) != '\0')) {
                pppppplVar6 = (long ******)_strdup((char *)(param_1 + 0x1e8));
                ppppppplVar5[4] = pppppplVar6;
                pppppplVar6 = ppppppplVar5[3];
              }
              pppppplVar7 = ppppppplVar5[2];
              if (pppppplVar6 == (long ******)0x0) {
                if (pppppplVar7 != (long ******)0x0) {
                  _free(pppppplVar7);
                  pppppplVar6 = ppppppplVar5[3];
                  if (pppppplVar6 != (long ******)0x0) goto LAB_100b9aaa7;
                }
              }
              else {
                if (pppppplVar7 != (long ******)0x0) {
                  if ((bVar2 != 0) && (uVar13 == 9)) {
                    FUN_100bc1030(DAT_1022cf508);
                    lVar9 = FUN_100b93ce0(param_1 + 0x184);
                    pppppplVar6 = (long ******)0x0;
                    if (lVar9 != 0) {
                      ___snprintf_chk(local_78,0x40,0,0x40,"%llu",*(undefined8 *)(lVar9 + 0xe0));
                      pppppplVar6 = (long ******)_strdup(local_78);
                    }
                    FUN_100bc10f0(DAT_1022cf508);
                    ppppppplVar5[4] = pppppplVar6;
                  }
                  ppppppplVar5[1] = (long ******)local_d0;
                  *ppppppplVar5 = (long ******)&local_d8;
                  *local_d0 = (long ******)ppppppplVar5;
                  local_d0 = ppppppplVar5;
                  goto LAB_100b9a750;
                }
LAB_100b9aaa7:
                _free(pppppplVar6);
              }
              if (ppppppplVar5[4] != (long ******)0x0) {
                _free(ppppppplVar5[4]);
              }
              _free(ppppppplVar5);
            }
            ppppppplVar5 = local_d8;
            ppppppplVar1 = local_d8;
            ppppppplVar10 = local_d0;
            while ((long ********)ppppppplVar1 != &local_d8) {
              ppppppplVar10 = (long *******)*ppppppplVar1;
              if (ppppppplVar1[2] != (long ******)0x0) {
                _free(ppppppplVar1[2]);
              }
              if (ppppppplVar1[3] != (long ******)0x0) {
                _free(ppppppplVar1[3]);
              }
              if (ppppppplVar1[4] != (long ******)0x0) {
                _free(ppppppplVar1[4]);
              }
              _free(ppppppplVar1);
              ppppppplVar5 = (long *******)&local_d8;
              ppppppplVar1 = ppppppplVar10;
              ppppppplVar10 = (long *******)&local_d8;
            }
            local_d8 = ppppppplVar5;
            local_d0 = ppppppplVar10;
            iVar3 = FUN_100b9d470(0xfffffffe,0);
            lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
            goto LAB_100b9a549;
          }
LAB_100b9a750:
          if (*ppuVar12 == (undefined *)0x0) break;
          uVar13 = uVar13 + 1;
          uVar8 = *(ulong *)(param_1 + 0x18);
          ppuVar12 = ppuVar12 + 5;
        } while( true );
      }
      lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
    }
    uVar4 = FUN_100ba1660(param_1 + 0x20);
    iVar3 = FUN_100b9d060(param_1 + 0x290,&local_d8,bVar2,uVar4);
    if (iVar3 == 0) {
      plVar14 = *(long **)(param_1 + 0x2a0);
      if (plVar14 != (long *)(param_1 + 0x2a0)) {
        do {
          local_c8 = (long *******)&local_c8;
          local_c0 = (long *******)&local_c8;
          ppppppplVar10 = _malloc(0x28);
          ppppppplVar5 = local_c8;
          ppppppplVar1 = local_c0;
          if (ppppppplVar10 == (long *******)0x0) goto LAB_100b9a95b;
          ppppppplVar10[4] = (long ******)0x0;
          ppppppplVar10[3] = (long ******)0x0;
          ppppppplVar10[2] = (long ******)0x0;
          ppppppplVar10[1] = (long ******)0x0;
          *ppppppplVar10 = (long ******)0x0;
          pppppplVar6 = (long ******)_strdup("VE_CLASS");
          ppppppplVar10[2] = pppppplVar6;
          pppppplVar7 = (long ******)_strdup((char *)plVar14[2]);
          ppppppplVar10[3] = pppppplVar7;
          pppppplVar6 = ppppppplVar10[2];
          if ((pppppplVar7 == (long ******)0x0) || (pppppplVar6 == (long ******)0x0)) {
            if (pppppplVar6 != (long ******)0x0) {
              _free(pppppplVar6);
              pppppplVar7 = ppppppplVar10[3];
            }
            if (pppppplVar7 != (long ******)0x0) {
              _free(pppppplVar7);
            }
            if (ppppppplVar10[4] != (long ******)0x0) {
              _free(ppppppplVar10[4]);
            }
            _free(ppppppplVar10);
            ppppppplVar5 = local_c8;
            ppppppplVar1 = local_c0;
            goto LAB_100b9a95b;
          }
          ppppppplVar10[1] = (long ******)local_c0;
          *ppppppplVar10 = (long ******)&local_c8;
          *local_c0 = (long ******)ppppppplVar10;
          local_c0 = ppppppplVar10;
          iVar3 = FUN_100b9d060(plVar14 + 3,&local_c8,0,0);
          ppppppplVar5 = local_c8;
          ppppppplVar10 = local_c8;
          ppppppplVar1 = local_c0;
          if (iVar3 != 0) goto joined_r0x000100b9a902;
          if (bVar2 != 0) {
            FUN_100b97750(&local_c8);
          }
          ppppppplVar5 = local_c0;
          if ((long ********)local_c8 != &local_c8) {
            local_c8[1] = (long ******)local_d0;
            *local_d0 = (long ******)local_c8;
            *ppppppplVar5 = (long ******)&local_d8;
            local_d0 = ppppppplVar5;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)(param_1 + 0x2a0));
      }
      lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_100b9aa65;
    }
    goto LAB_100b9a9e1;
  }
  uVar11 = 0xfffffffd;
  goto LAB_100b9aa40;
joined_r0x000100b9a902:
  while ((long ********)ppppppplVar10 != &local_c8) {
    ppppppplVar1 = (long *******)*ppppppplVar10;
    if (ppppppplVar10[2] != (long ******)0x0) {
      _free(ppppppplVar10[2]);
    }
    if (ppppppplVar10[3] != (long ******)0x0) {
      _free(ppppppplVar10[3]);
    }
    if (ppppppplVar10[4] != (long ******)0x0) {
      _free(ppppppplVar10[4]);
    }
    _free(ppppppplVar10);
    ppppppplVar5 = (long *******)&local_c8;
    ppppppplVar10 = ppppppplVar1;
    ppppppplVar1 = (long *******)&local_c8;
  }
LAB_100b9a95b:
  local_c0 = ppppppplVar1;
  local_c8 = ppppppplVar5;
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  ppppppplVar5 = local_d8;
  ppppppplVar1 = local_d8;
  ppppppplVar10 = local_d0;
  while ((long ********)ppppppplVar1 != &local_d8) {
    ppppppplVar10 = (long *******)*ppppppplVar1;
    if (ppppppplVar1[2] != (long ******)0x0) {
      _free(ppppppplVar1[2]);
    }
    if (ppppppplVar1[3] != (long ******)0x0) {
      _free(ppppppplVar1[3]);
    }
    if (ppppppplVar1[4] != (long ******)0x0) {
      _free(ppppppplVar1[4]);
    }
    _free(ppppppplVar1);
    ppppppplVar5 = (long *******)&local_d8;
    ppppppplVar1 = ppppppplVar10;
    ppppppplVar10 = (long *******)&local_d8;
  }
  local_d8 = ppppppplVar5;
  local_d0 = ppppppplVar10;
  iVar3 = FUN_100b9d470(0xfffffffe,0);
  if (iVar3 == 0) {
LAB_100b9aa65:
    ppppppplVar5 = local_d0;
    uVar11 = 0;
    if ((long ********)local_d8 != &local_d8) {
      pppppplVar6 = (long ******)*param_2;
      local_d8[1] = param_2;
      *param_2 = (long *****)local_d8;
      *ppppppplVar5 = pppppplVar6;
      pppppplVar6[1] = (long *****)ppppppplVar5;
    }
    goto LAB_100b9aa49;
  }
LAB_100b9a9e1:
  ppppppplVar5 = local_d8;
  ppppppplVar1 = local_d8;
  ppppppplVar10 = local_d0;
  while ((long ********)ppppppplVar1 != &local_d8) {
    ppppppplVar10 = (long *******)*ppppppplVar1;
    if (ppppppplVar1[2] != (long ******)0x0) {
      _free(ppppppplVar1[2]);
    }
    if (ppppppplVar1[3] != (long ******)0x0) {
      _free(ppppppplVar1[3]);
    }
    if (ppppppplVar1[4] != (long ******)0x0) {
      _free(ppppppplVar1[4]);
    }
    _free(ppppppplVar1);
    ppppppplVar5 = (long *******)&local_d8;
    ppppppplVar1 = ppppppplVar10;
    ppppppplVar10 = (long *******)&local_d8;
  }
  uVar11 = 0xfffffffe;
  local_d8 = ppppppplVar5;
  local_d0 = ppppppplVar10;
LAB_100b9aa40:
  uVar11 = FUN_100b9d470(uVar11,0);
LAB_100b9aa49:
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

