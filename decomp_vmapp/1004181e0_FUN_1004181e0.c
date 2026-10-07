
undefined8 FUN_1004181e0(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  QArrayData *local_78;
  char local_69;
  QArrayData *local_68;
  undefined1 local_59;
  undefined1 local_58 [40];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_68 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar2 = *(long *)(param_1 + 0x640);
  local_30 = lVar1;
  QByteArray::right((int)&local_78);
  uVar3 = QByteArray::toUInt((bool *)&local_78,(int)&local_69);
  uVar6 = (ulong)uVar3;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_59 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100418269;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100418269:
  FUN_100417920(param_1,lVar2);
  if ((local_69 == '\0') || (*(int *)(lVar2 + 0x10) != 0)) {
    QByteArray::operator=((QByteArray *)&local_68,"E0");
  }
  else {
    iVar5 = *(int *)(param_1 + 0x98);
    if (iVar5 == 0) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
      iVar5 = *(int *)(param_1 + 0x18 + (ulong)uVar4 * 4);
    }
    if (iVar5 == 3) {
      if (uVar3 < 0x4a) {
        FUN_10041fb90(param_1 + 0x288 + (long)(int)(&DAT_10111ad64)[uVar6 * 0x14],local_58,
                      (&DAT_10111ad60)[uVar6 * 0x14]);
        local_58[(long)(int)(&DAT_10111ad60)[uVar6 * 0x14] * 2] = 0;
        QByteArray::append((char *)&local_68);
      }
      else {
        QByteArray::operator=((QByteArray *)&local_68,"E0");
      }
    }
    else if (uVar3 < 0x32) {
      FUN_10041fb90(param_1 + 0xa0 + (long)(int)(&DAT_101119dc4)[uVar6 * 0x14],local_58,
                    (&DAT_101119dc0)[uVar6 * 0x14]);
      local_58[(long)(int)(&DAT_101119dc0)[uVar6 * 0x14] * 2] = 0;
      QByteArray::append((char *)&local_68);
    }
    else {
      QByteArray::operator=((QByteArray *)&local_68,"E0");
    }
  }
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  FUN_100419170(param_1,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_59 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1004182ec;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1004182ec:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 1;
}

