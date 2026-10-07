
undefined8 FUN_1007263e0(undefined4 *param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  
  *param_1 = 3;
  pvVar6 = _malloc(param_3 + 1);
  *(void **)(param_1 + 8) = pvVar6;
  uVar9 = 0xfffffffe;
  if (pvVar6 != (void *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
    uVar11 = 0;
    if (param_3 != 0) {
      do {
        cVar2 = *(char *)(param_2 + uVar11);
        uVar11 = uVar11 + 1;
        if (cVar2 == '&') {
          uVar10 = param_3 - uVar11;
          pcVar1 = (char *)(param_2 + uVar11);
          if (uVar10 < 4) {
            if (uVar10 < 3) {
              return 0xffffffff;
            }
LAB_1007264b6:
            iVar5 = _strncmp(pcVar1,"lt;",3);
            plVar7 = &DAT_100bce928;
            puVar8 = &DAT_100bce918;
            if (iVar5 != 0) {
              iVar5 = _strncmp(pcVar1,"gt;",3);
              plVar7 = &DAT_100bce940;
              puVar8 = &DAT_100bce930;
              if (iVar5 != 0) {
                if (uVar10 < 5) {
                  return 0xffffffff;
                }
                iVar5 = _strncmp(pcVar1,"quot;",5);
                plVar7 = &DAT_100bce958;
                puVar8 = &DAT_100bce948;
                if (iVar5 != 0) {
                  return 0xffffffff;
                }
              }
            }
          }
          else {
            iVar5 = _strncmp(pcVar1,"amp;",4);
            plVar7 = &DAT_100bce910;
            puVar8 = &DAT_100bce900;
            if (iVar5 != 0) goto LAB_1007264b6;
          }
          uVar3 = *puVar8;
          lVar4 = *(long *)(param_1 + 2);
          *(long *)(param_1 + 2) = lVar4 + 1;
          *(undefined1 *)(*(long *)(param_1 + 8) + lVar4) = uVar3;
          uVar11 = uVar11 + *plVar7;
        }
        else {
          lVar4 = *(long *)(param_1 + 2);
          *(long *)(param_1 + 2) = lVar4 + 1;
          *(char *)(*(long *)(param_1 + 8) + lVar4) = cVar2;
        }
      } while (uVar11 < param_3);
      uVar11 = *(ulong *)(param_1 + 2);
      pvVar6 = *(void **)(param_1 + 8);
    }
    *(undefined1 *)((long)pvVar6 + uVar11) = 0;
    uVar9 = 0;
  }
  return uVar9;
}

