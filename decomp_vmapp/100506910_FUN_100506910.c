
int FUN_100506910(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  QArrayData *local_40;
  uint local_38;
  undefined1 local_33;
  undefined1 local_31;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x34);
  local_38 = 1;
  do {
    uVar2 = local_38;
    if ((local_38 & uVar1 & 0x7c) != 0) {
      local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
      iVar3 = FUN_1005066a0(param_1,param_2,&local_40);
      if (iVar3 != 0) {
        if (*(int *)local_40 == -1) {
          return iVar3;
        }
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return iVar3;
          }
          local_33 = 0;
        }
        QArrayData::deallocate(local_40,2,8);
        return iVar3;
      }
      FUN_1002e5540(param_1 + 0x10,&local_38,&local_40);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005069b7;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
LAB_1005069b7:
    local_38 = uVar2 * 2;
    if (0x7b < local_38) {
      return 0;
    }
  } while( true );
}

