
undefined1 FUN_1004f1d70(undefined8 param_1,QString *param_2)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  undefined1 uVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  long lVar13;
  QArrayData *local_98;
  QString local_90;
  undefined1 local_88 [80];
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar13;
  if ((DAT_1011bc200 == '\0') && (iVar6 = ___cxa_guard_acquire(&DAT_1011bc200), iVar6 != 0)) {
    DAT_1011bc1f8 = PTR_shared_null_100ba20d0;
    ___cxa_atexit(FUN_10002f530,&DAT_1011bc1f8,0x100000000);
    ___cxa_guard_release(&DAT_1011bc200);
  }
  if (((*(int *)(DAT_1011bc1f8 + 4) == 0) &&
      ((sVar5 = _FSFindFolder(0xffff8005,0x63757372,0,local_88), sVar5 != 0 ||
       (iVar6 = FUN_1004efc00(local_88,&DAT_1011bc1f8), iVar6 != 0)))) ||
     (cVar4 = QString::startsWith(param_1,&DAT_1011bc1f8,1), cVar4 == '\0')) {
    uVar8 = 0;
    goto LAB_1004f20c1;
  }
  QString::mid((int)&local_98,(int)param_1);
  QString::normalized(&local_90,&local_98,1,0);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_88[0] = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_88[0]) goto LAB_1004f1eb2;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004f1eb2:
  if ((1 < *(uint *)local_90.field0_0x0) || (*(long *)(local_90.field0_0x0 + 0x10) != 0x18)) {
    QString::reallocData((uint)&local_90,(bool)((char)*(uint *)(local_90.field0_0x0 + 4) + '\x01'));
  }
  uVar7 = (ulong)(int)*(uint *)(local_90.field0_0x0 + 4);
  if ((uVar7 & 0x7fffffffffffffff) != 0) {
    pQVar11 = (QArrayData *)(local_90.field0_0x0 + *(long *)(local_90.field0_0x0 + 0x10));
    pQVar1 = pQVar11 + uVar7 * 2;
    pQVar12 = (QArrayData *)
              (local_90.field0_0x0 + *(long *)(local_90.field0_0x0 + 0x10) + uVar7 * 2);
    do {
      if (*(short *)pQVar11 == 0x2f) {
        pQVar11 = pQVar11 + 2;
      }
      else {
        pQVar10 = pQVar1;
        pQVar9 = pQVar11;
        if (pQVar11 != pQVar1) {
          do {
            pQVar9 = pQVar9 + 2;
            pQVar10 = pQVar1;
            if (pQVar12 == pQVar9) break;
            pQVar10 = pQVar9;
          } while (*(short *)pQVar9 != 0x2f);
        }
        if ((long)pQVar10 - (long)pQVar11 != 0) {
          sVar5 = FUN_100541f30(*(short *)pQVar11);
          *(short *)pQVar11 = sVar5;
          pQVar3 = pQVar11 + 2;
          pQVar9 = pQVar11;
          while (pQVar2 = pQVar3, pQVar2 != pQVar10) {
            sVar5 = FUN_100541f30(*(short *)(pQVar9 + 2));
            *(short *)(pQVar9 + 2) = sVar5;
            pQVar3 = pQVar9 + 4;
            pQVar9 = pQVar2;
          }
          if (*(short *)(pQVar10 + -2) == 0x2e) {
            if ((2 < (ulong)((long)pQVar10 - (long)pQVar11 >> 1)) ||
               (sVar5 = *(short *)pQVar11, pQVar11 = pQVar10, sVar5 != 0x2e)) {
              *(short *)(pQVar10 + -2) = -0xfd7;
              pQVar11 = pQVar10;
            }
          }
          else {
            pQVar11 = pQVar10;
            if (*(short *)(pQVar10 + -2) == 0x20) {
              *(short *)(pQVar10 + -2) = -0xfd8;
            }
          }
        }
      }
    } while (pQVar11 != pQVar1);
  }
  QString::replace(&local_90,0x2f,0x5c,1);
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  QString::insert((int)&local_90,(QChar *)0x0,
                  (int)*(undefined8 *)(DAT_1011bc178 + 0x10) + (int)DAT_1011bc178);
  QString::operator=(param_2,&local_90);
  uVar8 = 1;
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_88[0] = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_88[0]) goto LAB_1004f20c1;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1004f20c1:
  if (lVar13 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

