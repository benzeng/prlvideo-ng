
void FUN_100a3c310(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  if ((param_3 & 0xe) == 0) {
    FUN_100a3e6e0(&local_38);
    QString::operator=(&local_30,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100a3c387;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_100a3c387:
  FUN_100a4a010(&local_40,&local_30);
  uVar1 = *(int *)(local_40 + 4) * 2 + 2;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  pvVar3 = (void *)FUN_100a3c290(&local_48,uVar1,param_3);
  pvVar4 = (void *)QString::utf16();
  _memcpy(pvVar3,pvVar4,(ulong)uVar1);
  iVar2 = _PrlDevSIA_SendSIAData
                    (*param_1,local_48 + *(long *)(local_48 + 0x10),*(undefined4 *)(local_48 + 4));
  if ((iVar2 != 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("SIATOOL","SIAToolClient",1,"Can\'t send SIA command to vm");
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a3c44f;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100a3c44f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a3c47f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a3c47f:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

