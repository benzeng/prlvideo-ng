
undefined4 * FUN_100baa510(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  undefined4 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *local_38;
  
  local_38 = (long *)0x0;
  puVar4 = (undefined4 *)FUN_100bf3540(0x38,"../src/snlic/sn_crypto_helper_01.c",0x48);
  if (puVar4 == (undefined4 *)0x0) goto LAB_100baa874;
  *puVar4 = 1;
  puVar4[8] = 0;
  *(undefined8 *)(puVar4 + 6) = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  puVar4[9] = 4;
  puVar4[10] = 1;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  iVar3 = FUN_100ba9730(&local_38);
  plVar2 = local_38;
  plVar9 = (long *)0x0;
  if (iVar3 == 0) {
    iVar3 = FUN_100ba9fb0(puVar4,local_38);
    plVar9 = (long *)0x0;
    if (((iVar3 == 0) || (plVar2 == (long *)0x0)) ||
       (plVar9 = (long *)0x0, *(long *)(*plVar2 + 0x48) == 0)) goto LAB_100baa84d;
    plVar5 = (long *)FUN_100bf3540(0x58,"../src/snlic/sn_crypto_helper_02.c",0x1fe);
    plVar9 = (long *)0x0;
    if (plVar5 == (long *)0x0) goto LAB_100baa84d;
    lVar8 = *plVar2;
    *plVar5 = lVar8;
    iVar3 = (**(code **)(lVar8 + 0x48))(plVar5);
    if (iVar3 == 0) {
      FUN_100bf3910(plVar5);
      plVar9 = (long *)0x0;
      goto LAB_100baa84d;
    }
    plVar9 = plVar5;
    if (param_1 != 0) {
      pcVar1 = *(code **)(*plVar2 + 0xa0);
      if (((pcVar1 != (code *)0x0) && (*plVar2 == *plVar5)) &&
         (iVar3 = (*pcVar1)(plVar2,plVar5,param_1,param_2,0), iVar3 != 0)) {
        plVar7 = *(long **)(puVar4 + 4);
        if (plVar7 != (long *)0x0) {
          if (*(code **)(*plVar7 + 0x50) != (code *)0x0) {
            (**(code **)(*plVar7 + 0x50))(plVar7);
          }
          FUN_100bf3910(plVar7);
        }
        plVar7 = *(long **)(puVar4 + 2);
        if (((plVar7 != (long *)0x0) && (*(long *)(*plVar7 + 0x48) != 0)) &&
           (plVar6 = (long *)FUN_100bf3540(0x58,"../src/snlic/sn_crypto_helper_02.c",0x1fe),
           plVar6 != (long *)0x0)) {
          lVar8 = *plVar7;
          *plVar6 = lVar8;
          iVar3 = (**(code **)(lVar8 + 0x48))(plVar6);
          if (iVar3 != 0) {
            lVar8 = *plVar6;
            if ((*(code **)(lVar8 + 0x60) != (code *)0x0) && (lVar8 == *plVar5)) {
              plVar7 = plVar5;
              if ((plVar6 == plVar5) ||
                 (iVar3 = (**(code **)(lVar8 + 0x60))(plVar6,plVar5), plVar7 = plVar6, iVar3 != 0))
              {
                *(long **)(puVar4 + 4) = plVar7;
                goto LAB_100baa740;
              }
              lVar8 = *plVar6;
            }
            if (*(code **)(lVar8 + 0x50) != (code *)0x0) {
              (**(code **)(lVar8 + 0x50))(plVar6);
            }
          }
          FUN_100bf3910(plVar6);
        }
        *(undefined8 *)(puVar4 + 4) = 0;
      }
      goto LAB_100baa84d;
    }
LAB_100baa740:
    if (param_3 == 0) {
LAB_100baa8c6:
      if (*(code **)(*plVar5 + 0x50) != (code *)0x0) {
        (**(code **)(*plVar5 + 0x50))();
      }
      FUN_100bf3910(plVar5);
      FUN_100baa410(plVar2);
      return puVar4;
    }
    plVar7 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    if (plVar7 == (long *)0x0) goto LAB_100baa84d;
    *(undefined4 *)((long)plVar7 + 0x14) = 1;
    *(undefined4 *)(plVar7 + 2) = 0;
    plVar7[1] = 0;
    *plVar7 = 0;
    lVar8 = FUN_100baa990(param_3,param_4,plVar7);
    if (lVar8 != 0) {
      if (*(long *)(puVar4 + 6) != 0) {
        FUN_100bac7b0();
      }
      plVar9 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
      if (plVar9 != (long *)0x0) {
        *(undefined4 *)((long)plVar9 + 0x14) = 1;
        *(undefined4 *)(plVar9 + 2) = 0;
        plVar9[1] = 0;
        *plVar9 = 0;
        lVar8 = FUN_100bac3a0(plVar9,plVar7);
        if (lVar8 != 0) {
          *(long **)(puVar4 + 6) = plVar9;
          if (plVar9 != (long *)0x0) {
            if ((*plVar7 != 0) && ((*(byte *)((long)plVar7 + 0x14) & 2) == 0)) {
              FUN_100bf3910();
            }
            if ((*(byte *)((long)plVar7 + 0x14) & 1) == 0) {
              *plVar7 = 0;
            }
            else {
              FUN_100bf3910(plVar7);
            }
            goto LAB_100baa8c6;
          }
          goto LAB_100baa8fd;
        }
        if ((*plVar9 != 0) && ((*(byte *)((long)plVar9 + 0x14) & 2) == 0)) {
          FUN_100bf3910();
        }
        if ((*(byte *)((long)plVar9 + 0x14) & 1) == 0) {
          *plVar9 = 0;
        }
        else {
          FUN_100bf3910(plVar9);
        }
      }
      *(undefined8 *)(puVar4 + 6) = 0;
    }
LAB_100baa8fd:
    FUN_100baa340(puVar4);
    if (plVar7 != (long *)0x0) {
      if ((*plVar7 != 0) && ((*(byte *)((long)plVar7 + 0x14) & 2) == 0)) {
        FUN_100bf3910();
      }
      if ((*(byte *)((long)plVar7 + 0x14) & 1) == 0) {
        *plVar7 = 0;
      }
      else {
        FUN_100bf3910(plVar7);
      }
    }
  }
  else {
LAB_100baa84d:
    plVar5 = plVar9;
    FUN_100baa340(puVar4);
  }
  if (plVar5 != (long *)0x0) {
    if (*(code **)(*plVar5 + 0x50) != (code *)0x0) {
      (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    FUN_100bf3910(plVar5);
  }
LAB_100baa874:
  if (local_38 != (long *)0x0) {
    FUN_100baa410();
  }
  return (undefined4 *)0x0;
}

