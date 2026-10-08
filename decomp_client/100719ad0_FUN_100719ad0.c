
undefined8 * FUN_100719ad0(undefined8 *param_1,undefined8 param_2,int param_3,char param_4)

{
  char *pcVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  char cVar3;
  undefined **ppuVar4;
  size_t sVar5;
  void *pvVar6;
  int iVar7;
  QString *pQVar8;
  undefined1 local_98 [8];
  undefined1 local_90 [24];
  QVariant local_78;
  QVariant local_68;
  QString local_58;
  QVariant local_50;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if (param_3 == 7) {
    ppuVar4 = &PTR_s_Mac_OS_X_102274b50;
  }
  else if (param_3 == 9) {
    ppuVar4 = &PTR_s_Linux_102274b48;
  }
  else if (param_3 == 8) {
    ppuVar4 = &PTR_s_Windows_102274b40;
  }
  else {
    ppuVar4 = &PTR_s_Generic_102274b58;
  }
  pcVar1 = *ppuVar4;
  iVar7 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar5 = _strlen(pcVar1);
    iVar7 = (int)sVar5;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar1,iVar7);
  if (param_4 != '\0') {
    *param_1 = local_38.field0_0x0;
    if (1 < *(int *)local_38.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
    }
    goto LAB_100719cd2;
  }
  local_40.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("User Preferences/Keyboard/Profile Assigns/",0x2a);
  QString::append(&local_40);
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  QVariant::QVariant(&local_78,&local_38);
  QSettings::value((QString *)&local_68,&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_68);
  QVariant::~QVariant(&local_78);
  if (DAT_102310998 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_1006faf60(pvVar6);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar6;
  }
  FUN_1006fb6d0(local_98,DAT_102310998);
  FUN_100714f80(local_90,local_98,&local_58);
  cVar3 = FUN_100714de0(local_90);
  pQVar8 = &local_38;
  if (cVar3 != '\0') {
    pQVar8 = &local_58;
  }
  pQVar2 = pQVar8->field0_0x0;
  *param_1 = pQVar2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  FUN_1000fec30(local_90);
  FUN_1000fe670(local_98);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100719c99;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100719c99:
  QSettings::~QSettings((QSettings *)&local_50);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100719cd2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100719cd2:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

