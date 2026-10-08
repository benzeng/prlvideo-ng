
/* WARNING: Removing unreachable block (ram,0x000100972586) */

int FUN_100971fe4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  int local_ac;
  int local_8c;
  int local_88;
  undefined8 local_78;
  long local_60;
  undefined8 local_50;
  long local_48;
  void *local_28;
  int local_20;
  
  local_8c = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  local_50 = 0;
  local_48 = 0;
  if (*(long *)(param_2 + 0x28) == 0) {
    FUN_100964522(param_1,10,0,0,0);
    local_ac = -1;
  }
  else {
    piVar4 = *(int **)(param_2 + 0x28);
    iVar2 = *piVar4;
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    if ((((uint)(int)*(short *)(param_2 + 0x62) >> 3 & 1) == 0) ||
       (*(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 4, iVar2 != 2)) {
      puVar10 = (undefined1 *)(*(code *)_xmlMalloc)((long)iVar2 * 8);
      if (puVar10 == (undefined1 *)0x0) {
        FUN_100960d45(param_1,"validating\n");
        local_ac = -1;
      }
      else {
        puVar11 = puVar10;
        for (lVar13 = (long)iVar2 * 8; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar11 = (undefined1 *)(*(code *)_xmlMalloc)((long)iVar2 * 8);
        if (puVar11 == (undefined1 *)0x0) {
          FUN_100960d45(param_1,"validating\n");
          local_ac = -1;
        }
        else {
          puVar14 = puVar11;
          for (lVar13 = (long)iVar2 * 8; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          lVar13 = FUN_100970881(param_1,*(undefined8 *)(*(long *)(param_1 + 0x60) + 8));
          for (local_60 = lVar13; lVar8 = local_60, local_60 != 0;
              local_60 = FUN_100970881(param_1,*(undefined8 *)(local_60 + 0x30))) {
            *(long *)(*(long *)(param_1 + 0x60) + 8) = local_60;
            if ((*(long *)(piVar4 + 2) == 0) || (((byte)piVar4[4] & 1) != 1)) {
              local_88 = 0;
              while ((local_88 < iVar2 &&
                     ((lVar5 = *(long *)(*(long *)(piVar4 + 6) + (long)local_88 * 8), lVar5 == 0 ||
                      (iVar9 = FUN_100971efc(local_60,*(undefined8 *)(lVar5 + 8)), iVar9 == 0))))) {
                local_88 = local_88 + 1;
              }
            }
            else {
              local_28 = (void *)0x0;
              if ((*(int *)(local_60 + 8) == 3) || (*(int *)(local_60 + 8) == 4)) {
                local_28 = _xmlHashLookup2(*(xmlHashTablePtr *)(piVar4 + 2),(xmlChar *)"#text",
                                           (xmlChar *)0x0);
              }
              else if (*(int *)(local_60 + 8) == 1) {
                if (*(long *)(local_60 + 0x48) == 0) {
                  local_28 = _xmlHashLookup2(*(xmlHashTablePtr *)(piVar4 + 2),
                                             *(xmlChar **)(local_60 + 0x10),(xmlChar *)0x0);
                }
                else {
                  local_28 = _xmlHashLookup2(*(xmlHashTablePtr *)(piVar4 + 2),
                                             *(xmlChar **)(local_60 + 0x10),
                                             *(xmlChar **)(*(long *)(local_60 + 0x48) + 0x10));
                  if (local_28 == (void *)0x0) {
                    local_28 = _xmlHashLookup2(*(xmlHashTablePtr *)(piVar4 + 2),(xmlChar *)"#any",
                                               *(xmlChar **)(*(long *)(local_60 + 0x48) + 0x10));
                  }
                }
                if (local_28 == (void *)0x0) {
                  local_28 = _xmlHashLookup2(*(xmlHashTablePtr *)(piVar4 + 2),(xmlChar *)"#any",
                                             (xmlChar *)0x0);
                }
              }
              local_88 = iVar2;
              if (((local_28 != (void *)0x0) &&
                  (local_88 = (int)local_28 + -1, ((uint)piVar4[4] >> 1 & 1) != 0)) &&
                 (iVar9 = FUN_100971efc(local_60,*(undefined8 *)
                                                  (*(long *)(*(long *)(piVar4 + 6) +
                                                            (long)local_88 * 8) + 8)), iVar9 == 0))
              {
                local_88 = iVar2;
              }
            }
            if (iVar2 <= local_88) break;
            if (*(long *)(puVar11 + (long)local_88 * 8) == 0) {
              *(long *)(puVar10 + (long)local_88 * 8) = local_60;
              *(long *)(puVar11 + (long)local_88 * 8) = local_60;
            }
            else {
              *(long *)(*(long *)(puVar11 + (long)local_88 * 8) + 0x30) = local_60;
              *(long *)(puVar11 + (long)local_88 * 8) = local_60;
            }
            if (*(long *)(local_60 + 0x30) == 0) {
              local_48 = local_60;
            }
            else {
              local_48 = *(long *)(local_60 + 0x30);
            }
          }
          local_78 = *(undefined8 *)(param_1 + 0x60);
          for (local_88 = 0; local_88 < iVar2; local_88 = local_88 + 1) {
            uVar12 = FUN_1009621d5(param_1,local_78);
            *(undefined8 *)(param_1 + 0x60) = uVar12;
            puVar6 = *(undefined8 **)(*(long *)(piVar4 + 6) + (long)local_88 * 8);
            if (*(long *)(puVar11 + (long)local_88 * 8) != 0) {
              local_50 = *(undefined8 *)(*(long *)(puVar11 + (long)local_88 * 8) + 0x30);
              *(undefined8 *)(*(long *)(puVar11 + (long)local_88 * 8) + 0x30) = 0;
            }
            *(undefined8 *)(*(long *)(param_1 + 0x60) + 8) =
                 *(undefined8 *)(puVar10 + (long)local_88 * 8);
            local_8c = FUN_10097521d(param_1,*puVar6);
            if (local_8c != 0) break;
            if (*(long *)(param_1 + 0x60) == 0) {
              if (*(long *)(param_1 + 0x68) == 0) {
                local_8c = -1;
                break;
              }
              bVar7 = false;
              for (local_20 = 0; local_20 < **(int **)(param_1 + 0x68); local_20 = local_20 + 1) {
                local_60 = FUN_100970881(param_1,*(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 8
                                                                      ) + (long)local_20 * 8) + 8));
                if (local_60 == 0) {
                  bVar7 = true;
                  break;
                }
              }
              if (0 < **(int **)(param_1 + 0x68)) {
                FUN_1009625c9(param_1,local_78);
                local_78 = *(undefined8 *)
                            (*(long *)(*(long *)(param_1 + 0x68) + 8) +
                             (long)**(int **)(param_1 + 0x68) * 8 + -8);
              }
              for (local_20 = 0; local_20 < **(int **)(param_1 + 0x68) + -1; local_20 = local_20 + 1
                  ) {
                FUN_1009625c9(param_1,*(undefined8 *)
                                       (*(long *)(*(long *)(param_1 + 0x68) + 8) +
                                       (long)local_20 * 8));
              }
              FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
              *(undefined8 *)(param_1 + 0x68) = 0;
              if (!bVar7) {
                FUN_100964522(param_1,0xc,*(undefined8 *)(local_60 + 0x10),0,0);
                local_8c = -1;
                *(undefined8 *)(param_1 + 0x60) = local_78;
                goto LAB_1009729b0;
              }
            }
            else {
              local_60 = FUN_100970881(param_1,*(undefined8 *)(*(long *)(param_1 + 0x60) + 8));
              FUN_1009625c9(param_1,local_78);
              local_78 = *(undefined8 *)(param_1 + 0x60);
              *(undefined8 *)(param_1 + 0x60) = 0;
              if (local_60 != 0) {
                FUN_100964522(param_1,0xc,*(undefined8 *)(local_60 + 0x10),0,0);
                local_8c = -1;
                *(undefined8 *)(param_1 + 0x60) = local_78;
                goto LAB_1009729b0;
              }
            }
            if (*(long *)(puVar11 + (long)local_88 * 8) != 0) {
              *(undefined8 *)(*(long *)(puVar11 + (long)local_88 * 8) + 0x30) = local_50;
            }
          }
          if (*(long *)(param_1 + 0x60) != 0) {
            FUN_1009625c9(param_1,*(undefined8 *)(param_1 + 0x60));
          }
          *(undefined8 *)(param_1 + 0x60) = local_78;
          *(long *)(*(long *)(param_1 + 0x60) + 8) = lVar8;
          if (local_8c != 0) {
            FUN_100964522(param_1,0xb,0,0,0);
            local_8c = -1;
          }
LAB_1009729b0:
          *(undefined4 *)(param_1 + 0x38) = uVar3;
          for (local_60 = local_48;
              ((local_60 != 0 && (local_60 != lVar13)) && (*(long *)(local_60 + 0x38) != 0));
              local_60 = *(long *)(local_60 + 0x38)) {
            *(long *)(*(long *)(local_60 + 0x38) + 0x30) = local_60;
          }
          if ((local_8c == 0) && (iVar1 < *(int *)(param_1 + 0x50))) {
            FUN_100964276(param_1,iVar1);
          }
          (*(code *)_xmlFree)(puVar10);
          (*(code *)_xmlFree)(puVar11);
          local_ac = local_8c;
        }
      }
    }
    else {
      if (*(long *)(param_1 + 0x60) != 0) {
        lVar13 = *(long *)(param_1 + 0x60);
        uVar12 = FUN_100970881(param_1,*(undefined8 *)(*(long *)(param_1 + 0x60) + 8));
        *(undefined8 *)(lVar13 + 8) = uVar12;
      }
      if (**(int **)**(undefined8 **)(piVar4 + 6) == 3) {
        local_8c = FUN_10097521d(param_1,**(undefined8 **)(*(long *)(piVar4 + 6) + 8));
      }
      else {
        local_8c = FUN_10097521d(param_1,*(undefined8 *)**(undefined8 **)(piVar4 + 6));
      }
      if ((local_8c == 0) && (*(long *)(param_1 + 0x60) != 0)) {
        lVar13 = *(long *)(param_1 + 0x60);
        uVar12 = FUN_100970881(param_1,*(undefined8 *)(*(long *)(param_1 + 0x60) + 8));
        *(undefined8 *)(lVar13 + 8) = uVar12;
      }
      *(undefined4 *)(param_1 + 0x38) = uVar3;
      local_ac = local_8c;
    }
  }
  return local_ac;
}

