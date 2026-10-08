
uint FUN_100d49cd0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  QArrayData *pQVar10;
  long lVar11;
  uint local_84;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  int *local_68;
  uint *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  int *local_40;
  undefined1 local_31;
  
  puVar6 = PTR_shared_null_1021e15e8;
  local_60 = (uint *)PTR_shared_null_1021e15e8;
  local_84 = FUN_100d48a30(param_1,&local_60);
  if ((int)local_84 < 0) {
    _PrlDbg_PrlResultToString(local_84,&local_58);
    FUN_100df99c0("","PrlSdkUtils",0,"Error on GetHardDiskHandleList with code 0x%x: \'%s\'",
                  local_84,local_58);
  }
  else {
    local_68 = (int *)puVar6;
    local_84 = local_60[3];
    if ((int)local_60[2] < (int)local_84) {
      lVar11 = 0;
      do {
        local_70 = (QArrayData *)PTR_shared_null_1021e1288;
        if (1 < *local_60) {
          FUN_100d4d1a0(&local_60,local_60[1]);
        }
        puVar2 = *(undefined8 **)(local_60 + ((int)local_60[2] + lVar11) * 2 + 4);
        local_4c = 0;
        uVar7 = _PrlVmDev_GetImagePath(*puVar2,0,&local_4c);
        if ((uVar7 == 0x80000006) || (uVar7 == 0)) {
          QByteArray::resize((int)&local_70);
          uVar3 = *puVar2;
          if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
          }
          uVar7 = _PrlVmDev_GetImagePath(uVar3,local_70 + *(long *)(local_70 + 0x10),&local_4c);
        }
        if ((int)uVar7 < 0) {
          _PrlDbg_PrlResultToString(uVar7,&local_48);
          bVar5 = true;
          FUN_100df99c0("","PrlSdkUtils",0,"Error on PrlVmDev_GetImagePath with code 0x%x: \'%s\'",
                        uVar7,local_48);
          local_84 = uVar7;
        }
        else {
          pQVar10 = local_70 + *(long *)(local_70 + 0x10);
          if (pQVar10 != (QArrayData *)0x0) {
            _strlen((char *)pQVar10);
          }
          QString::fromUtf8_helper((char *)&local_80,(int)pQVar10);
          QString::normalized(&local_78,&local_80,1,0);
          FUN_1000341d0(&local_68);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d49e4e;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_100d49e4e:
          bVar5 = false;
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d49ece;
            }
            QArrayData::deallocate(local_80,2,8);
            bVar5 = false;
          }
        }
LAB_100d49ece:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d49efe;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_100d49efe:
        if (bVar5) goto LAB_100d4a01d;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (long)(int)local_60[3] - (long)(int)local_60[2]);
    }
    if ((int *)*param_2 != local_68) {
      local_40 = local_68;
      if (*local_68 != -1) {
        if (*local_68 == 0) {
          QListData::detach((int)&local_40);
          iVar1 = local_40[2];
          if (iVar1 != local_40[3]) {
            piVar8 = local_68 + (long)local_68[2] * 2 + 4;
            piVar9 = local_40 + (long)iVar1 * 2 + 4;
            lVar11 = (long)local_40[3] * 8 + (long)iVar1 * -8;
            do {
              piVar4 = *(int **)piVar8;
              *(int **)piVar9 = piVar4;
              if (1 < *piVar4 + 1U) {
                LOCK();
                *piVar4 = *piVar4 + 1;
                local_31 = *piVar4 != 0;
                UNLOCK();
              }
              piVar9 = piVar9 + 2;
              piVar8 = piVar8 + 2;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
        }
        else {
          LOCK();
          *local_68 = *local_68 + 1;
          local_31 = *local_68 != 0;
          UNLOCK();
        }
      }
      piVar8 = (int *)*param_2;
      *param_2 = local_40;
      local_40 = piVar8;
      FUN_100039a80(&local_40);
    }
    local_84 = 0;
LAB_100d4a01d:
    FUN_100039a80(&local_68);
  }
  FUN_10014a540(&local_60);
  return local_84;
}

