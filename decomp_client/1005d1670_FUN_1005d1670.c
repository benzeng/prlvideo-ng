
bool FUN_1005d1670(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  bool bVar7;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined1 local_98;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined1 local_40;
  undefined *local_38;
  undefined1 local_29;
  
  iVar3 = QComboBox::currentIndex();
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + 0x28) + 9) & 0x80) != 0) {
    lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    *(uint *)(lVar4 + 0x3c) = (iVar3 == 0) + 1;
    uVar5 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    FUN_1005bbea0(uVar5);
  }
  cVar2 = QAbstractButton::isChecked();
  if (cVar2 != '\0') {
    cVar2 = QAbstractButton::isChecked();
    if (cVar2 == '\0') {
      local_60 = (QArrayData *)QString::fromAscii_helper("",0);
    }
    else {
      QLineEdit::text();
    }
    FUN_1001c22d0(&local_70);
    FUN_1005cb7f0(&local_68);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d18d9;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1005d18d9:
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
    if ((*(byte *)(*(long *)(lVar4 + 0x28) + 9) & 0x80) == 0) {
      local_78 = (QArrayData *)QString::fromAscii_helper("",0);
    }
    else {
      QComboBox::currentIndex();
      QComboBox::itemData((int)&local_88,(int)lVar4);
      QVariant::toString();
      QVariant::~QVariant(&local_88);
    }
    uVar5 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    pQVar6 = (QArrayData *)QString::fromAscii_helper("",0);
    iVar3 = QComboBox::currentIndex();
    local_b0 = local_60;
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
    }
    local_a8 = local_68;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
    }
    if (1 < *(int *)pQVar6 + 1U) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + 1;
      local_29 = *(int *)pQVar6 != 0;
      UNLOCK();
    }
    local_98 = iVar3 == 0;
    local_90 = local_78;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
    }
    local_a0 = pQVar6;
    FUN_1005b9880(uVar5,&local_b0);
    FUN_1001ea7d0(&local_b0);
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_29 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d1a20;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_1005d1a20:
    uVar5 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    FUN_1005b9810(uVar5,1);
    lVar4 = FUN_1005ec9d0(*(long *)(param_1 + 0x10) + 0x48);
    if (lVar4 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm Configuration instance is null.");
    }
    else {
      uVar5 = FUN_1005ec9d0(*(long *)(param_1 + 0x10) + 0x48);
      FUN_1005caf40(uVar5);
    }
    bVar7 = lVar4 != 0;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d1ab8;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1005d1ab8:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005d1ae8;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1005d1ae8:
    if (*(int *)local_60 == -1) {
      return bVar7;
    }
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return bVar7;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
    return bVar7;
  }
  uVar5 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  puVar1 = PTR_shared_null_1021e1288;
  local_58 = PTR_shared_null_1021e1288;
  iVar3 = *(int *)PTR_shared_null_1021e1288;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + 1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  local_50 = puVar1;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  local_48 = puVar1;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  local_40 = 0;
  local_38 = puVar1;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
  }
  FUN_1005b9880(uVar5,&local_58);
  FUN_1001ea7d0(&local_58);
  if (*(int *)puVar1 == -1) goto LAB_1005d1862;
  if (*(int *)puVar1 == 0) {
LAB_1005d17bb:
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  else {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
    if (!(bool)local_29) goto LAB_1005d17bb;
  }
  if (*(int *)puVar1 == -1) goto LAB_1005d1862;
  if (*(int *)puVar1 == 0) {
LAB_1005d17ee:
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  else {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
    if (!(bool)local_29) goto LAB_1005d17ee;
  }
  if (*(int *)puVar1 == -1) goto LAB_1005d1862;
  if (*(int *)puVar1 == 0) {
LAB_1005d181d:
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  else {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + -1;
    local_29 = *(int *)puVar1 != 0;
    UNLOCK();
    if (!(bool)local_29) goto LAB_1005d181d;
  }
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005d1862;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1005d1862:
  uVar5 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  FUN_1005b9810(uVar5,0);
  return true;
}

