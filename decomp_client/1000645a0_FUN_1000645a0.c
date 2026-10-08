
void FUN_1000645a0(undefined8 param_1,long param_2)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_44;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_2 == 0) {
    return;
  }
  lVar2 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1710,&DAT_10226c440,0);
  if (lVar2 == 0) {
    return;
  }
  if (DAT_10230ffd0 < 2) goto LAB_1000646b0;
  uVar1 = *(undefined2 *)(lVar2 + 0x10);
  local_38 = *(QArrayData **)(lVar2 + 0x18);
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",2,"Received custom event %d with \'%s\' data.",uVar1,
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10006467c;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10006467c:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000646b0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000646b0:
  uVar3 = FUN_1001d50a0();
  uVar3 = FUN_1001d50d0(uVar3);
  local_40 = *(QArrayData **)(lVar2 + 0x18);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  local_44 = (uint)*(ushort *)(lVar2 + 0x10);
  FUN_1001e05f0(uVar3,&local_40,&local_44);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

