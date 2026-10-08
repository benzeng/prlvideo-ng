
undefined8 FUN_100cedc30(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pcVar1 = *(code **)*param_2;
  local_38 = (QArrayData *)QString::fromAscii_helper("sound",5);
  local_40 = (QArrayData *)QString::fromAscii_helper("present",7);
  local_48 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
  (*pcVar1)(&local_30,param_2,&local_38,&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cedcce;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cedcce:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cedcfe;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cedcfe:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cedd2e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100cedd2e:
  local_50 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
  iVar2 = QString::compare(&local_30,&local_50,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cedd84;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cedd84:
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x2a8) = 1;
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0x8000000;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 0x8000000;
}

