
undefined4 * FUN_1004c17d0(long param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    if (DAT_1011b55f8 < 1) {
      return &DAT_1011b55f8;
    }
    puVar8 = (undefined4 *)FUN_1008e3970("","SharedProfileHost",1,"Configuration is not available");
    return puVar8;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  cVar3 = CVmTools::getVmSharedProfile();
  cVar4 = CVmTools::getVmSharedProfile();
  CBaseNode::toString(SUB81(&local_40,0),(bool)(cVar3 + '\x10'));
  CBaseNode::toString(SUB81(&local_48,0),(bool)(cVar4 + '\x10'));
  cVar3 = operator==(&local_40,&local_48);
  bVar5 = 1;
  if (cVar3 != '\0') {
    bVar5 = CVmTools::isIsolatedVm();
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    bVar6 = CVmTools::isIsolatedVm();
    bVar5 = bVar5 ^ bVar6;
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c18b0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004c18b0:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c18e0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1004c18e0:
  if (bVar5 != 0) {
    FUN_1004c1000();
    LOCK();
    lVar1 = *(long *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = 0;
    UNLOCK();
    if (lVar1 == 0) {
      LOCK();
      *(undefined4 *)(param_1 + 0x28) = 1;
      UNLOCK();
    }
    else {
      puVar7 = (undefined8 *)FUN_1002a6010(lVar1);
      *puVar7 = 0;
      *(undefined4 *)puVar7 = 0;
      *(undefined4 *)((long)puVar7 + 4) = 1;
      FUN_1004c07d0(param_1,lVar1,0);
    }
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  cVar3 = CVmSharing::getHostSharing();
  CVmTools::getVmSharing();
  cVar4 = CVmSharing::getHostSharing();
  CBaseNode::toString(SUB81(&local_50,0),(bool)(cVar3 + '\x10'));
  CBaseNode::toString(SUB81(&local_58,0),(bool)(cVar4 + '\x10'));
  cVar3 = operator==(&local_50,&local_58);
  bVar5 = 1;
  if (cVar3 != '\0') {
    bVar5 = CVmTools::isIsolatedVm();
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    bVar6 = CVmTools::isIsolatedVm();
    bVar5 = bVar5 ^ bVar6;
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c1a2d;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1004c1a2d:
  uVar2 = *(uint *)local_50.field0_0x0;
  puVar8 = (undefined4 *)(ulong)uVar2;
  if (uVar2 != 0xffffffff) {
    if (uVar2 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c1a5d;
    }
    puVar8 = (undefined4 *)QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1004c1a5d:
  if (bVar5 != 0) {
    LOCK();
    lVar1 = *(long *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = 0;
    UNLOCK();
    if (lVar1 == 0) {
      LOCK();
      uVar2 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = 1;
      puVar8 = (undefined4 *)(ulong)uVar2;
      UNLOCK();
    }
    else {
      puVar7 = (undefined8 *)FUN_1002a6010(lVar1);
      *puVar7 = 0;
      *(undefined4 *)puVar7 = 0;
      *(undefined4 *)((long)puVar7 + 4) = 1;
      puVar8 = (undefined4 *)FUN_1004c07d0(param_1,lVar1,0);
    }
  }
  return puVar8;
}

