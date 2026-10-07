
int FUN_1008dcbc0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  int local_3c;
  
  iVar3 = FUN_100821ab0(*param_1);
  if (iVar3 == 0x16) {
    lVar1 = param_1[1];
    local_3c = -1;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      iVar3 = FUN_100885600(*(undefined8 *)(lVar1 + 0x28));
      local_3c = 0;
      if (0 < iVar3) {
        local_3c = 0;
        iVar3 = 0;
        do {
          lVar6 = FUN_100885620(*(undefined8 *)(lVar1 + 0x28),iVar3);
          if (*(long *)(lVar6 + 0x38) == 0) {
            iVar4 = FUN_100885600(param_2);
            if (0 < iVar4) {
              iVar4 = 0;
              do {
                lVar7 = FUN_100885620(param_2,iVar4);
                iVar5 = FUN_1008dbe80(*(undefined8 *)(lVar6 + 8),lVar7);
                if (iVar5 == 0) {
                  if (lVar7 != 0) {
                    FUN_10081d580(lVar7 + 0x1c,1,3,"cms_sd.c",0x1e2);
                    if (*(long *)(lVar6 + 0x40) != 0) {
                      FUN_1008924e0();
                    }
                    uVar9 = FUN_1008b7420(lVar7);
                    *(undefined8 *)(lVar6 + 0x40) = uVar9;
                  }
                  if (*(long *)(lVar6 + 0x38) != 0) {
                    FUN_1008a17f0();
                  }
                  *(long *)(lVar6 + 0x38) = lVar7;
                  local_3c = local_3c + 1;
                  goto LAB_1008dcd00;
                }
                iVar4 = iVar4 + 1;
                iVar5 = FUN_100885600(param_2);
              } while (iVar4 < iVar5);
            }
            lVar7 = *(long *)(lVar6 + 0x38);
LAB_1008dcd00:
            if ((((param_3 & 0x10) == 0) && (lVar7 == 0)) &&
               (iVar4 = FUN_100885600(uVar2), 0 < iVar4)) {
              iVar4 = 0;
              do {
                piVar8 = (int *)FUN_100885620(uVar2,iVar4);
                if (*piVar8 == 0) {
                  lVar7 = *(long *)(piVar8 + 2);
                  iVar5 = FUN_1008dbe80(*(undefined8 *)(lVar6 + 8),lVar7);
                  if (iVar5 == 0) {
                    if (lVar7 != 0) {
                      FUN_10081d580(lVar7 + 0x1c,1,3,"cms_sd.c",0x1e2);
                      if (*(long *)(lVar6 + 0x40) != 0) {
                        FUN_1008924e0();
                      }
                      uVar9 = FUN_1008b7420(lVar7);
                      *(undefined8 *)(lVar6 + 0x40) = uVar9;
                    }
                    if (*(long *)(lVar6 + 0x38) != 0) {
                      FUN_1008a17f0();
                    }
                    *(long *)(lVar6 + 0x38) = lVar7;
                    local_3c = local_3c + 1;
                    break;
                  }
                }
                iVar4 = iVar4 + 1;
                iVar5 = FUN_100885600(uVar2);
              } while (iVar4 < iVar5);
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_100885600(*(undefined8 *)(lVar1 + 0x28));
        } while (iVar3 < iVar4);
      }
    }
  }
  else {
    FUN_100887ce0(0x2e,0x85,0x6c,"cms_sd.c",0x47);
    local_3c = -1;
  }
  return local_3c;
}

