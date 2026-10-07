
ulong FUN_1002c7bc0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  QArrayData *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x60 + uVar3 * 8);
      if (lVar1 == 0) {
        lVar1 = *param_2;
        iVar2 = QString::compare_helper
                          (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"",0xffffffff,
                           1);
      }
      else {
        local_40 = *(QArrayData **)(lVar1 + 0x20);
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_33 = *(int *)local_40 != 0;
          UNLOCK();
        }
        iVar2 = QString::compare(param_2,&local_40,1);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_32 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_32) goto joined_r0x0001002c7c86;
          }
          QArrayData::deallocate(local_40,2,8);
        }
      }
joined_r0x0001002c7c86:
    } while ((iVar2 != 0) && (uVar3 = uVar3 + 1, (uint)uVar3 < *(uint *)(param_1 + 0x58)));
  }
  if (*(uint *)(param_1 + 0x58) <= (uint)uVar3) {
    uVar3 = 0xffffffff;
  }
  return uVar3 & 0xffffffff;
}

