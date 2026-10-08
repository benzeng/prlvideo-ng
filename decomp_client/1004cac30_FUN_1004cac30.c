
void FUN_1004cac30(long param_1)

{
  QString *pQVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QVariant local_90;
  QArrayData *local_80;
  QVariant local_78;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  uVar6 = FUN_10044e560();
  local_50 = (QArrayData *)QString::fromAscii_helper("Hardware.Memory.RAM",0x13);
  FUN_1003e1800(&local_48,uVar6,&local_50,0);
  uVar3 = QVariant::toUInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cacbd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004cacbd:
  uVar6 = FUN_10044e560(param_1);
  local_68 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.VideoMemorySize",0x1e);
  FUN_1003e1800(&local_60,uVar6,&local_68,0);
  uVar4 = QVariant::toUInt((bool *)&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cad36;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004cad36:
  uVar6 = FUN_10044e560(param_1);
  local_80 = (QArrayData *)QString::fromAscii_helper("Settings.Autoprotect.TotalSnapshots",0x23);
  FUN_1003e1800(&local_78,uVar6,&local_80,0);
  uVar5 = QVariant::toUInt((bool *)&local_78);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cadaf;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004cadaf:
  uVar6 = FUN_10044e560(param_1);
  local_98 = (QArrayData *)QString::fromAscii_helper("Settings.Autoprotect.Enabled",0x1c);
  FUN_1003e1800(&local_90,uVar6,&local_98,0);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cae3a;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004cae3a:
  if (cVar2 == '\0') {
    ppuVar7 = &PTR_s_At_least__1_of_free_space_is_nee_10226eb30;
  }
  else {
    ppuVar7 = &PTR_s_You_need_to_have_at_least__1_of_f_10226eb28;
  }
  QMetaObject::tr((char *)&local_a0,PTR_staticMetaObject_1021e1520,(int)*ppuVar7);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x38) + 0x20);
  FUN_100def650(&local_b0,(ulong)uVar5 * ((ulong)uVar4 + (ulong)uVar3) * 0x100000,1);
  QString::arg(&local_a8,&local_a0,&local_b0,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004caefa;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1004caefa:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004caf30;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1004caf30:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      UNLOCK();
      if (*(int *)local_a0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
  return;
}

