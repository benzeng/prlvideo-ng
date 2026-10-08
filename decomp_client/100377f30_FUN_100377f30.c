
void FUN_100377f30(long param_1,undefined4 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  _func_void_Node_ptr *p_Var6;
  QArrayData *pQVar7;
  QArrayData *local_50;
  QArrayData *local_48;
  _func_void_Node_ptr *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  MacUtils::getActiveMonitorEDIDs();
  uVar4 = MacUtils::cgDisplayIdByScreenNumber(*(int *)(param_1 + 0x4c));
  if ((*(int *)(local_40 + 0x14) != 0) && (*(uint *)(local_40 + 0x20) != 0)) {
    for (p_Var6 = *(_func_void_Node_ptr **)
                   (*(long *)(local_40 + 8) +
                   ((ulong)(*(uint *)(local_40 + 0x24) ^ uVar4) % (ulong)*(uint *)(local_40 + 0x20))
                   * 8); p_Var6 != local_40; p_Var6 = *(_func_void_Node_ptr **)p_Var6) {
      if ((*(uint *)(p_Var6 + 8) == (*(uint *)(local_40 + 0x24) ^ uVar4)) &&
         (uVar4 == *(uint *)(p_Var6 + 0xc))) {
        if (p_Var6 != local_40) {
          local_38 = *(QArrayData **)(p_Var6 + 0x10);
          if (1 < *(int *)local_38 + 1U) {
            LOCK();
            *(int *)local_38 = *(int *)local_38 + 1;
            local_29 = *(int *)local_38 != 0;
            UNLOCK();
          }
          goto LAB_100377fcd;
        }
        break;
      }
    }
  }
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
LAB_100377fcd:
  QByteArray::operator=((QByteArray *)(param_1 + 0x50),(QByteArray *)&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100378006;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100378006:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100378035;
    }
    QHashData::free_helper(local_40);
  }
LAB_100378035:
  *(undefined1 *)(param_1 + 0x48) = 1;
  if (DAT_10230ffd0 < 2) {
    return;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  lVar3 = *(long *)(lVar2 + 0x18);
  if (((lVar3 == 0) || (*(int *)(lVar3 + 4) == 0)) || (*(long *)(lVar2 + 0x20) == 0)) {
    local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_100323d90(&local_50);
  }
  QString::toLocal8Bit();
  pQVar7 = local_48 + *(long *)(local_48 + 0x10);
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  lVar3 = *(long *)(lVar2 + 0x18);
  uVar5 = 0xffffffff;
  if (((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) && (*(long *)(lVar2 + 0x20) != 0)) {
    uVar5 = FUN_100323e20();
  }
  FUN_100df99c0("","prl_client_app",2,
                "Entering Fullscreen: about to fit VM [%s] display #%d to host screen %d (target host screen %d)."
                ,pQVar7,uVar5,*(undefined4 *)(param_1 + 0x4c),param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100378127;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100378127:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

