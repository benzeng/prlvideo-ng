
void FUN_100c801e0(long *param_1,char *param_2,int param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 local_38;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar9 = *(long *)(param_2 + 0x20);
  if ((*param_2 != '\0') && (*param_1 == 0)) {
    return;
  }
  if ((lVar9 == 0) || (pcVar8 = *(code **)(lVar9 + 0x18), pcVar8 == (code *)0x0)) {
    pcVar8 = (code *)0x0;
  }
  switch(*param_2) {
  case '\0':
    puVar5 = *(ulong **)(param_2 + 0x10);
    if (puVar5 == (ulong *)0x0) goto LAB_100c80552;
    if ((*puVar5 & 6) == 0) {
      FUN_100c801e0(param_1,puVar5[4],(uint)*puVar5 & 0x400);
    }
    else {
      lVar9 = *param_1;
      iVar3 = FUN_100c60800(lVar9);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          local_38 = FUN_100c60820(lVar9,iVar3);
          FUN_100c801e0(&local_38,puVar5[4],0);
          iVar3 = iVar3 + 1;
          iVar4 = FUN_100c60800(lVar9);
        } while (iVar3 < iVar4);
      }
      FUN_100c5ffd0(lVar9);
      *param_1 = 0;
    }
    break;
  case '\x01':
  case '\x06':
    iVar3 = FUN_100c83430(param_1,0xffffffff,param_2);
    if (0 < iVar3) {
      return;
    }
    if ((pcVar8 != (code *)0x0) && (iVar3 = (*pcVar8)(2,param_1,param_2,0), iVar3 == 2)) {
      return;
    }
    FUN_100c834e0(param_1,param_2);
    if (0 < *(long *)(param_2 + 0x18)) {
      lVar9 = *(long *)(param_2 + 0x10) + -0x28 + *(long *)(param_2 + 0x18) * 0x28;
      lVar7 = 0;
      do {
        puVar5 = (ulong *)FUN_100c83690(param_1,lVar9,0);
        if (puVar5 != (ulong *)0x0) {
          puVar6 = (undefined8 *)FUN_100c83670(param_1,puVar5);
          if ((*puVar5 & 6) == 0) {
            FUN_100c801e0(puVar6,puVar5[4],(uint)*puVar5 & 0x400);
          }
          else {
            uVar1 = *puVar6;
            iVar3 = FUN_100c60800(uVar1);
            if (0 < iVar3) {
              iVar3 = 0;
              do {
                local_38 = FUN_100c60820(uVar1,iVar3);
                FUN_100c801e0(&local_38,puVar5[4],0);
                iVar3 = iVar3 + 1;
                iVar4 = FUN_100c60800(uVar1);
              } while (iVar3 < iVar4);
            }
            FUN_100c5ffd0(uVar1);
            *puVar6 = 0;
          }
        }
        lVar9 = lVar9 + -0x28;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(long *)(param_2 + 0x18));
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(3,param_1,param_2,0);
    }
    goto joined_r0x000100c805ac;
  case '\x02':
    if ((pcVar8 != (code *)0x0) && (iVar3 = (*pcVar8)(2,param_1,param_2,0), iVar3 == 2)) {
      return;
    }
    iVar3 = FUN_100c83400(param_1,param_2);
    if ((-1 < iVar3) && (lVar9 = (long)iVar3, lVar9 < *(long *)(param_2 + 0x18))) {
      lVar7 = *(long *)(param_2 + 0x10);
      puVar6 = (undefined8 *)FUN_100c83670(param_1,lVar7 + lVar9 * 0x28);
      uVar2 = *(ulong *)(lVar7 + lVar9 * 0x28);
      if ((uVar2 & 6) == 0) {
        FUN_100c801e0(puVar6,*(undefined8 *)(lVar7 + 0x20 + lVar9 * 0x28),(uint)uVar2 & 0x400);
      }
      else {
        uVar1 = *puVar6;
        iVar3 = FUN_100c60800(uVar1);
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            local_38 = FUN_100c60820(uVar1,iVar3);
            FUN_100c801e0(&local_38,*(undefined8 *)(lVar7 + 0x20 + lVar9 * 0x28),0);
            iVar3 = iVar3 + 1;
            iVar4 = FUN_100c60800(uVar1);
          } while (iVar3 < iVar4);
        }
        FUN_100c5ffd0(uVar1);
        *puVar6 = 0;
      }
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(3,param_1,param_2,0);
    }
joined_r0x000100c805ac:
    if (param_3 == 0) {
      FUN_100bf3910(*param_1);
      *param_1 = 0;
    }
    break;
  case '\x03':
    if ((lVar9 != 0) && (*(code **)(lVar9 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100c80519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar9 + 8))(*param_1);
      return;
    }
    break;
  case '\x04':
    if ((lVar9 != 0) && (*(code **)(lVar9 + 0x10) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100c80545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar9 + 0x10))(param_1,param_2);
      return;
    }
    break;
  case '\x05':
LAB_100c80552:
    FUN_100c806b0(param_1,param_2);
    return;
  }
  return;
}

