
void FUN_100592830(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  Data *pDVar4;
  long lVar5;
  bool bVar6;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  uint local_70;
  QVariant local_68;
  Data *local_58;
  QVariant local_50;
  Data *local_40;
  undefined1 local_31;
  
  bVar2 = (bool)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c0);
  QObject::property((char *)&local_50);
  FUN_1003df0d0(&local_40,&local_50);
  QVariant::~QVariant(&local_50);
  MappingHelpers::getFirstValue((QHash *)&local_68);
  FUN_1003df0d0(&local_58,&local_68);
  QVariant::~QVariant(&local_68);
  FUN_10012b980(&local_88,&local_40);
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  do {
    local_70 = 1;
LAB_1005928f4:
    if (local_80 == local_78) goto LAB_100592959;
    if (local_70 != 0) break;
LAB_1005928e0:
    local_80 = local_80 + 8;
  } while( true );
  iVar1 = *(int *)(local_58 + 8);
  if (iVar1 != *(int *)(local_58 + 0xc)) {
    pDVar4 = local_58 + (long)iVar1 * 8 + 0x10;
    lVar5 = (long)*(int *)(local_58 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (**(int **)pDVar4 == **(int **)local_80) goto LAB_1005928e0;
      pDVar4 = pDVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  local_80 = local_80 + 8;
  uVar3 = local_70 ^ 1;
  bVar6 = local_70 != 1;
  local_70 = uVar3;
  if (bVar6) goto LAB_1005928f4;
LAB_100592959:
  if (*(int *)local_88 == -1) goto LAB_1005929bf;
  if (*(int *)local_88 != 0) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + -1;
    local_31 = *(int *)local_88 != 0;
    UNLOCK();
    if ((bool)local_31) goto LAB_1005929bf;
  }
  iVar1 = *(int *)(local_88 + 0xc);
  if (iVar1 != *(int *)(local_88 + 8)) {
    lVar5 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar1 * -8;
    pDVar4 = local_88 + (long)iVar1 * 8 + 8;
    do {
      if (*(void **)pDVar4 != (void *)0x0) {
        operator_delete(*(void **)pDVar4);
      }
      pDVar4 = pDVar4 + -8;
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0);
  }
  QListData::dispose(local_88);
LAB_1005929bf:
  QAbstractButton::setChecked(bVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100592a3f;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_100592a3f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_40);
  }
  return;
}

