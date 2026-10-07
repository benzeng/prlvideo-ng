
uint FUN_1001ddc17(uint *param_1,xmlChar *param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  xmlChar *pxVar10;
  long lVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint local_bc;
  uint local_b8;
  long local_b0;
  xmlChar *local_a8;
  uint local_7c;
  int local_70;
  int local_58;
  
  bVar6 = false;
  bVar7 = true;
  if (param_1 == (uint *)0x0) {
    local_bc = 0xffffffff;
  }
  else if (*(long *)(param_1 + 2) == 0) {
    local_bc = 0xffffffff;
  }
  else if (*param_1 == 0) {
    if (*(long *)(*(long *)(param_1 + 2) + 0x40) == 0) {
      if (param_2 == (xmlChar *)0x0) {
        if (**(int **)(param_1 + 8) == 2) {
          return 1;
        }
        bVar6 = true;
      }
      local_b0 = param_3;
      local_a8 = param_2;
      if ((param_2 != (xmlChar *)0x0) && (0 < (int)param_1[0x13])) {
        FUN_1001dd706(param_1,param_2,param_3);
        local_a8 = *(xmlChar **)(*(long *)(param_1 + 0x1a) + (long)(int)param_1[0x14] * 0x10);
        local_b0 = *(long *)(*(long *)(param_1 + 0x1a) + (long)(int)param_1[0x14] * 0x10 + 8);
      }
LAB_1001de7c4:
      while( true ) {
        if ((*param_1 != 0) ||
           ((local_a8 == (xmlChar *)0x0 && ((!bVar6 || (**(int **)(param_1 + 8) == 2)))))) {
          if (*param_1 == 0) {
            return (uint)(**(int **)(param_1 + 8) == 2);
          }
          return *param_1;
        }
        if ((local_a8 == (xmlChar *)0x0) && (*(long *)(param_1 + 0x10) == 0)) break;
        param_1[0xb] = 0;
LAB_1001de836:
        if (*(int *)(*(long *)(param_1 + 8) + 0x14) <= (int)param_1[10]) goto LAB_1001de856;
        plVar1 = (long *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)param_1[10] * 0x18);
        if ((int)plVar1[1] < 0) {
LAB_1001de81f:
          param_1[10] = param_1[10] + 1;
          goto LAB_1001de836;
        }
        lVar11 = *plVar1;
        local_7c = 0;
        if ((int)plVar1[2] == 0x123457) {
          local_7c = 0;
          if ((local_a8 == (xmlChar *)0x0) && (bVar6)) {
            local_7c = 1;
          }
          else if (local_a8 != (xmlChar *)0x0) {
            for (local_70 = 0; local_70 < *(int *)(*(long *)(param_1 + 8) + 0x14);
                local_70 = local_70 + 1) {
              plVar2 = (long *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)local_70 * 0x18);
              if ((-1 < *(int *)((long)plVar2 + 0xc)) && (plVar2 != plVar1)) {
                piVar12 = (int *)(*(long *)(*(long *)(param_1 + 2) + 0x30) +
                                 (long)*(int *)((long)plVar2 + 0xc) * 8);
                iVar9 = *(int *)(*(long *)(param_1 + 0x10) + (long)*(int *)((long)plVar2 + 0xc) * 4)
                ;
                if ((iVar9 < piVar12[1]) &&
                   ((*plVar2 != 0 &&
                    (iVar8 = _xmlStrEqual(local_a8,*(xmlChar **)(*plVar2 + 0x18)), iVar8 != 0)))) {
                  local_7c = 0;
                  break;
                }
                if (((*piVar12 <= iVar9) && (iVar9 < piVar12[1])) &&
                   (iVar9 = _xmlStrEqual(local_a8,*(xmlChar **)(*plVar2 + 0x18)), iVar9 != 0)) {
                  local_7c = 1;
                  break;
                }
              }
            }
          }
        }
        else if ((int)plVar1[2] == 0x123456) {
          local_7c = 1;
          for (local_58 = 0; local_58 < *(int *)(*(long *)(param_1 + 8) + 0x14);
              local_58 = local_58 + 1) {
            plVar2 = (long *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)local_58 * 0x18);
            if ((-1 < *(int *)((long)plVar2 + 0xc)) && (plVar2 != plVar1)) {
              piVar12 = (int *)(*(long *)(*(long *)(param_1 + 2) + 0x30) +
                               (long)*(int *)((long)plVar2 + 0xc) * 8);
              iVar9 = *(int *)(*(long *)(param_1 + 0x10) + (long)*(int *)((long)plVar2 + 0xc) * 4);
              if ((iVar9 < *piVar12) || (piVar12[1] < iVar9)) {
                local_7c = 0;
                break;
              }
            }
          }
        }
        else if ((int)plVar1[2] < 0) {
          if (lVar11 == 0) {
            _fwrite("epsilon transition left at runtime\n",1,0x23,*(FILE **)PTR____stderrp_100ba2328
                   );
            *param_1 = 0xfffffffe;
            goto LAB_1001de856;
          }
          if (local_a8 != (xmlChar *)0x0) {
            local_7c = FUN_1001dd8b8(*(undefined8 *)(lVar11 + 0x18),local_a8);
            if ((*(int *)(lVar11 + 0x28) != 0) && (local_7c = (uint)(local_7c == 0), param_4 == 0))
            {
              local_7c = 0;
            }
            if (((local_7c == 1) && (-1 < *(int *)((long)plVar1 + 0xc))) &&
               (*(int *)(*(long *)(*(long *)(param_1 + 2) + 0x30) +
                         (long)*(int *)((long)plVar1 + 0xc) * 8 + 4) <=
                *(int *)(*(long *)(param_1 + 0x10) + (long)*(int *)((long)plVar1 + 0xc) * 4))) {
              local_7c = 0;
            }
            if (((local_7c == 1) && (0 < *(int *)(lVar11 + 0xc))) && (0 < *(int *)(lVar11 + 0x10)))
            {
              uVar4 = *(undefined8 *)
                       (*(long *)(*(long *)(param_1 + 2) + 0x10) + (long)(int)plVar1[1] * 8);
              if ((int)(param_1[10] + 1) < *(int *)(*(long *)(param_1 + 8) + 0x14)) {
                if ((int)param_1[0x13] < 1) {
                  FUN_1001dd706(param_1,local_a8,local_b0);
                }
                FUN_1001dc5cd(param_1);
              }
              param_1[0xb] = 1;
              do {
                if (param_1[0xb] == *(uint *)(lVar11 + 0x10)) break;
                param_1[0x14] = param_1[0x14] + 1;
                local_a8 = *(xmlChar **)
                            (*(long *)(param_1 + 0x1a) + (long)(int)param_1[0x14] * 0x10);
                local_b0 = *(long *)(*(long *)(param_1 + 0x1a) + (long)(int)param_1[0x14] * 0x10 + 8
                                    );
                if (local_a8 == (xmlChar *)0x0) {
                  param_1[0x14] = param_1[0x14] - 1;
                  break;
                }
                if (*(int *)(lVar11 + 0xc) <= (int)param_1[0xb]) {
                  uVar3 = param_1[10];
                  uVar5 = *(undefined8 *)(param_1 + 8);
                  param_1[10] = 0xffffffff;
                  *(undefined8 *)(param_1 + 8) = uVar4;
                  if ((int)param_1[0x13] < 1) {
                    FUN_1001dd706(param_1,local_a8,local_b0);
                  }
                  FUN_1001dc5cd(param_1);
                  param_1[10] = uVar3;
                  *(undefined8 *)(param_1 + 8) = uVar5;
                }
                local_7c = _xmlStrEqual(local_a8,*(xmlChar **)(lVar11 + 0x18));
                param_1[0xb] = param_1[0xb] + 1;
              } while (local_7c == 1);
              if ((int)param_1[0xb] < *(int *)(lVar11 + 0xc)) {
                local_7c = 0;
              }
              if ((int)local_7c < 0) {
                local_7c = 0;
              }
              if (local_7c == 0) break;
            }
          }
        }
        else {
          iVar9 = *(int *)(*(long *)(param_1 + 0x10) + (long)(int)plVar1[2] * 4);
          piVar12 = (int *)(*(long *)(*(long *)(param_1 + 2) + 0x30) + (long)(int)plVar1[2] * 8);
          if ((iVar9 < *piVar12) || (piVar12[1] < iVar9)) {
            local_b8 = 0;
          }
          else {
            local_b8 = 1;
          }
          local_7c = local_b8;
        }
        if (local_7c != 1) {
          if ((int)local_7c < 0) {
            *param_1 = 0xfffffffc;
            goto LAB_1001de856;
          }
          goto LAB_1001de81f;
        }
        if (((*(long *)(param_1 + 4) != 0) && (lVar11 != 0)) && (local_b0 != 0)) {
          (**(code **)(param_1 + 4))
                    (*(undefined8 *)(param_1 + 6),*(undefined8 *)(lVar11 + 0x18),
                     *(undefined8 *)(lVar11 + 0x50),local_b0);
        }
        if ((int)(param_1[10] + 1) < *(int *)(*(long *)(param_1 + 8) + 0x14)) {
          if ((int)param_1[0x13] < 1) {
            FUN_1001dd706(param_1,local_a8,local_b0);
          }
          FUN_1001dc5cd(param_1);
        }
        if (-1 < *(int *)((long)plVar1 + 0xc)) {
          piVar12 = (int *)(*(long *)(param_1 + 0x10) + (long)*(int *)((long)plVar1 + 0xc) * 4);
          *piVar12 = *piVar12 + 1;
        }
        if ((-1 < (int)plVar1[2]) && ((int)plVar1[2] < 0x123456)) {
          *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)(int)plVar1[2] * 4) = 0;
        }
        if ((*(long *)(*(long *)(*(long *)(param_1 + 2) + 0x10) + (long)(int)plVar1[1] * 8) != 0) &&
           (**(int **)(*(long *)(*(long *)(param_1 + 2) + 0x10) + (long)(int)plVar1[1] * 8) == 4)) {
          if (*(long *)(param_1 + 0x20) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x20));
          }
          pxVar10 = _xmlStrdup(local_a8);
          *(xmlChar **)(param_1 + 0x20) = pxVar10;
          *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 8);
          puVar13 = *(undefined1 **)(param_1 + 0x10);
          puVar14 = *(undefined1 **)(param_1 + 0x22);
          for (lVar11 = (long)*(int *)(*(long *)(param_1 + 2) + 0x28) * 4; lVar11 != 0;
              lVar11 = lVar11 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
        }
        *(undefined8 *)(param_1 + 8) =
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 2) + 0x10) + (long)(int)plVar1[1] * 8);
        param_1[10] = 0;
        if (*plVar1 != 0) {
          if (*(long *)(param_1 + 0x1a) == 0) {
            local_a8 = (xmlChar *)0x0;
            local_b0 = 0;
          }
          else {
            param_1[0x14] = param_1[0x14] + 1;
            if ((int)param_1[0x14] < (int)param_1[0x13]) {
              local_a8 = *(xmlChar **)(*(long *)(param_1 + 0x1a) + (long)(int)param_1[0x14] * 0x10);
              local_b0 = *(long *)(*(long *)(param_1 + 0x1a) + (long)(int)param_1[0x14] * 0x10 + 8);
            }
            else {
              local_a8 = (xmlChar *)0x0;
              local_b0 = 0;
            }
          }
        }
        bVar7 = true;
      }
      goto LAB_1001de87a;
    }
    local_bc = FUN_1001dd9cc(param_1,*(undefined8 *)(param_1 + 2),param_2,param_3);
  }
  else {
    local_bc = *param_1;
  }
  return local_bc;
LAB_1001de856:
  if ((param_1[10] != 0) || (*(int *)(*(long *)(param_1 + 8) + 0x14) == 0)) {
LAB_1001de87a:
    if ((bVar7) && ((*(long *)(param_1 + 8) != 0 && (**(int **)(param_1 + 8) != 4)))) {
      bVar7 = false;
      if (*(long *)(param_1 + 0x20) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x20));
      }
      pxVar10 = _xmlStrdup(local_a8);
      *(xmlChar **)(param_1 + 0x20) = pxVar10;
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 8);
      puVar13 = *(undefined1 **)(param_1 + 0x10);
      puVar14 = *(undefined1 **)(param_1 + 0x22);
      for (lVar11 = (long)*(int *)(*(long *)(param_1 + 2) + 0x28) * 4; lVar11 != 0;
          lVar11 = lVar11 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    param_1[1] = 0;
    FUN_1001dc942(param_1);
    if (*param_1 == 0) {
      local_a8 = *(xmlChar **)(*(long *)(param_1 + 0x1a) + (long)(int)param_1[0x14] * 0x10);
      local_b0 = *(long *)(*(long *)(param_1 + 0x1a) + (long)(int)param_1[0x14] * 0x10 + 8);
    }
  }
  goto LAB_1001de7c4;
}

