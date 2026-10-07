
void FUN_00405ce0(undefined8 *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  __uid_t _Var5;
  int iVar6;
  char *pcVar7;
  FILE *pFVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  undefined8 in_stack_ffffffffffffde00;
  uint uVar20;
  long local_21b8;
  long local_21a8;
  char **local_21a0;
  char local_2198 [4096];
  char local_1198 [4096];
  stat64 local_198;
  char *local_98;
  char *local_90;
  undefined1 local_88;
  undefined1 local_87;
  char *local_80;
  char *local_78;
  undefined1 local_70;
  undefined1 local_6f;
  char *local_68;
  char *local_60;
  uint *local_58;
  char *local_50;
  char *local_48;
  uint local_40;
  uint local_3c [3];
  
  uVar20 = (uint)((ulong)in_stack_ffffffffffffde00 >> 0x20);
  local_48 = (char *)0x0;
  local_50 = (char *)0x0;
  local_58 = (uint *)0x0;
  local_60 = (char *)0x0;
  local_3c[0] = 0;
  local_40 = 0;
  _Var5 = getuid();
  if (_Var5 != 0) {
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: ---->> STORE HEADS CONFIG...");
    }
    puVar18 = &local_40;
    pcVar12 = (char *)((ulong)uVar20 << 0x20);
    FUN_00404d30(*param_1,&local_48,&local_50,&local_58,&local_60,local_3c,puVar18,pcVar12);
    if (1 < *(int *)PTR___log_level_0061bd30) {
      puVar18 = local_58;
      pcVar12 = local_60;
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                   "Dynamic Resolution: detected Output {name=%s, vendor=%s, serial=%s, product=%s, width=%d, height=%d}"
                   ,local_48,local_50,local_58,local_60,local_3c[0],local_40);
    }
    if ((local_3c[0] == 0) || (local_40 == 0)) {
      local_40 = param_3;
      local_3c[0] = param_2;
    }
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: store heads config {%dx%d}...",
                   local_3c[0],local_40,puVar18,pcVar12);
    }
    cVar4 = FUN_00403a50(2);
    puVar3 = PTR_g_PrlGLibAPI_0061bd78;
    if (cVar4 != '\0') {
      lVar14 = (*(code *)**(undefined8 **)(PTR_g_PrlGLibAPI_0061bd78 + 0x70))();
      if (lVar14 == 0) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Dynamic Resolution:  can\'t init GConf engine")
        ;
      }
      else {
        local_68 = (char *)0x0;
        iVar6 = (**(code **)(*(long *)(puVar3 + 0x70) + 0x60))
                          (lVar14,"/desktop/gnome/screen/default/0",&local_68);
        if ((((iVar6 != 0) && (local_68 == (char *)0x0)) &&
            (iVar6 = (**(code **)(*(long *)(puVar3 + 0x70) + 0x58))
                               (lVar14,"/desktop/gnome/screen/default/0/resolution",&local_68),
            iVar6 != 0)) &&
           (((local_68 == (char *)0x0 &&
             (lVar17 = (**(code **)(*(long *)(puVar3 + 0x70) + 0x18))
                                 (lVar14,"/desktop/gnome/screen/default/0/resolution",&local_68),
             local_68 == (char *)0x0)) && (lVar17 != 0)))) {
          snprintf((char *)&local_198,0xff,"%dx%d",(ulong)param_2,(ulong)param_3);
          (**(code **)(*(long *)(puVar3 + 0x70) + 0x48))(lVar17,&local_198);
          (**(code **)(*(long *)(puVar3 + 0x70) + 0x50))
                    (lVar14,"/desktop/gnome/screen/default/0/resolution",lVar17,&local_68);
          if (local_68 == (char *)0x0) {
            if (1 < *(int *)PTR___log_level_0061bd30) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution:  updated GConf key \'%s\'",
                           "/desktop/gnome/screen/default/0/resolution");
            }
          }
          else if ((0 < *(int *)PTR___log_level_0061bd30) &&
                  (FUN_0040fffa(&DAT_0041913e,"prlcc",1,
                                "Warning: Dynamic Resolution:  can\'t update GConf key \'%s\'",
                                "/desktop/gnome/screen/default/0/resolution"),
                  0 < *(int *)PTR___log_level_0061bd30)) {
            FUN_0040fffa(&DAT_0041913e,"prlcc",1,"Warning: Dynamic Resolution:  %s",
                         *(undefined8 *)(local_68 + 8));
          }
          (**(code **)(*(long *)(puVar3 + 0x70) + 0x40))(lVar17);
        }
        if (local_68 != (char *)0x0) {
          (**(code **)(*(long *)(puVar3 + 0x100) + 8))();
        }
        (**(code **)(*(long *)(puVar3 + 0x70) + 8))(lVar14);
      }
    }
    local_88 = 0;
    local_87 = 1;
    local_70 = 1;
    local_6f = 0;
    local_98 = ".gnome2";
    local_90 = "monitors.xml";
    local_80 = ".config";
    local_78 = "monitors.xml";
    local_21a0 = &local_98;
    do {
      pcVar12 = *local_21a0;
      pcVar7 = getenv("HOME");
      snprintf(local_2198,0x1000,"%s/%s",pcVar7,pcVar12);
      snprintf(local_1198,0x1000,"%s/%s",local_2198,local_21a0[1]);
      pFVar8 = fopen64(local_1198,"r");
      if (pFVar8 == (FILE *)0x0) {
        if (*(char *)(local_21a0 + 2) != '\0') {
          iVar6 = __xstat64(1,local_2198,&local_198);
          if (iVar6 != 0) {
            mkdir(local_2198,0x1c0);
          }
          pcVar12 = strdup("monitors");
          uVar13 = FUN_00411110(pcVar12);
          local_21b8 = FUN_00410500(uVar13,0x80);
          pcVar12 = strdup("configuration");
          uVar13 = FUN_00411010(local_21b8,pcVar12,1);
          uVar13 = FUN_00410500(uVar13,0x80);
          pcVar12 = strdup("clone");
          uVar15 = FUN_00411010(uVar13,pcVar12,1);
          uVar15 = FUN_00410500(uVar15,0x80);
          pcVar12 = strdup("output");
          uVar13 = FUN_00411010(uVar13,pcVar12,1);
          uVar13 = FUN_00410500(uVar13,0x80);
          pcVar12 = strdup("1");
          pcVar7 = strdup("version");
          uVar16 = FUN_00410500(local_21b8,0x20);
          FUN_00410d30(uVar16,pcVar7,pcVar12);
          pcVar12 = strdup("no");
          uVar15 = FUN_00410c00(uVar15,pcVar12);
          FUN_00410500(uVar15,0x40);
          pcVar12 = "default";
          if (local_48 != (char *)0x0) {
            pcVar12 = local_48;
          }
          pcVar12 = strdup(pcVar12);
          pcVar7 = strdup("name");
          uVar15 = FUN_00410500(uVar13,0x20);
          FUN_00410d30(uVar15,pcVar7,pcVar12);
          pcVar12 = "???";
          if (local_50 != (char *)0x0) {
            pcVar12 = local_50;
          }
          pcVar12 = strdup(pcVar12);
          pcVar7 = strdup("vendor");
          uVar15 = FUN_00411010(uVar13,pcVar7,1);
          uVar15 = FUN_00410500(uVar15,0x80);
          uVar15 = FUN_00410c00(uVar15,pcVar12);
          FUN_00410500(uVar15,0x40);
          pcVar12 = "0x0000";
          if (local_60 != (char *)0x0) {
            pcVar12 = local_60;
          }
          pcVar12 = strdup(pcVar12);
          pcVar7 = strdup("product");
          uVar15 = FUN_00411010(uVar13,pcVar7,1);
          uVar15 = FUN_00410500(uVar15,0x80);
          uVar15 = FUN_00410c00(uVar15,pcVar12);
          FUN_00410500(uVar15,0x40);
          puVar18 = (uint *)"0x00000000";
          if (local_58 != (uint *)0x0) {
            puVar18 = local_58;
          }
          pcVar12 = strdup((char *)puVar18);
          pcVar7 = strdup("serial");
          uVar15 = FUN_00411010(uVar13,pcVar7,1);
          uVar15 = FUN_00410500(uVar15,0x80);
          uVar15 = FUN_00410c00(uVar15,pcVar12);
          FUN_00410500(uVar15,0x40);
          pcVar12 = strdup("width");
          uVar15 = FUN_00411010(uVar13,pcVar12,1);
          FUN_00410500(uVar15,0x80);
          pcVar12 = strdup("height");
          uVar15 = FUN_00411010(uVar13,pcVar12,1);
          FUN_00410500(uVar15,0x80);
          pcVar12 = strdup("60");
          pcVar7 = strdup("rate");
          uVar15 = FUN_00411010(uVar13,pcVar7,1);
          uVar15 = FUN_00410500(uVar15,0x80);
          uVar15 = FUN_00410c00(uVar15,pcVar12);
          FUN_00410500(uVar15,0x40);
          pcVar12 = strdup("0");
          pcVar7 = strdup("x");
          uVar15 = FUN_00411010(uVar13,pcVar7,1);
          uVar15 = FUN_00410500(uVar15,0x80);
          uVar15 = FUN_00410c00(uVar15,pcVar12);
          FUN_00410500(uVar15,0x40);
          pcVar12 = strdup("0");
          pcVar7 = strdup("y");
          uVar15 = FUN_00411010(uVar13,pcVar7,1);
          uVar15 = FUN_00410500(uVar15,0x80);
          uVar15 = FUN_00410c00(uVar15,pcVar12);
          FUN_00410500(uVar15,0x40);
          pcVar12 = strdup("normal");
          pcVar7 = strdup("rotation");
          uVar15 = FUN_00411010(uVar13,pcVar7,1);
          uVar15 = FUN_00410500(uVar15,0x80);
          uVar15 = FUN_00410c00(uVar15,pcVar12);
          FUN_00410500(uVar15,0x40);
          pcVar12 = strdup("no");
          pcVar7 = strdup("reflect_x");
          uVar15 = FUN_00411010(uVar13,pcVar7,1);
          uVar15 = FUN_00410500(uVar15,0x80);
          uVar15 = FUN_00410c00(uVar15,pcVar12);
          FUN_00410500(uVar15,0x40);
          pcVar12 = strdup("no");
          pcVar7 = strdup("reflect_y");
          uVar15 = FUN_00411010(uVar13,pcVar7,1);
          uVar15 = FUN_00410500(uVar15,0x80);
          uVar15 = FUN_00410c00(uVar15,pcVar12);
          FUN_00410500(uVar15,0x40);
          pcVar12 = strdup("yes");
          pcVar7 = strdup("primary");
          uVar13 = FUN_00411010(uVar13,pcVar7,1);
          uVar13 = FUN_00410500(uVar13,0x80);
          uVar13 = FUN_00410c00(uVar13,pcVar12);
          FUN_00410500(uVar13,0x40);
          goto LAB_00405fed;
        }
      }
      else {
        local_21b8 = FUN_00415350(pFVar8);
        if (local_21b8 == 0) {
          if (0 < *(int *)PTR___log_level_0061bd30) {
            FUN_0040fffa(&DAT_0041913e,"prlcc",1,"Warning: Dynamic Resolution:  can\'t parse %s",
                         local_1198);
          }
        }
        else if (1 < *(int *)PTR___log_level_0061bd30) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution:  parsed %s",local_1198);
        }
        fclose(pFVar8);
LAB_00405fed:
        if (local_21b8 != 0) {
          cVar4 = *(char *)((long)local_21a0 + 0x11);
          local_21a8 = local_21b8;
          if ((cVar4 == '\0') &&
             (local_21a8 = FUN_004108e0(local_21b8,"configuration"), local_21a8 == 0)) {
LAB_004062a0:
            if (0 < *(int *)PTR___log_level_0061bd30) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",1,"Warning: Dynamic Resolution:  can\'t update %s",
                           local_1198);
              FUN_00411200(local_21b8);
              goto LAB_0040616d;
            }
          }
          else {
            bVar1 = false;
            lVar14 = 0;
            lVar19 = 0;
            lVar17 = 0;
            bVar2 = false;
            do {
              for (lVar9 = FUN_004108e0(local_21a8,"output"); lVar9 != 0;
                  lVar9 = *(long *)(lVar9 + 0x20)) {
                lVar10 = FUN_004108e0(lVar9,"width");
                lVar11 = FUN_004108e0(lVar9,"height");
                if ((((lVar10 != 0) && (lVar11 != 0)) &&
                    (pcVar12 = (char *)FUN_004107b0(lVar9,&DAT_00417841), lVar14 = lVar10,
                    lVar17 = lVar9, lVar19 = lVar11, local_48 != (char *)0x0)) &&
                   ((pcVar12 != (char *)0x0 && (iVar6 = strcmp(local_48,pcVar12), iVar6 == 0)))) {
                  snprintf((char *)&local_198,0xff,"%d",(ulong)local_3c[0]);
                  pcVar12 = strdup((char *)&local_198);
                  uVar13 = FUN_00410c00(lVar10,pcVar12);
                  FUN_00410500(uVar13,0x40);
                  snprintf((char *)&local_198,0xff,"%d",(ulong)local_40);
                  pcVar12 = strdup((char *)&local_198);
                  uVar13 = FUN_00410c00(lVar11,pcVar12);
                  FUN_00410500(uVar13,0x40);
                  bVar1 = true;
                  bVar2 = true;
                }
              }
            } while ((cVar4 == '\0') && (local_21a8 = *(long *)(local_21a8 + 0x20), local_21a8 != 0)
                    );
            if ((bVar1) || (((lVar17 == 0 || (lVar14 == 0)) || (lVar19 == 0)))) {
              if (!bVar2) goto LAB_004062a0;
            }
            else {
              if (local_48 != (char *)0x0) {
                snprintf((char *)&local_198,0xff,"%s");
                pcVar12 = strdup((char *)&local_198);
                pcVar7 = strdup("name");
                uVar13 = FUN_00410500(lVar17,0x20);
                FUN_00410d30(uVar13,pcVar7,pcVar12);
              }
              snprintf((char *)&local_198,0xff,"%d",(ulong)local_3c[0]);
              pcVar12 = strdup((char *)&local_198);
              uVar13 = FUN_00410c00(lVar14,pcVar12);
              FUN_00410500(uVar13,0x40);
              snprintf((char *)&local_198,0xff,"%d",(ulong)local_40);
              pcVar12 = strdup((char *)&local_198);
              uVar13 = FUN_00410c00(lVar19,pcVar12);
              FUN_00410500(uVar13,0x40);
            }
            pFVar8 = fopen64(local_1198,"w");
            if (pFVar8 == (FILE *)0x0) goto LAB_004062a0;
            pcVar12 = (char *)FUN_004119f0(local_21b8);
            fputs(pcVar12,pFVar8);
            fclose(pFVar8);
            free(pcVar12);
            if (1 < *(int *)PTR___log_level_0061bd30) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution:  updated %s",local_1198);
            }
          }
          FUN_00411200(local_21b8);
        }
      }
LAB_0040616d:
      local_21a0 = local_21a0 + 3;
    } while (local_21a0 != &local_68);
    if (local_48 != (char *)0x0) {
      free(local_48);
    }
    if (local_50 != (char *)0x0) {
      free(local_50);
    }
    if (local_60 != (char *)0x0) {
      free(local_60);
    }
    if (local_58 != (uint *)0x0) {
      free(local_58);
    }
  }
  return;
}

