
ulong FUN_10087f8e0(long param_1,int param_2,long param_3,int *param_4)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 local_55 [13];
  undefined1 local_48 [24];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  piVar2 = *(int **)(param_1 + 0x30);
  uVar4 = 1;
  local_30 = lVar1;
  if (99 < param_2) {
    if (0x7a < param_2) {
      if (param_2 == 0x7b) {
        if (*(int *)(param_1 + 0x18) != 0) {
          uVar4 = 1;
          if (param_4 == (int *)0x0) {
LAB_10087fb09:
            if (param_3 == 3) {
              uVar4 = (ulong)*(ushort *)(piVar2 + 8);
            }
            goto switchD_10087f92b_caseD_b;
          }
          uVar4 = 0;
          if (param_3 == 2) {
            *(int **)param_4 = piVar2 + 7;
          }
          else if (param_3 == 1) {
            *(undefined8 *)param_4 = *(undefined8 *)(piVar2 + 4);
          }
          else {
            if (param_3 != 0) goto LAB_10087fb09;
            *(undefined8 *)param_4 = *(undefined8 *)(piVar2 + 2);
          }
          goto LAB_10087fbd7;
        }
        uVar4 = 0;
        if (param_4 == (int *)0x0) goto switchD_10087f92b_caseD_b;
        *(char **)param_4 = "not initialized";
      }
switchD_10087f92b_caseD_2:
      uVar4 = 0;
      goto switchD_10087f92b_caseD_b;
    }
    switch(param_2) {
    case 100:
      uVar4 = 1;
      if (param_4 == (int *)0x0) goto switchD_10087f92b_caseD_b;
      *(undefined4 *)(param_1 + 0x18) = 1;
      uVar4 = 1;
      switch(param_3) {
      case 0:
        if (*(long *)(piVar2 + 2) != 0) {
          FUN_10081e1a0();
        }
        uVar5 = FUN_10087d050(param_4);
        *(undefined8 *)(piVar2 + 2) = uVar5;
        break;
      case 1:
        if (*(long *)(piVar2 + 4) != 0) {
          FUN_10081e1a0();
        }
        uVar5 = FUN_10087d050(param_4);
        *(undefined8 *)(piVar2 + 4) = uVar5;
        break;
      case 2:
        FUN_1008823b0(local_48,0x10,"%d.%d.%d.%d",(char)*param_4,*(undefined1 *)((long)param_4 + 1),
                      *(undefined1 *)((long)param_4 + 2),*(undefined1 *)((long)param_4 + 3));
        if (*(long *)(piVar2 + 2) != 0) {
          FUN_10081e1a0();
        }
        uVar5 = FUN_10087d050(local_48);
        *(undefined8 *)(piVar2 + 2) = uVar5;
        piVar2[7] = *param_4;
        break;
      case 3:
        FUN_1008823b0(local_55,0xd,"%d",*param_4);
        if (*(long *)(piVar2 + 4) != 0) {
          FUN_10081e1a0();
        }
        uVar5 = FUN_10087d050(local_55);
        *(undefined8 *)(piVar2 + 4) = uVar5;
        *(short *)(piVar2 + 8) = (short)*param_4;
        break;
      default:
        goto switchD_10087f92b_caseD_b;
      }
      break;
    case 0x65:
      uVar4 = 1;
      if (*piVar2 != 6) {
        iVar3 = FUN_10087fdb0(param_1,piVar2);
        uVar4 = (ulong)iVar3;
      }
      goto switchD_10087f92b_caseD_b;
    case 0x66:
      piVar2[6] = (int)param_3;
      break;
    default:
      goto switchD_10087f92b_caseD_2;
    case 0x69:
      uVar4 = 0xffffffffffffffff;
      if (*(int *)(param_1 + 0x18) != 0) {
        if (param_4 == (int *)0x0) {
          uVar4 = (ulong)*(int *)(param_1 + 0x28);
        }
        else {
          *param_4 = *(int *)(param_1 + 0x28);
          uVar4 = (ulong)*(int *)(param_1 + 0x28);
        }
      }
      goto switchD_10087f92b_caseD_b;
    }
    goto LAB_10087fbd7;
  }
  switch(param_2) {
  case 1:
    *piVar2 = 1;
    if (*(int *)(param_1 + 0x28) != -1) {
      _close(*(int *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar4 = 0;
    goto switchD_10087f92b_caseD_b;
  default:
    goto switchD_10087f92b_caseD_2;
  case 8:
    uVar4 = (ulong)*(int *)(param_1 + 0x1c);
    goto switchD_10087f92b_caseD_b;
  case 9:
    *(int *)(param_1 + 0x1c) = (int)param_3;
    break;
  case 0xb:
    goto switchD_10087f92b_caseD_b;
  case 0xc:
    if (*(long *)(piVar2 + 4) != 0) {
      FUN_10087db60(param_4,100,1);
    }
    if (*(long *)(piVar2 + 2) != 0) {
      FUN_10087db60(param_4,100,0);
    }
    FUN_10087db60(param_4,0x66,(long)piVar2[6],0);
    FUN_10087dd50(param_4,0xe,*(undefined8 *)(piVar2 + 0xe));
    break;
  case 0xf:
    *(undefined8 *)param_4 = *(undefined8 *)(piVar2 + 0xe);
  }
LAB_10087fbd7:
  uVar4 = 1;
switchD_10087f92b_caseD_b:
  if (lVar1 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

