
void FUN_100425e80(long *param_1,int param_2,QString *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  CSlotInfo *pCVar11;
  QString QVar12;
  uint uVar13;
  Data_conflict local_e8;
  undefined4 local_e0;
  QArrayData *local_d8;
  int *local_d0 [4];
  QVariant local_b0 [2];
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  if (((param_1[0xd] == 0) || (*(int *)(param_1[0xd] + 4) == 0)) ||
     ((QTypedArrayData<unsigned_short> *)param_1[0xe] == (QTypedArrayData<unsigned_short> *)0x0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Hard Disk instance is null.");
    return;
  }
  if (param_2 == 0) {
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
    CVmDevice::setUserFriendlyName((QTypedArrayData<unsigned_short> *)param_1[0xe]);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004260a3;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1004260a3:
    QVar12.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[0xd] != 0) &&
       (QVar12.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[0xd] + 4) != 0)
       ) {
      QVar12.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[0xe];
    }
    local_48 = (QArrayData *)puVar2;
    CVmDevice::setSystemName(QVar12);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004260f9;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
  else {
    CVmDevice::getSystemName();
    cVar3 = operator==(param_3,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100425f17;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100425f17:
    QVar12.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[0xd] != 0) &&
       (QVar12.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[0xd] + 4) != 0)
       ) {
      QVar12.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[0xe];
    }
    local_58 = (QArrayData *)*param_4;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    CVmDevice::setUserFriendlyName(QVar12);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100425f81;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100425f81:
    QVar12.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((param_1[0xd] != 0) &&
       (QVar12.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0, *(int *)(param_1[0xd] + 4) != 0)
       ) {
      QVar12.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[0xe];
    }
    local_60 = (QArrayData *)param_3->field0_0x0;
    if (1 < *(int *)local_60 + 1U) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
    CVmDevice::setSystemName(QVar12);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100425feb;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100425feb:
    cVar4 = QFile::exists(param_3);
    if (cVar4 != '\0') {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    iVar6 = QComboBox::currentIndex();
    if (cVar3 == '\0' && iVar6 == 1) {
      FUN_100424a20(param_1);
    }
  }
LAB_1004260f9:
  iVar6 = QComboBox::currentIndex();
  if (iVar6 != 2) {
    return;
  }
  lVar8 = FUN_100424060(param_1);
  if (lVar8 != 0) {
    lVar10 = 0;
    if ((param_1[0xd] != 0) && (lVar10 = 0, *(int *)(param_1[0xd] + 4) != 0)) {
      lVar10 = param_1[0xe];
    }
    FUN_10013a450(*(undefined8 *)(param_1[0xc] + 0x90),lVar8,lVar10,0);
  }
  uVar13 = *(uint *)(*(long *)(*(long *)(param_1[0xc] + 0x90) + 0x28) + 8) & 0x8000;
  bVar5 = FUN_10013ba10();
  if ((byte)(bVar5 ^ (byte)(uVar13 >> 0xf)) != 1) goto LAB_100426368;
  if (uVar13 == 0) {
    local_d8 = (QArrayData *)QString::fromAscii_helper("1showBootCampTable()",0x14);
    local_e0 = 0x80000000;
    local_e8.field7 = 0;
    FUN_100a1c600(local_d0,param_1,&local_d8,&local_e8);
    QVariant::~QVariant((QVariant *)&local_e8);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100426290;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_100426290:
    CWindowResizeController::beginResize((QSize *)param_1[0x17],(CSlotInfo *)(param_1 + 0x18));
    QVariant::~QVariant(local_b0);
    if (local_d0[0] == (int *)0x0) goto LAB_100426368;
    LOCK();
    *local_d0[0] = *local_d0[0] + -1;
    iVar6 = *local_d0[0];
    UNLOCK();
  }
  else {
    QWidget::hide();
    lVar10 = param_1[0x17];
    iVar6 = *(int *)(param_1[5] + 0x1c);
    iVar1 = *(int *)(param_1[5] + 0x14);
    iVar7 = QComboBox::currentIndex();
    if (iVar7 == 1) {
      pCVar11 = (CSlotInfo *)0xdc;
      if (((*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xa8) + 0x28) + 9) & 0x80) == 0) &&
         (pCVar11 = (CSlotInfo *)0xb4,
         (*(byte *)(*(long *)(*(long *)(param_1[0xc] + 0xb0) + 0x28) + 9) & 0x80) != 0)) {
        pCVar11 = (CSlotInfo *)0x104;
      }
    }
    else {
      uVar9 = (**(code **)(*param_1 + 0x78))(param_1);
      pCVar11 = (CSlotInfo *)(uVar9 >> 0x20);
    }
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_80 = 0;
    local_88 = 0;
    local_70 = 0x80000000;
    local_78.field7 = 0;
    local_68 = 1;
    CWindowResizeController::beginResize((int)lVar10,(iVar6 + 1) - iVar1,pCVar11);
    QVariant::~QVariant((QVariant *)&local_78);
    if (local_98 == (int *)0x0) goto LAB_100426368;
    LOCK();
    *local_98 = *local_98 + -1;
    iVar6 = *local_98;
    UNLOCK();
    local_d0[0] = local_98;
  }
  local_31 = iVar6 != 0;
  if ((!(bool)local_31) && (local_d0[0] != (int *)0x0)) {
    operator_delete(local_d0[0]);
  }
LAB_100426368:
  lVar10 = 0;
  if ((param_1[0xd] != 0) && (lVar10 = 0, *(int *)(param_1[0xd] + 4) != 0)) {
    lVar10 = param_1[0xe];
  }
  FUN_10013bd60(*(undefined8 *)(param_1[0xc] + 0x90),lVar10);
  if (lVar8 != 0) {
    CHwHardDisk::getDeviceSize();
    uVar9 = 0;
    if ((param_1[0xd] != 0) && (uVar9 = 0, *(int *)(param_1[0xd] + 4) != 0)) {
      uVar9 = param_1[0xe];
    }
    CVmHardDisk::setSize(uVar9);
  }
  return;
}

