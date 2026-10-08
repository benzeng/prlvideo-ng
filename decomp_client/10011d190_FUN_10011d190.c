
undefined4 FUN_10011d190(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  QString QVar5;
  long local_180;
  long local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  CVmEvent local_158 [224];
  QEvent local_78 [32];
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  char *local_40;
  undefined1 local_31;
  
  QVar5.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar2 = _PrlEvent_GetDataPtr(*param_1,&local_40);
  pcVar1 = local_40;
  if (iVar2 != 0) {
    uVar3 = 0xffffffff;
    goto LAB_10011d467;
  }
  if (local_40 != (char *)0x0) {
    _strlen(local_40);
  }
  QString::fromUtf8_helper((char *)&local_58,(int)pcVar1);
  QString::normalized(&local_50,&local_58,1,0);
  QString::operator=(&local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011d24a;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10011d24a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011d27a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10011d27a:
  _PrlBuffer_Free(local_40);
  local_160 = (QArrayData *)local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  CVmEvent::CVmEvent(local_158,(QTypedArrayData<unsigned_short> *)&local_160);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011d2e8;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10011d2e8:
  local_168 = (QArrayData *)QString::fromAscii_helper("progress_changed",0x10);
  lVar4 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_158);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011d34c;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10011d34c:
  uVar3 = 0xffffffff;
  if (lVar4 != 0) {
    CVmEventParameter::getParamValue();
    uVar3 = QString::toInt((bool *)&local_170,0);
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011d3b2;
      }
      QArrayData::deallocate(local_170,2,8);
    }
  }
LAB_10011d3b2:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0xffffffffffffffff;
    local_178 = 0;
    _PrlEvent_GetParamByName(*param_1,"progress_changed_done",&local_178);
    _PrlEvtPrm_ToInt64(local_178,param_2);
    if (local_178 != 0) {
      _PrlHandle_Free();
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0xffffffffffffffff;
    local_180 = 0;
    _PrlEvent_GetParamByName(*param_1,"progress_changed_total",&local_180);
    _PrlEvtPrm_ToInt64(local_180,param_3);
    if (local_180 != 0) {
      _PrlHandle_Free();
    }
  }
  QEvent::~QEvent(local_78);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_158);
  QVar5.field0_0x0 = local_48.field0_0x0;
LAB_10011d467:
  if (*(int *)QVar5.field0_0x0 != -1) {
    if (*(int *)QVar5.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar5.field0_0x0 = *(int *)QVar5.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)QVar5.field0_0x0 != 0) {
        return uVar3;
      }
      local_31 = 0;
      QVar5.field0_0x0 = local_48.field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)QVar5.field0_0x0,2,8);
  }
  return uVar3;
}

