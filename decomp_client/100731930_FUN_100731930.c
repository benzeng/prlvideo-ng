
void FUN_100731930(long param_1)

{
  QVariant *pQVar1;
  QVariant local_c8;
  QArrayData *local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  param_1 = param_1 + 0x18;
  local_28 = (QArrayData *)QString::fromAscii_helper("cpu",3);
  pQVar1 = (QVariant *)FUN_10008c590(param_1);
  QVariant::QVariant(&local_38,0);
  QVariant::operator=(pQVar1,&local_38);
  QVariant::~QVariant(&local_38);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007319b9;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1007319b9:
  local_40 = (QArrayData *)QString::fromAscii_helper("ram",3);
  pQVar1 = (QVariant *)FUN_10008c590(param_1);
  QVariant::QVariant(&local_50,0);
  QVariant::operator=(pQVar1,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100731a2d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100731a2d:
  local_58 = (QArrayData *)QString::fromAscii_helper("ramBytes",8);
  pQVar1 = (QVariant *)FUN_10008c590(param_1);
  QVariant::QVariant(&local_68,0);
  QVariant::operator=(pQVar1,&local_68);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100731aa1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100731aa1:
  local_70 = (QArrayData *)QString::fromAscii_helper("diskRateIn",10);
  pQVar1 = (QVariant *)FUN_10008c590(param_1);
  QVariant::QVariant(&local_80,0);
  QVariant::operator=(pQVar1,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100731b15;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100731b15:
  local_88 = (QArrayData *)QString::fromAscii_helper("diskRateOut",0xb);
  pQVar1 = (QVariant *)FUN_10008c590(param_1);
  QVariant::QVariant(&local_98,0);
  QVariant::operator=(pQVar1,&local_98);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100731b92;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100731b92:
  local_a0 = (QArrayData *)QString::fromAscii_helper("netRateIn",9);
  pQVar1 = (QVariant *)FUN_10008c590(param_1);
  QVariant::QVariant(&local_b0,0);
  QVariant::operator=(pQVar1,&local_b0);
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_19 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100731c1b;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100731c1b:
  local_b8 = (QArrayData *)QString::fromAscii_helper("netRateOut",10);
  pQVar1 = (QVariant *)FUN_10008c590(param_1);
  QVariant::QVariant(&local_c8,0);
  QVariant::operator=(pQVar1,&local_c8);
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      UNLOCK();
      if (*(int *)local_b8 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
  return;
}

