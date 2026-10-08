
undefined8 FUN_10015e7c0(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  bool bVar9;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  long local_40;
  undefined1 local_31;
  
  local_40 = 0;
  iVar2 = _PrlApi_CreateStringsList(&local_40);
  if (iVar2 == 0) {
    local_60 = (int *)*param_2;
    if (*local_60 != -1) {
      if (*local_60 == 0) {
        QListData::detach((int)&local_60);
        iVar2 = local_60[2];
        if (iVar2 != local_60[3]) {
          puVar7 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
          piVar8 = local_60 + (long)iVar2 * 2 + 4;
          lVar5 = (long)local_60[3] * 8 + (long)iVar2 * -8;
          do {
            piVar1 = (int *)*puVar7;
            *(int **)piVar8 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            piVar8 = piVar8 + 2;
            puVar7 = puVar7 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *local_60 = *local_60 + 1;
        local_31 = *local_60 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)local_60[2] * 2 + 4;
    local_50 = local_60 + (long)local_60[3] * 2 + 4;
    local_48 = 1;
    if (local_60[2] != local_60[3]) {
      do {
        lVar5 = local_40;
        local_68 = *(QArrayData **)local_58;
        if (1 < *(int *)local_68 + 1U) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + 1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
        }
        iVar2 = 7;
        if (local_48 != 0) {
          QString::toUtf8();
          if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
          }
          iVar3 = _PrlStrList_AddItem(lVar5,local_70 + *(long *)(local_70 + 0x10));
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10015e980;
            }
            QArrayData::deallocate(local_70,1,8);
          }
LAB_10015e980:
          if (iVar3 == 0) {
            local_48 = 0;
          }
          else {
            iVar2 = 1;
            FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlStrList_AddItem failed with RC = %.8X"
                          ,iVar3);
          }
        }
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015e9e7;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_10015e9e7:
        if (iVar2 != 7) goto LAB_10015ea19;
        local_58 = local_58 + 2;
        uVar4 = local_48 ^ 1;
        bVar9 = local_48 != 1;
        local_48 = uVar4;
      } while ((bVar9) && (local_58 != local_50));
    }
    iVar2 = 4;
LAB_10015ea19:
    FUN_100039a80(&local_60);
    uVar6 = 0;
    if (iVar2 == 4) {
      uVar6 = _PrlSrv_StartSearchVms(*(undefined8 *)(param_1 + 0x80),local_40);
      local_78 = (QArrayData *)PTR_shared_null_1021e1288;
      uVar6 = FUN_10015c580(param_1,uVar6,0x7f6,&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10015ea91;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
  }
  else {
    uVar6 = 0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlApi_CreateStringsList failed with RC = %.8X",
                  iVar2);
  }
LAB_10015ea91:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return uVar6;
}

