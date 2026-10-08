
ulong FUN_100c5f600(long param_1,int param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  undefined1 local_32;
  undefined1 local_31;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (param_2 < 0x88) {
    switch(param_2) {
    case 1:
      if (plVar1[5] == 0) {
        return 0;
      }
      plVar1[3] = 0;
      plVar1[2] = 0;
      break;
    case 2:
      if (param_4 == (long *)0x0) {
        return 1;
      }
      if (*(long *)(param_4[6] + 0x10) == 0) {
        bVar13 = *(int *)(param_4[6] + 8) != 0;
      }
      else {
        bVar13 = false;
      }
      return (ulong)bVar13;
    case 8:
      return (long)*(int *)(param_1 + 0x1c);
    case 9:
      *(int *)(param_1 + 0x1c) = (int)param_3;
      return 1;
    case 10:
      if (*plVar1 == 0) {
        return 0;
      }
      return *(ulong *)(*(long *)(*plVar1 + 0x30) + 0x10);
    case 0xb:
      return 1;
    case 0xc:
      *(long *)(param_4[6] + 0x20) = plVar1[4];
      return 1;
    case 0xd:
      if (plVar1[5] == 0) {
        return 0;
      }
      return plVar1[2];
    }
switchD_100c5f63e_caseD_b:
    return 0;
  }
  uVar12 = 0x7fffffffffffffff;
  switch(param_2) {
  case 0x88:
    if (*plVar1 == 0) {
      if (param_3 == 0) {
        FUN_100c62ee0(0x20,0x67,0x7d,"bss_bio.c",0x1f8);
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
        if (plVar1[4] != param_3) {
          if (plVar1[5] != 0) {
            FUN_100bf3910();
            plVar1[5] = 0;
          }
          plVar1[4] = param_3;
          uVar12 = 1;
        }
      }
    }
    else {
      FUN_100c62ee0(0x20,0x67,0x7b,"bss_bio.c",0x1f5);
      uVar12 = 0;
    }
    break;
  case 0x89:
    uVar12 = plVar1[4];
    break;
  case 0x8a:
    if ((*plVar1 == 0) && (plVar2 = (long *)param_4[6], *plVar2 == 0)) {
      if (plVar1[5] == 0) {
        lVar5 = FUN_100bf3540((int)plVar1[4],"bss_bio.c",0x2ba);
        plVar1[5] = lVar5;
        if (lVar5 == 0) {
          FUN_100c62ee0(0x20,0x79,0x41,"bss_bio.c",700);
          return 0;
        }
        plVar1[3] = 0;
        plVar1[2] = 0;
      }
      if (plVar2[5] == 0) {
        lVar5 = FUN_100bf3540((int)plVar2[4],"bss_bio.c",0x2c4);
        plVar2[5] = lVar5;
        if (lVar5 == 0) {
          FUN_100c62ee0(0x20,0x79,0x41,"bss_bio.c",0x2c6);
          return 0;
        }
        plVar2[3] = 0;
        plVar2[2] = 0;
      }
      *plVar1 = (long)param_4;
      *(undefined4 *)(plVar1 + 1) = 0;
      plVar1[6] = 0;
      *plVar2 = param_1;
      *(undefined4 *)(plVar2 + 1) = 0;
      plVar2[6] = 0;
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined4 *)(param_4 + 3) = 1;
      uVar12 = 1;
    }
    else {
      FUN_100c62ee0(0x20,0x79,0x7b,"bss_bio.c",0x2b5);
      uVar12 = 0;
    }
    break;
  case 0x8b:
    uVar12 = 1;
    if (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      uVar12 = 1;
      if (lVar5 != 0) {
        puVar3 = *(undefined8 **)(lVar5 + 0x30);
        *puVar3 = 0;
        *(undefined4 *)(lVar5 + 0x18) = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        *plVar1 = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        plVar1[3] = 0;
        plVar1[2] = 0;
        uVar12 = 1;
      }
    }
    break;
  case 0x8c:
    uVar12 = 0;
    if ((*plVar1 != 0) && (uVar12 = 0, (int)plVar1[1] == 0)) {
      uVar12 = plVar1[4] - plVar1[2];
    }
    break;
  case 0x8d:
    uVar12 = plVar1[6];
    break;
  case 0x8e:
    *(undefined4 *)(plVar1 + 1) = 1;
    uVar12 = 1;
    break;
  case 0x8f:
    FUN_100c58810(param_1,0xf);
    if (*(int *)(param_1 + 0x18) == 0) {
      return 0;
    }
    lVar5 = *(long *)(**(long **)(param_1 + 0x30) + 0x30);
    *(undefined8 *)(lVar5 + 0x30) = 0;
    uVar6 = *(ulong *)(lVar5 + 0x10);
    if (uVar6 == 0) {
      iVar4 = FUN_100c5f490(param_1,&local_32,1);
      return (long)iVar4;
    }
    lVar10 = *(long *)(lVar5 + 0x18);
    uVar12 = *(ulong *)(lVar5 + 0x20) - lVar10;
    if (lVar10 + uVar6 <= *(ulong *)(lVar5 + 0x20)) {
      uVar12 = uVar6;
    }
    goto LAB_100c5fc03;
  case 0x90:
    if (-1 < (long)param_3) {
      uVar12 = param_3;
    }
    FUN_100c58810(param_1,0xf);
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      lVar5 = *(long *)(**(long **)(param_1 + 0x30) + 0x30);
      *(undefined8 *)(lVar5 + 0x30) = 0;
      uVar8 = *(ulong *)(lVar5 + 0x10);
      if (uVar8 == 0) {
        iVar4 = FUN_100c5f490(param_1,&local_31,1);
        uVar6 = (ulong)iVar4;
      }
      else {
        lVar10 = *(long *)(lVar5 + 0x18);
        uVar6 = *(ulong *)(lVar5 + 0x20) - lVar10;
        if (lVar10 + uVar8 <= *(ulong *)(lVar5 + 0x20)) {
          uVar6 = uVar8;
        }
        if (param_4 != (long *)0x0) {
          *param_4 = lVar10 + *(long *)(lVar5 + 0x28);
        }
      }
    }
    if ((long)uVar6 < (long)uVar12) {
      uVar12 = uVar6;
    }
    if (0 < (long)uVar12) {
      lVar5 = *(long *)(**(long **)(param_1 + 0x30) + 0x30);
      lVar10 = *(long *)(lVar5 + 0x10) - uVar12;
      *(long *)(lVar5 + 0x10) = lVar10;
      if (lVar10 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
      else {
        lVar7 = *(long *)(lVar5 + 0x18) + uVar12;
        lVar10 = 0;
        if (lVar7 != *(long *)(lVar5 + 0x20)) {
          lVar10 = lVar7;
        }
        *(long *)(lVar5 + 0x18) = lVar10;
      }
    }
    break;
  case 0x91:
    FUN_100c58810(param_1,0xf);
    if (*(int *)(param_1 + 0x18) == 0) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(lVar5 + 0x30) = 0;
    if (*(int *)(lVar5 + 8) != 0) {
      FUN_100c62ee0(0x20,0x7a,0x7c,"bss_bio.c",0x1b4);
      return 0xffffffffffffffff;
    }
    uVar6 = *(ulong *)(lVar5 + 0x20);
    uVar8 = uVar6 - *(long *)(lVar5 + 0x10);
    if (uVar8 == 0) {
      FUN_100c58830(param_1,10);
      return 0xffffffffffffffff;
    }
    uVar11 = *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x18);
    uVar12 = 0;
    if (uVar6 <= uVar11) {
      uVar12 = uVar6;
    }
    lVar10 = uVar11 - uVar12;
    uVar12 = uVar6 - lVar10;
    if (lVar10 + uVar8 <= uVar6) {
      uVar12 = uVar8;
    }
LAB_100c5fc03:
    if (param_4 != (long *)0x0) {
      *param_4 = lVar10 + *(long *)(lVar5 + 0x28);
    }
    break;
  case 0x92:
    if (-1 < (long)param_3) {
      uVar12 = param_3;
    }
    FUN_100c58810(param_1,0xf);
    uVar6 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      *(undefined8 *)(lVar5 + 0x30) = 0;
      if (*(int *)(lVar5 + 8) == 0) {
        uVar8 = *(ulong *)(lVar5 + 0x20);
        uVar11 = uVar8 - *(long *)(lVar5 + 0x10);
        if (uVar11 == 0) {
          FUN_100c58830(param_1,10);
          uVar6 = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x18);
          uVar6 = 0;
          if (uVar8 <= uVar9) {
            uVar6 = uVar8;
          }
          lVar10 = uVar9 - uVar6;
          uVar6 = uVar8 - lVar10;
          if (lVar10 + uVar11 <= uVar8) {
            uVar6 = uVar11;
          }
          if (param_4 != (long *)0x0) {
            *param_4 = lVar10 + *(long *)(lVar5 + 0x28);
          }
        }
      }
      else {
        FUN_100c62ee0(0x20,0x7a,0x7c,"bss_bio.c",0x1b4);
        uVar6 = 0xffffffffffffffff;
      }
    }
    if ((long)uVar6 < (long)uVar12) {
      uVar12 = uVar6;
    }
    if (0 < (long)uVar12) {
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + 0x10);
      *plVar1 = *plVar1 + uVar12;
    }
    break;
  case 0x93:
    plVar1[6] = 0;
    uVar12 = 1;
    break;
  default:
    goto switchD_100c5f63e_caseD_b;
  }
  return uVar12;
}

