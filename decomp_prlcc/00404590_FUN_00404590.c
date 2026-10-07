
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00404590(uint *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  __uid_t _Var4;
  long lVar5;
  char *pcVar6;
  ssize_t sVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int local_134;
  double local_130;
  double local_128;
  timeval local_118 [12];
  undefined4 local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  int local_48;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [12];
  
  puVar2 = PTR_prl_xfunctions_0061bd60;
  dVar13 = DAT_004169d8 * (double)*param_1;
  lVar5 = (**(code **)PTR_prl_xfunctions_0061bd60)(0);
  if (lVar5 == 0) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Control Center: can\'t open connection to XServer!"
                );
  }
  else {
    iVar3 = (**(code **)(puVar2 + 8))(lVar5,"RANDR",local_3c,local_40,local_44);
    if (iVar3 == 0) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Control Center: can\'t open %s extension!",
                   "RANDR");
    }
    else {
      iVar3 = (**(code **)(puVar2 + 8))(lVar5,"ParallelsControl",&local_48,local_4c,local_50);
      if ((iVar3 == 0) && (0 < *(int *)PTR___log_level_0061bd30)) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",1,"Warning: Control Center: can\'t open %s extension!",
                     "ParallelsControl");
      }
      _DAT_0061d518 = local_48;
      DAT_0061d510 = lVar5;
      if (local_48 != 0) {
        _Var4 = getuid();
        if (*(undefined8 **)(lVar5 + 0x968) != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)(lVar5 + 0x968))(lVar5);
        }
        if (*(ulong *)(lVar5 + 0xb8) < *(long *)(lVar5 + 0xb0) + 8U) {
          (**(code **)(puVar2 + 0xf8))(lVar5);
        }
        puVar1 = *(undefined1 **)(lVar5 + 0xb0);
        *(undefined1 **)(lVar5 + 0xa0) = puVar1;
        *puVar1 = 0x1d;
        *(undefined2 *)(puVar1 + 2) = 2;
        *(long *)(lVar5 + 0xb0) = *(long *)(lVar5 + 0xb0) + 8;
        *(long *)(lVar5 + 0x98) = *(long *)(lVar5 + 0x98) + 1;
        *puVar1 = (char)local_48;
        puVar1[1] = 0x1d;
        *(__uid_t *)(puVar1 + 4) = _Var4;
        iVar3 = (**(code **)(puVar2 + 0xf0))(lVar5,local_118,0,0);
        bVar11 = (int)local_118[0].tv_usec == 0;
        if (*(long *)(lVar5 + 0x968) != 0) {
          (**(code **)(*(long *)(lVar5 + 0x968) + 8))(lVar5);
        }
        if (iVar3 == 0 || bVar11) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                       "Error: Control Center: other session already exists. Will exit now.");
          FUN_00403e30();
          return 0;
        }
      }
      if (1 < *(int *)PTR___log_level_0061bd30) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Control Center: starting . . .");
      }
      local_134 = 0;
      while (bVar11 = false, DAT_0061c698 != 0) {
        while (iVar3 = FUN_00403c90(&DAT_0061d510), iVar3 == 0) {
          if ((!bVar11) && (bVar11 = true, 1 < *(int *)PTR___log_level_0061bd30)) {
            pcVar6 = getenv("DISPLAY");
            FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Control Center: suspended (DISPLAY=%s)",pcVar6);
          }
          sleep(1);
          if (DAT_0061c698 == 0) goto LAB_00404729;
        }
        if ((DAT_0061c698 == 0) || (iVar3 = FUN_004041c0(DAT_0061c69c), iVar3 < 0)) break;
        if (bVar11) {
          pcVar6 = "Control Center: resumed";
          if (1 < *(int *)PTR___log_level_0061bd30) {
LAB_0040479d:
            FUN_0040fffa(&DAT_0041913e,"prlcc",2,pcVar6);
          }
        }
        else if (1 < *(int *)PTR___log_level_0061bd30) {
          pcVar6 = "Control Center: started";
          goto LAB_0040479d;
        }
        lVar8 = DAT_0061d520;
        if (DAT_0061c698 != 0) {
          for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x28)) {
            iVar3 = (**(code **)(lVar8 + 8))(&DAT_0061d510);
            *(int *)(lVar8 + 0x30) = iVar3;
            local_134 = local_134 + (uint)(iVar3 == 0);
          }
          if ((local_134 != 0) && (0 < *(int *)PTR___log_level_0061bd30)) {
            FUN_0040fffa(&DAT_0041913e,"prlcc",1,
                         "Warning: Control Center: can\'t initialize all components");
          }
        }
        gettimeofday(local_118,(__timezone_ptr_t)0x0);
        local_128 = (double)CONCAT44(local_118[0].tv_usec._4_4_,(int)local_118[0].tv_usec) *
                    _DAT_004169e0 + (double)local_118[0].tv_sec;
        local_130 = dVar13;
        while( true ) {
          if (DAT_0061c698 == 0) goto LAB_00404a35;
          iVar3 = FUN_00403c90(&DAT_0061d510);
          if (iVar3 == 0) break;
          gettimeofday(local_118,(__timezone_ptr_t)0x0);
          dVar15 = (double)local_118[0].tv_sec +
                   (double)CONCAT44(local_118[0].tv_usec._4_4_,(int)local_118[0].tv_usec) *
                   _DAT_004169e0;
          if (dVar13 - DAT_004169d8 <= local_130) {
            local_130 = dVar13;
            local_128 = dVar15;
          }
          while (iVar3 = (**(code **)(puVar2 + 200))(lVar5), lVar8 = DAT_0061d520, 0 < iVar3) {
            (**(code **)(puVar2 + 0xc0))(lVar5);
            for (lVar8 = DAT_0061d520; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x28)) {
              if ((*(int *)(lVar8 + 0x30) != 0) && (*(code **)(lVar8 + 0x20) != (code *)0x0)) {
                (**(code **)(lVar8 + 0x20))(&DAT_0061d510);
              }
            }
          }
          for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x28)) {
            while ((*(int *)(lVar8 + 0x30) != 0 &&
                   (*(double *)(lVar8 + 0x38) - DAT_004169d8 <= dVar15))) {
              (**(code **)(lVar8 + 0x10))(&DAT_0061d510);
              *(double *)(lVar8 + 0x38) = dVar13 + local_128;
              lVar8 = *(long *)(lVar8 + 0x28);
              if (lVar8 == 0) goto LAB_00404956;
            }
          }
LAB_00404956:
          gettimeofday(local_118,(__timezone_ptr_t)0x0);
          if ((local_130 < 0.0) ||
             (dVar14 = ((double)local_118[0].tv_sec +
                       (double)CONCAT44(local_118[0].tv_usec._4_4_,(int)local_118[0].tv_usec) *
                       _DAT_004169e0) - dVar15, dVar14 < 0.0)) {
            lVar8 = DAT_0061d520;
            if (1 < *(int *)PTR___log_level_0061bd30) {
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                           "Control Center: Time skew detected, reseting time.");
              lVar8 = DAT_0061d520;
            }
            for (; local_130 = dVar13, lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x28)) {
              *(undefined8 *)(lVar8 + 0x38) = 0;
            }
          }
          else {
            dVar12 = dVar13;
            if (local_130 < dVar13) {
              dVar12 = dVar13 - local_130;
            }
            dVar12 = dVar12 - dVar14;
            if (0.0 < dVar12) {
              if (DAT_0061d4e8 == 0) {
                usleep((__useconds_t)(long)(dVar13 * _DAT_004169e8));
              }
              else {
                iVar3 = poll(DAT_0061d4f0,(ulong)DAT_0061d4e8,(int)(long)(dVar12 * _DAT_004169f0));
                if ((0 < iVar3) && (DAT_0061d4e8 != 0)) {
                  uVar10 = 0;
                  do {
                    local_54 = 0;
                    while (sVar7 = read(DAT_0061d4f0[uVar10].fd,&local_54,4), 0 < sVar7) {
                      *(double *)(*(long *)(uVar10 * 8 + DAT_0061d4f8) + 0x38) = dVar15;
                    }
                    uVar9 = (int)uVar10 + 1;
                    uVar10 = (ulong)uVar9;
                  } while (uVar9 < DAT_0061d4e8);
                }
              }
            }
            gettimeofday(local_118,(__timezone_ptr_t)0x0);
            local_130 = ((double)CONCAT44(local_118[0].tv_usec._4_4_,(int)local_118[0].tv_usec) *
                         _DAT_004169e0 + (double)local_118[0].tv_sec) - local_128;
          }
        }
        lVar8 = DAT_0061d520;
        if (DAT_0061c698 == 0) {
LAB_00404a35:
          FUN_00403e30();
          FUN_00404140(DAT_0061c69c);
          if (*(int *)PTR___log_level_0061bd30 < 2) {
            return 0;
          }
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Control Center: stopped");
          return 0;
        }
        while (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x30) == 0) {
            lVar8 = *(long *)(lVar8 + 0x28);
          }
          else {
            (**(code **)(lVar8 + 0x18))(&DAT_0061d510);
            lVar8 = *(long *)(lVar8 + 0x28);
          }
        }
        FUN_00404140(DAT_0061c69c);
      }
LAB_00404729:
      FUN_00403e30();
    }
  }
  return 0;
}

