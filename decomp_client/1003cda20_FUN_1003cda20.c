
undefined8 FUN_1003cda20(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  undefined8 uVar9;
  QVariant *this;
  int *piVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_a4;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  _func_void_Node_ptr *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  lVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fb760);
  if (lVar6 == 0) {
LAB_1003cdb65:
    FUN_1003dea50(param_1,param_4);
    return param_1;
  }
  lVar7 = FUN_1003b0a60(*(undefined8 *)(param_2 + 0x18));
  puVar3 = PTR_s_VmConfig_1021f1e00;
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    goto LAB_1003cdb65;
  }
  local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar11 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar11 = (int)sVar8;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar11);
  FUN_1003ae3b0(&local_70,param_4,&local_78);
  FUN_1000626e0(&local_68,&local_70);
  local_60 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_60);
      iVar11 = local_60[2];
      if (iVar11 != local_60[3]) {
        local_68 = local_68 + (long)local_68[2] * 2 + 4;
        piVar10 = local_60 + (long)iVar11 * 2 + 4;
        lVar7 = (long)local_60[3] * 8 + (long)iVar11 * -8;
        do {
          piVar2 = *(int **)local_68;
          *(int **)piVar10 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          local_68 = local_68 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  FUN_100036370(&local_68);
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cdbd9;
    }
    QHashData::free_helper(local_70);
  }
LAB_1003cdbd9:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cdc09;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003cdc09:
  if (local_48 != 0) {
    do {
      if (local_58 == local_50) break;
      local_80 = *(QArrayData **)local_58;
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        local_88 = (QArrayData *)QString::fromAscii_helper("Hardware.Memory.RAM",0x13);
        cVar4 = QString::endsWith(&local_80,&local_88,1);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003cdcb5;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1003cdcb5:
        if (cVar4 != '\0') {
          iVar11 = -1;
          if (puVar3 != (undefined *)0x0) {
            sVar8 = _strlen(puVar3);
            iVar11 = (int)sVar8;
          }
          local_90 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar11);
          uVar9 = FUN_1003ae480(&local_40,&local_90);
          this = (QVariant *)FUN_1002edf40(uVar9,&local_80);
          local_a4 = FUN_100140f50(lVar6);
          QVariant::QVariant(&local_a0,3,&local_a4,0);
          QVariant::operator=(this,&local_a0);
          QVariant::~QVariant(&local_a0);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003cdd70;
            }
            QArrayData::deallocate(local_90,2,8);
          }
        }
LAB_1003cdd70:
        local_48 = 0;
      }
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003cdda7;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1003cdda7:
      local_58 = local_58 + 2;
      uVar5 = local_48 ^ 1;
      bVar12 = local_48 != 1;
      local_48 = uVar5;
    } while (bVar12);
  }
  FUN_100036370(&local_60);
  FUN_1003dea50(param_1,&local_40);
  if (*(int *)(local_40 + 0x10) == -1) {
    return param_1;
  }
  if (*(int *)(local_40 + 0x10) != 0) {
    LOCK();
    pcVar1 = local_40 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + -1;
    local_31 = *(int *)pcVar1 != 0;
    UNLOCK();
    if ((bool)local_31) {
      return param_1;
    }
  }
  QHashData::free_helper(local_40);
  return param_1;
}

