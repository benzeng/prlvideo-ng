
undefined8 FUN_10015eb90(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  bool bVar8;
  QArrayData *local_80;
  long local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  _PrlApi_CreateStringsList(&local_40);
  local_60 = (int *)*param_3;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_60);
      iVar1 = local_60[2];
      if (iVar1 != local_60[3]) {
        puVar6 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
        piVar7 = local_60 + (long)iVar1 * 2 + 4;
        lVar3 = (long)local_60[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          puVar6 = puVar6 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
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
      uVar4 = local_40;
      local_68 = *(QArrayData **)local_58;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        QString::toUtf8();
        if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
        }
        _PrlStrList_AddItem(uVar4,local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015ed03;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_10015ed03:
        local_48 = 0;
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10015ed3a;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10015ed3a:
      local_58 = local_58 + 2;
      uVar5 = local_48 ^ 1;
      bVar8 = local_48 != 1;
      local_48 = uVar5;
    } while ((bVar8) && (local_58 != local_50));
  }
  FUN_100039a80(&local_60);
  FUN_10018c250(&local_78,param_2);
  uVar4 = _PrlVm_Delete(local_78,local_40);
  local_80 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar4 = FUN_10015c580(param_1,uVar4,0x7e8,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015edd4;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10015edd4:
  if (local_78 != 0) {
    _PrlHandle_Free();
  }
  return uVar4;
}

