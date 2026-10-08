
void FUN_10031da20(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  QString *pQVar6;
  undefined8 uVar7;
  long lVar8;
  QVariant local_80;
  Data_conflict local_70;
  QString local_68;
  QString local_60;
  QString local_58 [2];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10018c2b0(uVar7);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  cVar4 = CVmVideo::isUseHiResInGuest();
  if (cVar4 == '\0') {
    return;
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = FUN_10018f890(uVar7);
  if (uVar5 < 0x80b) {
    return;
  }
  local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x28);
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  if (param_2 == 0x30000004) {
    lVar3 = *(long *)(param_1 + 0x118);
    iVar1 = *(int *)(lVar3 + 8);
    pQVar6 = (QString *)(lVar3 + 0x10 + (long)iVar1 * 8);
    iVar2 = *(int *)(lVar3 + 0xc);
    if (iVar1 == iVar2) {
LAB_10031db95:
      if (pQVar6 != (QString *)(lVar3 + 0x10 + (long)iVar2 * 8)) goto LAB_10031dbb2;
    }
    else {
      lVar8 = (long)iVar2 * 8 + (long)iVar1 * -8;
      do {
        cVar4 = operator==(pQVar6,&local_40);
        if (cVar4 != '\0') goto LAB_10031db95;
        pQVar6 = pQVar6 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    FUN_1000341d0(param_1 + 0x118,&local_40);
  }
  else {
    local_48 = *(QArrayData **)(param_1 + 0x28);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    FUN_1000e5580((long *)(param_1 + 0x118),&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10031db7d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10031db7d:
    lVar3 = *(long *)(param_1 + 0x118);
    if (*(int *)(lVar3 + 0xc) != *(int *)(lVar3 + 8)) goto LAB_10031dccd;
  }
LAB_10031dbb2:
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Parallels",9);
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("PDInfo",6);
  QSettings::QSettings((QSettings *)local_58,&local_60,&local_68,(QObject *)0x0);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031dc1f;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10031dc1f:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031dc4f;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10031dc4f:
  local_70.field7 = QString::fromAscii_helper("hidpi_patch/on",0xe);
  QVariant::QVariant(&local_80,param_2 == 0x30000004);
  QSettings::setValue(local_58,(QVariant *)&local_70);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70.field15 != -1) {
    if (*(int *)local_70.field15 != 0) {
      LOCK();
      *(int *)local_70.field15 = *(int *)local_70.field15 + -1;
      local_31 = *(int *)local_70.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031dcc4;
    }
    QArrayData::deallocate((QArrayData *)local_70.field15,2,8);
  }
LAB_10031dcc4:
  QSettings::~QSettings((QSettings *)local_58);
LAB_10031dccd:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

