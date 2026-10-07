
void FUN_1004bbfc0(long param_1)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 local_58;
  undefined8 local_40;
  undefined8 local_38;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x1038);
  FUN_1004b8040();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar4 = lVar2;
  if (*(int *)(lVar2 + 0x1028) != 0) {
    uVar13 = 0;
    do {
      uVar14 = (ulong)uVar13;
      lVar4 = FUN_1004b9ef0(lVar4,*(undefined4 *)(*(long *)(lVar2 + 0x1020) + uVar14 * 4));
      if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x34) != '\0')) &&
          ((*(int *)(lVar4 + 0x28) == 0 ||
           ((*(int *)(lVar4 + 0x28) == 2 && (*(char *)(lVar4 + 0x20) != '\0')))))) &&
         ((*(uint *)(lVar4 + 0x48) & 1) == 0)) {
        if (((*(uint *)(lVar4 + 0x48) & 0x20) == 0) ||
           (piVar3 = *(int **)(lVar4 + 0x70), piVar3 == (int *)0x0)) {
          if (*(long *)(*plVar1 + 0x10) != 0) {
            uVar12 = *(uint *)(*(long *)(lVar2 + 0x1020) + uVar14 * 4);
            lVar6 = *(long *)(*plVar1 + 0x10);
            lVar8 = 0;
            do {
              while (lVar10 = lVar6, uVar11 = *(uint *)(lVar10 + 0x18), uVar12 <= uVar11) {
                lVar6 = *(long *)(lVar10 + 8);
                lVar8 = lVar10;
                if (*(long *)(lVar10 + 8) == 0) goto LAB_1004bc0ec;
              }
              lVar6 = *(long *)(lVar10 + 0x10);
            } while (*(long *)(lVar10 + 0x10) != 0);
            if (lVar8 != 0) {
              uVar11 = *(uint *)(lVar8 + 0x18);
LAB_1004bc0ec:
              if (uVar11 <= uVar12) {
                puVar5 = (undefined8 *)FUN_1004be870(plVar1,*(long *)(lVar2 + 0x1020) + uVar14 * 4);
                lVar6 = FUN_1002a6120(*puVar5,1,0);
                pvVar7 = _malloc((ulong)*(uint *)(lVar6 + 8));
                if (pvVar7 != (void *)0x0) {
                  FUN_1002a5990(lVar6,0,pvVar7,*(undefined4 *)(lVar6 + 8));
                  local_58 = FUN_1004b9f40(*(undefined8 *)(param_1 + 0x10),lVar4);
                  if (*(char *)(param_1 + 0x248) == '\0') {
                    lVar6 = 0;
                    uVar9 = *(undefined8 *)(param_1 + 0x10);
                    uVar12 = 0;
                    if (uVar13 != 0) {
                      do {
                        lVar8 = FUN_1004b9ef0(uVar9,*(undefined4 *)
                                                     (*(long *)(lVar2 + 0x1020) + lVar6));
                        if (((lVar8 != 0) && ((*(uint *)(lVar8 + 0x48) & 0x41) == 0)) &&
                           (((*(uint *)(lVar8 + 0x48) & 0x20) == 0 || (*(long *)(lVar8 + 0x70) == 0)
                            ))) {
                          uVar9 = FUN_1004b9f40(*(undefined8 *)(param_1 + 0x10),lVar8);
                          local_38 = 0;
                          (*DAT_1011ccc80)(local_58,uVar9,&local_38);
                          (*DAT_1011ccc48)(local_58);
                          local_58 = local_38;
                          (*DAT_1011ccc48)(uVar9);
                        }
                        uVar9 = *(undefined8 *)(param_1 + 0x10);
                        uVar12 = uVar12 + 1;
                        lVar6 = lVar6 + 4;
                      } while (uVar13 != uVar12);
                    }
                    uVar9 = FUN_1004b9f40(uVar9,lVar4);
                    local_40 = 0;
                    (*DAT_1011ccc80)(uVar9,local_58,&local_40);
                    (*DAT_1011ccc48)(local_58);
                    local_58 = local_40;
                    (*DAT_1011ccc48)(uVar9);
                  }
                  if (*(char *)(lVar4 + 0x20) == '\0') {
                    FUN_1004bc9c0(param_1,lVar4,pvVar7,local_58);
                  }
                  else {
                    FUN_1004bc300(param_1,lVar4,pvVar7,local_58);
                  }
                  (*DAT_1011ccc48)(local_58);
                  _free(pvVar7);
                }
              }
            }
          }
        }
        else if (((*(char *)(lVar4 + 0x7c) != '\0') && (*piVar3 != 0)) && (piVar3[1] != 0)) {
          if (*(char *)(lVar4 + 0x20) == '\0') {
            FUN_1004bc9c0(param_1,lVar4,piVar3,0);
            *(undefined1 *)(lVar4 + 0x7c) = 0;
          }
          else {
            FUN_1004bc300(param_1,lVar4);
            *(undefined1 *)(lVar4 + 0x7c) = 0;
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar4 = *(long *)(param_1 + 0x10);
    } while (uVar13 < *(uint *)(lVar2 + 0x1028));
  }
  FUN_1004b8670(lVar4,plVar1,0);
  return;
}

