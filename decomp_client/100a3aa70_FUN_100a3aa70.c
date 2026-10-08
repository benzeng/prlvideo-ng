
void FUN_100a3aa70(long param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  _func_void_Node_ptr *p_Var8;
  undefined8 uVar9;
  long lVar10;
  _func_void_Node_ptr *p_Var11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  QArrayData *local_68;
  QString local_60;
  _func_void_Node_ptr *local_58;
  Data_conflict local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
  QObject::sender();
  plVar7 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_102201c90);
  (**(code **)(*plVar7 + 0x70))(plVar7);
  CTaskGenericId::params();
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("vmUuid",6);
  p_Var8 = local_58;
  if ((*(int *)(local_58 + 0x14) == 0) || (uVar2 = *(uint *)(local_58 + 0x20), uVar2 == 0)) {
LAB_100a3ab55:
    local_48 = 0x80000000;
    local_50.field7 = 0;
  }
  else {
    uVar5 = qHash(&local_60,*(uint *)(local_58 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    p_Var12 = *(_func_void_Node_ptr **)(*(long *)(p_Var8 + 8) + uVar3 * 8);
    if (p_Var12 == p_Var8) goto LAB_100a3ab55;
    p_Var11 = (_func_void_Node_ptr *)(*(long *)(p_Var8 + 8) + uVar3 * 8);
    do {
      p_Var13 = p_Var8;
      if (*(uint *)(p_Var12 + 8) == uVar5) {
        cVar4 = operator==(&local_60,(QString *)(p_Var12 + 0x10));
        p_Var8 = *(_func_void_Node_ptr **)p_Var11;
        p_Var12 = p_Var8;
        p_Var13 = local_58;
        if (cVar4 != '\0') break;
      }
      p_Var8 = p_Var13;
      p_Var11 = p_Var12;
      p_Var12 = *(_func_void_Node_ptr **)p_Var11;
      p_Var13 = p_Var8;
    } while (p_Var12 != p_Var8);
    if (p_Var8 == p_Var13) goto LAB_100a3ab55;
    QVariant::QVariant((QVariant *)&local_50,(QVariant *)(p_Var8 + 0x18));
  }
  QVariant::toString();
  QVariant::~QVariant((QVariant *)&local_50);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3abaa;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a3abaa:
  if (*(int *)(local_58 + 0x10) != -1) {
    if (*(int *)(local_58 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_58 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3abd9;
    }
    QHashData::free_helper(local_58);
  }
LAB_100a3abd9:
  uVar9 = FUN_100152280();
  lVar10 = FUN_1001548f0(uVar9,&local_40);
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SIATOOL","SIAToolClient",2,"[SERVICE] onVmDesktopOpened vmId = %s",
                  local_68 + *(long *)(local_68 + 0x10));
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3ac5f;
      }
      QArrayData::deallocate(local_68,1,8);
    }
  }
LAB_100a3ac5f:
  if (((lVar10 != 0) && (iVar6 = FUN_10018a9d0(lVar10), iVar6 == 0x30000004)) &&
     (*(int *)(*(long *)(param_1 + 0x88) + 0xc) != *(int *)(*(long *)(param_1 + 0x88) + 8))) {
    *(undefined1 *)(param_1 + 0x84) = 1;
    FUN_100a3a020(param_1,lVar10,param_1 + 0x88);
  }
  if (((*(int *)(param_1 + 0x80) == 0) && (*(char *)(param_1 + 0x70) == '\0')) &&
     (*(char *)(param_1 + 0x84) == '\0')) {
    FUN_100a39dc0(param_1,param_1 + 0x88);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

