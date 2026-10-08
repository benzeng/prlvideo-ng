
void FUN_100458870(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  FUN_10044e1e0();
  *param_1 = &PTR_FUN_102213700;
  param_1[2] = &PTR_FUN_102213908;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xc] = PTR_shared_null_1021e1288;
  uVar3 = FUN_10044b340(param_1);
  uVar3 = FUN_1003b0a90(uVar3);
  uVar1 = FUN_10044e5b0(param_1);
  uVar1 = FUN_1003b1cd0(uVar1);
  uVar2 = FUN_10044e5a0(param_1);
  lVar4 = FUN_10010df00(uVar3,uVar1,uVar2);
  if (lVar4 == 0) {
    return;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("Hardware.%1[%2]",0xf);
  uVar3 = FUN_10044b340(param_1);
  uVar3 = FUN_1003b0a90(uVar3);
  uVar1 = FUN_10044e5b0(param_1);
  uVar1 = FUN_1003b1cd0(uVar1);
  uVar2 = FUN_10044e5a0(param_1);
  plVar5 = (long *)FUN_10010df00(uVar3,uVar1,uVar2);
  uVar1 = (**(code **)(*plVar5 + 0x68))(plVar5);
  FUN_1003b0eb0(&local_50,uVar1);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  uVar3 = FUN_10044b340(param_1);
  uVar3 = FUN_1003b0a90(uVar3);
  uVar1 = FUN_10044e5b0(param_1);
  uVar1 = FUN_1003b1cd0(uVar1);
  uVar2 = FUN_10044e5a0(param_1);
  lVar4 = FUN_10010df00(uVar3,uVar1,uVar2);
  QString::arg(&local_38,&local_40,(long)*(int *)(lVar4 + 0x68),0,10,0x20);
  QString::operator=((QString *)(param_1 + 0xc),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100458a30;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100458a30:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100458a60;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100458a60:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100458a90;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100458a90:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

