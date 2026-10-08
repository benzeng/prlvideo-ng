
void FUN_10072fa60(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  QArrayData *pQVar7;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar3 = FUN_10018a9d0(uVar4);
  if (iVar3 == 0x30000004) {
LAB_10072fab8:
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    cVar1 = FUN_10018c1f0(uVar4,2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
      }
      local_28 = (QArrayData *)QString::fromAscii_helper("ReadyToUse",10);
      FUN_10072e1f0(uVar4,&local_28);
      if (*(int *)local_28 == -1) {
        return;
      }
      pQVar7 = local_28;
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_19 = 0;
      }
      goto LAB_10072fdba;
    }
  }
  else {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    iVar3 = FUN_10018a9d0(uVar4);
    if (iVar3 == 0x30000005) goto LAB_10072fab8;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar1 = FUN_10018ffc0(uVar4);
  if (cVar1 != '\0') {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    bVar2 = FUN_1001b7c80(uVar5);
    pcVar6 = "installing";
    if (bVar2 != 0) {
      pcVar6 = "downloading";
    }
    local_30 = (QArrayData *)QString::fromAscii_helper(pcVar6,bVar2 | 10);
    FUN_10072e1f0(uVar4,&local_30);
    if (*(int *)local_30 == -1) {
      return;
    }
    pQVar7 = local_30;
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_10072fdba;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar1 = FUN_10018ff50(uVar4);
  if (cVar1 != '\0') {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    local_38 = (QArrayData *)QString::fromAscii_helper("upgrading",9);
    FUN_10072e1f0(uVar4,&local_38);
    if (*(int *)local_38 == -1) {
      return;
    }
    pQVar7 = local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_10072fdba;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar3 = FUN_10018a9d0(uVar4);
  if (iVar3 == 0x30000004) {
LAB_10072fcd9:
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    cVar1 = FUN_10018c1f0(uVar4,2);
    if (cVar1 != '\0') {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
      }
      local_40 = (QArrayData *)QString::fromAscii_helper("ReadyToUse",10);
      FUN_10072e1f0(uVar4,&local_40);
      if (*(int *)local_40 == -1) {
        return;
      }
      pQVar7 = local_40;
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_19 = 0;
      }
      goto LAB_10072fdba;
    }
  }
  else {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    iVar3 = FUN_10018a9d0(uVar4);
    if (iVar3 == 0x30000005) goto LAB_10072fcd9;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("base",4);
  FUN_10072e1f0(uVar4,&local_48);
  if (*(int *)local_48 == -1) {
    return;
  }
  pQVar7 = local_48;
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return;
    }
    local_19 = 0;
  }
LAB_10072fdba:
  QArrayData::deallocate(pQVar7,2,8);
  return;
}

