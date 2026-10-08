
undefined8 FUN_100cff510(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("sound",5);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("enabled",7);
  pcVar1 = *(code **)*param_2;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_50 = pQVar4;
  local_48 = pQVar3;
  local_58 = (QArrayData *)QString::fromAscii_helper("false",5);
  (*pcVar1)(&local_40,param_2,&local_48,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cff5e0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cff5e0:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cff610;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cff610:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cff640;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cff640:
  local_60 = (QArrayData *)QString::fromAscii_helper("true",4);
  iVar2 = QString::compare(&local_40,&local_60,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cff696;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cff696:
  uVar5 = 0x8117000;
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x2a8) = 1;
    *(undefined2 *)(param_1 + 0x2a9) = 0x101;
    uVar5 = 0x8000000;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cff6e8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cff6e8:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cff717;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100cff717:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar5;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar5;
}

