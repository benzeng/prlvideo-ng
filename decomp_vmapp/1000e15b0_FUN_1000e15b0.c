
void FUN_1000e15b0(long *param_1,long param_2)

{
  ushort uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  QString local_68;
  char acStack_5a [34];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = *param_1;
  lVar5 = 1;
  if (0 < *(int *)(lVar3 + 4)) {
    lVar6 = 0;
    lVar5 = 1;
    iVar4 = 0;
    do {
      uVar1 = *(ushort *)(lVar3 + *(long *)(lVar3 + 0x10) + lVar6 * 2);
      if (((uVar1 - 0x30 < 10) || (uVar1 - 0x41 < 0x3a && 5 < uVar1 - 0x5b)) ||
         ((0x7f < uVar1 && (cVar2 = QChar::isLetterOrNumber_helper((uint)uVar1), cVar2 != '\0')))) {
        QString::QString(&local_68);
        cVar2 = QString::toUInt((bool *)&local_68,0);
        lVar3 = (long)iVar4;
        iVar4 = iVar4 + 1;
        acStack_5a[lVar3 + 2] = cVar2;
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            acStack_5a[1] = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)acStack_5a[1]) goto LAB_1000e16b5;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
      }
LAB_1000e16b5:
      lVar6 = lVar6 + 1;
      lVar3 = *param_1;
    } while (lVar6 < *(int *)(lVar3 + 4));
  }
  do {
    *(char *)(param_2 + -1 + lVar5) = acStack_5a[lVar5 * 2] * '\x10' + acStack_5a[lVar5 * 2 + 1];
    *(char *)(param_2 + lVar5) = acStack_5a[lVar5 * 2 + 2] * '\x10' + acStack_5a[lVar5 * 2 + 3];
    lVar5 = lVar5 + 2;
  } while (lVar5 != 0x11);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

