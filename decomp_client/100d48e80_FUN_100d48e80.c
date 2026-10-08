
int FUN_100d48e80(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  QMapNodeBase *pQVar6;
  QMapNodeBase *pQVar7;
  QMapNodeBase *pQVar8;
  uint uVar9;
  long lVar10;
  QMapNodeBase *pQVar11;
  QMapNodeBase *pQVar12;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar13;
  undefined1 local_a0 [4];
  int local_9c;
  QMapNodeBase *local_98;
  QMapNodeBase *local_90;
  QMapNodeBase *local_88;
  uint *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  puVar4 = PTR_shared_null_1021e15e8;
  local_70 = PTR_shared_null_1021e15e8;
  iVar5 = FUN_100d48870(param_1,&local_70);
  if (iVar5 < 0) {
    _PrlDbg_PrlResultToString(iVar5,&local_68);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Error : Failed to get optical devices handles list error 0x%X \'%s\'",iVar5,
                  local_68);
    goto LAB_100d4987b;
  }
  local_78 = puVar4;
  iVar5 = FUN_100d48a30(param_1,&local_78);
  if (iVar5 < 0) {
    _PrlDbg_PrlResultToString(iVar5,&local_60);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Error : Failed to get hard disk handles list error 0x%X \'%s\'",iVar5,local_60);
  }
  else {
    FUN_10014a970(&local_80,&local_70);
    FUN_100d4d070(&local_80,&local_78);
    local_88 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    local_90 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    local_98 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    lVar10 = 0;
    if ((int)local_80[2] < (int)local_80[3]) {
      do {
        if (1 < *local_80) {
          FUN_100d4d1a0(&local_80,local_80[1]);
        }
        puVar2 = *(undefined8 **)(local_80 + ((int)local_80[2] + lVar10) * 2 + 4);
        iVar5 = _PrlVmDev_GetIfaceType(*puVar2,&local_9c);
        if (iVar5 < 0) {
          _PrlDbg_PrlResultToString(iVar5,&local_58);
          FUN_100df99c0("","PrlSdkUtils",0,
                        "Error : Failed to get device iface type error 0x%X \'%s\'",iVar5,local_58);
          goto LAB_100d49797;
        }
        iVar5 = _PrlVmDev_GetStackIndex(*puVar2,local_a0);
        if (iVar5 < 0) {
          _PrlDbg_PrlResultToString(iVar5,&local_50);
          FUN_100df99c0("","PrlSdkUtils",0,
                        "Error : Failed to get device stack index error 0x%X \'%s\'",iVar5,local_50)
          ;
          goto LAB_100d49797;
        }
        if (local_9c == 2) {
          FUN_100d4cfa0(&local_90,local_a0,puVar2);
        }
        else if (local_9c == 1) {
          FUN_100d4cfa0(&local_98,local_a0,puVar2);
        }
        else if (local_9c == 0) {
          FUN_100d4cfa0(&local_88,local_a0,puVar2);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (long)(int)local_80[3] - (long)(int)local_80[2]);
    }
    pQVar7 = local_98;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","PrlSdkUtils",2,"IDE dev count %d, SCSI disks count %d found",
                    *(uint *)(local_88 + 4),*(uint *)(local_98 + 4));
    }
    pQVar12 = local_88;
    if (*(uint *)(pQVar7 + 4) == 0) {
      iVar5 = 0;
      if (1 < DAT_10230ffd0) {
        iVar5 = 0;
        FUN_100df99c0("","PrlSdkUtils",2,"No SCSI disk found, nothing to switch to IDE");
      }
    }
    else if ((int)(*(uint *)(pQVar7 + 4) + *(uint *)(local_88 + 4) + *(uint *)(local_90 + 4)) < 0xb)
    {
      if (1 < *(uint *)local_90) {
        FUN_100d4d350(&local_90);
      }
      if (*(long *)(local_90 + 0x10) == 0) {
        pQVar6 = local_90 + 8;
      }
      else {
        pQVar6 = *(QMapNodeBase **)(local_90 + 0x20);
      }
      if (1 < *(uint *)local_90) {
        FUN_100d4d350(&local_90);
      }
      pQVar8 = local_90;
      pQVar11 = local_90 + 8;
      if (pQVar11 != pQVar6) {
        uVar9 = 0;
        do {
          if (uVar9 != *(uint *)(pQVar6 + 0x18)) {
            FUN_100df99c0("","PrlSdkUtils",0,"Changing SATA dev stack index SATA %u -> SATA %u",
                          *(uint *)(pQVar6 + 0x18),uVar9);
            iVar5 = _PrlVmDev_SetStackIndex(*(undefined8 *)(pQVar6 + 0x20),uVar9);
            uVar13 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 0x20);
            if (iVar5 < 0) {
              uVar1 = *(uint *)(pQVar6 + 0x18);
              _PrlDbg_PrlResultToString(iVar5,&local_48);
              FUN_100df99c0("","PrlSdkUtils",0,
                            "Error : Failed to change IDE dev stack index %u -> %u error 0x%X \'%s\'"
                            ,uVar1,uVar9,CONCAT44(uVar13,iVar5),local_48);
              goto LAB_100d49797;
            }
          }
          pQVar6 = (QMapNodeBase *)QMapNodeBase::nextNode();
          uVar9 = uVar9 + 1;
        } while (pQVar11 != pQVar6);
      }
      if (1 < *(uint *)pQVar12) {
        FUN_100d4d350(&local_88);
        pQVar12 = local_88;
      }
      if (*(long *)(pQVar12 + 0x10) == 0) {
        pQVar6 = pQVar12 + 8;
      }
      else {
        pQVar6 = *(QMapNodeBase **)(pQVar12 + 0x20);
      }
      if (1 < *(uint *)pQVar12) {
        FUN_100d4d350(&local_88);
        pQVar12 = local_88;
      }
      if (pQVar12 + 8 != pQVar6) {
        uVar9 = 0;
        do {
          if (uVar9 != *(uint *)(pQVar6 + 0x18)) {
            FUN_100df99c0("","PrlSdkUtils",0,"Changing IDE dev stack index IDE %u -> IDE %u",
                          *(uint *)(pQVar6 + 0x18),uVar9);
            iVar5 = _PrlVmDev_SetStackIndex(*(undefined8 *)(pQVar6 + 0x20),uVar9);
            uVar13 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 0x20);
            if (iVar5 < 0) {
              uVar1 = *(uint *)(pQVar6 + 0x18);
              _PrlDbg_PrlResultToString(iVar5,&local_38);
              FUN_100df99c0("","PrlSdkUtils",0,
                            "Error : Failed to change IDE dev stack index %u -> %u error 0x%X \'%s\'"
                            ,uVar1,uVar9,CONCAT44(uVar13,iVar5),local_38);
              goto LAB_100d49797;
            }
          }
          uVar9 = uVar9 + 1;
          pQVar6 = (QMapNodeBase *)QMapNodeBase::nextNode();
        } while (pQVar12 + 8 != pQVar6);
      }
      uVar9 = *(uint *)(pQVar12 + 4);
      if ((int)(6 - *(uint *)(pQVar8 + 4)) < 1) {
        if (1 < *(uint *)pQVar7) {
          FUN_100d4d350(&local_98);
          pQVar7 = local_98;
        }
        if (1 < *(uint *)pQVar7) {
          FUN_100d4d350(&local_98);
        }
        iVar5 = FUN_100d48c00();
      }
      else if ((int)(6 - *(uint *)(pQVar8 + 4)) < (int)*(uint *)(pQVar7 + 4)) {
        if (1 < *(uint *)pQVar7) {
          FUN_100d4d350(&local_98);
          pQVar7 = local_98;
        }
        if (1 < *(uint *)pQVar7) {
          FUN_100d4d350(&local_98);
          pQVar7 = local_98;
        }
        iVar3 = -uVar9;
        if (iVar3 + 4 < 1) {
          if (iVar3 != -4) {
            iVar5 = uVar9 - 4;
            do {
              QMapNodeBase::previousNode();
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          iVar5 = uVar9 - 4;
          do {
            QMapNodeBase::nextNode();
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0);
        }
        iVar5 = FUN_100d48c00();
        if (-1 < iVar5) {
          if (1 < *(uint *)pQVar8) {
            FUN_100d4d350(&local_90);
            pQVar8 = local_90;
          }
          if (1 < *(uint *)pQVar8) {
            FUN_100d4d350(&local_90);
          }
          iVar5 = FUN_100d48d70();
          if (-1 < iVar5) {
            if (1 < *(uint *)pQVar7) {
              FUN_100d4d350(&local_98);
              pQVar7 = local_98;
            }
            if (iVar3 + 4 < 1) {
              if (iVar3 != -4) {
                iVar5 = uVar9 - 4;
                do {
                  QMapNodeBase::previousNode();
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
            }
            else {
              iVar5 = uVar9 - 4;
              do {
                QMapNodeBase::nextNode();
                iVar5 = iVar5 + 1;
              } while (iVar5 != 0);
            }
            if (1 < *(uint *)pQVar7) {
              FUN_100d4d350(&local_98);
            }
            iVar5 = FUN_100d48c00();
          }
        }
      }
      else {
        if (1 < *(uint *)pQVar8) {
          FUN_100d4d350(&local_90);
          pQVar8 = local_90;
        }
        if (1 < *(uint *)pQVar8) {
          FUN_100d4d350(&local_90);
        }
        iVar5 = FUN_100d48d70();
        if (-1 < iVar5) {
          if (1 < *(uint *)pQVar7) {
            FUN_100d4d350(&local_98);
            pQVar7 = local_98;
          }
          if (1 < *(uint *)pQVar7) {
            FUN_100d4d350(&local_98);
          }
          iVar5 = FUN_100d48c00();
        }
      }
    }
    else {
      iVar5 = -0x7ffffc97;
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Error : Unable to switch SCSI disks to IDE, not enough free IDE slots.");
    }
LAB_100d49797:
    pQVar7 = local_98;
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_39 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_100d497de;
      }
      if (*(long *)(local_98 + 0x10) != 0) {
        FUN_100d4d160();
        QMapDataBase::freeTree(pQVar7,(int)*(undefined8 *)(pQVar7 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar7);
    }
LAB_100d497de:
    pQVar7 = local_90;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_39 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_100d49825;
      }
      if (*(long *)(local_90 + 0x10) != 0) {
        FUN_100d4d160();
        QMapDataBase::freeTree(pQVar7,(int)*(undefined8 *)(pQVar7 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar7);
    }
LAB_100d49825:
    pQVar7 = local_88;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_39 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_100d49869;
      }
      if (*(long *)(local_88 + 0x10) != 0) {
        FUN_100d4d160();
        QMapDataBase::freeTree(pQVar7,(int)*(undefined8 *)(pQVar7 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar7);
    }
LAB_100d49869:
    FUN_10014a540(&local_80);
  }
  FUN_10014a540(&local_78);
LAB_100d4987b:
  FUN_10014a540(&local_70);
  return iVar5;
}

