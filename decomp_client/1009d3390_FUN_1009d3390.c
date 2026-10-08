
bool FUN_1009d3390(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar8 = *param_1;
    if (*(ulong *)(param_2[-1] + 0x20) < *(ulong *)(lVar8 + 0x20)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar8;
    }
    break;
  case 3:
    lVar8 = *param_1;
    lVar2 = param_1[1];
    uVar3 = *(ulong *)(lVar2 + 0x20);
    uVar4 = *(ulong *)(lVar8 + 0x20);
    lVar5 = param_2[-1];
    if (uVar3 < uVar4) {
      if (*(ulong *)(lVar5 + 0x20) < uVar3) {
        *param_1 = lVar5;
        param_2[-1] = lVar8;
      }
      else {
        *param_1 = lVar2;
        param_1[1] = lVar8;
        if (*(ulong *)(param_2[-1] + 0x20) < uVar4) {
          param_1[1] = param_2[-1];
          param_2[-1] = lVar8;
        }
      }
    }
    else if (*(ulong *)(lVar5 + 0x20) < uVar3) {
      param_1[1] = lVar5;
      param_2[-1] = lVar2;
      lVar8 = *param_1;
      if (*(ulong *)(param_1[1] + 0x20) < *(ulong *)(lVar8 + 0x20)) {
        *param_1 = param_1[1];
        param_1[1] = lVar8;
      }
    }
    break;
  case 4:
    FUN_1009d32b0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    plVar10 = param_1 + 2;
    plVar1 = param_1 + 3;
    FUN_1009d32b0(param_1,param_1 + 1,plVar10,plVar1,param_3);
    lVar8 = param_1[3];
    if (*(ulong *)(param_2[-1] + 0x20) < *(ulong *)(lVar8 + 0x20)) {
      *plVar1 = param_2[-1];
      param_2[-1] = lVar8;
      lVar8 = *plVar1;
      lVar2 = *plVar10;
      if (*(ulong *)(lVar8 + 0x20) < *(ulong *)(lVar2 + 0x20)) {
        *plVar10 = lVar8;
        *plVar1 = lVar2;
        lVar2 = param_1[1];
        if (*(ulong *)(lVar8 + 0x20) < *(ulong *)(lVar2 + 0x20)) {
          param_1[1] = lVar8;
          param_1[2] = lVar2;
          lVar2 = *param_1;
          if (*(ulong *)(lVar8 + 0x20) < *(ulong *)(lVar2 + 0x20)) {
            *param_1 = lVar8;
            param_1[1] = lVar2;
          }
        }
      }
    }
    break;
  default:
    lVar8 = *param_1;
    lVar2 = param_1[1];
    uVar3 = *(ulong *)(lVar2 + 0x20);
    uVar4 = *(ulong *)(lVar8 + 0x20);
    lVar5 = param_1[2];
    uVar6 = *(ulong *)(lVar5 + 0x20);
    lVar7 = lVar5;
    if (uVar3 < uVar4) {
      if (uVar6 < uVar3) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar2;
        param_1[1] = lVar8;
        if (uVar4 <= uVar6) goto LAB_1009d3549;
        param_1[1] = lVar5;
      }
      param_1[2] = lVar8;
      lVar7 = lVar8;
    }
    else if (uVar6 < uVar3) {
      param_1[1] = lVar5;
      param_1[2] = lVar2;
      lVar7 = lVar2;
      if (*(ulong *)(lVar5 + 0x20) < uVar4) {
        *param_1 = lVar5;
        param_1[1] = lVar8;
      }
    }
LAB_1009d3549:
    lVar8 = 0;
    if (param_1 + 3 != param_2) {
      iVar9 = 0;
      plVar10 = param_1 + 3;
      do {
        lVar2 = *plVar10;
        lVar5 = lVar8;
        if (*(ulong *)(lVar2 + 0x20) < *(ulong *)(lVar7 + 0x20)) {
          do {
            lVar7 = lVar5;
            *(undefined8 *)((long)param_1 + lVar7 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x10);
            if (lVar7 == -0x10) break;
            lVar5 = lVar7 + -8;
          } while (*(ulong *)(lVar2 + 0x20) <
                   *(ulong *)(*(long *)((long)param_1 + lVar7 + 8) + 0x20));
          *(long *)((long)param_1 + lVar7 + 0x10) = lVar2;
          iVar9 = iVar9 + 1;
          if (iVar9 == 8) {
            return plVar10 + 1 == param_2;
          }
        }
        if (plVar10 + 1 == param_2) {
          return true;
        }
        lVar7 = *plVar10;
        lVar8 = lVar8 + 8;
        plVar10 = plVar10 + 1;
      } while( true );
    }
  }
  return true;
}

