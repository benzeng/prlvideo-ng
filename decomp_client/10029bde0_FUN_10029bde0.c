
void FUN_10029bde0(long *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (((DAT_102310940 == 0) || (*(int *)(DAT_102310940 + 4) == 0)) || (DAT_102310948 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010029c01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  uVar2 = FUN_100783d10();
  FUN_100785170(&local_30,uVar2);
  QString::operator=((QString *)(param_1 + 3),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029be6d;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10029be6d:
  lVar3 = 0;
  if ((DAT_102310940 != 0) && (lVar3 = 0, *(int *)(DAT_102310940 + 4) != 0)) {
    lVar3 = DAT_102310948;
  }
  uVar2 = FUN_100783d10(lVar3);
  FUN_1007851f0(&local_38,uVar2);
  QString::operator=((QString *)(param_1 + 4),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029bedd;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10029bedd:
  lVar3 = 0;
  if ((DAT_102310940 != 0) && (lVar3 = 0, *(int *)(DAT_102310940 + 4) != 0)) {
    lVar3 = DAT_102310948;
  }
  uVar2 = FUN_100783d10(lVar3);
  FUN_100785270(&local_40,uVar2);
  QString::operator=((QString *)(param_1 + 5),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029bf4d;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10029bf4d:
  lVar3 = 0;
  if ((DAT_102310940 != 0) && (lVar3 = 0, *(int *)(DAT_102310940 + 4) != 0)) {
    lVar3 = DAT_102310948;
  }
  uVar2 = FUN_100783d10(lVar3);
  uVar1 = FUN_100785160(uVar2);
  *(undefined1 *)(param_1 + 6) = uVar1;
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  lVar3 = 0;
  if ((DAT_102310940 != 0) && (lVar3 = 0, *(int *)(DAT_102310940 + 4) != 0)) {
    lVar3 = DAT_102310948;
  }
  uVar2 = FUN_100783d10(lVar3);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1007852a0(uVar2,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

