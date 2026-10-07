
undefined1 FUN_10049d9e0(long *param_1,byte *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  size_t sVar4;
  ulong uVar5;
  undefined1 uVar6;
  QArrayData *pQVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  QArrayData *local_68;
  QArrayData *local_60;
  string local_58 [24];
  QString local_40;
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  bVar2 = *param_2 & 1;
  if (bVar2 == 0) {
    uVar5 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if (uVar5 == 0) {
    return 0;
  }
  if (bVar2 == 0) {
    param_2 = param_2 + 1;
LAB_10049da3a:
    sVar4 = _strlen((char *)param_2);
    iVar8 = (int)sVar4;
    pbVar9 = param_2;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
    iVar8 = -1;
    pbVar9 = (byte *)0x0;
    if (param_2 != (byte *)0x0) goto LAB_10049da3a;
  }
  local_40.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pbVar9,iVar8);
  QFileInfo::QFileInfo(local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049da8e;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10049da8e:
  cVar3 = QFileInfo::isBundle();
  if (cVar3 == '\0') {
    uVar6 = 0;
    goto LAB_10049dbe3;
  }
  QFileInfo::absoluteFilePath();
  QString::toUtf8();
  pQVar7 = local_60 + *(long *)(local_60 + 0x10);
  _strlen((char *)pQVar7);
  std::string::__init((char *)local_58,(ulong)pQVar7);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049db08;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10049db08:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049db38;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10049db38:
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  cVar3 = FUN_10049dd80(param_1,local_38,local_58,&local_e8,param_3);
  if ((cVar3 != '\0') && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,0,&local_e8);
  }
  std::string::~string((string *)&uStack_a0);
  std::string::~string((string *)&local_b8);
  std::string::~string((string *)&uStack_d0);
  std::string::~string((string *)&local_e8);
  uVar6 = 1;
  std::string::~string(local_58);
LAB_10049dbe3:
  QFileInfo::~QFileInfo(local_38);
  return uVar6;
}

