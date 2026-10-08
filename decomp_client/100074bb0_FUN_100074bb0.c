
bool FUN_100074bb0(undefined8 *param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  size_t sVar7;
  QString QVar8;
  _func_void_Node_ptr *p_Var9;
  int iVar10;
  _func_void_Node_ptr *p_Var11;
  _func_void_Node_ptr *p_Var12;
  QString local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  FUN_100074d70(&local_40);
  (**(code **)*param_1)(param_1);
  pcVar6 = (char *)QMetaObject::className();
  iVar10 = -1;
  if (pcVar6 != (char *)0x0) {
    sVar7 = _strlen(pcVar6);
    iVar10 = (int)sVar7;
  }
  QVar8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar6,iVar10);
  uVar2 = *(uint *)(local_40 + 0x20);
  p_Var12 = local_40;
  local_48.field0_0x0 = QVar8.field0_0x0;
  if (uVar2 != 0) {
    uVar5 = qHash(&local_48,*(uint *)(local_40 + 0x24));
    uVar3 = (ulong)uVar5 % (ulong)uVar2;
    p_Var11 = *(_func_void_Node_ptr **)(*(long *)(local_40 + 8) + uVar3 * 8);
    if (p_Var11 != local_40) {
      p_Var9 = (_func_void_Node_ptr *)(*(long *)(local_40 + 8) + uVar3 * 8);
      do {
        if (*(uint *)(p_Var11 + 8) == uVar5) {
          cVar4 = operator==(&local_48,(QString *)(p_Var11 + 0x10));
          p_Var11 = *(_func_void_Node_ptr **)p_Var9;
          p_Var12 = *(_func_void_Node_ptr **)p_Var9;
          QVar8.field0_0x0 = local_48.field0_0x0;
          if (cVar4 != '\0') break;
        }
        p_Var9 = p_Var11;
        p_Var11 = *(_func_void_Node_ptr **)p_Var9;
        p_Var12 = local_40;
        QVar8.field0_0x0 = local_48.field0_0x0;
      } while (p_Var11 != local_40);
    }
  }
  if (*(int *)QVar8.field0_0x0 != -1) {
    if (*(int *)QVar8.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar8.field0_0x0 = *(int *)QVar8.field0_0x0 + -1;
      local_31 = *(int *)QVar8.field0_0x0 != 0;
      UNLOCK();
      QVar8.field0_0x0 = local_48.field0_0x0;
      if ((bool)local_31) goto LAB_100074ca9;
    }
    QArrayData::deallocate((QArrayData *)QVar8.field0_0x0,2,8);
  }
LAB_100074ca9:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100074cd5;
    }
    QHashData::free_helper(local_40);
  }
LAB_100074cd5:
  return p_Var12 != local_40;
}

