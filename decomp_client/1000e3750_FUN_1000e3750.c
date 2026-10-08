
/* WARNING: Type propagation algorithm not settling */

void FUN_1000e3750(long *param_1)

{
  long *plVar1;
  long *plVar2;
  mach_port_t host;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  int *piVar8;
  long lVar9;
  uint *local_d0;
  uint *local_c8;
  mach_timespec_t local_c0;
  clock_serv_t local_b4 [33];
  
  lVar9 = param_1[0x1e] + 0x50;
  QMutex::lock();
  host = _mach_host_self();
  _host_get_clock_service(host,0,local_b4);
  _clock_get_time(local_b4[0],&local_c0);
  _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__1021e1c58,local_b4[0]);
  lVar3 = (**(code **)(*param_1 + 0x68))(param_1);
  plVar1 = param_1 + 0xe;
  puVar4 = (uint *)param_1[0xe];
  if (*(char *)(lVar3 + 0xc) == '\0') {
    if (1 < *puVar4) {
      FUN_1000e7920(plVar1,puVar4[1]);
      puVar4 = (uint *)*plVar1;
    }
    puVar7 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
    while( true ) {
      if (1 < *puVar4) {
        FUN_1000e7920(plVar1,puVar4[1]);
        puVar4 = (uint *)*plVar1;
      }
      if (puVar7 == puVar4 + (long)(int)puVar4[3] * 2 + 4) break;
      *(ulong *)(*(long *)(**(long **)puVar7 + 0x10) + 8) = (ulong)local_c0.tv_sec;
      puVar7 = puVar7 + 2;
    }
  }
  else {
    if (1 < *puVar4) {
      FUN_1000e7920(plVar1,puVar4[1]);
      puVar4 = (uint *)*plVar1;
    }
    plVar2 = param_1 + 0xb;
    puVar7 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
    while( true ) {
      if (1 < *puVar4) {
        FUN_1000e7920(plVar1,puVar4[1]);
        puVar4 = (uint *)*plVar1;
      }
      if (puVar7 == puVar4 + (long)(int)puVar4[3] * 2 + 4) break;
      piVar8 = (int *)0x0;
      if (**(long **)puVar7 != 0) {
        piVar8 = *(int **)(**(long **)puVar7 + 0x10);
      }
      puVar4 = (uint *)*plVar2;
      if ((int)puVar4[2] < (int)puVar4[3]) {
        lVar3 = 0;
        do {
          if (1 < *puVar4) {
            FUN_1000e6e10(plVar2,puVar4[1]);
            puVar4 = (uint *)*plVar2;
          }
          uVar5 = puVar4[2];
          if ((*(int *)(*(long *)(puVar4 + (lVar3 + (int)uVar5) * 2 + 4) + 0x30) == *piVar8) &&
             (*(int *)(*(long *)(puVar4 + (lVar3 + (int)uVar5) * 2 + 4) + 0x34) == piVar8[1])) {
            if (-1 < (int)lVar3) {
              if (1 < *puVar4) {
                FUN_1000e6e10(plVar2,puVar4[1]);
                puVar4 = (uint *)*plVar2;
                uVar5 = puVar4[2];
              }
              if (*(int *)(*(long *)(*(long *)(puVar4 + ((long)(int)lVar3 + (long)(int)uVar5) * 2 +
                                                        4) + 0x38) + 0xc) !=
                  *(int *)(*(long *)(*(long *)(puVar4 + ((long)(int)lVar3 + (long)(int)uVar5) * 2 +
                                                        4) + 0x38) + 8)) goto LAB_1000e3880;
            }
            break;
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < (long)(int)puVar4[3] - (long)(int)uVar5);
      }
      lVar3 = **(long **)puVar7;
      piVar8 = *(int **)(lVar3 + 0x10);
      uVar6 = (ulong)local_c0.tv_sec - *(long *)(piVar8 + 2);
      if (uVar6 < 0x3d) {
        if ((10 < uVar6) && ((char)piVar8[4] != '\0')) {
          *(undefined1 *)(piVar8 + 4) = 0;
          if (lVar3 == 0) {
            piVar8 = (int *)0x0;
          }
          if ((piVar8[1] != 0) || (*piVar8 != 0)) {
            local_b4[1] = 2;
            FUN_1000c4970(piVar8,0x86,local_b4 + 1,0x80,in_R8,in_R9,param_1,lVar9);
          }
        }
LAB_1000e3880:
        puVar7 = puVar7 + 2;
        puVar4 = (uint *)*plVar1;
      }
      else {
        if (lVar3 == 0) {
          piVar8 = (int *)0x0;
        }
        FUN_1000c4970(piVar8,0x6c,0,0,in_R8,in_R9,param_1,lVar9);
        local_d0 = puVar7;
        FUN_1000e5130(&local_c8,plVar1,&local_d0);
        puVar4 = (uint *)*plVar1;
        puVar7 = local_c8;
      }
    }
    if (puVar4[3] == puVar4[2]) {
      QTimer::stop();
    }
  }
  QMutex::unlock();
  return;
}

