
int FUN_100569260(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  (**(code **)(*param_1 + 0x2b0))(local_48,param_1);
  iVar2 = FUN_1007ea6f0(param_2,local_48);
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x2f8))(param_1);
    iVar2 = -0x7ffdefdb;
    if ((uVar3 & 0x80000) == 0) goto LAB_1005693ca;
  }
  lVar4 = param_1[0x225];
  uVar3 = 0;
  if (param_1[0x226] == lVar4) {
    iVar2 = 0;
  }
  else {
    do {
      iVar2 = FUN_1005980c0(*(undefined8 *)(lVar4 + uVar3 * 8),param_2);
      if (iVar2 < 0) {
        FUN_1007d6a70(&local_60,param_2);
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Failed to open storage[%u] with id %s -> 0x%X",uVar3,
                      local_58 + *(long *)(local_58 + 0x10),iVar2);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_49 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_10056939a;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_10056939a:
        if (*(int *)local_60 == -1) break;
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_49 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_49) break;
        }
        QArrayData::deallocate(local_60,2,8);
        break;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      lVar4 = param_1[0x225];
    } while (uVar3 < (ulong)(param_1[0x226] - lVar4 >> 3));
  }
LAB_1005693ca:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

