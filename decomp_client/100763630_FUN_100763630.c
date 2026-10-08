
void FUN_100763630(long param_1)

{
  Node *pNVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  byte bVar5;
  Node *local_50;
  Node *local_48;
  Node *local_40;
  uint local_38;
  undefined1 local_29;
  
  FUN_1007639c0(&local_50,param_1 + 0x10);
  iVar2 = *(int *)(local_50 + 0x20);
  local_48 = local_50;
  if (iVar2 != 0) {
    plVar3 = *(long **)(local_50 + 8);
    do {
      local_48 = (Node *)*plVar3;
      if ((Node *)*plVar3 != local_50) break;
      iVar2 = iVar2 + -1;
      plVar3 = plVar3 + 1;
      local_48 = local_50;
    } while (iVar2 != 0);
  }
  local_40 = local_50;
  local_38 = 1;
  bVar5 = 0;
  do {
    if (local_48 == local_50) break;
    if (local_38 == 0) {
      uVar4 = 0;
    }
    else {
      bVar5 = bVar5 & 1 | *(byte *)(*(long *)(local_48 + 0x10) + 0x30);
      uVar4 = local_38;
      if (bVar5 == 0) {
        local_38 = 0;
        uVar4 = 0;
        bVar5 = 0;
      }
    }
    local_48 = (Node *)QHashData::nextNode(local_48);
    local_38 = uVar4 ^ 1;
  } while (uVar4 != 1);
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pNVar1 = local_50 + 0x10;
      *(int *)pNVar1 = *(int *)pNVar1 + -1;
      local_29 = *(int *)pNVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100763719;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_50);
  }
LAB_100763719:
  if ((bVar5 & 1) != *(byte *)(param_1 + 0x18)) {
    *(byte *)(param_1 + 0x18) = bVar5 & 1;
    FUN_10085aa30(param_1);
  }
  return;
}

