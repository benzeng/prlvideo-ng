
undefined8 FUN_0040a5d0(long param_1)

{
  undefined8 *puVar1;
  char *__s1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  size_t sVar9;
  void *__ptr;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  undefined8 in_stack_fffffffffffffdf8;
  undefined4 uVar18;
  char *local_1f0;
  char *local_1e8;
  char **local_1d0;
  char **local_1c8;
  char **local_1c0;
  char local_1b8 [256];
  undefined1 local_b8 [48];
  char *local_88;
  char *local_80;
  undefined8 local_78;
  char *local_68;
  undefined8 local_60;
  char local_58 [8];
  char local_50 [16];
  long local_40 [2];
  
  uVar18 = (undefined4)((ulong)in_stack_fffffffffffffdf8 >> 0x20);
  local_58 = (char  [8])s_prlcompiz_004187ed._0_8_;
  local_50._0_2_ = s_prlcompiz_004187ed._8_2_;
  if ((*(int *)(param_1 + 8) == 0) || (iVar5 = FUN_0040bab0(), iVar5 == 0)) {
    pcVar11 = "Error: Coherence: Can\'t initialize";
    uVar13 = 0;
  }
  else {
    iVar5 = FUN_0040be60();
    if (iVar5 == 0) {
      if (*(int *)PTR___log_level_0061bd30 < 2) {
        return 0;
      }
      pcVar11 = "Coherence: not supported";
      uVar13 = 2;
    }
    else {
      DAT_0061d818 = FUN_00403f30(g_CoherenceService);
      if (DAT_0061d818 == 0) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Coherence: Can\'t add coherence agent pipe");
        return 0;
      }
      iVar5 = pthread_mutex_init((pthread_mutex_t *)&DAT_0061d7c0,(pthread_mutexattr_t *)0x0);
      if (iVar5 == 0) {
        lVar6 = FUN_00409f30(&DAT_0061d7b0,FUN_0040a570);
        if (lVar6 == 0) {
          pthread_mutex_destroy((pthread_mutex_t *)&DAT_0061d7c0);
          pcVar11 = "Error: Coherence: Can\'t start service thread";
          uVar13 = 0;
        }
        else {
          lVar6 = FUN_00409f30(&DAT_0061d7a8,FUN_0040b2d0);
          if (lVar6 == 0) {
            pthread_mutex_destroy((pthread_mutex_t *)&DAT_0061d7c0);
            FUN_00409d90(&DAT_0061d7b0,1);
            pcVar11 = "Error: Coherence: Can\'t start commands thread";
            uVar13 = 0;
          }
          else {
            lVar6 = FUN_00409f30(&DAT_0061d7a0,FUN_0040b150);
            if (lVar6 != 0) {
              FUN_0040db80(local_b8,1,0);
              FUN_0040dc60("parallels.Coherence.guest.lin","Parallels Coherence Service",local_b8,0,
                           0,0);
              if ((int)(*(uint *)PTR_g_CompizVerMaj_0061bce8 * 10000000 +
                        *(uint *)PTR_g_CompizVerMin_0061bd40 * 100000 +
                        *(int *)PTR_g_CompizVerSnap_0061bd88 +
                       *(int *)PTR_g_CompizVerPatch_0061bd68 * 1000) < 0xdea82) {
                snprintf(local_1b8,0x100,"%s_%d_%d_%d_%d",local_58,
                         (ulong)*(uint *)PTR_g_CompizVerMaj_0061bce8,
                         (ulong)*(uint *)PTR_g_CompizVerMin_0061bd40,
                         CONCAT44(uVar18,*(int *)PTR_g_CompizVerPatch_0061bd68),
                         *(int *)PTR_g_CompizVerSnap_0061bd88);
              }
              else {
                snprintf(local_1b8,0x100,"%s_core_%d_%d_%d_%d",local_58,0,9,CONCAT44(uVar18,9),0);
              }
              local_1e8 = local_1b8;
              local_1f0 = local_58;
              cVar4 = FUN_00403a50(2);
              if ((cVar4 != '\0') &&
                 (0xac5cf < *(int *)PTR_g_CompizVerMaj_0061bce8 * 10000000 +
                            *(int *)PTR_g_CompizVerMin_0061bd40 * 100000 +
                            *(int *)PTR_g_CompizVerSnap_0061bd88 +
                            *(int *)PTR_g_CompizVerPatch_0061bd68 * 1000)) {
                local_78 = 0;
                local_88 = "/apps/compiz-1/general/screen0/options/active_plugins";
                local_80 = "/apps/compiz/general/allscreens/options/active_plugins";
                lVar6 = (*(code *)**(undefined8 **)(PTR_g_PrlGLibAPI_0061bd78 + 0x70))();
                if (lVar6 == 0) {
                  FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Can\'t init GConf engine");
                }
                else {
                  if (local_88 != (char *)0x0) {
                    local_1c0 = &local_80;
                    do {
                      local_40[0] = 0;
                      pcVar11 = local_1c0[-1];
                      lVar8 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x18))
                                        (lVar6,pcVar11,local_40);
                      if ((local_40[0] == 0) && (lVar8 != 0)) {
                        puVar7 = (undefined8 *)
                                 (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x28))
                                           (lVar8);
                        if (1 < *(int *)PTR___log_level_0061bd30) {
                          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: GConf key \'%s\' values:"
                                       ,pcVar11);
                        }
                        for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)puVar7[1]) {
                          lVar10 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x20))
                                             (*puVar7);
                          if (1 < *(int *)PTR___log_level_0061bd30) {
                            FUN_0040fffa(&DAT_0041913e,"prlcc",2," %s",lVar10);
                          }
                          if (lVar10 != 0) {
                            (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x10) + 8))(lVar10);
                          }
                        }
                        puVar7 = (undefined8 *)
                                 (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x28))
                                           (lVar8);
                        if (puVar7 == (undefined8 *)0x0) {
                          uVar13 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x28))
                                             (lVar8);
LAB_0040b0a0:
                          if (1 < *(int *)PTR___log_level_0061bd30) {
                            FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: appending %s value",
                                         local_1e8);
                          }
                          lVar10 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x38))
                                             (1);
                          if (lVar10 != 0) {
                            (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x48))
                                      (lVar10,local_1e8);
                            (*(code *)**(undefined8 **)(PTR_g_PrlGLibAPI_0061bd78 + 0x10))
                                      (uVar13,lVar10);
                          }
                        }
                        else {
                          bVar2 = true;
                          do {
                            uVar13 = *puVar7;
                            pcVar16 = (char *)(**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 +
                                                                    0x70) + 0x20))(uVar13);
                            if (pcVar16 != (char *)0x0) {
                              sVar9 = strlen(pcVar16);
                              if ((8 < sVar9) && (iVar5 = strncmp(pcVar16,local_1f0,9), iVar5 == 0))
                              {
                                (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x48))
                                          (uVar13,local_1e8);
                                bVar2 = false;
                              }
                              (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x10) + 8))
                                        (pcVar16);
                            }
                            puVar7 = (undefined8 *)puVar7[1];
                          } while (puVar7 != (undefined8 *)0x0);
                          uVar13 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x28))
                                             (lVar8);
                          if (bVar2) goto LAB_0040b0a0;
                          if (1 < *(int *)PTR___log_level_0061bd30) {
                            FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: setting %s value",
                                         local_1e8);
                          }
                        }
                        (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x50))
                                  (lVar6,pcVar11,lVar8,local_40);
                        if (local_40[0] != 0) {
                          FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                                       "Error: Coherence: can\'t set GConf key \'%s\' value",pcVar11
                                      );
                          FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Coherence: %s",
                                       *(undefined8 *)(local_40[0] + 8));
                        }
                        (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 0x40))(lVar8);
                      }
                      if (local_40[0] != 0) {
                        (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x100) + 8))();
                      }
                      pcVar11 = *local_1c0;
                      local_1c0 = local_1c0 + 1;
                    } while (pcVar11 != (char *)0x0);
                  }
                  (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x70) + 8))(lVar6);
                }
              }
              cVar4 = FUN_00403a50(4);
              if ((cVar4 != '\0') &&
                 (0xac5cf < *(int *)PTR_g_CompizVerMaj_0061bce8 * 10000000 +
                            *(int *)PTR_g_CompizVerMin_0061bd40 * 100000 +
                            *(int *)PTR_g_CompizVerSnap_0061bd88 +
                            *(int *)PTR_g_CompizVerPatch_0061bd68 * 1000)) {
                local_60 = 0;
                local_80 = (char *)0x0;
                local_68 = "org.compiz.core";
                local_88 = "/org/compiz/profiles/unity/plugins/core/";
                (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x40) + 8))();
                if (local_68 != (char *)0x0) {
                  local_1c8 = &local_68;
                  pcVar11 = local_68;
                  do {
                    if (local_88 != (char *)0x0) {
                      local_1d0 = &local_88;
                      pcVar16 = local_88;
LAB_0040aa39:
                      puVar7 = (undefined8 *)
                               (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xd0) + 0x28))();
                      __s1 = (char *)*puVar7;
                      while (__s1 != (char *)0x0) {
                        iVar5 = strcmp(__s1,pcVar11);
                        if (iVar5 == 0) {
                          lVar6 = (*(code *)**(undefined8 **)(PTR_g_PrlGLibAPI_0061bd78 + 0xd0))
                                            (pcVar11,pcVar16);
                          if (lVar6 != 0) {
                            lVar8 = (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0xd0) + 0x10)
                                    )(lVar6,"active-plugins");
                            if (1 < *(int *)PTR___log_level_0061bd30) {
                              FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                                           "GSettings key \'%s:%s%s\' values:",pcVar11,pcVar16,
                                           "active-plugins");
                            }
                            uVar15 = 0;
                            uVar12 = 0xffffffff;
                            if (lVar8 != 0) goto LAB_0040ab44;
                            __ptr = malloc(0x10);
                            lVar14 = 0;
                            lVar10 = 8;
                            goto LAB_0040abde;
                          }
                          break;
                        }
                        puVar1 = puVar7 + 1;
                        puVar7 = puVar7 + 1;
                        __s1 = (char *)*puVar1;
                      }
                      goto LAB_0040ac81;
                    }
LAB_0040ac9c:
                    pcVar11 = local_1c8[1];
                    local_1c8 = local_1c8 + 1;
                  } while (pcVar11 != (char *)0x0);
                }
              }
              if (*(int *)PTR___log_level_0061bd30 < 2) {
                return 1;
              }
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Coherence: initialized");
              return 1;
            }
            pthread_mutex_destroy((pthread_mutex_t *)&DAT_0061d7c0);
            FUN_00409d90(&DAT_0061d7b0,1);
            FUN_00409d90(&DAT_0061d7a8,1);
            pcVar11 = "Error: Coherence: Can\'t start agent commands thread";
            uVar13 = 0;
          }
        }
      }
      else {
        pcVar11 = "Error: Coherence: Can\'t init mutex";
        uVar13 = 0;
      }
    }
  }
  FUN_0040fffa(&DAT_0041913e,"prlcc",uVar13,pcVar11);
  return 0;
LAB_0040ab44:
  for (; pcVar16 = *(char **)(uVar15 + lVar8), pcVar16 != (char *)0x0; uVar15 = uVar15 + 8) {
    sVar9 = strlen(pcVar16);
    uVar17 = uVar12;
    if (8 < sVar9) {
      iVar5 = strncmp(pcVar16,local_1f0,9);
      uVar17 = uVar15 >> 3;
      if (iVar5 != 0) {
        uVar17 = uVar12;
      }
    }
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2," %s",pcVar16);
    }
    uVar12 = uVar17;
  }
  if ((int)uVar12 == -1) {
    iVar5 = (int)(uVar15 >> 3);
    __ptr = malloc((ulong)(iVar5 + 2) << 3);
    lVar14 = 0;
    lVar10 = 8;
    if (iVar5 != 0) {
      uVar12 = 0;
      do {
        uVar15 = uVar12 & 0xffffffff;
        uVar12 = uVar12 + 1;
        *(undefined8 *)((long)__ptr + uVar15 * 8) = *(undefined8 *)(lVar8 + uVar15 * 8);
      } while (uVar12 != (ulong)(iVar5 - 1) + 1);
      lVar14 = (uVar12 & 0xffffffff) << 3;
      lVar10 = (ulong)((int)uVar12 + 1) << 3;
    }
LAB_0040abde:
    *(char **)((long)__ptr + lVar14) = local_1e8;
    puVar3 = PTR_g_PrlGLibAPI_0061bd78;
    *(undefined8 *)(lVar10 + (long)__ptr) = 0;
    iVar5 = (**(code **)(*(long *)(puVar3 + 0xd0) + 0x18))(lVar6,"active-plugins",__ptr);
    if (1 < *(int *)PTR___log_level_0061bd30) {
      pcVar16 = "Failed";
      if (iVar5 != 0) {
        pcVar16 = "Success";
      }
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Appending %s value: %s",local_1e8,pcVar16);
    }
    free(__ptr);
    if (lVar8 == 0) goto LAB_0040ac71;
  }
  else {
    puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar12 * 8);
    (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x10) + 8))(*puVar7);
    pcVar16 = strdup(local_1e8);
    puVar3 = PTR_g_PrlGLibAPI_0061bd78;
    *puVar7 = pcVar16;
    iVar5 = (**(code **)(*(long *)(puVar3 + 0xd0) + 0x18))(lVar6,"active-plugins",lVar8);
    if (1 < *(int *)PTR___log_level_0061bd30) {
      pcVar16 = "Failed";
      if (iVar5 != 0) {
        pcVar16 = "Success";
      }
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Setting %s value: %s",local_1e8,pcVar16);
    }
  }
  (**(code **)(*(long *)(PTR_g_PrlGLibAPI_0061bd78 + 0x10) + 0x10))(lVar8);
LAB_0040ac71:
  (*(code *)**(undefined8 **)(PTR_g_PrlGLibAPI_0061bd78 + 0x40))(lVar6);
LAB_0040ac81:
  pcVar16 = local_1d0[1];
  local_1d0 = local_1d0 + 1;
  if (pcVar16 == (char *)0x0) goto LAB_0040ac9c;
  goto LAB_0040aa39;
}

