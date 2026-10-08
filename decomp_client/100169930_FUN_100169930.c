
void FUN_100169930(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_stack_fffffffffffffdfc;
  long local_1f0;
  int *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  Data_conflict local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8;
  int *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  Data_conflict local_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined1 local_170 [16];
  QArrayData *local_160;
  QArrayData *local_158;
  AnonymousUnion0 local_150;
  QArrayData *local_148;
  long local_140;
  CSdkEvent local_138 [8];
  QArrayData *local_130;
  CVmEvent local_128 [224];
  QEvent local_48 [39];
  undefined1 local_21;
  
  local_140 = *param_2;
  if (local_140 != 0) {
    _PrlHandle_AddRef();
  }
  CSdkEvent::CSdkEvent(local_138,&local_140);
  CSdkEvent::xmlEventString();
  CVmEvent::CVmEvent(local_128,(QTypedArrayData<unsigned_short> *)&local_130);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001699c9;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1001699c9:
  CSdkEvent::~CSdkEvent(local_138);
  if (local_140 != 0) {
    _PrlHandle_Free();
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("vm_uuid",7);
  lVar2 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_128);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_21 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100169a4a;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100169a4a:
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get event parameter.");
    goto LAB_100169d9a;
  }
  CVmEventParameter::getParamValue();
  lVar2 = FUN_10015cb20(param_1,&local_150);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
  }
  else {
    local_158 = (QArrayData *)QString::fromAscii_helper("op_rc",5);
    lVar2 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_128);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_21 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100169ade;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_100169ade:
    if (lVar2 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get event parameter.");
    }
    else {
      CVmEventParameter::getParamValue();
      iVar1 = QString::toUInt((bool *)(local_170 + 0x10),0);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_21 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100169b41;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_100169b41:
      if ((iVar1 == -0x7ffffd6f) || (iVar1 == -0x7ffffbcc)) {
        iVar1 = CMessageManager::instance();
        local_170._8_8_ = PTR_shared_null_1021e15e8;
        local_170._0_8_ = PTR_shared_null_1021e15e8;
        local_1a8 = (int *)0x0;
        uStack_1a0 = 0;
        local_190 = 0;
        local_198 = 0;
        local_180 = 0x80000000;
        local_188.field7 = 0;
        local_178 = 1;
        local_1e8 = (int *)0x0;
        uStack_1e0 = 0;
        local_1d0 = 0;
        local_1d8 = 0;
        local_1c0 = 0x80000000;
        local_1c8.field7 = 0;
        local_1b8 = 1;
        CMessageManager::showMessageBox
                  (iVar1,(QString *)0x80000291,(QStringList *)&local_150.field0,
                   (QStringList *)(local_170 + 8),(CSlotInfo *)local_170,SUB81(&local_1a8,0),
                   (QWidget *)((ulong)in_stack_fffffffffffffdfc << 0x20),(CSlotInfo *)0x0);
        QVariant::~QVariant((QVariant *)&local_1c8);
        if (local_1e8 != (int *)0x0) {
          LOCK();
          *local_1e8 = *local_1e8 + -1;
          local_21 = *local_1e8 != 0;
          UNLOCK();
          if ((!(bool)local_21) && (local_1e8 != (int *)0x0)) {
            operator_delete(local_1e8);
          }
        }
        QVariant::~QVariant((QVariant *)&local_188);
        if (local_1a8 != (int *)0x0) {
          LOCK();
          *local_1a8 = *local_1a8 + -1;
          local_21 = *local_1a8 != 0;
          UNLOCK();
          if ((!(bool)local_21) && (local_1a8 != (int *)0x0)) {
            operator_delete(local_1a8);
          }
        }
        FUN_100039a80(local_170);
        FUN_100039a80(local_170 + 8);
      }
      else if (iVar1 != 0) {
        uVar3 = CMessageManager::instance();
        local_1f0 = *param_2;
        if (local_1f0 != 0) {
          _PrlHandle_AddRef();
        }
        CMessageManager::showMessageFromServer(uVar3,&local_1f0,&local_150,0);
        if (local_1f0 != 0) {
          _PrlHandle_Free();
        }
      }
    }
  }
  if (*(int *)local_150.field1 != -1) {
    if (*(int *)local_150.field1 != 0) {
      LOCK();
      *(int *)local_150.field1 = *(int *)local_150.field1 + -1;
      local_21 = *(int *)local_150.field1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100169d9a;
    }
    QArrayData::deallocate((QArrayData *)local_150.field1,2,8);
  }
LAB_100169d9a:
  QEvent::~QEvent(local_48);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_128);
  return;
}

