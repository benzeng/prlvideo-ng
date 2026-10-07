
undefined8 FUN_1004c8a80(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  QArrayData *pQVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  QString *pQVar10;
  long *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(short *)(param_2 + 0x16) != 1) {
    return 0xf0000003;
  }
  if (*(ushort *)(param_2 + 0x14) < 4) {
    return 0xf0000009;
  }
  lVar5 = FUN_1002a6120(param_2,0,0);
  if (lVar5 == 0) {
    return 0xf0000003;
  }
  uVar2 = *(uint *)(lVar5 + 8);
  lVar8 = (long)(int)uVar2;
  if (lVar8 < 1) {
    local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
    pQVar6 = (QArrayData *)PTR_shared_null_100ba20d0;
  }
  else {
    pQVar6 = (QArrayData *)QArrayData::allocate(1,8,lVar8,0);
    local_40 = pQVar6;
    if (pQVar6 == (QArrayData *)0x0) {
      qBadAlloc();
    }
    *(uint *)(pQVar6 + 4) = uVar2;
    ___bzero(pQVar6 + *(long *)(pQVar6 + 0x10),lVar8);
  }
  if (1 < *(uint *)pQVar6) {
    if ((*(uint *)(pQVar6 + 8) & 0x7fffffff) == 0) {
      pQVar6 = (QArrayData *)QArrayData::allocate(1,8,0,2);
      local_40 = pQVar6;
    }
    else {
      FUN_1004d6790(&local_40,*(uint *)(pQVar6 + 4),*(uint *)(pQVar6 + 8) & 0x7fffffff,0);
      pQVar6 = local_40;
    }
  }
  FUN_1002a5990(lVar5,0,pQVar6 + *(long *)(pQVar6 + 0x10),*(undefined4 *)(lVar5 + 8));
  QString::QString(&local_48,(QChar *)(pQVar6 + *(long *)(pQVar6 + 0x10)),*(uint *)(lVar5 + 8) >> 1)
  ;
  puVar7 = (undefined4 *)FUN_1002a6010(param_2);
  QString::toUpper_helper(&local_50);
  iVar3 = QString::compare_helper
                    ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                     *(undefined4 *)(local_50.field0_0x0 + 4),".HOME",0xffffffff,1);
  if (iVar3 == 0) {
    pQVar10 = (QString *)&DAT_1011bc048;
LAB_1004c8c33:
    QString::operator=(&local_48,pQVar10);
  }
  else {
    iVar3 = QString::compare_helper
                      ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                       *(undefined4 *)(local_50.field0_0x0 + 4),".MAC",0xffffffff,1);
    if ((iVar3 == 0) ||
       (iVar3 = QString::compare_helper
                          ((QArrayData *)
                           (local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                           *(undefined4 *)(local_50.field0_0x0 + 4),"HOST",0xffffffff,1), iVar3 == 0
       )) {
      pQVar10 = (QString *)&DAT_1011bc040;
      goto LAB_1004c8c33;
    }
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c8c6c;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1004c8c6c:
  FUN_1004ceb50(&local_58,*param_1 + 0x48,&local_48);
  uVar9 = 0xf0000008;
  if (local_58 != (long *)0x0) {
    uVar4 = FUN_1004d8470(local_58);
    *puVar7 = uVar4;
    LOCK();
    plVar1 = local_58 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar9 = 0;
    if ((int)lVar5 == 1) {
      (**(code **)(*local_58 + 0x10))(local_58);
    }
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004c8ce8;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004c8ce8:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar9;
      }
    }
    QArrayData::deallocate(pQVar6,1,8);
  }
  return uVar9;
}

