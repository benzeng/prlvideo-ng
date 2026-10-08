
int FUN_100b732f0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 long *param_5)

{
  int *piVar1;
  QArrayData *pQVar2;
  long **pplVar3;
  QMapNodeBase *pQVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  long ***ppplVar11;
  bool bVar12;
  int *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  uint local_60;
  QMapNodeBase *local_58;
  QMapNodeBase *local_50;
  long **local_48;
  long **local_40;
  undefined1 local_31;
  
  local_48 = (long **)&local_48;
  local_40 = local_48;
  if (*(int *)(param_1 + 0x128) == 0) {
    iVar5 = FUN_100b9b6a0(&local_48,param_3,param_4);
    if (iVar5 == 0) {
      if ((long ***)local_48 != &local_48) {
        ppplVar11 = (long ***)local_48;
        do {
          if (4 < *(int *)(ppplVar11 + 0x3b)) {
            if (2 < DAT_10230ffd0) {
              FUN_100df99c0("","License",3,"License %s [%s] was loaded successfully.",ppplVar11 + 4,
                            (long)ppplVar11 + 0x184);
            }
            local_50 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
            local_58 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
            FUN_100b91c30(ppplVar11,&local_50,&local_58);
            FUN_100b7c510(&local_80,&local_50);
            local_78 = local_80;
            if (*local_80 != -1) {
              if (*local_80 == 0) {
                QListData::detach((int)&local_78);
                iVar5 = local_78[2];
                if (iVar5 != local_78[3]) {
                  piVar9 = local_80 + (long)local_80[2] * 2 + 4;
                  piVar10 = local_78 + (long)iVar5 * 2 + 4;
                  lVar8 = (long)local_78[3] * 8 + (long)iVar5 * -8;
                  do {
                    piVar1 = *(int **)piVar9;
                    *(int **)piVar10 = piVar1;
                    if (1 < *piVar1 + 1U) {
                      LOCK();
                      *piVar1 = *piVar1 + 1;
                      local_31 = *piVar1 != 0;
                      UNLOCK();
                    }
                    piVar10 = piVar10 + 2;
                    piVar9 = piVar9 + 2;
                    lVar8 = lVar8 + -8;
                  } while (lVar8 != 0);
                }
              }
              else {
                LOCK();
                *local_80 = *local_80 + 1;
                local_31 = *local_80 != 0;
                UNLOCK();
              }
            }
            local_70 = local_78 + (long)local_78[2] * 2 + 4;
            local_68 = local_78 + (long)local_78[3] * 2 + 4;
            local_60 = 1;
            FUN_100036370(&local_80);
            if (local_60 != 0) {
              do {
                if (local_70 == local_68) break;
                pQVar2 = *(QArrayData **)local_70;
                if (1 < *(int *)pQVar2 + 1U) {
                  LOCK();
                  *(int *)pQVar2 = *(int *)pQVar2 + 1;
                  local_31 = *(int *)pQVar2 != 0;
                  UNLOCK();
                }
                if (local_60 != 0) {
                  local_60 = 0;
                }
                if (*(int *)pQVar2 != -1) {
                  if (*(int *)pQVar2 != 0) {
                    LOCK();
                    *(int *)pQVar2 = *(int *)pQVar2 + -1;
                    local_31 = *(int *)pQVar2 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100b73560;
                  }
                  QArrayData::deallocate(pQVar2,2,8);
                }
LAB_100b73560:
                local_70 = local_70 + 2;
                uVar6 = local_60 ^ 1;
                bVar12 = local_60 != 1;
                local_60 = uVar6;
              } while (bVar12);
            }
            FUN_100036370(&local_78);
            pQVar4 = local_58;
            if (param_5 != (long *)0x0) {
              param_5[4] = (long)ppplVar11[0x51];
              param_5[3] = (long)ppplVar11[0x50];
              param_5[2] = (long)ppplVar11[0x4f];
              pplVar3 = ppplVar11[0x4d];
              param_5[1] = (long)ppplVar11[0x4e];
              *param_5 = (long)pplVar3;
            }
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100b73618;
              }
              if (*(long *)(local_58 + 0x10) != 0) {
                FUN_10012a490();
                QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
              }
              QMapDataBase::freeData((QMapDataBase *)pQVar4);
            }
LAB_100b73618:
            pQVar4 = local_50;
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100b73670;
              }
              if (*(long *)(local_50 + 0x10) != 0) {
                FUN_10012a490();
                QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
              }
              QMapDataBase::freeData((QMapDataBase *)pQVar4);
            }
          }
LAB_100b73670:
          ppplVar11 = (long ***)*ppplVar11;
        } while (ppplVar11 != &local_48);
      }
      FUN_100b98100(&local_48);
      iVar5 = 0;
    }
    else {
      uVar7 = FUN_100b9d570();
      FUN_100df99c0("","License",0,"Cannot load license, %s",uVar7);
      if (iVar5 == 1) {
        FUN_100b738e0();
        iVar5 = 1;
      }
    }
  }
  else {
    iVar5 = -0x11;
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","License",3,"Operation on loading license after activation is cancelled.");
    }
  }
  return iVar5;
}

