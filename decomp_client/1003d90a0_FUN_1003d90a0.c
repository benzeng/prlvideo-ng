
undefined8 *
FUN_1003d90a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  size_t sVar8;
  undefined8 uVar9;
  QVariant *this;
  int *piVar10;
  bool bVar11;
  undefined4 local_b0;
  undefined4 local_ac;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  _func_void_Node_ptr *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  uint local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15d0;
  lVar7 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1350);
  if (lVar7 == 0) {
    return param_1;
  }
  cVar4 = QAbstractButton::isChecked();
  if (cVar4 == '\0') {
    return param_1;
  }
  QObject::property((char *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  local_b0 = 1;
  iVar5 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                     "AlwaysWhenOnBattery",0xffffffff,1);
  if (iVar5 != 0) {
    iVar5 = QString::compare_helper
                      (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"Never",
                       0xffffffff,1);
    local_b0 = 0;
    if (iVar5 != 0) {
      iVar5 = QString::compare_helper
                        (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                         "Threshold",0xffffffff,1);
      local_b0 = 2;
      if (iVar5 != 0) goto LAB_1003d9472;
    }
  }
  puVar3 = PTR_s_VmConfig_1021f1e00;
  iVar5 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar5 = (int)sVar8;
  }
  local_88 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
  FUN_1003ae3b0(&local_80,param_4,&local_88);
  FUN_1000626e0(&local_78,&local_80);
  local_70 = local_78;
  if (*local_78 != -1) {
    if (*local_78 == 0) {
      QListData::detach((int)&local_70);
      iVar5 = local_70[2];
      if (iVar5 != local_70[3]) {
        local_78 = local_78 + (long)local_78[2] * 2 + 4;
        piVar10 = local_70 + (long)iVar5 * 2 + 4;
        lVar7 = (long)local_70[3] * 8 + (long)iVar5 * -8;
        do {
          piVar2 = *(int **)local_78;
          *(int **)piVar10 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          local_78 = local_78 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_78 = *local_78 + 1;
      local_31 = *local_78 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)local_70[2] * 2 + 4;
  local_60 = local_70 + (long)local_70[3] * 2 + 4;
  local_58 = 1;
  FUN_100036370(&local_78);
  if (*(int *)(local_80 + 0x10) != -1) {
    if (*(int *)(local_80 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_80 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d92d8;
    }
    QHashData::free_helper(local_80);
  }
LAB_1003d92d8:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d9308;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003d9308:
  if (local_58 != 0) {
    do {
      if (local_68 == local_60) break;
      local_90 = *(QArrayData **)local_68;
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      if (local_58 != 0) {
        iVar5 = -1;
        if (puVar3 != (undefined *)0x0) {
          sVar8 = _strlen(puVar3);
          iVar5 = (int)sVar8;
        }
        local_98 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
        uVar9 = FUN_1003ae480(param_1,&local_98);
        this = (QVariant *)FUN_1002edf40(uVar9,&local_90);
        local_ac = local_b0;
        QVariant::QVariant(&local_a8,2,&local_ac,0);
        QVariant::operator=(this,&local_a8);
        QVariant::~QVariant(&local_a8);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003d940c;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_1003d940c:
        local_58 = 0;
      }
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003d9449;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1003d9449:
      local_68 = local_68 + 2;
      uVar6 = local_58 ^ 1;
      bVar11 = local_58 != 1;
      local_58 = uVar6;
    } while (bVar11);
  }
  FUN_100036370(&local_70);
LAB_1003d9472:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

