
undefined8 *
FUN_1003d52f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  QVariant *this;
  int *piVar9;
  int iVar10;
  bool bVar11;
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
  
  iVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  *param_1 = PTR_shared_null_1021e15d0;
  puVar3 = PTR_s_VmConfig_1021f1e00;
  iVar10 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar10 = (int)sVar6;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar10);
  FUN_1003ae3b0(&local_68,param_4,&local_70);
  FUN_1000626e0(&local_60,&local_68);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar10 = local_58[2];
      if (iVar10 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar9 = local_58 + (long)iVar10 * 2 + 4;
        lVar7 = (long)local_58[3] * 8 + (long)iVar10 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar9 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_60 = local_60 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
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
      if ((bool)local_31) goto LAB_1003d5448;
    }
    QHashData::free_helper(local_68);
  }
LAB_1003d5448:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d5478;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003d5478:
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
        iVar10 = -1;
        if (puVar3 != (undefined *)0x0) {
          sVar6 = _strlen(puVar3);
          iVar10 = (int)sVar6;
        }
        local_80 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar10);
        uVar8 = FUN_1003ae480(param_1,&local_80);
        this = (QVariant *)FUN_1002edf40(uVar8,&local_78);
        QComboBox::currentIndex();
        QComboBox::itemData((int)&local_90,iVar4);
        QVariant::operator=(this,&local_90);
        QVariant::~QVariant(&local_90);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d5569;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1003d5569:
        local_40 = 0;
      }
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d55a0;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1003d55a0:
      local_50 = local_50 + 2;
      uVar5 = local_40 ^ 1;
      bVar11 = local_40 != 1;
      local_40 = uVar5;
    } while (bVar11);
  }
  FUN_100036370(&local_58);
  return param_1;
}

