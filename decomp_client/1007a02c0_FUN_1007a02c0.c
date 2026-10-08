
QString * FUN_1007a02c0(QString *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  auVar7._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar7._0_8_ = PTR_shared_null_1021e1288;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar7;
  *(undefined1 (*) [16])(param_1 + 2) = auVar7;
  param_1[4].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  param_1[6].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_3[1];
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(param_1 + 1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a0357;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007a0357:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_3[5];
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(param_1 + 2,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a03ad;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1007a03ad:
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(param_1 + 4,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a0403;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007a0403:
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_3[2];
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_31 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(param_1,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a0458;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007a0458:
  if (param_4 == 0) {
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  }
  else {
    FUN_100188480(&local_60,param_4);
  }
  QString::operator=(param_1 + 6,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a04ac;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1007a04ac:
  uVar1 = *(uint *)(param_3 + 8);
  *(uint *)((long)&param_1[7].field0_0x0 + 4) = uVar1 >> 8 & 0xff;
  *(uint *)&param_1[7].field0_0x0 = uVar1;
  *(undefined4 *)&param_1[5].field0_0x0 = *(undefined4 *)((long)param_3 + 0x34);
  local_70 = (QArrayData *)param_3[4];
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_31 = *(int *)local_70 != 0;
    UNLOCK();
  }
  FUN_1007a0780(&local_68,param_2,&local_70);
  QString::operator=(param_1 + 3,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a0529;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007a0529:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a0559;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007a0559:
  *(undefined1 *)((long)&param_1[8].field0_0x0 + 1) = *(undefined1 *)(param_3 + 6);
  *(undefined1 *)&param_1[8].field0_0x0 = *(undefined1 *)((long)param_3 + 0x31);
  iVar6 = 0;
  for (iVar5 = 0; iVar3 = FUN_100d38910(param_3), iVar5 < iVar3; iVar5 = iVar5 + 1) {
    lVar4 = FUN_100d38920(param_3,iVar5);
    if (lVar4 != 0) {
      lVar4 = FUN_100d38920(param_3,iVar5);
      iVar6 = iVar6 + (*(byte *)(lVar4 + 0x31) ^ 1);
    }
  }
  *(int *)((long)&param_1[8].field0_0x0 + 4) = iVar6;
  return param_1;
}

