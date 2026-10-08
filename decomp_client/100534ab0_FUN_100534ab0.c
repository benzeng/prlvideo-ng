
void FUN_100534ab0(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return;
  }
  FUN_1005341c0(&local_40,param_2);
  FUN_100283c40(param_1 + 0x10,&local_40);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100534b19;
    }
    QHashData::free_helper(local_40);
  }
LAB_100534b19:
  FUN_100538960(param_1 + 0x18);
  iVar2 = FUN_10015d3a0(param_2);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      uVar3 = FUN_10015d330(param_2,iVar5);
      FUN_10018c2b0(uVar3);
      lVar4 = CVmConfiguration::getVmHardwareList();
      if (*(int *)(*(long *)(lVar4 + 0x1e0) + 0xc) != *(int *)(*(long *)(lVar4 + 0x1e0) + 8)) {
        FUN_10018d830(&local_48,uVar3);
        FUN_100188480(&local_50,uVar3);
        FUN_10002bf90(param_1 + 0x18,&local_48,&local_50);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100534bc8;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_100534bc8:
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100534c00;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
LAB_100534c00:
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}

