
int FUN_100c6f030(long param_1,void *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *local_48;
  int local_40;
  int local_3c;
  
  local_3c = 0;
  if (((param_2 != (void *)0x0) && (piVar2 = *(int **)(param_1 + 0x30), piVar2 != (int *)0x0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    if (*piVar2 < 1) {
      local_3c = 0;
    }
    else {
      local_3c = *piVar2 - piVar2[1];
      if (param_3 < local_3c) {
        local_3c = param_3;
      }
      _memcpy(param_2,(void *)((long)piVar2 + (long)piVar2[1] + 0xc0),(long)local_3c);
      param_2 = (void *)((long)param_2 + (long)local_3c);
      param_3 = param_3 - local_3c;
      iVar4 = piVar2[1];
      piVar2[1] = local_3c + iVar4;
      if (*piVar2 == local_3c + iVar4) {
        piVar2[0] = 0;
        piVar2[1] = 0;
      }
    }
    if (0 < param_3) {
      piVar1 = piVar2 + 0x30;
      local_48 = param_2;
      local_40 = param_3;
      do {
        iVar4 = piVar2[2];
        do {
          if (iVar4 < 1) goto LAB_100c6f1c3;
          iVar4 = FUN_100c588a0(*(undefined8 *)(param_1 + 0x38),piVar2 + 0x40,0x1000);
          if (iVar4 < 1) {
            iVar5 = FUN_100c58820(*(undefined8 *)(param_1 + 0x38),8);
            if (iVar5 != 0) {
              if (local_3c == 0) {
                local_3c = iVar4;
              }
              goto LAB_100c6f1c3;
            }
            piVar2[2] = iVar4;
            iVar4 = FUN_100c669c0(piVar2 + 6,piVar1,piVar2);
            piVar2[4] = iVar4;
            piVar2[1] = 0;
            break;
          }
          FUN_100c66620(piVar2 + 6,piVar1,piVar2,piVar2 + 0x40,iVar4);
          piVar2[2] = 1;
          iVar4 = 1;
        } while (*piVar2 == 0);
        iVar4 = *piVar2;
        if (local_40 < *piVar2) {
          iVar4 = local_40;
        }
        if (iVar4 < 1) break;
        _memcpy(local_48,piVar1,(long)iVar4);
        local_3c = local_3c + iVar4;
        piVar2[1] = iVar4;
        local_48 = (void *)((long)local_48 + (long)iVar4);
        iVar5 = local_40 - iVar4;
        bVar3 = iVar4 <= local_40;
        local_40 = iVar5;
      } while (iVar5 != 0 && bVar3);
    }
LAB_100c6f1c3:
    FUN_100c58810(param_1,0xf);
    FUN_100c59780(param_1);
    if (local_3c == 0) {
      local_3c = piVar2[2];
    }
  }
  return local_3c;
}

