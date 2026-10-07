
void FUN_1000a7fb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  size_t sVar5;
  CVmEventParameter *pCVar6;
  long *plVar7;
  char *pcVar8;
  long *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  CVmEventParameter *local_100;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  undefined8 *local_e8;
  QArrayData *local_d8;
  CRepAdvancedEngineInfo local_d0 [175];
  undefined1 local_21;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x1950) + 0x148))();
  *(undefined4 *)(param_1 + 0x109e8) = uVar3;
  CRepAdvancedEngineInfo::CRepAdvancedEngineInfo(local_d0);
  CRepAdvancedEngineInfo::setEngineTypeNum((uint)local_d0);
  uVar4 = *(int *)(param_1 + 0x109e8) - 1;
  if (uVar4 < 4) {
    pcVar8 = (&PTR_s_SelfContext_100ba89a0)[(int)uVar4];
  }
  else {
    pcVar8 = "Unknown";
  }
  sVar5 = _strlen(pcVar8);
  local_d8 = (QArrayData *)QString::fromAscii_helper(pcVar8,(int)sVar5);
  CRepAdvancedEngineInfo::setEngineTypeStr((QTypedArrayData<unsigned_short> *)local_d0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a807b;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1000a807b:
  local_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  local_e8 = (undefined8 *)0x0;
  pCVar6 = operator_new(0xd0);
  CBaseNode::toString(SUB81(&local_108,0),SUB81(local_d0,0));
  local_110 = (QArrayData *)QString::fromAscii_helper("writing_file_string",0x13);
  CVmEventParameter::CVmEventParameter(pCVar6,1,&local_108);
  local_100 = pCVar6;
  if (puStack_f0 == local_e8) {
    FUN_10002da50(&local_f8,&local_100);
  }
  else {
    *puStack_f0 = pCVar6;
    puStack_f0 = puStack_f0 + 1;
  }
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_21 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a815c;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1000a815c:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_21 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a8192;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1000a8192:
  uVar2 = DAT_1011c3650;
  plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_118 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_100bef0d0;
    local_118 = plVar7;
  }
  FUN_100063770(uVar2,0x18ce1,0,&local_f8,0xbbb,&local_118);
  if (local_118 != (long *)0x0) {
    LOCK();
    plVar7 = local_118 + 1;
    lVar1 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_118 + 0x10))();
    }
  }
  if (local_f8 != (undefined8 *)0x0) {
    if (puStack_f0 != local_f8) {
      puStack_f0 = (undefined8 *)
                   ((~((long)puStack_f0 + (-8 - (long)local_f8)) & 0xfffffffffffffff8U) +
                   (long)puStack_f0);
    }
    operator_delete(local_f8);
  }
  CRepAdvancedEngineInfo::~CRepAdvancedEngineInfo(local_d0);
  return;
}

