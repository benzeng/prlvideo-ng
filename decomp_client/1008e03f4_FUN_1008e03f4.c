
uint FUN_1008e03f4(int *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  xmlChar *pxVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  uint local_60;
  int local_48;
  int local_44;
  uint local_1c;
  
  local_1c = 0;
  if ((param_1 == (int *)0x0) || ((*param_1 != 1 && (*param_1 != 9)))) {
    local_60 = 0;
  }
  else if ((param_2 == (int *)0x0) || ((*param_2 != 1 && (*param_2 != 9)))) {
    local_60 = 0;
  }
  else {
    piVar1 = *(int **)(param_1 + 2);
    piVar2 = *(int **)(param_2 + 2);
    if ((piVar1 == (int *)0x0) || (*piVar1 < 1)) {
      local_60 = 0;
    }
    else if ((piVar2 == (int *)0x0) || (*piVar2 < 1)) {
      local_60 = 0;
    }
    else {
      if (param_3 == 0) {
        for (local_48 = 0; local_48 < *piVar1; local_48 = local_48 + 1) {
          for (local_44 = 0; local_44 < *piVar2; local_44 = local_44 + 1) {
            if (*(long *)(*(long *)(piVar1 + 2) + (long)local_48 * 8) ==
                *(long *)(*(long *)(piVar2 + 2) + (long)local_44 * 8)) {
              return 1;
            }
          }
        }
      }
      puVar4 = (undefined1 *)(*(code *)_xmlMalloc)((long)*piVar1 * 8);
      if (puVar4 == (undefined1 *)0x0) {
        FUN_1008d87c3(0,"comparing nodesets\n");
        local_60 = 0;
      }
      else {
        lVar5 = (*(code *)_xmlMalloc)((long)*piVar1 * 4);
        if (lVar5 == 0) {
          FUN_1008d87c3(0,"comparing nodesets\n");
          (*(code *)_xmlFree)(puVar4);
          local_60 = 0;
        }
        else {
          puVar6 = puVar4;
          for (lVar8 = (long)*piVar1 * 8; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          puVar6 = (undefined1 *)(*(code *)_xmlMalloc)((long)*piVar2 * 8);
          if (puVar6 == (undefined1 *)0x0) {
            FUN_1008d87c3(0,"comparing nodesets\n");
            (*(code *)_xmlFree)(lVar5);
            (*(code *)_xmlFree)(puVar4);
            local_60 = 0;
          }
          else {
            lVar8 = (*(code *)_xmlMalloc)((long)*piVar2 * 4);
            if (lVar8 == 0) {
              FUN_1008d87c3(0,"comparing nodesets\n");
              (*(code *)_xmlFree)(lVar5);
              (*(code *)_xmlFree)(puVar4);
              (*(code *)_xmlFree)(puVar6);
              local_60 = 0;
            }
            else {
              puVar10 = puVar6;
              for (lVar9 = (long)*piVar2 * 8; lVar9 != 0; lVar9 = lVar9 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              for (local_48 = 0; local_48 < *piVar1; local_48 = local_48 + 1) {
                uVar3 = FUN_1008df60f(*(undefined8 *)(*(long *)(piVar1 + 2) + (long)local_48 * 8));
                *(undefined4 *)((long)local_48 * 4 + lVar5) = uVar3;
                for (local_44 = 0; local_44 < *piVar2; local_44 = local_44 + 1) {
                  if (local_48 == 0) {
                    uVar3 = FUN_1008df60f(*(undefined8 *)
                                           (*(long *)(piVar2 + 2) + (long)local_44 * 8));
                    *(undefined4 *)((long)local_44 * 4 + lVar8) = uVar3;
                  }
                  if (*(int *)((long)local_48 * 4 + lVar5) == *(int *)((long)local_44 * 4 + lVar8))
                  {
                    if (*(long *)(puVar4 + (long)local_48 * 8) == 0) {
                      pxVar7 = _xmlNodeGetContent(*(xmlNodePtr *)
                                                   (*(long *)(piVar1 + 2) + (long)local_48 * 8));
                      *(xmlChar **)(puVar4 + (long)local_48 * 8) = pxVar7;
                    }
                    if (*(long *)(puVar6 + (long)local_44 * 8) == 0) {
                      pxVar7 = _xmlNodeGetContent(*(xmlNodePtr *)
                                                   (*(long *)(piVar2 + 2) + (long)local_44 * 8));
                      *(xmlChar **)(puVar6 + (long)local_44 * 8) = pxVar7;
                    }
                    local_1c = _xmlStrEqual(*(xmlChar **)(puVar4 + (long)local_48 * 8),
                                            *(xmlChar **)(puVar6 + (long)local_44 * 8));
                    local_1c = local_1c ^ param_3;
                    if (local_1c != 0) break;
                  }
                  else if (param_3 != 0) {
                    local_1c = 1;
                    break;
                  }
                }
                if (local_1c != 0) break;
              }
              for (local_48 = 0; local_48 < *piVar1; local_48 = local_48 + 1) {
                if (*(long *)(puVar4 + (long)local_48 * 8) != 0) {
                  (*(code *)_xmlFree)(*(undefined8 *)(puVar4 + (long)local_48 * 8));
                }
              }
              for (local_44 = 0; local_44 < *piVar2; local_44 = local_44 + 1) {
                if (*(long *)(puVar6 + (long)local_44 * 8) != 0) {
                  (*(code *)_xmlFree)(*(undefined8 *)(puVar6 + (long)local_44 * 8));
                }
              }
              (*(code *)_xmlFree)(puVar4);
              (*(code *)_xmlFree)(puVar6);
              (*(code *)_xmlFree)(lVar5);
              (*(code *)_xmlFree)(lVar8);
              local_60 = local_1c;
            }
          }
        }
      }
    }
  }
  return local_60;
}

