
long FUN_1008c8980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_50;
  
  lVar4 = FUN_100884e10();
  lVar9 = 0;
  lVar7 = 0;
  if (lVar4 == 0) {
LAB_1008c8c37:
    FUN_100887ce0(0x22,0x86,0x41,"v3_crld.c",0x150);
    lVar8 = lVar7;
    local_50 = lVar9;
LAB_1008c8c5f:
    FUN_1008c53e0(lVar8);
    FUN_1008c5460(local_50);
    FUN_100885590(lVar4,FUN_1008c8fe0);
    lVar4 = 0;
  }
  else {
    iVar2 = FUN_100885600(param_3);
    iVar6 = 0;
    if (0 < iVar2) {
      local_50 = 0;
      do {
        lVar7 = FUN_100885620(param_3,iVar6);
        if (*(long *)(lVar7 + 0x10) != 0) {
          lVar7 = FUN_1008c6080(param_1,param_2,lVar7);
          lVar8 = 0;
          if (lVar7 != 0) {
            lVar9 = FUN_1008c5440(0);
            if (lVar9 == 0) {
              lVar9 = 0;
            }
            else {
              iVar2 = FUN_1008852e0(lVar9,lVar7);
              if (iVar2 != 0) {
                plVar5 = (long *)FUN_1008a4610(&DAT_100be4758);
                if (plVar5 != (long *)0x0) {
                  iVar2 = FUN_1008852e0(lVar4,plVar5);
                  if (iVar2 == 0) {
                    FUN_1008a4c40(plVar5,&DAT_100be4758);
                  }
                  else {
                    lVar7 = FUN_1008a4610(&DAT_100be46a8);
                    *plVar5 = lVar7;
                    if (lVar7 != 0) {
                      *(long *)(lVar7 + 8) = lVar9;
                      *(undefined4 *)*plVar5 = 0;
                      goto LAB_1008c8bc7;
                    }
                  }
                }
LAB_1008c8c35:
                lVar7 = 0;
              }
            }
            goto LAB_1008c8c37;
          }
          goto LAB_1008c8c5f;
        }
        lVar7 = FUN_1008c23d0(param_2,*(undefined8 *)(lVar7 + 8));
        lVar8 = 0;
        if (lVar7 == 0) goto LAB_1008c8c5f;
        lVar9 = FUN_1008a4610(&DAT_100be4758);
        if (lVar9 == 0) {
LAB_1008c8bf8:
          FUN_1008c2440(param_2,lVar7);
          local_50 = 0;
          lVar8 = 0;
          goto LAB_1008c8c5f;
        }
        iVar2 = FUN_100885600(lVar7);
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            lVar8 = FUN_100885620(lVar7,iVar2);
            iVar3 = FUN_1008c95d0(lVar9,param_2,lVar8);
            if (iVar3 < 1) {
              if (iVar3 < 0) {
LAB_1008c8be2:
                FUN_1008a4c40(lVar9,&DAT_100be4758);
                goto LAB_1008c8bf8;
              }
              pcVar1 = *(char **)(lVar8 + 8);
              iVar3 = _strcmp(pcVar1,"reasons");
              if (iVar3 == 0) {
                iVar3 = FUN_1008c97d0(lVar9 + 8,*(undefined8 *)(lVar8 + 0x10));
                if (iVar3 == 0) goto LAB_1008c8be2;
              }
              else {
                iVar3 = _strcmp(pcVar1,"CRLissuer");
                if (iVar3 == 0) {
                  lVar8 = FUN_1008c9a10(param_2,*(undefined8 *)(lVar8 + 0x10));
                  *(long *)(lVar9 + 0x10) = lVar8;
                  if (lVar8 == 0) goto LAB_1008c8be2;
                }
              }
            }
            iVar2 = iVar2 + 1;
            iVar3 = FUN_100885600(lVar7);
          } while (iVar2 < iVar3);
        }
        FUN_1008c2440(param_2,lVar7);
        iVar2 = FUN_1008852e0(lVar4,lVar9);
        if (iVar2 == 0) {
          FUN_1008a4c40(lVar9,&DAT_100be4758);
          lVar9 = 0;
          goto LAB_1008c8c35;
        }
LAB_1008c8bc7:
        iVar6 = iVar6 + 1;
        iVar2 = FUN_100885600(param_3);
      } while (iVar6 < iVar2);
    }
  }
  return lVar4;
}

