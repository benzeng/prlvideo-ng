
void FUN_10022db40(long param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_80;
  QString local_78;
  long local_70;
  undefined8 local_68;
  QArrayData *local_60;
  undefined8 local_58;
  int *local_50;
  undefined8 uStack_48;
  QVariant local_40;
  undefined1 local_29;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = FUN_100dddcf0(param_2);
  FUN_100df99c0("","prl_client_app",0,"Subtask %d completed with RC = %s",uVar1,uVar4);
  if (param_2 < 0) {
    FUN_10022dab0(param_1,param_2);
    return;
  }
  lVar5 = QObject::sender();
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = ___dynamic_cast(lVar5,PTR_typeinfo_1021e1720,PTR_typeinfo_1021e1640,0);
  }
  if ((*(uint *)(param_1 + 0x40) | 2) != 2) {
    return;
  }
  if (lVar6 == 0) goto LAB_10022dd87;
  local_68 = *(undefined8 *)(lVar6 + 0x18);
  local_60 = *(QArrayData **)(lVar6 + 0x20);
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_29 = *(int *)local_60 != 0;
    UNLOCK();
  }
  local_58 = *(undefined8 *)(lVar6 + 0x28);
  local_50 = *(int **)(lVar6 + 0x30);
  uStack_48 = *(undefined8 *)(lVar6 + 0x38);
  if (local_50 != (int *)0x0) {
    LOCK();
    *local_50 = *local_50 + 1;
    local_29 = *local_50 != 0;
    UNLOCK();
  }
  QVariant::QVariant(&local_40,(QVariant *)(lVar6 + 0x40));
  bVar2 = true;
  if (((char)local_68 != '\0') &&
     (((iVar3 = (int)((ulong)local_68 >> 0x20), iVar3 == 0x7e7 || (iVar3 == 0x7f1)) ||
      (iVar3 == 0x83d)))) {
    CSdkRequest::getResultParam((uint)&local_70);
    if (local_70 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t extract VM info handle.");
      bVar2 = true;
      FUN_10022dab0(param_1,0x80000009);
    }
    else {
      local_80 = local_70;
      _PrlHandle_AddRef();
      FUN_10018d4b0(&local_78,&local_80);
      QString::operator=((QString *)(param_1 + 0x18),&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_29 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10022dcbd;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_10022dcbd:
      bVar2 = false;
      if (local_80 != 0) {
        _PrlHandle_Free();
        bVar2 = false;
      }
    }
    if (local_70 != 0) {
      _PrlHandle_Free();
    }
  }
  QVariant::~QVariant(&local_40);
  if (local_50 != (int *)0x0) {
    LOCK();
    *local_50 = *local_50 + -1;
    local_29 = *local_50 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_50 != (int *)0x0)) {
      operator_delete(local_50);
    }
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022dd82;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10022dd82:
  if (bVar2) {
    return;
  }
LAB_10022dd87:
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to get relocated VM UUID from response");
    FUN_10022dab0(param_1,0x80000009);
  }
  else {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
    }
    lVar5 = FUN_10015cb20(uVar4,param_1 + 0x18);
    if (lVar5 != 0) {
      FUN_10022d730(param_1);
    }
  }
  return;
}

