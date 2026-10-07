
void FUN_100260a30(undefined8 *param_1,undefined8 param_2,CVmSerialPort *param_3)

{
  QString *this;
  char *pcVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  size_t sVar9;
  int *piVar10;
  undefined8 *puVar11;
  QArrayData *pQVar12;
  ushort uVar13;
  undefined1 auVar14 [16];
  undefined1 local_1a8 [4];
  ushort local_1a4;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QString local_d0;
  undefined4 local_c4;
  QString local_c0;
  QString local_b8;
  undefined1 local_a9;
  sockaddr local_a8 [7];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = &PTR_FUN_101115ae8;
  QThread::QThread((QThread *)(param_1 + 1),(QObject *)0x0);
  *param_1 = &PTR_FUN_100baedb0;
  param_1[1] = &PTR_metaObject_100baee00;
  this = (QString *)(param_1 + 4);
  auVar14._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar14._0_8_ = PTR_shared_null_100ba20d0;
  auVar14._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 3) = auVar14;
  param_1[5] = param_2;
  CVmSerialPort::CVmSerialPort((CVmSerialPort *)(param_1 + 6),param_3);
  *(undefined4 *)((long)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined1 *)((long)param_1 + 0x151) = 0;
  CVmDevice::getSystemName();
  QString::operator=((QString *)(param_1 + 3),&local_b8);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_a9 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_100260b36;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_100260b36:
  CVmDevice::getSystemName();
  QString::operator=(this,&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_a9 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_100260b90;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100260b90:
  iVar6 = CVmSerialPort::getSocketMode();
  *(uint *)(param_1 + 0x28) = (uint)(iVar6 == 0);
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  uVar7 = FUN_1004082c0((QString *)(param_1 + 3),&local_c4);
  *(uint *)((long)param_1 + 0x144) = uVar7 >> 0x1f ^ 1;
  *(undefined4 *)((long)param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[4];
  if (1 < *(int *)local_d0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
    local_a9 = *(int *)local_d0.field0_0x0 != 0;
    UNLOCK();
  }
  cVar4 = QDir::isRelativePath(&local_d0);
  if (cVar4 != '\0') {
    QDir::tempPath();
    uVar5 = QDir::separator();
    local_e0 = local_e8;
    if (1 < *(uint *)local_e8 + 1) {
      LOCK();
      *(uint *)local_e8 = *(uint *)local_e8 + 1;
      local_a9 = *(uint *)local_e8 != 0;
      UNLOCK();
    }
    uVar7 = *(uint *)(local_e8 + 4);
    if ((1 < *(uint *)local_e8) || ((*(uint *)(local_e8 + 8) & 0x7fffffff) < uVar7 + 2)) {
      QString::reallocData((uint)&local_e0,SUB41(uVar7 + 2,0));
      uVar7 = *(uint *)(local_e0 + 4);
    }
    *(uint *)(local_e0 + 4) = uVar7 + 1;
    *(undefined2 *)(local_e0 + (long)(int)uVar7 * 2 + *(long *)(local_e0 + 0x10)) = uVar5;
    *(undefined2 *)(local_e0 + (long)(int)*(uint *)(local_e0 + 4) * 2 + *(long *)(local_e0 + 0x10))
         = 0;
    if (1 < *(uint *)local_e0 + 1) {
      LOCK();
      *(uint *)local_e0 = *(uint *)local_e0 + 1;
      local_a9 = *(uint *)local_e0 != 0;
      UNLOCK();
    }
    local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e0;
    QString::append(&local_d8);
    QString::operator=(&local_d0,&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_a9 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_100260d56;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
LAB_100260d56:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_a9 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_100260d92;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100260d92:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_a9 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_100260dce;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
  }
LAB_100260dce:
  QDir::toNativeSeparators(&local_f0);
  QString::operator=(&local_d0,&local_f0);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_a9 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_100260e30;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_100260e30:
  cVar4 = operator==(this,&local_d0);
  if (cVar4 == '\0') {
    QString::toUtf8();
    pQVar12 = local_f8;
    lVar2 = *(long *)(local_f8 + 0x10);
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"sock_path %s converted to be %s",pQVar12 + lVar2,
                  local_100 + *(long *)(local_100 + 0x10));
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_a9 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_100260ee2;
      }
      QArrayData::deallocate(local_100,1,8);
    }
LAB_100260ee2:
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_a9 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_100260f1e;
      }
      QArrayData::deallocate(local_f8,1,8);
    }
LAB_100260f1e:
    QString::operator=(this,&local_d0);
  }
  QString::toUtf8();
  pQVar12 = local_108;
  sVar9 = _strlen((char *)(local_108 + *(long *)(local_108 + 0x10)));
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_a9 = *(int *)pQVar12 != 0;
      UNLOCK();
      pQVar12 = local_108;
      if ((bool)local_a9) goto LAB_100260f8a;
    }
    QArrayData::deallocate(pQVar12,1,8);
  }
LAB_100260f8a:
  if (0x67 < sVar9) {
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"Too long socket path %s",
                  local_110 + *(long *)(local_110 + 0x10));
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_a9 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_10026159a;
      }
      QArrayData::deallocate(local_110,1,8);
    }
LAB_10026159a:
    puVar11 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar11 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar11,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
  }
  local_a8[0].sa_family = '\x01';
  QString::toUtf8();
  pcVar1 = local_a8[0].sa_data;
  _strcpy(pcVar1,(char *)(local_118 + *(long *)(local_118 + 0x10)));
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_a9 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_100261000;
    }
    QArrayData::deallocate(local_118,1,8);
  }
LAB_100261000:
  iVar6 = _socket(1,1,0);
  if (iVar6 < 0) {
    piVar10 = ___error();
    FUN_1008e3970("","LocalDevices",0,"Socket creation failed [%u]",*piVar10);
    puVar11 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar11 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar11,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
  }
  _fcntl(iVar6,4,4);
  if (*(int *)(param_1 + 0x28) == 0) {
    *(int *)(param_1 + 0x29) = iVar6;
    iVar6 = _connect(*(int *)(param_1 + 0x29),local_a8,0x6a);
    *(uint *)((long)param_1 + 0x144) = (uint)(iVar6 == 0);
    if (*(int *)((long)param_1 + 0x144) == 0) {
      piVar10 = ___error();
      FUN_1008e3970("","LocalDevices",0,"Connect to \'%s\' failed [%u]",pcVar1,*piVar10);
      puVar11 = (undefined8 *)___cxa_allocate_exception(8);
      *puVar11 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar11,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
    }
  }
  else {
    if (*(int *)((long)param_1 + 0x144) != 0) {
      *(undefined4 *)(param_1 + 0x29) = local_c4;
    }
    *(int *)((long)param_1 + 0x14c) = iVar6;
    bVar3 = false;
    while (iVar6 = _bind(*(int *)((long)param_1 + 0x14c),local_a8,0x6a), iVar6 == -1) {
      piVar10 = ___error();
      iVar6 = *piVar10;
      if (iVar6 != 0x30) goto LAB_1002613a2;
      iVar6 = _stat_INODE64(pcVar1,local_1a8);
      uVar13 = 0;
      if ((iVar6 != 0) || (uVar13 = local_1a4 & 0xf000, uVar13 != 0xc000)) {
        FUN_1008e3970("","LocalDevices",0,
                      "Some non-socket file (%o) exists at the socket-path %s. Unable to bind",
                      uVar13,pcVar1);
LAB_100261380:
        *(undefined1 *)(param_1 + 0x2a) = 0;
        iVar6 = 0x30;
LAB_1002613a2:
        FUN_1008e3970("","LocalDevices",0,"Bind to \'%s\' failed [%u]",pcVar1,iVar6);
        puVar11 = (undefined8 *)___cxa_allocate_exception(8);
        *puVar11 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar11,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
      }
      if (bVar3) {
        FUN_1008e3970("","LocalDevices",0,"bind retry failed.");
        goto LAB_100261380;
      }
      FUN_1008e3970("","LocalDevices",0,"Socket %s is in use, checking other server alive..",pcVar1)
      ;
      iVar6 = _socket(1,1,0);
      if (iVar6 < 0) {
LAB_100261326:
        FUN_1008e3970("","LocalDevices",0,"Another server appears to be running.");
        goto LAB_100261380;
      }
      iVar8 = _connect(iVar6,local_a8,0x6a);
      _close(iVar6);
      if (iVar8 == 0) goto LAB_100261326;
      FUN_1008e3970("","LocalDevices",0,"Server appears to be dead, unlinking socket and retrying.")
      ;
      _unlink(pcVar1);
      bVar3 = true;
    }
    if (bVar3) {
      FUN_1008e3970("","LocalDevices",0,"Successfully bound after retry.");
    }
    iVar6 = _listen(*(int *)((long)param_1 + 0x14c),1);
    if (iVar6 == -1) {
      piVar10 = ___error();
      FUN_1008e3970("","LocalDevices",0,"Listen failed [%u]",*piVar10);
      puVar11 = (undefined8 *)___cxa_allocate_exception(8);
      *puVar11 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar11,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
    }
  }
  QThread::start((QThread *)(param_1 + 1),6);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_a9 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_1002612cc;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1002612cc:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

