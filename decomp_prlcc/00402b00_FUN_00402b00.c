
undefined8 FUN_00402b00(int param_1,char **param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  key_t kVar5;
  __pid_t _Var6;
  ulong uVar7;
  ssize_t sVar8;
  char *pcVar9;
  char *__s;
  char cVar10;
  int *piVar11;
  ulong uVar12;
  int local_1fc;
  char local_1f8 [256];
  char *local_f8 [4];
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  char *local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined1 local_88 [48];
  pollfd local_58 [2];
  pthread_t local_48;
  void *local_40 [2];
  
  local_40[0] = (void *)0x0;
  local_48 = 0;
  FUN_0040f1b2(2);
  local_1fc = 500;
switchD_00402b74_caseD_69:
  iVar3 = getopt(param_1,param_2,"l:r:t:m:hv");
  puVar2 = PTR_optarg_0061bd58;
  if (iVar3 == -1) {
    local_f8[2] = (char *)0x0;
    local_b0 = 0;
    uVar12 = 0;
    local_f8[0] = "/usr/bin/X";
    local_f8[1] = "-version";
    local_f8[3] = (char *)&DAT_0061d09c;
    local_d8 = &DAT_0061d0a0;
    local_d0 = &DAT_0061d0a4;
    local_c8 = &DAT_0061d0a8;
    local_c0 = "/usr/bin/compiz";
    local_b8 = "--version";
    local_a8 = &g_CompizVerMaj;
    local_a0 = &g_CompizVerMin;
    local_98 = &g_CompizVerPatch;
    local_90 = &g_CompizVerSnap;
    do {
      iVar3 = pipe(&local_58[0].fd);
      if (iVar3 == 0) {
        uVar7 = uVar12 & 0xffffffff;
        _Var6 = fork();
        if (_Var6 == 0) {
          dup2(local_58[0]._4_4_,1);
          dup2(local_58[0]._4_4_,2);
          close(local_58[0].fd);
          close(local_58[0]._4_4_);
          execvp(local_f8[uVar7 * 7],local_f8 + uVar7 * 7);
          if (1 < *(int *)PTR___log_level_0061bd30) {
            FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Can\'t execute %s\n",local_f8[uVar7 * 7]);
            return 1;
          }
          return 1;
        }
        close(local_58[0]._4_4_);
        iVar3 = poll(local_58,1,3000);
        if (iVar3 < 1) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",0);
        }
        else {
          sVar8 = read(local_58[0].fd,local_1f8,0xff);
          if (0 < (int)sVar8) {
            local_1f8[(int)sVar8] = '\0';
            pcVar9 = strtok(local_1f8,"\n");
            if (pcVar9 != (char *)0x0) {
              cVar10 = *pcVar9;
              __s = pcVar9;
              while (cVar10 != '\0') {
                while (cVar10 == ' ') {
                  __s = pcVar9 + 1;
                  cVar10 = *__s;
                  pcVar9 = __s;
                  if (cVar10 == '\0') goto LAB_004031ae;
                }
                pcVar9 = pcVar9 + 1;
                cVar10 = *pcVar9;
              }
LAB_004031ae:
              sscanf(__s,"%d.%d.%d.%d",local_f8[uVar7 * 7 + 3],local_f8[uVar7 * 7 + 4],
                     local_f8[uVar7 * 7 + 5],local_f8[uVar7 * 7 + 6]);
            }
          }
        }
        wait((void *)0x0);
        close(local_58[0].fd);
      }
      else {
        FUN_0040fffa(&DAT_0041913e,"prlcc",0);
      }
      puVar2 = PTR___log_level_0061bd30;
      uVar12 = uVar12 + 1;
      if (uVar12 == 2) {
        if (((1 < *(int *)PTR___log_level_0061bd30) &&
            (FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Detected XServer version: %d.%d.%d.%d",
                          DAT_0061d09c,DAT_0061d0a0,DAT_0061d0a4,DAT_0061d0a8), 1 < *(int *)puVar2))
           && (FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Detected Compiz version: %d.%d.%d.%d",
                            g_CompizVerMaj,g_CompizVerMin,g_CompizVerPatch,g_CompizVerSnap),
              1 < *(int *)puVar2)) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"%s starting . . .","Control Center");
        }
        signal(0xf,FUN_00402ab0);
        signal(2,FUN_00402ab0);
        iVar3 = FUN_0040e780(g_OTGLink);
        if (iVar3 == 0) {
          if (1 < *(int *)puVar2) {
            FUN_0040fffa(&DAT_0041913e,"prlcc",2);
          }
          g_OTGOn = 1;
          FUN_0040db80(local_88,1,0);
          if (g_OTGOn != 0) {
            FUN_0040dd40(g_OTGLink,"parallels.ToolsControlCenter.guest.lin",
                         "Parallels Control Center Service",local_88,"initialized",0,0);
          }
          FUN_0040d5e0(param_1);
          iVar3 = pthread_create(&local_48,(pthread_attr_t *)0x0,FUN_004029b0,(void *)0x0);
          if (iVar3 != 0) {
            FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                         "Error: Failed to start thread for checking kernel modules");
          }
          FUN_00403b30();
          kVar5 = ftok("/usr/bin/prlcc",0x4d2);
          iVar3 = FUN_00404430(kVar5);
          if (iVar3 != 0) {
            FUN_00403d80(PTR_g_DynResService_0061bd38);
            FUN_00403d80(PTR_g_CoherenceService_0061bd20);
            FUN_00403d80(PTR_g_UTService_0061bd08);
            FUN_004040b0(local_1fc);
          }
        }
        else {
          FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Could not open link to Open Tools Gate: %d",
                       iVar3);
        }
        if (local_48 != 0) {
          pthread_join(local_48,local_40);
        }
        FUN_00404250();
        FUN_00403b00();
        FUN_0040d320();
        if (g_OTGOn != 0) {
          FUN_0040dd40(g_OTGLink,"parallels.ToolsControlCenter.guest.lin",0,0,"stopped",0,0);
          g_OTGOn = 0;
          FUN_0040e6c0(g_OTGLink);
          if (*(int *)puVar2 < 2) {
            return 0;
          }
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Open Tools Gate link was closed.");
        }
        if (*(int *)puVar2 < 2) {
          return 0;
        }
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"%s closed","Control Center");
        return 0;
      }
    } while( true );
  }
  switch(iVar3) {
  case 0x68:
    goto switchD_00402b74_caseD_68;
  default:
    goto switchD_00402b74_caseD_69;
  case 0x6c:
    uVar4 = __strtol_internal(*(undefined8 *)PTR_optarg_0061bd58,0,10);
    if (uVar4 < 4) {
      FUN_0040f1b2(uVar4);
    }
    goto switchD_00402b74_caseD_69;
  case 0x6d:
    piVar11 = (int *)PTR___log_level_0061bd30;
    break;
  case 0x72:
    iVar3 = __strtol_internal(*(undefined8 *)PTR_optarg_0061bd58,0,10);
    if (iVar3 - 100U < 0x385) {
      local_1fc = iVar3;
    }
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Poll period was set to %d ms",local_1fc);
    }
    goto switchD_00402b74_caseD_69;
  case 0x74:
    iVar3 = __strtol_internal(*(undefined8 *)PTR_optarg_0061bd58,0,10);
    piVar11 = (int *)PTR___log_level_0061bd30;
    if (iVar3 - 1000U < 0x2329) {
      iVar1 = *(int *)PTR___log_level_0061bd30;
      g_DynResConfirmationTimeMs = iVar3;
    }
    else {
      iVar1 = *(int *)PTR___log_level_0061bd30;
    }
    if (1 < iVar1) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"DynRes confirmation timeout was set to %d ms",
                   g_DynResConfirmationTimeMs);
    }
    break;
  case 0x76:
    FUN_0040f1b2(3);
    goto switchD_00402b74_caseD_69;
  }
  iVar3 = __strtol_internal(*(undefined8 *)puVar2,0,10);
  g_DynResUseRandr12IfAvailable = (uint)(0 < iVar3);
  if (1 < *piVar11) {
    pcVar9 = "Use";
    if (0 >= iVar3) {
      pcVar9 = "Not use";
    }
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,"%s Randr12 API",pcVar9);
  }
  goto switchD_00402b74_caseD_69;
switchD_00402b74_caseD_68:
  pcVar9 = *param_2;
  puts("Parallels Control Center service usage:");
  printf(" %s [options]\n",pcVar9);
  puts("Options:");
  puts(" -h   : This help");
  printf(" -r   : Service poll period (in milliseconds) [%u, %u], default: %d\n",100,1000,500);
  printf(" -t   : DynRes confirmation timeout (in milliseconds) [%u, %u], default: %d\n",1000,10000,
         2000);
  printf(" -m   : DynRes use Randr12 API if available, default: %d\n",
         (ulong)g_DynResUseRandr12IfAvailable);
  uVar4 = FUN_0040f1d4();
  printf(" -l   : Logging level [0, 3], default %d\n",(ulong)uVar4);
  puts(" -v   : Verbose logging, set log level to 3");
  return 0;
}

