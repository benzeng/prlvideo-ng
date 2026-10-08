
void FUN_1007d68f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_2);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm object is null.");
    return;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("ViewModeSwitch:%1->%2",0x15);
  EnumUtils::enumToString(&local_50,param_4,0);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  EnumUtils::enumToString(&local_58,param_3,0);
  QString::arg(&local_38,&local_40,&local_58,0,0x20);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d69b7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007d69b7:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d69e7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007d69e7:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d6a17;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007d6a17:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d6a47;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007d6a47:
  local_60 = (QArrayData *)QString::fromAscii_helper("{252A5A02-76E9-4509-85AB-EA730A5610D3}",0x26);
  lVar2 = FUN_100198ac0(lVar2,&local_60,&local_38,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d6aa1;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007d6aa1:
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x60) = 1;
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

