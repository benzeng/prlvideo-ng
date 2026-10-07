
void FUN_1000aa720(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  CVmEventParameter *pCVar7;
  long *local_3a0;
  QArrayData *local_398;
  QArrayData *local_390;
  QArrayData *local_388;
  QArrayData *local_380;
  CVmEventParameter *local_378;
  QArrayData *local_370;
  CProblemReport local_368 [16];
  undefined1 local_358 [584];
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QString local_f8;
  QArrayData *local_f0;
  QTime local_e8 [8];
  undefined4 local_e0;
  QArrayData *local_d8;
  QString local_d0;
  undefined8 *local_c8;
  undefined8 *puStack_c0;
  undefined8 *local_b8;
  long local_a8;
  long local_a0;
  long *local_90;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_31;
  
  cVar2 = FUN_100409070(param_1 + 0x10b0);
  if (cVar2 == '\0') {
    return;
  }
  uVar3 = FUN_100409090(param_1 + 0x10b0);
  uVar5 = DAT_1011c3650;
  if ((uVar3 == 0x80000403) || (uVar3 == 0x80000589)) {
    local_58 = (void *)0x0;
    pvStack_50 = (void *)0x0;
    local_48 = 0;
    FUN_10006a060(local_70);
    FUN_1000648b0(uVar5,uVar3,&local_58,local_70);
    FUN_10006a680(local_70);
    if (local_58 == (void *)0x0) {
      return;
    }
    if (pvStack_50 != local_58) {
      pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU) +
                           (long)pvStack_50);
    }
    operator_delete(local_58);
    return;
  }
  local_88 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_78 = 0;
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_90 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_100bef0d0;
    local_90 = plVar4;
  }
  FUN_100063770(uVar5,0x186a9,0,&local_88,0xbbb,&local_90);
  if (local_90 != (long *)0x0) {
    LOCK();
    plVar4 = local_90 + 1;
    lVar1 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (local_88 != (void *)0x0) {
    if (pvStack_80 != local_88) {
      pvStack_80 = (void *)((~((long)pvStack_80 + (-8 - (long)local_88)) & 0xfffffffffffffff8U) +
                           (long)pvStack_80);
    }
    operator_delete(local_88);
  }
  if ((int)uVar3 < -0x7ffffcca) {
    if ((int)uVar3 < -0x7ffffd8b) {
      if (uVar3 + 0x7ffffe6b < 2) {
        return;
      }
      if (uVar3 == 0x80000185) {
        return;
      }
      if (uVar3 == 0x80000258) {
        return;
      }
    }
    else if (uVar3 == 0x80000275) {
      return;
    }
  }
  else if ((int)uVar3 < -0x7ffffc69) {
    if ((uVar3 + 0x7ffffcca < 0x30) &&
       ((0x800650041801U >> ((ulong)(uVar3 + 0x7ffffcca) & 0x3f) & 1) != 0)) {
      return;
    }
  }
  else {
    if (uVar3 == 0x80000397) {
      return;
    }
    if (uVar3 == 0x80000552) {
      return;
    }
    if (uVar3 == 0x80000578) {
      return;
    }
  }
  FUN_1004090a0(&local_a8);
  local_c8 = (undefined8 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_b8 = (undefined8 *)0x0;
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  local_d8 = (QArrayData *)PTR_shared_null_100ba20d0;
  QTime::QTime(local_e8,0,0,0,0);
  QTime::elapsed();
  local_e0 = QTime::addMSecs((int)local_e8);
  local_f0 = (QArrayData *)
             QString::fromAscii_helper("------------ Exception information ------------\n",0x30);
  QString::append(&local_d0);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aaa20;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1000aaa20:
  uVar5 = FUN_1007dd120(uVar3);
  QString::sprintf((char *)&local_d8,"Code: 0x%X (%s)\n",(ulong)uVar3,uVar5);
  QString::append(&local_d0);
  pQVar6 = (QArrayData *)QString::fromAscii_helper("Work time: ",0xb);
  local_108 = (QArrayData *)QString::fromAscii_helper("hh:mm:ss.zzz",0xc);
  QTime::toString(&local_100);
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar6;
  QString::append(&local_f8);
  QString::append(&local_d0);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aab10;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_1000aab10:
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aab46;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_1000aab46:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aab7c;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1000aab7c:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aabab;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1000aabab:
  local_110 = (QArrayData *)QString::fromAscii_helper("\n\n",2);
  QString::append(&local_d0);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aac0c;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1000aac0c:
  if (local_a0 != local_a8) {
    QString::append(&local_d0);
  }
  CProblemReport::CProblemReport(local_368);
  FUN_1000ab5a0(param_1,local_368,param_2);
  local_370 = (QArrayData *)local_d0.field0_0x0;
  if (1 < *(int *)local_d0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
    local_31 = *(int *)local_d0.field0_0x0 != 0;
    UNLOCK();
  }
  CProblemReport::setMonitorData((QTypedArrayData<unsigned_short> *)local_368);
  if (*(int *)local_370 != -1) {
    if (*(int *)local_370 != 0) {
      LOCK();
      *(int *)local_370 = *(int *)local_370 + -1;
      local_31 = *(int *)local_370 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aacae;
    }
    QArrayData::deallocate(local_370,2,8);
  }
LAB_1000aacae:
  CProblemReport::setReportType(local_368,1);
  local_378 = (CVmEventParameter *)0x0;
  pCVar7 = operator_new(0xd0);
  CBaseNode::toString(SUB81(&local_380,0),SUB81(local_358,0));
  local_388 = (QArrayData *)QString::fromAscii_helper("vm_problem_report",0x11);
  CVmEventParameter::CVmEventParameter(pCVar7,1,&local_380,&local_388);
  local_378 = pCVar7;
  if (*(int *)local_388 != -1) {
    if (*(int *)local_388 != 0) {
      LOCK();
      *(int *)local_388 = *(int *)local_388 + -1;
      local_31 = *(int *)local_388 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aad64;
    }
    QArrayData::deallocate(local_388,2,8);
  }
LAB_1000aad64:
  if (*(int *)local_380 != -1) {
    if (*(int *)local_380 != 0) {
      LOCK();
      *(int *)local_380 = *(int *)local_380 + -1;
      local_31 = *(int *)local_380 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aad9a;
    }
    QArrayData::deallocate(local_380,2,8);
  }
LAB_1000aad9a:
  if (puStack_c0 == local_b8) {
    FUN_10002da50(&local_c8,&local_378);
  }
  else {
    *puStack_c0 = pCVar7;
    puStack_c0 = puStack_c0 + 1;
  }
  pCVar7 = operator_new(0xd0);
  QString::number((int)&local_390,1);
  local_398 = (QArrayData *)QString::fromAscii_helper("vm_problem_report_version",0x19);
  CVmEventParameter::CVmEventParameter(pCVar7,2,&local_390);
  local_378 = pCVar7;
  if (*(int *)local_398 != -1) {
    if (*(int *)local_398 != 0) {
      LOCK();
      *(int *)local_398 = *(int *)local_398 + -1;
      local_31 = *(int *)local_398 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aae63;
    }
    QArrayData::deallocate(local_398,2,8);
  }
LAB_1000aae63:
  if (*(int *)local_390 != -1) {
    if (*(int *)local_390 != 0) {
      LOCK();
      *(int *)local_390 = *(int *)local_390 + -1;
      local_31 = *(int *)local_390 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aae99;
    }
    QArrayData::deallocate(local_390,2,8);
  }
LAB_1000aae99:
  if (puStack_c0 == local_b8) {
    FUN_10002da50(&local_c8,&local_378);
  }
  else {
    *puStack_c0 = pCVar7;
    puStack_c0 = puStack_c0 + 1;
  }
  uVar5 = DAT_1011c3650;
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_3a0 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_100bef0d0;
    local_3a0 = plVar4;
  }
  FUN_100063770(uVar5,0x186b7,uVar3,&local_c8,0xbc0,&local_3a0);
  if (local_3a0 != (long *)0x0) {
    LOCK();
    plVar4 = local_3a0 + 1;
    lVar1 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_3a0 + 0x10))();
    }
  }
  CProblemReport::~CProblemReport(local_368);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aaf98;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1000aaf98:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aafce;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1000aafce:
  if (local_c8 != (undefined8 *)0x0) {
    if (puStack_c0 != local_c8) {
      puStack_c0 = (undefined8 *)
                   ((~((long)puStack_c0 + (-8 - (long)local_c8)) & 0xfffffffffffffff8U) +
                   (long)puStack_c0);
    }
    operator_delete(local_c8);
  }
  FUN_10002d9d0(&local_a8);
  return;
}

