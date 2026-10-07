
undefined1 FUN_1004b8f70(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  iVar1 = *param_2;
  if (iVar1 - 5U < 5) {
    uVar6 = FUN_1004b93e0(param_1,param_2);
  }
  else {
    uVar2 = param_2[3];
    uVar8 = uVar2 >> 0x10 ^ uVar2;
    uVar9 = (ulong)((uVar8 >> 8 ^ uVar8) & 0xff);
    plVar13 = (long *)(param_1 + 0x18 + uVar9 * 8);
    plVar3 = *(long **)(param_1 + 0x18 + uVar9 * 8);
    plVar10 = (long *)0x0;
    plVar11 = plVar13;
    if (plVar3 != (long *)0x0) {
      plVar12 = plVar3;
      do {
        plVar10 = plVar12;
        if (*(uint *)(plVar12 + 7) == uVar2) break;
        plVar4 = (long *)*plVar12;
        plVar10 = (long *)0x0;
        plVar11 = plVar12;
        plVar12 = plVar4;
      } while (plVar4 != (long *)0x0);
    }
    if (iVar1 == 4) {
      if (plVar10 == (long *)0x0) {
        uVar6 = 1;
        if (uVar2 == 0) {
          FUN_1004b95a0(param_1);
        }
      }
      else {
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",3,"[0x%08X] Confirm_Redraw: redraw one window",
                        (int)plVar10[7]);
          plVar10 = (long *)*plVar11;
        }
        if (((*(uint *)(plVar10 + 9) & 0x20) == 0) || (plVar10[0xe] == 0)) {
          if (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x868) != 0) {
            *(undefined1 *)((long)plVar10 + 0x21) = 1;
          }
          uVar6 = 1;
          if ((*(uint *)(plVar10 + 9) & 0x41) == 0) {
            FUN_1004bf6a0(param_1 + 0x1030,plVar10 + 0xb);
          }
        }
        else {
          *(undefined1 *)((long)plVar10 + 0x7c) = 1;
          uVar6 = 1;
        }
      }
    }
    else {
      uVar6 = 0;
      if ((uVar2 != 0) && (plVar3 != (long *)0x0)) {
        do {
          plVar10 = plVar3;
          if (*(uint *)(plVar10 + 7) == uVar2) {
            switch(iVar1) {
            case 1:
              goto switchD_1004b9102_caseD_1;
            case 2:
              if ((int)plVar10[6] != param_2[8]) {
                return 0;
              }
              if (param_2[1] != 1) {
                return 0;
              }
              if (((int)plVar10[5] == 2) && (*(int *)((long)plVar10 + 0x2c) == param_2[2])) {
                plVar10[5] = 0;
              }
              local_48 = param_2[4];
              iStack_44 = param_2[5];
              iStack_40 = param_2[6];
              iStack_3c = param_2[7];
              if ((*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x868) != 0) &&
                 (*(char *)(param_1 + 0x1050) == '\0')) {
                return 1;
              }
              FUN_1004bf6a0(param_1 + 0x1030,&local_48);
              plVar10 = (long *)*plVar13;
              goto LAB_1004b9392;
            case 3:
              if ((int)plVar10[6] != param_2[4]) {
                return 0;
              }
              if ((*(byte *)(plVar10 + 9) & 0x20) == 0) {
                return 0;
              }
              if (plVar10[0xe] == 0) {
                return 0;
              }
              if (param_2[5] != 0) {
                if ((char)plVar10[4] == '\0') {
                  FUN_1004bd1b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
                  plVar10 = (long *)*plVar13;
                }
                *(undefined1 *)((long)plVar10 + 0x7c) = 1;
                return 1;
              }
              return 0;
            default:
              if (DAT_1011b55f8 < 3) {
                return 0;
              }
              FUN_1008e3970("CHRSERVER","ChrToolSrv",3," UNKNOWN CONFIRM");
              return 0;
            case 10:
              cVar7 = (char)param_2[4];
              if (cVar7 == '\0') {
                cVar7 = '\0';
              }
              else if (cVar7 != *(char *)((long)plVar10 + 0x34)) {
                if (((*(uint *)(plVar10 + 9) & 0x20) == 0) || (plVar10[0xe] == 0)) {
                  if (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x868) != 0) {
                    *(undefined1 *)((long)plVar10 + 0x21) = 1;
                  }
                  if ((*(uint *)(plVar10 + 9) & 0x41) == 0) {
                    FUN_1004bf6a0(param_1 + 0x1030,plVar10 + 0xb);
                    cVar7 = (char)param_2[4];
                    plVar10 = (long *)*plVar13;
                  }
                }
                else {
                  *(undefined1 *)((long)plVar10 + 0x7c) = 1;
                }
              }
              *(char *)((long)plVar10 + 0x34) = cVar7;
              return 0;
            }
          }
          plVar3 = (long *)*plVar10;
          plVar13 = plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
switchD_1004b9102_caseD_1:
  if ((int)plVar10[6] != param_2[6]) {
    return 0;
  }
  if ((int)plVar10[1] == 0) goto LAB_1004b9341;
  FUN_1004bd1b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  lVar5 = *plVar13;
  *(undefined4 *)(lVar5 + 0x28) = 0;
  *(undefined4 *)(lVar5 + 0x2c) = 0;
  uVar2 = *(uint *)(lVar5 + 0x48);
  if ((uVar2 & 0x41) == 0) {
    if ((uVar2 & 0x20) == 0) {
      if ((*(int *)(lVar5 + 0x60) <= *(int *)(lVar5 + 0x58)) ||
         (*(int *)(lVar5 + 100) <= *(int *)(lVar5 + 0x5c))) goto LAB_1004b931d;
    }
    else if ((*(int *)(lVar5 + 100) <= *(int *)(lVar5 + 0x5c)) ||
            ((*(int *)(lVar5 + 0x60) <= *(int *)(lVar5 + 0x58) || (*(long *)(lVar5 + 0x70) != 0))))
    goto LAB_1004b931d;
  }
  else {
LAB_1004b931d:
    FUN_1004b7870(*(undefined8 *)(param_1 + 0x10),param_2[3]);
  }
  plVar10 = (long *)*plVar13;
  if (((uVar2 & 0x60) == 0x20) && (plVar10[0xe] != 0)) {
    *(undefined1 *)((long)plVar10 + 0x7c) = 1;
  }
LAB_1004b9341:
  *(int *)(plVar10 + 1) = param_2[4];
  *(int *)((long)plVar10 + 0xc) = param_2[5];
  if (((int)plVar10[5] == 1) && (*(int *)((long)plVar10 + 0x2c) == param_2[2])) {
    plVar10[5] = 0;
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x868) != 0) {
    *(undefined2 *)(plVar10 + 4) = 0x101;
  }
  *(undefined1 *)((long)plVar10 + 0x23) = 1;
  *(bool *)((long)plVar10 + 0x24) = param_2[7] != 0;
LAB_1004b9392:
  FUN_1004bf6a0(param_1 + 0x1030,plVar10 + 0xb);
  return 1;
}

