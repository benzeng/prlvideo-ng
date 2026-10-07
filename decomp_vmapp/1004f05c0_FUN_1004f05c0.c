
undefined8 FUN_1004f05c0(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  undefined1 local_d9;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  QString::toUtf8_helper(&local_e8);
  iVar2 = _FSPathMakeRefWithOptions
                    ((QArrayData *)(local_e8.field0_0x0 + *(long *)(local_e8.field0_0x0 + 0x10)),1,
                     local_88,0);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_d9 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_1004f0651;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,1,8);
  }
LAB_1004f0651:
  if (iVar2 == 0) {
    iVar2 = _FSMoveObjectToTrashSync(local_88,local_d8,0xc);
    if (iVar2 == 0) {
      uVar3 = 0;
      if (((param_2 != 0) && (iVar2 = FUN_1004efc00(local_d8,param_2), iVar2 != 0)) &&
         (0 < DAT_1011b55f8)) {
        uVar3 = 0;
        FUN_1008e3970("","SharedFoldersHost",1,"os(%d): failed to get path in trash",iVar2);
      }
      goto LAB_1004f07f1;
    }
    uVar3 = 0xf000001c;
    if (DAT_1011b55f8 < 1) goto LAB_1004f07f1;
    QString::toUtf8_helper(&local_f8);
    FUN_1008e3970("","SharedFoldersHost",1,"%d, failed to move to trash \"%s\"",iVar2,
                  (QArrayData *)(local_f8.field0_0x0 + *(long *)(local_f8.field0_0x0 + 0x10)));
    if (*(int *)local_f8.field0_0x0 == -1) goto LAB_1004f07f1;
    local_f0.field0_0x0 = local_f8.field0_0x0;
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      iVar2 = *(int *)local_f8.field0_0x0;
      UNLOCK();
      goto joined_r0x0001004f0786;
    }
  }
  else {
    uVar3 = 0xf000001c;
    if (DAT_1011b55f8 < 1) goto LAB_1004f07f1;
    QString::toUtf8_helper(&local_f0);
    FUN_1008e3970("","SharedFoldersHost",1,"%d, failed to create ref to \"%s\"",iVar2,
                  (QArrayData *)(local_f0.field0_0x0 + *(long *)(local_f0.field0_0x0 + 0x10)));
    if (*(int *)local_f0.field0_0x0 == -1) goto LAB_1004f07f1;
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      iVar2 = *(int *)local_f0.field0_0x0;
      UNLOCK();
joined_r0x0001004f0786:
      local_d9 = iVar2 != 0;
      uVar3 = 0xf000001c;
      if ((bool)local_d9) goto LAB_1004f07f1;
    }
  }
  uVar3 = 0xf000001c;
  QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,1,8);
LAB_1004f07f1:
  if (lVar1 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

