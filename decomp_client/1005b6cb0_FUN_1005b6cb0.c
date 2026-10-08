
void FUN_1005b6cb0(QObject *param_1,QObject *param_2)

{
  uint uVar1;
  undefined *puVar2;
  Data *pDVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  Data *pDVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  Data *local_148;
  CVmConfiguration local_140 [248];
  undefined *local_48;
  QString local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10221e2e0;
  uVar7 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 4;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x70] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  puVar2 = PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)(param_1 + 0x78),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b6da1;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005b6da1:
  *(undefined **)(param_1 + 0x98) = puVar2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined **)(param_1 + 0xa8) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  local_48 = puVar2;
  FUN_1002f6080(param_1 + 0xb8);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b6e14;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1005b6e14:
  param_1[0x138] = (QObject)0x0;
  *(undefined **)(param_1 + 0x140) = PTR_shared_null_1021e15d0;
  param_1[0x148] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  pQVar8 = (QArrayData *)QString::fromAscii_helper("",0);
  *(QArrayData **)(param_1 + 0x150) = pQVar8;
  iVar6 = *(int *)pQVar8;
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)pQVar8 = *(int *)pQVar8 + 1;
    local_31 = *(int *)pQVar8 != 0;
    UNLOCK();
    iVar6 = *(int *)pQVar8;
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (iVar6 != -1) {
    if (iVar6 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b6e9a;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_1005b6e9a:
  *(undefined4 *)(param_1 + 0x160) = 0x18;
  CVmConfiguration::CVmConfiguration(local_140);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getProfile();
  uVar5 = CVmProfile::getType();
  CVmConfiguration::~CVmConfiguration(local_140);
  *(undefined4 *)(param_1 + 0x164) = uVar5;
  param_1[0x168] = (QObject)0x1;
  auVar12._8_4_ = (int)puVar2;
  auVar12._0_8_ = puVar2;
  auVar12._12_4_ = (int)((ulong)puVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x170) = auVar12;
  *(undefined **)(param_1 + 0x180) = puVar2;
  *(undefined2 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  FUN_1001bc100(&local_148,param_2,0);
  pDVar3 = local_148;
  if (1 < *(uint *)local_148) {
    uVar1 = *(uint *)(local_148 + 8);
    pDVar9 = (Data *)QListData::detach((int)&local_148);
    lVar10 = (long)(int)*(uint *)(local_148 + 8);
    if ((pDVar3 + (long)(int)uVar1 * 8 + 0x10 != local_148 + lVar10 * 8 + 0x10) &&
       (lVar11 = (int)*(uint *)(local_148 + 0xc) - lVar10,
       lVar11 != 0 && lVar10 <= (int)*(uint *)(local_148 + 0xc))) {
      _memcpy(local_148 + lVar10 * 8 + 0x10,pDVar3 + (long)(int)uVar1 * 8 + 0x10,lVar11 * 8);
    }
    if (*(int *)pDVar9 != -1) {
      if (*(int *)pDVar9 != 0) {
        LOCK();
        *(int *)pDVar9 = *(int *)pDVar9 + -1;
        local_31 = *(int *)pDVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b6fc2;
      }
      QListData::dispose(pDVar9);
    }
  }
LAB_1005b6fc2:
  lVar10 = *(long *)(local_148 + (long)*(int *)(local_148 + 8) * 8 + 0x10);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b6ff7;
    }
    QListData::dispose(local_148);
  }
LAB_1005b6ff7:
  if (lVar10 != 0) {
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(lVar10 + 0x10);
  }
  cVar4 = FUN_1005b74b0();
  if (cVar4 == '\0') {
    cVar4 = FUN_1005b7970(param_1);
    if (cVar4 == '\0') {
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x18);
      }
      iVar6 = FUN_10015d3a0(uVar7);
      if ((iVar6 == 0) && (cVar4 = FUN_1005b7a40(param_1), cVar4 != '\0')) {
        *(undefined4 *)(param_1 + 0x50) = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 4;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 6;
  }
  return;
}

