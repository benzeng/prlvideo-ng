
long FUN_100ca3f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  lVar4 = FUN_100c60010();
  lVar9 = 0;
  lVar7 = 0;
  if (lVar4 == 0) {
LAB_100ca41b7:
    FUN_100c62ee0(0x22,0x86,0x41,"v3_crld.c",0x150);
    lVar8 = lVar7;
    local_50 = lVar9;
LAB_100ca41df:
    FUN_100ca0960(lVar8);
    FUN_100ca09e0(local_50);
    FUN_100c60790(lVar4,FUN_100ca4560);
    lVar4 = 0;
  }
  else {
    iVar2 = FUN_100c60800(param_3);
    iVar6 = 0;
    if (0 < iVar2) {
      local_50 = 0;
      do {
        lVar7 = FUN_100c60820(param_3,iVar6);
        if (*(long *)(lVar7 + 0x10) != 0) {
          lVar7 = FUN_100ca1600(param_1,param_2,lVar7);
          lVar8 = 0;
          if (lVar7 != 0) {
            lVar9 = FUN_100ca09c0(0);
            if (lVar9 == 0) {
              lVar9 = 0;
            }
            else {
              iVar2 = FUN_100c604e0(lVar9,lVar7);
              if (iVar2 != 0) {
                plVar5 = (long *)FUN_100c7fb90(&DAT_102254d68);
                if (plVar5 != (long *)0x0) {
                  iVar2 = FUN_100c604e0(lVar4,plVar5);
                  if (iVar2 == 0) {
                    FUN_100c801c0(plVar5,&DAT_102254d68);
                  }
                  else {
                    lVar7 = FUN_100c7fb90(&DAT_102254cb8);
                    *plVar5 = lVar7;
                    if (lVar7 != 0) {
                      *(long *)(lVar7 + 8) = lVar9;
                      *(undefined4 *)*plVar5 = 0;
                      goto LAB_100ca4147;
                    }
                  }
                }
LAB_100ca41b5:
                lVar7 = 0;
              }
            }
            goto LAB_100ca41b7;
          }
          goto LAB_100ca41df;
        }
        lVar7 = FUN_100c9d950(param_2,*(undefined8 *)(lVar7 + 8));
        lVar8 = 0;
        if (lVar7 == 0) goto LAB_100ca41df;
        lVar9 = FUN_100c7fb90(&DAT_102254d68);
        if (lVar9 == 0) {
LAB_100ca4178:
          FUN_100c9d9c0(param_2,lVar7);
          local_50 = 0;
          lVar8 = 0;
          goto LAB_100ca41df;
        }
        iVar2 = FUN_100c60800(lVar7);
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            lVar8 = FUN_100c60820(lVar7,iVar2);
            iVar3 = FUN_100ca4b50(lVar9,param_2,lVar8);
            if (iVar3 < 1) {
              if (iVar3 < 0) {
LAB_100ca4162:
                FUN_100c801c0(lVar9,&DAT_102254d68);
                goto LAB_100ca4178;
              }
              pcVar1 = *(char **)(lVar8 + 8);
              iVar3 = _strcmp(pcVar1,"reasons");
              if (iVar3 == 0) {
                iVar3 = FUN_100ca4d50(lVar9 + 8,*(undefined8 *)(lVar8 + 0x10));
                if (iVar3 == 0) goto LAB_100ca4162;
              }
              else {
                iVar3 = _strcmp(pcVar1,"CRLissuer");
                if (iVar3 == 0) {
                  lVar8 = FUN_100ca4f90(param_2,*(undefined8 *)(lVar8 + 0x10));
                  *(long *)(lVar9 + 0x10) = lVar8;
                  if (lVar8 == 0) goto LAB_100ca4162;
                }
              }
            }
            iVar2 = iVar2 + 1;
            iVar3 = FUN_100c60800(lVar7);
          } while (iVar2 < iVar3);
        }
        FUN_100c9d9c0(param_2,lVar7);
        iVar2 = FUN_100c604e0(lVar4,lVar9);
        if (iVar2 == 0) {
          FUN_100c801c0(lVar9,&DAT_102254d68);
          lVar9 = 0;
          goto LAB_100ca41b5;
        }
LAB_100ca4147:
        iVar6 = iVar6 + 1;
        iVar2 = FUN_100c60800(param_3);
      } while (iVar6 < iVar2);
    }
  }
  return lVar4;
}

