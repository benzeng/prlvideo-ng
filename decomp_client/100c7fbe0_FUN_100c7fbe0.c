
undefined8 FUN_100c7fbe0(long *param_1,undefined1 *param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  if ((puVar1 == (undefined8 *)0x0) || (pcVar9 = (code *)puVar1[3], pcVar9 == (code *)0x0)) {
    pcVar9 = (code *)0x0;
  }
  uVar8 = 1;
  switch(*param_2) {
  case 0:
    puVar7 = *(ulong **)(param_2 + 0x10);
    if (puVar7 == (ulong *)0x0) goto switchD_100c7fc2f_caseD_5;
    uVar2 = *puVar7;
    if ((uVar2 & 1) != 0) {
      FUN_100c80000(param_1);
      return 1;
    }
    if ((uVar2 & 0x300) != 0) {
      *param_1 = 0;
      return 1;
    }
    if ((uVar2 & 6) == 0) {
      iVar3 = FUN_100c7fbe0(param_1,puVar7[4],(uint)uVar2 & 0x400);
      goto LAB_100c7feb0;
    }
    lVar4 = FUN_100c60010();
    if (lVar4 != 0) {
      *param_1 = lVar4;
      return 1;
    }
LAB_100c7fed9:
    FUN_100c62ee0(0xd,0x85,0x41,"tasn_new.c",0x115);
    break;
  case 1:
  case 6:
    if (pcVar9 != (code *)0x0) {
      iVar3 = (*pcVar9)(0,param_1,param_2,0);
      if (iVar3 == 0) goto LAB_100c7fe37;
      if (iVar3 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar4 = FUN_100bf3540(*(undefined4 *)(param_2 + 0x28),"tasn_new.c",0xb3);
      *param_1 = lVar4;
      if (lVar4 == 0) break;
      ___bzero(lVar4,*(undefined8 *)(param_2 + 0x28));
      FUN_100c83430(param_1,0,param_2);
      FUN_100c83490(param_1,param_2);
    }
    if (0 < *(long *)(param_2 + 0x18)) {
      puVar7 = *(ulong **)(param_2 + 0x10);
      lVar4 = 0;
      do {
        plVar5 = (long *)FUN_100c83670(param_1,puVar7);
        uVar2 = *puVar7;
        if ((uVar2 & 1) == 0) {
          if ((uVar2 & 0x300) == 0) {
            if ((uVar2 & 6) == 0) {
              iVar3 = FUN_100c7fbe0(plVar5,puVar7[4],(uint)uVar2 & 0x400);
              if (iVar3 == 0) goto LAB_100c7fefa;
            }
            else {
              lVar6 = FUN_100c60010();
              if (lVar6 == 0) goto LAB_100c7fed9;
              *plVar5 = lVar6;
            }
          }
          else {
            *plVar5 = 0;
          }
        }
        else {
          FUN_100c80000(plVar5,puVar7);
        }
        puVar7 = puVar7 + 5;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(long *)(param_2 + 0x18));
    }
    goto LAB_100c7fe0f;
  case 2:
    if (pcVar9 != (code *)0x0) {
      iVar3 = (*pcVar9)(0,param_1,param_2,0);
      if (iVar3 == 0) goto LAB_100c7fe37;
      if (iVar3 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      lVar4 = FUN_100bf3540(*(undefined4 *)(param_2 + 0x28),"tasn_new.c",0x9a);
      *param_1 = lVar4;
      if (lVar4 == 0) break;
      ___bzero(lVar4,*(undefined8 *)(param_2 + 0x28));
    }
    FUN_100c83410(param_1,0xffffffff,param_2);
LAB_100c7fe0f:
    if (pcVar9 == (code *)0x0) {
      return 1;
    }
    iVar3 = (*pcVar9)(1,param_1,param_2,0);
    if (iVar3 != 0) {
      return 1;
    }
LAB_100c7fe37:
    FUN_100c62ee0(0xd,0x79,100,"tasn_new.c",0xd2);
    FUN_100c805f0(param_1,param_2);
    return 0;
  case 3:
    if (puVar1 == (undefined8 *)0x0) {
      return 1;
    }
    if ((code *)*puVar1 == (code *)0x0) {
      return 1;
    }
    lVar4 = (*(code *)*puVar1)();
    *param_1 = lVar4;
    if (lVar4 != 0) {
      return 1;
    }
    break;
  case 4:
    if (puVar1 == (undefined8 *)0x0) {
      return 1;
    }
    if ((code *)puVar1[1] == (code *)0x0) {
      return 1;
    }
    iVar3 = (*(code *)puVar1[1])(param_1,param_2);
    goto LAB_100c7feb0;
  case 5:
switchD_100c7fc2f_caseD_5:
    iVar3 = FUN_100c800c0(param_1,param_2);
LAB_100c7feb0:
    if (iVar3 != 0) {
      return 1;
    }
    break;
  default:
    goto switchD_100c7fc2f_default;
  }
LAB_100c7fefa:
  FUN_100c62ee0(0xd,0x79,0x41,"tasn_new.c",0xca);
  uVar8 = 0;
switchD_100c7fc2f_default:
  return uVar8;
}

