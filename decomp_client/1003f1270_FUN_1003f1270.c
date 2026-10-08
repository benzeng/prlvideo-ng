
undefined8 FUN_1003f1270(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  QStringList *pQVar7;
  undefined1 local_d0 [40];
  AnonymousUnion0 local_a8;
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  cVar3 = QVariant::toBool();
  if (cVar3 == '\0') {
    return 0;
  }
  uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_50 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19);
  FUN_1003e1800(&local_48,uVar6,&local_50,0);
  uVar4 = QVariant::toUInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f1313;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003f1313:
  if (uVar4 - 0x80c < 0xf3) {
    return 0;
  }
  uVar1 = (uVar4 >> 8) - 7;
  if ((uVar1 < 10) && ((0x305U >> (uVar1 & 0x1f) & 1) != 0)) {
    return 0;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  local_90 = (QArrayData *)QString::fromAscii_helper("1onSuccessMessageClosed()",0x19);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  FUN_100a1c600(local_88,uVar6,&local_90,&local_a0);
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f13d9;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003f13d9:
  iVar5 = CMessageManager::instance();
  pQVar7 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_shared_null_1021e15e8;
  local_a8.field1 = (Data *)PTR_shared_null_1021e15e8;
  uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_d0._8_8_ = QString::fromAscii_helper("Identification.VmName",0x15);
  FUN_1003e1800(local_d0 + 0x10,uVar6,local_d0 + 8,0);
  QVariant::toString();
  FUN_1000341d0(&local_a8,local_d0 + 0x20);
  local_d0._0_8_ = puVar2;
  CMessageManager::showMessageBox
            (iVar5,(QWidget *)(ulong)(uVar4 >> 8 != 8 | 0x3c44),pQVar7,
             (QStringList *)&local_a8.field0,(CSlotInfo *)local_d0,SUB81(local_88,0));
  FUN_100039a80(local_d0);
  if (*(int *)local_d0._32_8_ != -1) {
    if (*(int *)local_d0._32_8_ != 0) {
      LOCK();
      *(int *)local_d0._32_8_ = *(int *)local_d0._32_8_ + -1;
      local_31 = *(int *)local_d0._32_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f14d9;
    }
    QArrayData::deallocate((QArrayData *)local_d0._32_8_,2,8);
  }
LAB_1003f14d9:
  QVariant::~QVariant((QVariant *)(local_d0 + 0x10));
  if (*(int *)local_d0._8_8_ != -1) {
    if (*(int *)local_d0._8_8_ != 0) {
      LOCK();
      *(int *)local_d0._8_8_ = *(int *)local_d0._8_8_ + -1;
      local_31 = *(int *)local_d0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f151b;
    }
    QArrayData::deallocate((QArrayData *)local_d0._8_8_,2,8);
  }
LAB_1003f151b:
  FUN_100039a80(&local_a8);
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_31 = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
  return 1;
}

