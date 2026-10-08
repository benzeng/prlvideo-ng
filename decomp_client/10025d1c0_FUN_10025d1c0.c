
void FUN_10025d1c0(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [104];
  QArrayData *local_48;
  undefined4 local_40;
  QString local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x48) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x78) + 4) == 0) {
    if ((*(long *)(param_1 + 0xf0) == 0) || (*(int *)(*(long *)(param_1 + 0xf0) + 4) == 0)) {
      lVar4 = FUN_1005c11d0();
      puVar7 = (undefined4 *)(lVar4 + 0x50);
    }
    else {
      lVar4 = *(long *)(param_1 + 0xf8);
      lVar6 = FUN_1005c11d0();
      puVar7 = (undefined4 *)(lVar6 + 0x50);
      if (lVar4 != 0) {
        *puVar7 = 10;
        uVar5 = 0;
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0x50);
        }
        lVar4 = FUN_1005c11d0(uVar5);
        *(undefined4 *)(lVar4 + 0x160) = 8;
        uVar5 = 0;
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0x50);
        }
        uVar8 = FUN_1005c11d0(uVar5);
        uVar5 = 0;
        if ((*(long *)(param_1 + 0xf0) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + 0xf0) + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0xf8);
        }
        FUN_100260540(uVar8,uVar5);
        uVar5 = 0;
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0x50);
        }
        uVar8 = FUN_1005c11d0(uVar5);
        uVar5 = 0;
        if ((*(long *)(param_1 + 0xf0) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + 0xf0) + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0xf8);
        }
        uVar3 = FUN_10018f890(uVar5);
        FUN_1005b82f0(uVar8,uVar3);
        return;
      }
    }
    *puVar7 = param_2;
    return;
  }
  lVar4 = FUN_1005c11d0();
  *(undefined1 *)(lVar4 + 0x148) = 0;
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
  }
  lVar4 = FUN_1005c11d0(uVar5);
  *(undefined4 *)(lVar4 + 0x14c) = 2;
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
  }
  puVar1 = (undefined8 *)(param_1 + 0x78);
  lVar4 = FUN_1005c11d0(uVar5);
  *(undefined4 *)(lVar4 + 0x160) = 0x15;
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
  }
  lVar4 = FUN_1005c11d0(uVar5);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar1;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  local_30 = *(undefined4 *)(param_1 + 0x80);
  QString::operator=((QString *)(lVar4 + 0x150),&local_38);
  *(undefined4 *)(lVar4 + 0x158) = local_30;
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10025d2ed;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10025d2ed:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
  }
  uVar5 = FUN_1005c11d0(uVar5);
  local_48 = (QArrayData *)*puVar1;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  local_40 = *(undefined4 *)(param_1 + 0x80);
  FUN_100260700(local_b0,param_1 + 0x88);
  FUN_1005bca00(uVar5,&local_48,local_b0);
  FUN_10005e410(local_b0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10025d390;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10025d390:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
  }
  uVar5 = FUN_1005c11d0(uVar5);
  local_c0 = (QArrayData *)*puVar1;
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    local_21 = *(int *)local_c0 != 0;
    UNLOCK();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x80);
  FUN_1005bcce0(uVar5,0xff,&local_c0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10025d41e;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10025d41e:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
  }
  lVar4 = FUN_1005c11d0(uVar5);
  local_c8 = (QArrayData *)QString::fromAscii_helper(".hdd",4);
  uVar2 = QString::endsWith(puVar1,&local_c8,1);
  *(undefined1 *)(lVar4 + 0x1a0) = uVar2;
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      UNLOCK();
      if (*(int *)local_c8 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
  return;
}

