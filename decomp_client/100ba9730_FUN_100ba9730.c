
undefined4 FUN_100ba9730(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long *ptr;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 local_64;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_40 = (long *)0x0;
  local_48 = (long *)0x0;
  local_50 = (long *)0x0;
  local_58 = (long *)0x0;
  local_60 = (long *)0x0;
  *param_1 = 0;
  puVar8 = (undefined8 *)FUN_100bf3540(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
  plVar12 = (long *)0x0;
  if (puVar8 == (undefined8 *)0x0) {
    local_64 = 2;
    puVar8 = (undefined8 *)0x0;
    ptr = (long *)0x0;
    bVar6 = true;
    goto LAB_100ba9c50;
  }
  *(undefined4 *)(puVar8 + 7) = 0;
  puVar8[6] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[1] = 0;
  *puVar8 = 0;
  local_38 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
  if (local_38 == (long *)0x0) {
    local_64 = 2;
    local_38 = (long *)0x0;
LAB_100ba9c48:
    ptr = (long *)0x0;
    plVar12 = (long *)0x0;
    bVar6 = false;
  }
  else {
    *(undefined4 *)((long)local_38 + 0x14) = 1;
    *(undefined4 *)(local_38 + 2) = 0;
    local_38[1] = 0;
    *local_38 = 0;
    local_40 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    if (local_40 == (long *)0x0) {
      local_64 = 2;
      local_40 = (long *)0x0;
      goto LAB_100ba9c48;
    }
    *(undefined4 *)((long)local_40 + 0x14) = 1;
    *(undefined4 *)(local_40 + 2) = 0;
    local_40[1] = 0;
    *local_40 = 0;
    local_48 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    if (local_48 == (long *)0x0) {
      local_64 = 2;
      local_48 = (long *)0x0;
      goto LAB_100ba9c48;
    }
    *(undefined4 *)((long)local_48 + 0x14) = 1;
    *(undefined4 *)(local_48 + 2) = 0;
    local_48[1] = 0;
    *local_48 = 0;
    local_50 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    if (local_50 == (long *)0x0) {
      local_64 = 2;
      local_50 = (long *)0x0;
      goto LAB_100ba9c48;
    }
    *(undefined4 *)((long)local_50 + 0x14) = 1;
    *(undefined4 *)(local_50 + 2) = 0;
    local_50[1] = 0;
    *local_50 = 0;
    local_58 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    if (local_58 == (long *)0x0) {
      local_64 = 2;
      local_58 = (long *)0x0;
      goto LAB_100ba9c48;
    }
    *(undefined4 *)((long)local_58 + 0x14) = 1;
    *(undefined4 *)(local_58 + 2) = 0;
    local_58[1] = 0;
    *local_58 = 0;
    local_60 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    if (local_60 == (long *)0x0) {
      local_64 = 2;
      local_60 = (long *)0x0;
      goto LAB_100ba9c48;
    }
    *(undefined4 *)((long)local_60 + 0x14) = 1;
    *(undefined4 *)(local_60 + 2) = 0;
    local_60[1] = 0;
    *local_60 = 0;
    iVar7 = FUN_100bac820(&local_38,"FFFFFFFFFFFFFEFF");
    if ((iVar7 == 0) || (iVar7 = FUN_100bac820(&local_40,"C5F2E20CC17E96BF"), iVar7 == 0)) {
LAB_100ba9c2a:
      local_64 = 1;
      plVar12 = (long *)0x0;
      ptr = (long *)0x0;
      bVar6 = false;
    }
    else {
      local_64 = 1;
      iVar7 = FUN_100bac820(&local_48,"C76604F72F1B9CBA");
      plVar4 = local_38;
      plVar10 = local_40;
      plVar12 = local_48;
      if ((iVar7 == 0) || (ptr = (long *)FUN_100bacae0(&DAT_102240168), ptr == (long *)0x0))
      goto LAB_100ba9c2a;
      lVar9 = *ptr;
      if (*(code **)(lVar9 + 0x28) == (code *)0x0) {
LAB_100ba9dd7:
        pcVar11 = *(code **)(lVar9 + 0x18);
        if ((pcVar11 != (code *)0x0) || (pcVar11 = *(code **)(lVar9 + 0x10), pcVar11 != (code *)0x0)
           ) {
          (*pcVar11)(ptr);
        }
        puVar3 = (undefined8 *)ptr[0xc];
        while (puVar3 != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)*puVar3;
          (*(code *)puVar3[4])(puVar3[1]);
          FUN_100bf3910(puVar3);
          puVar3 = puVar1;
        }
        ptr[0xc] = 0;
        plVar12 = (long *)ptr[1];
        if (plVar12 != (long *)0x0) {
          lVar9 = *plVar12;
          if (*(code **)(lVar9 + 0x58) == (code *)0x0) {
            if ((lVar9 != 0) && (*(code **)(lVar9 + 0x50) != (code *)0x0)) {
              (**(code **)(lVar9 + 0x50))(plVar12);
            }
          }
          else {
            (**(code **)(lVar9 + 0x58))(plVar12);
          }
          _OPENSSL_cleanse(plVar12,0x58);
          FUN_100bf3910(plVar12);
        }
        FUN_100bac7b0(ptr + 2);
        FUN_100bac7b0(ptr + 5);
        if ((void *)ptr[10] != (void *)0x0) {
          _OPENSSL_cleanse((void *)ptr[10],ptr[0xb]);
          FUN_100bf3910(ptr[10]);
        }
        _OPENSSL_cleanse(ptr,0xe8);
        FUN_100bf3910(ptr);
        goto LAB_100ba9c48;
      }
      iVar7 = (**(code **)(lVar9 + 0x28))(ptr,plVar4,plVar10,plVar12,puVar8);
      lVar9 = *ptr;
      if (iVar7 == 0) goto LAB_100ba9dd7;
      if ((*(long *)(lVar9 + 0x48) == 0) ||
         (plVar12 = (long *)FUN_100bf3540(0x58,"../src/snlic/sn_crypto_helper_02.c",0x1fe),
         plVar12 == (long *)0x0)) {
        plVar12 = (long *)0x0;
        bVar6 = false;
      }
      else {
        lVar9 = *ptr;
        *plVar12 = lVar9;
        iVar7 = (**(code **)(lVar9 + 0x48))(plVar12);
        if (iVar7 == 0) {
          FUN_100bf3910(plVar12);
          plVar12 = (long *)0x0;
          bVar6 = false;
        }
        else {
          iVar7 = FUN_100bac820(&local_50,"366D83558F75F978");
          if ((iVar7 != 0) && (iVar7 = FUN_100bac820(&local_58,"10CE8EB5B079B114"), iVar7 != 0)) {
            pcVar11 = *(code **)(*ptr + 0x80);
            if ((pcVar11 != (code *)0x0) && (*ptr == *plVar12)) {
              iVar7 = (*pcVar11)(ptr,plVar12,local_50,local_58,puVar8);
              if (iVar7 == 0) {
                bVar6 = false;
              }
              else {
                iVar7 = FUN_100bac820(&local_60,"80000000FB037099");
                plVar10 = local_50;
                if (iVar7 == 0) {
                  bVar6 = false;
                }
                else if ((*(int *)((long)local_50 + 0xc) < 1) &&
                        (lVar9 = FUN_100bac510(local_50,1), lVar9 == 0)) {
                  local_64 = 1;
                  bVar6 = false;
                }
                else {
                  plVar5 = local_50;
                  plVar4 = local_60;
                  *(undefined4 *)(plVar10 + 2) = 0;
                  *(undefined8 *)*plVar10 = 1;
                  *(undefined4 *)(plVar10 + 1) = 1;
                  plVar10 = (long *)ptr[1];
                  if (plVar10 == (long *)0x0) {
                    if ((*(long *)(*ptr + 0x48) != 0) &&
                       (plVar10 = (long *)FUN_100bf3540(0x58,"../src/snlic/sn_crypto_helper_02.c",
                                                        0x1fe), plVar10 != (long *)0x0)) {
                      lVar9 = *ptr;
                      *plVar10 = lVar9;
                      iVar7 = (**(code **)(lVar9 + 0x48))(plVar10);
                      if (iVar7 != 0) {
                        ptr[1] = (long)plVar10;
                        goto LAB_100ba9b80;
                      }
                      FUN_100bf3910(plVar10);
                    }
                    ptr[1] = 0;
                    bVar6 = false;
                  }
                  else {
LAB_100ba9b80:
                    pcVar11 = *(code **)(*plVar10 + 0x60);
                    if (pcVar11 == (code *)0x0) {
                      bVar6 = false;
                    }
                    else if (*plVar10 == *plVar12) {
                      if ((plVar10 == plVar12) || (iVar7 = (*pcVar11)(plVar10,plVar12), iVar7 != 0))
                      {
                        if (plVar4 == (long *)0x0) {
                          *(undefined4 *)(ptr + 3) = 0;
                          *(undefined4 *)(ptr + 4) = 0;
                        }
                        else {
                          lVar9 = FUN_100bac3a0(ptr + 2,plVar4);
                          if (lVar9 == 0) {
                            bVar6 = false;
                            goto LAB_100ba9c50;
                          }
                        }
                        if (plVar5 == (long *)0x0) {
                          *(undefined4 *)(ptr + 6) = 0;
                          *(undefined4 *)(ptr + 7) = 0;
                          uVar13 = 0;
                          bVar2 = false;
                          goto LAB_100ba9c61;
                        }
                        lVar9 = FUN_100bac3a0(ptr + 5,plVar5);
                        bVar2 = false;
                        uVar13 = 0;
                        bVar6 = false;
                        if (lVar9 != 0) goto LAB_100ba9c61;
                      }
                      else {
                        bVar6 = false;
                      }
                    }
                    else {
                      bVar6 = false;
                    }
                  }
                }
              }
              goto LAB_100ba9c50;
            }
          }
          bVar6 = false;
        }
      }
    }
  }
LAB_100ba9c50:
  bVar2 = bVar6;
  FUN_100baa410(ptr);
  ptr = (long *)0x0;
  uVar13 = local_64;
LAB_100ba9c61:
  *param_1 = ptr;
  if (plVar12 != (long *)0x0) {
    if (*(code **)(*plVar12 + 0x50) != (code *)0x0) {
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    FUN_100bf3910(plVar12);
  }
  if (!bVar2) {
    FUN_100ba8db0(puVar8);
  }
  plVar12 = local_38;
  if (local_38 != (long *)0x0) {
    if ((*local_38 != 0) && ((*(byte *)((long)local_38 + 0x14) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)((long)plVar12 + 0x14) & 1) == 0) {
      *plVar12 = 0;
    }
    else {
      FUN_100bf3910(plVar12);
    }
  }
  plVar12 = local_40;
  if (local_40 != (long *)0x0) {
    if ((*local_40 != 0) && ((*(byte *)((long)local_40 + 0x14) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)((long)plVar12 + 0x14) & 1) == 0) {
      *plVar12 = 0;
    }
    else {
      FUN_100bf3910(plVar12);
    }
  }
  plVar12 = local_48;
  if (local_48 != (long *)0x0) {
    if ((*local_48 != 0) && ((*(byte *)((long)local_48 + 0x14) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)((long)plVar12 + 0x14) & 1) == 0) {
      *plVar12 = 0;
    }
    else {
      FUN_100bf3910(plVar12);
    }
  }
  plVar12 = local_60;
  if (local_60 != (long *)0x0) {
    if ((*local_60 != 0) && ((*(byte *)((long)local_60 + 0x14) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)((long)plVar12 + 0x14) & 1) == 0) {
      *plVar12 = 0;
    }
    else {
      FUN_100bf3910(plVar12);
    }
  }
  plVar12 = local_50;
  if (local_50 != (long *)0x0) {
    if ((*local_50 != 0) && ((*(byte *)((long)local_50 + 0x14) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)((long)plVar12 + 0x14) & 1) == 0) {
      *plVar12 = 0;
    }
    else {
      FUN_100bf3910(plVar12);
    }
  }
  plVar12 = local_58;
  if (local_58 != (long *)0x0) {
    if ((*local_58 != 0) && ((*(byte *)((long)local_58 + 0x14) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)((long)plVar12 + 0x14) & 1) == 0) {
      *plVar12 = 0;
    }
    else {
      FUN_100bf3910(plVar12);
    }
  }
  return uVar13;
}

