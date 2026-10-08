
undefined8 * FUN_100215690(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  _func_void_Node_ptr *p_Var7;
  _func_void_Node_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  _func_void_Node_ptr *p_Var10;
  QString local_60;
  _func_void_Node_ptr *local_58;
  Data_conflict local_50;
  undefined4 local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  lVar6 = (**(code **)(*param_2 + 0x70))(param_2);
  if (lVar6 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  (**(code **)(*param_2 + 0x70))(param_2);
  CTaskGenericId::params();
  if (*(int *)(local_40 + 0x14) == 0) {
    *param_1 = PTR_shared_null_1021e1288;
    goto LAB_10021583b;
  }
  (**(code **)(*param_2 + 0x70))(param_2);
  CTaskGenericId::params();
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("uuid",4);
  p_Var7 = local_58;
  if ((*(int *)(local_58 + 0x14) == 0) || (uVar2 = *(uint *)(local_58 + 0x20), uVar2 == 0)) {
LAB_1002157a4:
    local_48 = 0x80000000;
    local_50.field7 = 0;
  }
  else {
    uVar5 = qHash(&local_60,*(uint *)(local_58 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    p_Var9 = *(_func_void_Node_ptr **)(*(long *)(p_Var7 + 8) + uVar3 * 8);
    if (p_Var9 == p_Var7) goto LAB_1002157a4;
    p_Var8 = (_func_void_Node_ptr *)(*(long *)(p_Var7 + 8) + uVar3 * 8);
    do {
      p_Var10 = p_Var7;
      if (*(uint *)(p_Var9 + 8) == uVar5) {
        cVar4 = operator==(&local_60,(QString *)(p_Var9 + 0x10));
        p_Var7 = *(_func_void_Node_ptr **)p_Var8;
        p_Var9 = p_Var7;
        p_Var10 = local_58;
        if (cVar4 != '\0') break;
      }
      p_Var7 = p_Var10;
      p_Var8 = p_Var9;
      p_Var9 = *(_func_void_Node_ptr **)p_Var8;
      p_Var10 = p_Var7;
    } while (p_Var9 != p_Var7);
    if (p_Var7 == p_Var10) goto LAB_1002157a4;
    QVariant::QVariant((QVariant *)&local_50,(QVariant *)(p_Var7 + 0x18));
  }
  QVariant::toString();
  QVariant::~QVariant((QVariant *)&local_50);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002157f8;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1002157f8:
  if (*(int *)(local_58 + 0x10) != -1) {
    if (*(int *)(local_58 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_58 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021583b;
    }
    QHashData::free_helper(local_58);
  }
LAB_10021583b:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_40);
  }
  return param_1;
}

