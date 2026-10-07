
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409f60(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  double dVar10;
  undefined8 in_stack_ffffffffffffffb8;
  timeval *ptVar11;
  undefined4 uVar12;
  timeval local_38;
  
  uVar12 = (undefined4)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0061d7c0);
  if (DAT_0061d7e8 - 1U < 2) {
    iVar6 = FUN_0040c2e0(param_1);
    if ((iVar6 == 0) || (iVar6 = FUN_0040c8a0(param_1), iVar6 != 0)) {
      DAT_0061c700 = -1.0;
      if (DAT_0061d7e8 == 1) {
        iVar6 = FUN_0040baf0(1,0);
        cVar9 = iVar6 == 0;
        if ((bool)cVar9) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                       "Error: Coherence: Can\'t send Tg request CHR_MODE_STARTED");
        }
        FUN_0040c3c0(param_1,1);
        iVar6 = FUN_0040c4d0(param_1);
        if (iVar6 == 0) {
          cVar9 = cVar9 + '\x01';
          FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Coherence: Can\'t start Coherence tracking");
        }
        DAT_0061d7e8 = 2;
        if (cVar9 == '\0') {
          local_38.tv_sec._0_4_ = 1;
          ptVar11 = &local_38;
          pcVar1 = *(code **)(PTR_prl_xfunctions_0061bd60 + 0x88);
          uVar7 = FUN_00409c10(*param_1);
          lVar2 = *param_1;
          (*pcVar1)(lVar2,*(undefined8 *)
                           ((long)*(int *)(lVar2 + 0xe0) * 0x80 + 0x10 + *(long *)(lVar2 + 0xe8)),
                    uVar7,6,0x20,0,ptVar11,1);
          uVar12 = (undefined4)((ulong)ptVar11 >> 0x20);
          if (1 < *(int *)PTR___log_level_0061bd30) {
            pcVar8 = "Coherence: started";
            goto LAB_0040a229;
          }
        }
        else {
          FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Coherence: started with errors");
        }
      }
    }
    else {
      gettimeofday(&local_38,(__timezone_ptr_t)0x0);
      dVar10 = (double)CONCAT44(local_38.tv_sec._4_4_,(undefined4)local_38.tv_sec) +
               (double)local_38.tv_usec * _DAT_004169e0;
      if ((_DAT_00417960 <= DAT_0061c700) || (NAN(DAT_0061c700) || NAN(_DAT_00417960))) {
        if (DAT_0061c700 <= dVar10) {
          FUN_0040cbe0(param_1,0);
          if (DAT_0061d7e8 == 1) {
            iVar6 = FUN_0040baf0(3,1);
            if (iVar6 == 0) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                           "Error: Coherence: Can\'t send Tg request CHR_MODE_CANNOTSTART");
            }
            pcVar8 = "Coherence: can not start";
            if (1 < *(int *)PTR___log_level_0061bd30) goto LAB_0040a4bc;
          }
          else {
            iVar6 = FUN_0040baf0(0,1);
            if (iVar6 == 0) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                           "Error: Coherence: Can\'t send Tg request CHR_MODE_STOPPED");
            }
            if (1 < *(int *)PTR___log_level_0061bd30) {
              pcVar8 = "Coherence: forced to stop";
LAB_0040a4bc:
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,pcVar8);
            }
          }
          DAT_0061d7e8 = 0;
        }
        else {
          pcVar8 = "Coherence: Waiting for plugin";
          if (1 < *(int *)PTR___log_level_0061bd30) {
LAB_0040a229:
            FUN_0040fffa(&DAT_0041913e,"prlcc",2,pcVar8);
          }
        }
      }
      else {
        DAT_0061c700 = dVar10 + _DAT_00418830;
      }
    }
  }
  if (DAT_0061c708 == 1) {
    FUN_0040cbe0(param_1,1);
    iVar6 = FUN_0040c100(param_1);
    if (iVar6 == 0) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Coherence: Can\'t start");
      goto LAB_00409fd6;
    }
    DAT_0061d7e8 = 1;
    pcVar8 = "Coherence: starting...";
    if (1 < *(int *)PTR___log_level_0061bd30) {
LAB_0040a100:
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,pcVar8);
    }
  }
  else {
    if (DAT_0061c708 == 0) {
      FUN_00409c50(param_1);
      goto LAB_00409fd6;
    }
    if (DAT_0061c708 == 3) {
      FUN_00409d90(&DAT_0061d7b0,1);
      FUN_00409f30(&DAT_0061d7b0,FUN_0040a570);
      if (1 < *(int *)PTR___log_level_0061bd30) {
        pcVar8 = "Coherence: resumed";
        goto LAB_0040a100;
      }
    }
  }
  uVar5 = DAT_0061d814;
  uVar4 = DAT_0061d810;
  uVar3 = DAT_0061d80c;
  if (DAT_0061c70c != 2) {
    if (DAT_0061c70c == 4) {
      pcVar8 = "Coherence: WNDCONTENT_CTRL handled";
      iVar6 = *(int *)PTR___log_level_0061bd30;
      goto joined_r0x0040a36f;
    }
    if ((DAT_0061c70c != 7) || (*(int *)PTR___log_level_0061bd30 < 2)) goto LAB_00409fd6;
    pcVar8 = "Coherence: CFGCHANGED_CTRL handled";
    goto LAB_0040a08c;
  }
  switch(DAT_0061d808) {
  default:
    if (*(int *)PTR___log_level_0061bd30 < 2) goto LAB_00409fd6;
    pcVar8 = "Coherence: Unknown window control %d";
    uVar3 = DAT_0061d808;
    goto LAB_0040a049;
  case 1:
  case 6:
    pcVar8 = "Coherence: DASH_CONTROL_MINIMIZE handled";
    iVar6 = *(int *)PTR___log_level_0061bd30;
    break;
  case 2:
    FUN_0040c5b0(param_1,DAT_0061d80c);
    pcVar8 = "Coherence: DASH_CONTROL_ACTIVATE handled (window %X)";
    if (*(int *)PTR___log_level_0061bd30 < 2) goto LAB_00409fd6;
LAB_0040a049:
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,pcVar8,uVar3);
    goto LAB_00409fd6;
  case 3:
    pcVar8 = "Coherence: DASH_CONTROL_GETICON handled";
    if (*(int *)PTR___log_level_0061bd30 < 2) goto LAB_00409fd6;
    goto LAB_0040a08c;
  case 4:
    pcVar8 = "Coherence: DASH_CONTROL_RESTORE handled";
    iVar6 = *(int *)PTR___log_level_0061bd30;
    break;
  case 5:
    pcVar8 = "Coherence: DASH_CONTROL_CLOSE handled";
    iVar6 = *(int *)PTR___log_level_0061bd30;
    break;
  case 7:
    (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x128))
              (*param_1,DAT_0061d80c,DAT_0061d810,DAT_0061d814);
    if (1 < *(int *)PTR___log_level_0061bd30) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                   "Coherence: DASH_CONTROL_MOVE handled (hwnd=%X x=%d y=%d)",uVar3,uVar4,
                   CONCAT44(uVar12,uVar5));
    }
    goto LAB_00409fd6;
  }
joined_r0x0040a36f:
  if (1 < iVar6) {
LAB_0040a08c:
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,pcVar8);
  }
LAB_00409fd6:
  DAT_0061c70c = 0xffffffff;
  DAT_0061c708 = 0xffffffff;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0061d7c0);
  return;
}

