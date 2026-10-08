
int FUN_100d480f0(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  QMapNodeBase *pQVar5;
  QMapNodeBase *pQVar6;
  uint uVar7;
  long lVar8;
  QMapNodeBase *pQVar9;
  QMapNodeBase *pQVar10;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar11;
  undefined1 local_98 [4];
  int local_94;
  QMapNodeBase *local_90;
  QMapNodeBase *local_88;
  QMapNodeBase *local_80;
  uint *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_1021e15e8;
  local_68 = PTR_shared_null_1021e15e8;
  iVar4 = FUN_100d48870(param_1,&local_68);
  if (iVar4 < 0) {
    _PrlDbg_PrlResultToString(iVar4,&local_60);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Error : Failed to get optical devices handles list error 0x%X \'%s\'",iVar4,
                  local_60);
    goto LAB_100d486e4;
  }
  local_70 = puVar3;
  iVar4 = FUN_100d48a30(param_1,&local_70);
  if (iVar4 < 0) {
    _PrlDbg_PrlResultToString(iVar4,&local_58);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Error : Failed to get hard disk handles list error 0x%X \'%s\'",iVar4,local_58);
  }
  else {
    FUN_10014a970(&local_78,&local_68);
    FUN_100d4d070(&local_78,&local_70);
    local_80 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    local_88 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    local_90 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    lVar8 = 0;
    if ((int)local_78[2] < (int)local_78[3]) {
      do {
        if (1 < *local_78) {
          FUN_100d4d1a0(&local_78,local_78[1]);
        }
        puVar2 = *(undefined8 **)(local_78 + ((int)local_78[2] + lVar8) * 2 + 4);
        iVar4 = _PrlVmDev_GetIfaceType(*puVar2,&local_94);
        if (iVar4 < 0) {
          _PrlDbg_PrlResultToString(iVar4,&local_50);
          FUN_100df99c0("","PrlSdkUtils",0,
                        "Error : Failed to get device iface type error 0x%X \'%s\'",iVar4,local_50);
          goto LAB_100d48603;
        }
        iVar4 = _PrlVmDev_GetStackIndex(*puVar2,local_98);
        if (iVar4 < 0) {
          _PrlDbg_PrlResultToString(iVar4,&local_48);
          FUN_100df99c0("","PrlSdkUtils",0,
                        "Error : Failed to get device stack index error 0x%X \'%s\'",iVar4,local_48)
          ;
          goto LAB_100d48603;
        }
        if (local_94 == 2) {
          FUN_100d4cfa0(&local_90,local_98,puVar2);
        }
        else if (local_94 == 1) {
          FUN_100d4cfa0(&local_88,local_98,puVar2);
        }
        else if (local_94 == 0) {
          FUN_100d4cfa0(&local_80,local_98,puVar2);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (long)(int)local_78[3] - (long)(int)local_78[2]);
    }
    pQVar10 = local_88;
    if (1 < DAT_10230ffd0) {
      in_stack_ffffffffffffff48 =
           CONCAT44((int)((ulong)in_stack_ffffffffffffff48 >> 0x20),*(uint *)(local_90 + 4));
      FUN_100df99c0("","PrlSdkUtils",2,
                    "IDE dev count %d, SCSI disks count %d, SATA disks count %d found",
                    *(uint *)(local_80 + 4),*(uint *)(local_88 + 4),in_stack_ffffffffffffff48);
    }
    pQVar6 = local_90;
    if (*(uint *)(local_90 + 4) + *(uint *)(pQVar10 + 4) == 0) {
      iVar4 = 0;
      if (1 < DAT_10230ffd0) {
        iVar4 = 0;
        FUN_100df99c0("","PrlSdkUtils",2,"No SCSI and SATA disk found, nothing to switch to IDE");
      }
    }
    else if ((int)(*(uint *)(local_90 + 4) + *(uint *)(pQVar10 + 4) + *(uint *)(local_80 + 4)) < 5)
    {
      if (1 < *(uint *)local_80) {
        FUN_100d4d350(&local_80);
      }
      if (*(long *)(local_80 + 0x10) == 0) {
        pQVar5 = local_80 + 8;
      }
      else {
        pQVar5 = *(QMapNodeBase **)(local_80 + 0x20);
      }
      if (1 < *(uint *)local_80) {
        FUN_100d4d350(&local_80);
      }
      pQVar9 = local_80 + 8;
      if (pQVar9 != pQVar5) {
        uVar7 = 0;
        do {
          if (uVar7 != *(uint *)(pQVar5 + 0x18)) {
            FUN_100df99c0("","PrlSdkUtils",0,"Changing IDE dev stack index IDE %u -> IDE %u",
                          *(uint *)(pQVar5 + 0x18),uVar7);
            iVar4 = _PrlVmDev_SetStackIndex(*(undefined8 *)(pQVar5 + 0x20),uVar7);
            uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 0x20);
            if (iVar4 < 0) {
              uVar1 = *(uint *)(pQVar5 + 0x18);
              _PrlDbg_PrlResultToString(iVar4,&local_40);
              FUN_100df99c0("","PrlSdkUtils",0,
                            "Error : Failed to change IDE dev stack index %u -> %u error 0x%X \'%s\'"
                            ,uVar1,uVar7,CONCAT44(uVar11,iVar4),local_40);
              goto LAB_100d48603;
            }
          }
          uVar7 = uVar7 + 1;
          pQVar5 = (QMapNodeBase *)QMapNodeBase::nextNode();
        } while (pQVar9 != pQVar5);
      }
      if (1 < *(uint *)pQVar10) {
        FUN_100d4d350(&local_88);
        pQVar10 = local_88;
      }
      if (1 < *(uint *)pQVar10) {
        FUN_100d4d350(&local_88);
      }
      iVar4 = FUN_100d48c00();
      if (-1 < iVar4) {
        if (1 < *(uint *)pQVar6) {
          FUN_100d4d350(&local_90);
          pQVar6 = local_90;
        }
        if (1 < *(uint *)pQVar6) {
          FUN_100d4d350(&local_90);
        }
        iVar4 = FUN_100d48c00();
      }
    }
    else {
      iVar4 = -0x7ffffc97;
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Error : Unable to switch SCSI and SATA disks to IDE, not enough free IDE slots."
                   );
    }
LAB_100d48603:
    pQVar10 = local_90;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d4864a;
      }
      if (*(long *)(local_90 + 0x10) != 0) {
        FUN_100d4d160();
        QMapDataBase::freeTree(pQVar10,(int)*(undefined8 *)(pQVar10 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar10);
    }
LAB_100d4864a:
    pQVar10 = local_88;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d4868e;
      }
      if (*(long *)(local_88 + 0x10) != 0) {
        FUN_100d4d160();
        QMapDataBase::freeTree(pQVar10,(int)*(undefined8 *)(pQVar10 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar10);
    }
LAB_100d4868e:
    pQVar10 = local_80;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d486d2;
      }
      if (*(long *)(local_80 + 0x10) != 0) {
        FUN_100d4d160();
        QMapDataBase::freeTree(pQVar10,(int)*(undefined8 *)(pQVar10 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar10);
    }
LAB_100d486d2:
    FUN_10014a540(&local_78);
  }
  FUN_10014a540(&local_70);
LAB_100d486e4:
  FUN_10014a540(&local_68);
  return iVar4;
}

