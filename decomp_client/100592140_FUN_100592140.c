
QVariant *
FUN_100592140(QVariant *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  size_t sVar5;
  long lVar6;
  int iVar7;
  Data *pDVar8;
  int local_bc;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  undefined4 local_a0;
  int local_94;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  QVariant local_70;
  Data *local_60;
  QArrayData *local_58;
  QVariant local_50;
  Data *local_40;
  undefined1 local_31;
  
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c0);
  puVar3 = PTR_s_DispPreferences_102274488;
  plVar1 = *(long **)(param_2 + 0x18);
  pcVar2 = *(code **)(*plVar1 + 0x60);
  iVar7 = -1;
  if (PTR_s_DispPreferences_102274488 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_DispPreferences_102274488);
    iVar7 = (int)sVar5;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
  (*pcVar2)(&local_50,plVar1,&local_58,param_5);
  FUN_1003df0d0(&local_40,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100592208;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100592208:
  QObject::property((char *)&local_70);
  FUN_1003df0d0(&local_60,&local_70);
  QVariant::~QVariant(&local_70);
  cVar4 = QAbstractButton::isChecked();
  if (cVar4 == '\0') {
    FUN_10012b980(&local_b8,&local_60);
    local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
    local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
    if (*(int *)(local_b8 + 8) != *(int *)(local_b8 + 0xc)) {
      do {
        local_a0 = 1;
        local_bc = **(int **)local_b0;
        iVar7 = *(int *)(local_40 + 8);
        if (iVar7 != *(int *)(local_40 + 0xc)) {
          pDVar8 = local_40 + (long)iVar7 * 8 + 0x10;
          lVar6 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar7 * -8;
          do {
            if (**(int **)pDVar8 == local_bc) {
              FUN_10028a360(&local_40,&local_bc);
              break;
            }
            pDVar8 = pDVar8 + 8;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
        local_b0 = local_b0 + 8;
      } while (local_b0 != local_a8);
    }
    local_a0 = 1;
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005924bf;
      }
      iVar7 = *(int *)(local_b8 + 0xc);
      if (iVar7 != *(int *)(local_b8 + 8)) {
        lVar6 = (long)*(int *)(local_b8 + 8) * 8 + (long)iVar7 * -8;
        pDVar8 = local_b8 + (long)iVar7 * 8 + 8;
        do {
          if (*(void **)pDVar8 != (void *)0x0) {
            operator_delete(*(void **)pDVar8);
          }
          pDVar8 = pDVar8 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(local_b8);
    }
  }
  else {
    FUN_10012b980(&local_90,&local_60);
    local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
    local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
    if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
      do {
        local_78 = 1;
        local_94 = **(int **)local_88;
        iVar7 = *(int *)(local_40 + 8);
        if (iVar7 != *(int *)(local_40 + 0xc)) {
          pDVar8 = local_40 + (long)iVar7 * 8 + 0x10;
          lVar6 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar7 * -8;
          do {
            if (**(int **)pDVar8 == local_94) goto LAB_1005922e0;
            pDVar8 = pDVar8 + 8;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
        FUN_10012b680(&local_40,&local_94);
LAB_1005922e0:
        local_88 = local_88 + 8;
      } while (local_88 != local_80);
    }
    local_78 = 1;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005924bf;
      }
      iVar7 = *(int *)(local_90 + 0xc);
      if (iVar7 != *(int *)(local_90 + 8)) {
        lVar6 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar7 * -8;
        pDVar8 = local_90 + (long)iVar7 * 8 + 8;
        do {
          if (*(void **)pDVar8 != (void *)0x0) {
            operator_delete(*(void **)pDVar8);
          }
          pDVar8 = pDVar8 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(local_90);
    }
  }
LAB_1005924bf:
  if (DAT_1022743b8 == 0) {
    DAT_1022743b8 = FUN_1003df280("QList<PRL_ALLOWED_VM_COMMAND>",0xffffffffffffffff,1);
  }
  QVariant::QVariant(param_1,DAT_1022743b8,&local_40,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059255f;
    }
    iVar7 = *(int *)(local_60 + 0xc);
    if (iVar7 != *(int *)(local_60 + 8)) {
      lVar6 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar7 * -8;
      pDVar8 = local_60 + (long)iVar7 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_10059255f:
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
    iVar7 = *(int *)(local_40 + 0xc);
    if (iVar7 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar7 * -8;
      pDVar8 = local_40 + (long)iVar7 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_40);
  }
  return param_1;
}

