
void FUN_1004765c0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  AnonymousBitField0 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  size_t sVar3;
  long *plVar4;
  int iVar5;
  QVariant QVar6;
  QString local_60;
  QVariant local_58;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  _func_void_Node_ptr *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_3 != 1) {
    return;
  }
  local_30 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  FUN_100459010(&local_40,param_1);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_19 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1df64e1);
  QString::append(&local_38);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100476659;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100476659:
  puVar2 = PTR_s_VmConfig_1021f1e00;
  iVar5 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar5 = (int)sVar3;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar2,iVar5);
  FUN_100db8d30(&local_60,1);
  QVariant::QVariant(&local_58,&local_60);
  QVar6.field0_0x0.field1_0x8.bitField0_30 = param_5.bitField0_30;
  QVar6.field0_0x0.field0_0x0.field15 = (QObject *)&local_58;
  MappingHelpers::setValueByPath((QHash *)&local_30,&local_38,&local_48,QVar6);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_19 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004766ed;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004766ed:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10047671d;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10047671d:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10047674d;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10047674d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10047677d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10047677d:
  plVar4 = (long *)FUN_10044e560(param_1);
  (**(code **)(*plVar4 + 0x78))(plVar4,&local_30);
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_19 = 0;
    }
    QHashData::free_helper(local_30);
  }
  return;
}

