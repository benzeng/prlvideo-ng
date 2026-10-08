
int FUN_100d41740(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  QArrayData *pQVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  QArrayData *pQVar6;
  int *piVar7;
  uint uVar8;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  long local_60;
  uint local_54;
  int *local_50;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  undefined1 local_31;
  
  piVar7 = (int *)PTR_shared_null_1021e15e8;
  local_50 = (int *)PTR_shared_null_1021e15e8;
  local_54 = 0;
  iVar3 = _PrlSrvCfg_GetOpticalDisksCount(*param_1,&local_54);
  if (iVar3 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the host optical device count, 0x%x",iVar3);
    goto LAB_100d41c51;
  }
  if (local_54 != 0) {
    uVar8 = 0;
    do {
      local_60 = 0;
      iVar4 = _PrlSrvCfg_GetOpticalDisk(*param_1,uVar8,&local_60);
      if (iVar4 < 0) {
        bVar1 = true;
        FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the host optical device by index, 0x%x",
                      iVar4);
        iVar3 = iVar4;
      }
      else {
        local_68 = (QArrayData *)PTR_shared_null_1021e1288;
        local_48 = 0;
        iVar4 = _PrlSrvCfgDev_GetId(local_60,0,&local_48);
        if ((iVar4 == -0x7ffffffa) || (iVar4 == 0)) {
          QByteArray::resize((int)&local_68);
          lVar5 = local_60;
          if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
          }
          iVar4 = _PrlSrvCfgDev_GetId(lVar5,local_68 + *(long *)(local_68 + 0x10),&local_48);
        }
        if (iVar4 < 0) {
          bVar1 = true;
          FUN_100df99c0("","PrlSdkUtils",0,"Failed to get Dev id with error 0x%X",iVar4);
        }
        else {
          pQVar6 = local_68 + *(long *)(local_68 + 0x10);
          if ((pQVar6 != (QArrayData *)0x0) && (*(uint *)(local_68 + 4) != 0)) {
            lVar5 = 0;
            do {
              if (pQVar6[lVar5] == (QArrayData)0x0) break;
              lVar5 = lVar5 + 1;
            } while ((uint)lVar5 < *(uint *)(local_68 + 4));
            if ((int)lVar5 == -1) {
              _strlen((char *)pQVar6);
            }
          }
          QString::fromUtf8_helper((char *)&local_78,(int)pQVar6);
          QString::normalized(&local_70,&local_78,1,0);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d418d0;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_100d418d0:
          local_44 = 0;
          iVar4 = _PrlSrvCfgDev_GetName(local_60,0,&local_44);
          if ((iVar4 == -0x7ffffffa) || (iVar4 == 0)) {
            QByteArray::resize((int)&local_68);
            lVar5 = local_60;
            if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
              QByteArray::reallocData
                        (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
            }
            iVar4 = _PrlSrvCfgDev_GetName(lVar5,local_68 + *(long *)(local_68 + 0x10),&local_44);
          }
          if (iVar4 < 0) {
            bVar1 = true;
            FUN_100df99c0("","PrlSdkUtils",0,"Failed to get Dev name with error 0x%X",iVar4);
          }
          else {
            pQVar6 = local_68 + *(long *)(local_68 + 0x10);
            if ((pQVar6 != (QArrayData *)0x0) && (*(uint *)(local_68 + 4) != 0)) {
              lVar5 = 0;
              do {
                if (pQVar6[lVar5] == (QArrayData)0x0) break;
                lVar5 = lVar5 + 1;
              } while ((uint)lVar5 < *(uint *)(local_68 + 4));
              if ((int)lVar5 == -1) {
                _strlen((char *)pQVar6);
              }
            }
            QString::fromUtf8_helper((char *)&local_88,(int)pQVar6);
            QString::normalized(&local_80,&local_88,1,0);
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d419e0;
              }
              QArrayData::deallocate(local_88,2,8);
            }
LAB_100d419e0:
            pQVar2 = local_70;
            pQVar6 = local_80;
            local_98 = local_70;
            if (1 < *(int *)local_70 + 1U) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + 1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
            }
            local_90 = local_80;
            if (1 < *(int *)local_80 + 1U) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + 1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
            }
            FUN_1001c44c0(&local_50,&local_98);
            if (*(int *)pQVar6 != -1) {
              if (*(int *)pQVar6 != 0) {
                LOCK();
                *(int *)pQVar6 = *(int *)pQVar6 + -1;
                local_31 = *(int *)pQVar6 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d41a60;
              }
              QArrayData::deallocate(pQVar6,2,8);
            }
LAB_100d41a60:
            if (*(int *)pQVar2 != -1) {
              if (*(int *)pQVar2 != 0) {
                LOCK();
                *(int *)pQVar2 = *(int *)pQVar2 + -1;
                local_31 = *(int *)pQVar2 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d41a8d;
              }
              QArrayData::deallocate(pQVar2,2,8);
            }
LAB_100d41a8d:
            iVar4 = iVar3;
            bVar1 = false;
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d41b56;
              }
              QArrayData::deallocate(local_80,2,8);
              bVar1 = false;
            }
          }
LAB_100d41b56:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d41b86;
            }
            QArrayData::deallocate(local_70,2,8);
          }
        }
LAB_100d41b86:
        iVar3 = iVar4;
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d41bb6;
          }
          QArrayData::deallocate(local_68,1,8);
        }
      }
LAB_100d41bb6:
      if (local_60 != 0) {
        _PrlHandle_Free();
      }
      if (bVar1) goto LAB_100d41c51;
      uVar8 = uVar8 + 1;
      piVar7 = local_50;
    } while (uVar8 < local_54);
  }
  if ((int *)*param_2 != piVar7) {
    FUN_1002101d0(&local_40,&local_50);
    piVar7 = (int *)*param_2;
    *param_2 = local_40;
    local_40 = piVar7;
    if (*piVar7 != -1) {
      if (*piVar7 != 0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d41c2b;
      }
      FUN_1001c45d0(&local_40,piVar7);
    }
  }
LAB_100d41c2b:
  iVar3 = 0;
LAB_100d41c51:
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      UNLOCK();
      if (*local_50 != 0) {
        return iVar3;
      }
      local_31 = 0;
    }
    FUN_1001c45d0(&local_50,local_50);
  }
  return iVar3;
}

