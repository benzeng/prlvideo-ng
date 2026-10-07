
undefined8 * FUN_1007d9030(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  QArrayData *pQVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar2 = *(int *)(*param_2 + 4);
  uVar1 = iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d);
  QString::toLatin1();
  QByteArray::QByteArray((QByteArray *)&local_58,(uVar1 & 0xfffffff8) - iVar2,'0');
  local_40 = local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  puVar6 = (undefined8 *)QByteArray::append((QByteArray *)&local_40);
  local_48 = (QArrayData *)*puVar6;
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_31 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d90ee;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1007d90ee:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d911e;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1007d911e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d914e;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1007d914e:
  uVar3 = *(uint *)(local_48 + 4);
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,uVar3 + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  pQVar5 = local_48;
  uVar1 = ((int)uVar1 >> 3) * 5;
  lVar4 = *(long *)(local_48 + 0x10);
  local_60 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (((uint)*(undefined8 *)PTR_shared_null_100ba20d0 < 2) &&
     (uVar1 + 1 <= (*(uint *)(PTR_shared_null_100ba20d0 + 8) & 0x7fffffff))) {
    *(uint *)(PTR_shared_null_100ba20d0 + 8) = *(uint *)(PTR_shared_null_100ba20d0 + 8) | 0x80000000
    ;
  }
  else {
    uVar8 = (uint)((ulong)*(undefined8 *)PTR_shared_null_100ba20d0 >> 0x20);
    if (uVar8 < uVar1) {
      uVar8 = uVar1;
    }
    QByteArray::reallocData(&local_60,uVar8 + 1,1);
  }
  if (0xe < uVar3 + 7) {
    uVar9 = 7;
    uVar7 = 0;
    do {
      iVar2 = (int)uVar9;
      if ((((("IOService::SocketWriteThread"[(ulong)(byte)pQVar5[(ulong)(iVar2 - 7) + lVar4] + 8] ==
              -0x80) ||
            ("IOService::SocketWriteThread"[(ulong)(byte)pQVar5[(ulong)(iVar2 - 6) + lVar4] + 8] ==
             -0x80)) ||
           ("IOService::SocketWriteThread"[(ulong)(byte)pQVar5[(ulong)(iVar2 - 5) + lVar4] + 8] ==
            -0x80)) ||
          (("IOService::SocketWriteThread"[(ulong)(byte)pQVar5[(ulong)(iVar2 - 4) + lVar4] + 8] ==
            -0x80 || ("IOService::SocketWriteThread"
                      [(ulong)(byte)pQVar5[(ulong)(iVar2 - 3) + lVar4] + 8] == -0x80)))) ||
         (("IOService::SocketWriteThread"[(ulong)(byte)pQVar5[(ulong)(iVar2 - 2) + lVar4] + 8] ==
           -0x80 || (("IOService::SocketWriteThread"
                      [(ulong)(byte)pQVar5[(ulong)(iVar2 - 1) + lVar4] + 8] == -0x80 ||
                     ("IOService::SocketWriteThread"[(ulong)(byte)pQVar5[uVar9 + lVar4] + 8] ==
                      -0x80)))))) {
        *param_1 = PTR_shared_null_100ba20d0;
        goto LAB_1007d942f;
      }
      QByteArray::append((char)&local_60);
      QByteArray::append((char)&local_60);
      QByteArray::append((char)&local_60);
      QByteArray::append((char)&local_60);
      QByteArray::append((char)&local_60);
      uVar7 = uVar7 + 1;
      uVar9 = (ulong)(iVar2 + 8);
    } while (uVar7 < (uint)((int)(((uint)((int)uVar3 >> 0x1f) >> 0x1d) + uVar3) >> 3));
  }
  QByteArray::truncate((int)&local_60);
  *param_1 = local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_31 = *(int *)local_60 != 0;
    UNLOCK();
  }
LAB_1007d942f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d945f;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1007d945f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return param_1;
}

