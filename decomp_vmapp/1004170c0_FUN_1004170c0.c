
undefined8 FUN_1004170c0(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  QArrayData *local_78;
  undefined1 local_69;
  undefined1 local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_78 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar1 = *(long *)(param_1 + 0x640);
  FUN_100417920(param_1,lVar1);
  if (*(int *)(lVar1 + 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x98);
    if (iVar3 == 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
      iVar3 = *(int *)(param_1 + 0x18 + (ulong)uVar2 * 4);
    }
    if (iVar3 == 3) {
      piVar4 = &DAT_10111ad64;
      uVar5 = 0;
      do {
        FUN_10041fb90((long)*piVar4 + param_1 + 0x288,local_68,piVar4[-1]);
        local_68[(long)piVar4[-1] * 2] = 0;
        QByteArray::append((char *)&local_78);
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 0x14;
      } while (uVar5 < 0x4a);
    }
    else {
      piVar4 = &DAT_101119dc4;
      uVar5 = 0;
      do {
        FUN_10041fb90((long)*piVar4 + param_1 + 0xa0,local_68,piVar4[-1]);
        local_68[(long)piVar4[-1] * 2] = 0;
        QByteArray::append((char *)&local_78);
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 0x14;
      } while (uVar5 < 0x32);
    }
  }
  else {
    QByteArray::operator=((QByteArray *)&local_78,"E0");
  }
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  FUN_100419170(param_1,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_69 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_100417262;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100417262:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 1;
}

