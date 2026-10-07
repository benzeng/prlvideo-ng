
undefined1 FUN_1004f1780(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  QString QVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 uVar7;
  QString local_48;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)*param_1;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_19 = *(int *)local_28 != 0;
    UNLOCK();
  }
  cVar3 = FUN_1004f1440(&local_28);
  if (cVar3 == '\0') {
    uVar7 = 0;
    goto LAB_1004f193d;
  }
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar4 = FUN_1004f05c0(param_2,&local_30);
  *param_3 = iVar4;
  if ((iVar4 == 0) && (*(int *)(local_30 + 4) != 0)) {
    QString::toUtf8_helper(&local_38);
    QVar2.field0_0x0 = local_38.field0_0x0;
    lVar1 = *(long *)(local_38.field0_0x0 + 0x10);
    QString::toUtf8_helper(&local_40);
    iVar5 = FUN_1004f0b70((QArrayData *)(QVar2.field0_0x0 + lVar1),
                          (QArrayData *)
                          (local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)));
    iVar4 = 0;
    if (iVar5 == -1) {
      piVar6 = ___error();
      iVar4 = *piVar6;
    }
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1004f185d;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,1,8);
    }
LAB_1004f185d:
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1004f188d;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,1,8);
    }
LAB_1004f188d:
    if ((iVar4 != 0) && (0 < DAT_1011b55f8)) {
      QString::toUtf8_helper(&local_48);
      FUN_1008e3970("","SharedFoldersHost",1,"%d: failed to create stub %s",iVar4,
                    (QArrayData *)(local_48.field0_0x0 + *(long *)(local_48.field0_0x0 + 0x10)));
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_19 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1004f1907;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,1,8);
      }
    }
  }
LAB_1004f1907:
  uVar7 = 1;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004f193d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004f193d:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar7;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar7;
}

