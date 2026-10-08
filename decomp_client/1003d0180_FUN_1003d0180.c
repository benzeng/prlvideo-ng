
undefined8 *
FUN_1003d0180(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  QVariant *this;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined4 local_94;
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  _func_void_Node_ptr *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15a0);
  *param_1 = PTR_shared_null_1021e15d0;
  puVar3 = PTR_s_VmConfig_1021f1e00;
  iVar9 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar9 = (int)sVar5;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar9);
  FUN_1003ae3b0(&local_68,param_4,&local_70);
  FUN_1000626e0(&local_60,&local_68);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar9 = local_58[2];
      if (iVar9 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar8 = local_58 + (long)iVar9 * 2 + 4;
        lVar6 = (long)local_58[3] * 8 + (long)iVar9 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          local_60 = local_60 + 2;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  FUN_100036370(&local_60);
  if (*(int *)(local_68 + 0x10) != -1) {
    if (*(int *)(local_68 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_68 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d02d8;
    }
    QHashData::free_helper(local_68);
  }
LAB_1003d02d8:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d0308;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003d0308:
  if (local_40 != 0) {
    do {
      if (local_50 == local_48) break;
      local_78 = *(QArrayData **)local_50;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        iVar9 = -1;
        if (puVar3 != (undefined *)0x0) {
          sVar5 = _strlen(puVar3);
          iVar9 = (int)sVar5;
        }
        local_80 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar9);
        uVar7 = FUN_1003ae480(param_1,&local_80);
        this = (QVariant *)FUN_1002edf40(uVar7,&local_78);
        local_94 = QSpinBox::value();
        QVariant::QVariant(&local_90,3,&local_94,0);
        QVariant::operator=(this,&local_90);
        QVariant::~QVariant(&local_90);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d0400;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1003d0400:
        local_40 = 0;
      }
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d0437;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1003d0437:
      local_50 = local_50 + 2;
      uVar4 = local_40 ^ 1;
      bVar10 = local_40 != 1;
      local_40 = uVar4;
    } while (bVar10);
  }
  FUN_100036370(&local_58);
  return param_1;
}

