
void FUN_100095760(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  runtime_error *prVar9;
  void *pvVar10;
  long *plVar11;
  Data *pDVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  local_38 = 0xffffffff;
  FUN_1008e3970("","vm",0,"[Devices] Initializing...");
  lVar7 = FUN_1000e9a40(*(undefined8 *)(param_1 + 0x1158),0x261,0);
  if (lVar7 == 0) {
    FUN_1000e9b50(*(undefined8 *)(param_1 + 0x1158),0x261,1,0x2000,0,0x2c03);
  }
  FUN_1000a4cd0(param_1,0x261,0,0);
  lVar7 = FUN_1000e9a40(*(undefined8 *)(param_1 + 0x1158),0x7d,0);
  if (lVar7 == 0) {
    FUN_1000e9b50(*(undefined8 *)(param_1 + 0x1158),0x7d,1,0x3f000,0,0x2c03);
  }
  FUN_1000a4cd0(param_1,0x7d,0,0);
  uVar8 = FUN_1000e99d0(*(undefined8 *)(param_1 + 0x1158),0x7d,0);
  *(undefined8 *)(param_1 + 0x1938) = uVar8;
  QTime::start();
  FUN_1000940f0(param_1,param_2);
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","Networking",uVar5);
  lVar7 = *(long *)(param_2 + 0x1d8);
  iVar6 = *(int *)(lVar7 + 8);
  iVar14 = *(int *)(lVar7 + 0xc);
  if ((1 < iVar14 - iVar6) && (0 < DAT_1011b55f8)) {
    FUN_1008e3970("","vm",1,"Too many sound devices in config: %d");
    lVar7 = *(long *)(param_2 + 0x1d8);
    iVar6 = *(int *)(lVar7 + 8);
    iVar14 = *(int *)(lVar7 + 0xc);
  }
  if (iVar6 < iVar14) {
    uVar8 = *(undefined8 *)(lVar7 + 0x10 + (long)iVar6 * 8);
    iVar6 = CVmDevice::getEnabled();
    if (iVar6 == 1) {
      uVar8 = FUN_10029fc90(uVar8);
      *(undefined8 *)(param_1 + 0x1a18) = uVar8;
    }
  }
  if (*(int *)(param_1 + 0x584) - 1U < 2) {
    cVar4 = FUN_1002893b0();
    if (cVar4 == '\0') {
      prVar9 = (runtime_error *)___cxa_allocate_exception(0x10);
      std::runtime_error::runtime_error(prVar9,"Failed to initialize SCSI");
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(prVar9,PTR_typeinfo_100ba22b8,PTR__runtime_error_100ba2198);
    }
  }
  else if (*(int *)(param_1 + 0x584) == 0) {
    pvVar10 = operator_new(0x80);
    FUN_10027f320(pvVar10);
    *(void **)(param_1 + 0x1988) = pvVar10;
  }
  QTime::start();
  pvVar10 = operator_new(0x848);
  FUN_1002a6ce0(pvVar10,param_1);
  *(void **)(param_1 + 0x1a28) = pvVar10;
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","PCI toolgate",uVar5);
  iVar6 = FUN_1007da300("devices.sfilter.enable",1);
  if (iVar6 != 0) {
    QTime::start();
    pvVar10 = operator_new(0x28);
    FUN_1000f96c0(pvVar10,*(undefined8 *)(param_1 + 0x1a28),
                  *(long *)(*(long *)(*(long *)(param_1 + 0x1940) + 0x60) + 0x20) != 0);
    *(void **)(param_1 + 0x1ac8) = pvVar10;
    uVar5 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","Storage filter",uVar5);
  }
  if (*(int *)(param_1 + 0x588) != 0) {
    QTime::start();
    FUN_10028e710(0);
    uVar5 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","AHCI controller",uVar5);
  }
  lVar7 = *(long *)(param_2 + 0x1b0);
  uVar13 = (ulong)*(uint *)(lVar7 + 8);
  lVar16 = 0;
  if ((int)*(uint *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
    do {
      FUN_10025ad30(*(undefined8 *)(lVar7 + 0x10 + ((int)uVar13 + lVar16) * 8));
      lVar16 = lVar16 + 1;
      lVar7 = *(long *)(param_2 + 0x1b0);
      uVar13 = (ulong)*(int *)(lVar7 + 8);
    } while (lVar16 < (long)((long)*(int *)(lVar7 + 0xc) - uVar13));
  }
  lVar7 = *(long *)(param_2 + 0x1a8);
  uVar13 = (ulong)*(uint *)(lVar7 + 8);
  lVar16 = 0;
  if ((int)*(uint *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
    do {
      FUN_10025ad30(*(undefined8 *)(lVar7 + 0x10 + ((int)uVar13 + lVar16) * 8));
      lVar16 = lVar16 + 1;
      lVar7 = *(long *)(param_2 + 0x1a8);
      uVar13 = (ulong)*(int *)(lVar7 + 8);
    } while (lVar16 < (long)((long)*(int *)(lVar7 + 0xc) - uVar13));
  }
  lVar7 = *(long *)(param_2 + 0x200);
  uVar13 = (ulong)*(uint *)(lVar7 + 8);
  lVar16 = 0;
  if ((int)*(uint *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
    do {
      FUN_10025ad30(*(undefined8 *)(lVar7 + 0x10 + ((int)uVar13 + lVar16) * 8));
      lVar16 = lVar16 + 1;
      lVar7 = *(long *)(param_2 + 0x200);
      uVar13 = (ulong)*(int *)(lVar7 + 8);
    } while (lVar16 < (long)((long)*(int *)(lVar7 + 0xc) - uVar13));
  }
  QTime::start();
  lVar7 = FUN_1000e9a40(*(undefined8 *)(param_1 + 0x1158),0x67,0);
  if (lVar7 == 0) {
    FUN_1000e9b50(*(undefined8 *)(param_1 + 0x1158),0x67,1,0x5e38,0,0x2c01);
  }
  FUN_1000a4cd0(param_1,0x67,0,0);
  lVar7 = FUN_1000e9a40(*(undefined8 *)(param_1 + 0x1158),0x68,0);
  if (lVar7 == 0) {
    FUN_1000e9b50(*(undefined8 *)(param_1 + 0x1158),0x68,1,0x40000,0,0x2c01);
  }
  FUN_1000a4cd0(param_1,0x68,0,0);
  lVar7 = FUN_1000e9a40(*(undefined8 *)(param_1 + 0x1158),0x212,0);
  if (lVar7 == 0) {
    FUN_1000e9b50(*(undefined8 *)(param_1 + 0x1158),0x212,1,0x10000,0,0x2c01);
  }
  FUN_1000a4cd0(param_1,0x212,0,0);
  CVmHardware::getVideo();
  iVar6 = CVmVideo::getEnable3DAcceleration();
  if ((iVar6 == 0) || (*(int *)(param_1 + 0xb90) != 0)) {
    pvVar10 = operator_new(0x118a8);
    FUN_1002a94e0(pvVar10,param_1);
  }
  else {
    pvVar10 = operator_new(0x11980);
    FUN_1002f9f60(pvVar10,param_1,iVar6);
  }
  *(void **)(param_1 + 0x1a38) = pvVar10;
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","Video device",uVar5);
  QTime::start();
  FUN_10010d7b0(param_1);
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","SystemConfigMonitor",uVar5);
  lVar7 = *(long *)(param_2 + 0x1a0);
  uVar13 = (ulong)*(uint *)(lVar7 + 8);
  lVar16 = 0;
  if ((int)*(uint *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
    do {
      FUN_10025ad30(*(undefined8 *)(lVar7 + 0x10 + ((int)uVar13 + lVar16) * 8));
      lVar16 = lVar16 + 1;
      lVar7 = *(long *)(param_2 + 0x1a0);
      uVar13 = (ulong)*(int *)(lVar7 + 8);
    } while (lVar16 < (long)((long)*(int *)(lVar7 + 0xc) - uVar13));
  }
  QTime::start();
  uVar8 = FUN_100466f50();
  *(undefined8 *)(param_1 + 0x1a40) = uVar8;
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","OTG request tracker",uVar5);
  QTime::start();
  plVar11 = (long *)FUN_10046afb0();
  *(long **)(param_1 + 0x1a48) = plVar11;
  (**(code **)(*plVar11 + 0x10))(plVar11,*(undefined8 *)(param_1 + 0x1a40));
  FUN_100470f00(param_1 + 0x10840,*(undefined8 *)(param_1 + 0x1a48));
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","OTG dispatcher tracker",uVar5);
  (**(code **)(**(long **)(param_1 + 0x1a48) + 0x20))
            (*(long **)(param_1 + 0x1a48),0x14,FUN_1000a22d0,param_1);
  (**(code **)(**(long **)(param_1 + 0x1a48) + 0x20))
            (*(long **)(param_1 + 0x1a48),0x17,FUN_1000a2370,param_1);
  pvVar10 = operator_new(0x48);
  FUN_1000d7590(pvVar10,param_1);
  *(void **)(param_1 + 0x107f8) = pvVar10;
  QTime::start();
  pvVar10 = operator_new(0x10);
  FUN_1002a4690(pvVar10);
  *(void **)(param_1 + 0x1a20) = pvVar10;
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","Power source tracker",uVar5);
  iVar6 = FUN_1007da300("vm.ballooning.enabled",1);
  if (iVar6 != 0) {
    QTime::start();
    pvVar10 = operator_new(0x28);
    FUN_100533d70(pvVar10,param_1);
    *(void **)(param_1 + 0x1a30) = pvVar10;
    uVar5 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","Ballooning",uVar5);
  }
  lVar7 = *(long *)(param_2 + 0x1b8);
  uVar13 = (ulong)*(uint *)(lVar7 + 8);
  lVar16 = 0;
  if ((int)*(uint *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
    do {
      FUN_10025ad30(*(undefined8 *)(lVar7 + 0x10 + ((int)uVar13 + lVar16) * 8));
      lVar16 = lVar16 + 1;
      lVar7 = *(long *)(param_2 + 0x1b8);
      uVar13 = (ulong)*(int *)(lVar7 + 8);
    } while (lVar16 < (long)((long)*(int *)(lVar7 + 0xc) - uVar13));
  }
  puVar3 = *(uint **)(param_2 + 0x1e0);
  uVar2 = puVar3[2];
  if (puVar3[3] == uVar2) goto LAB_1000960d7;
  plVar11 = (long *)(param_2 + 0x1e0);
  if (1 < *puVar3) {
    pDVar12 = (Data *)QListData::detach((int)plVar11);
    lVar7 = *plVar11;
    lVar16 = (long)*(int *)(lVar7 + 8);
    puVar1 = (uint *)(lVar7 + 0x10 + lVar16 * 8);
    if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
       (lVar15 = *(int *)(lVar7 + 0xc) - lVar16, lVar15 != 0 && lVar16 <= *(int *)(lVar7 + 0xc))) {
      _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar15 * 8);
    }
    if (*(int *)pDVar12 != -1) {
      if (*(int *)pDVar12 != 0) {
        LOCK();
        *(int *)pDVar12 = *(int *)pDVar12 + -1;
        local_31 = *(int *)pDVar12 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100096055;
      }
      QListData::dispose(pDVar12);
    }
  }
LAB_100096055:
  plVar11 = *(long **)(*plVar11 + 0x10 + (long)*(int *)(*plVar11 + 8) * 8);
  if ((plVar11 != (long *)0x0) && (iVar6 = CVmDevice::getEnabled(), iVar6 == 1)) {
    (**(code **)(*plVar11 + 0xa8))(plVar11,0);
    CVmDevice::setEnabled((uint)plVar11);
    CVmDevice::setConnected((uint)plVar11);
    FUN_1002b6990();
    lVar7 = FUN_10025ad30(plVar11);
    uVar8 = 0;
    if (lVar7 != 0) {
      uVar8 = ___dynamic_cast(lVar7,&PTR_vtable_100baea70,&PTR_vtable_100bb3520,0x68);
    }
    *(undefined8 *)(param_1 + 0x1a58) = uVar8;
  }
LAB_1000960d7:
  lVar7 = *(long *)(param_2 + 0x1c8);
  uVar13 = (ulong)*(uint *)(lVar7 + 8);
  lVar16 = 0;
  if ((int)*(uint *)(lVar7 + 8) < *(int *)(lVar7 + 0xc)) {
    do {
      FUN_10025ad30(*(undefined8 *)(lVar7 + 0x10 + ((int)uVar13 + lVar16) * 8));
      lVar16 = lVar16 + 1;
      lVar7 = *(long *)(param_2 + 0x1c8);
      uVar13 = (ulong)*(int *)(lVar7 + 8);
    } while (lVar16 < (long)((long)*(int *)(lVar7 + 0xc) - uVar13));
  }
  QTime::start();
  pvVar10 = operator_new(0x118);
  FUN_1004c0300(pvVar10,*(undefined8 *)(param_1 + 0x1a28));
  *(void **)(param_1 + 0x10838) = pvVar10;
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","Tools dispatcher",uVar5);
  QTime::start();
  lVar7 = FUN_1002b3e50();
  *(long *)(param_1 + 0x10800) = lVar7;
  if (lVar7 == 0) {
    prVar9 = (runtime_error *)___cxa_allocate_exception(0x10);
    std::runtime_error::runtime_error(prVar9,"Failed to initialize PS/2 keyboard");
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(prVar9,PTR_typeinfo_100ba22b8,PTR__runtime_error_100ba2198);
  }
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","PS/2 keyboard",uVar5);
  QTime::start();
  lVar7 = FUN_1002b3ec0();
  *(long *)(param_1 + 0x10808) = lVar7;
  if (lVar7 == 0) {
    prVar9 = (runtime_error *)___cxa_allocate_exception(0x10);
    std::runtime_error::runtime_error(prVar9,"Failed to initialize USB keyboard");
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(prVar9,PTR_typeinfo_100ba22b8,PTR__runtime_error_100ba2198);
  }
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","USB keyboard",uVar5);
  QTime::start();
  lVar7 = FUN_1002b2000();
  *(long *)(param_1 + 0x10810) = lVar7;
  if (lVar7 == 0) {
    prVar9 = (runtime_error *)___cxa_allocate_exception(0x10);
    std::runtime_error::runtime_error(prVar9,"Failed to initialize PS/2 mouse");
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(prVar9,PTR_typeinfo_100ba22b8,PTR__runtime_error_100ba2198);
  }
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","PS/2 mouse",uVar5);
  QTime::start();
  lVar7 = FUN_1002b2060();
  *(long *)(param_1 + 0x10818) = lVar7;
  if (lVar7 == 0) {
    prVar9 = (runtime_error *)___cxa_allocate_exception(0x10);
    std::runtime_error::runtime_error(prVar9,"Failed to initialize USB mouse");
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(prVar9,PTR_typeinfo_100ba22b8,PTR__runtime_error_100ba2198);
  }
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","USB mouse",uVar5);
  QTime::start();
  if (*(long *)(DAT_1011c3698 + 0x1a58) != 0) {
    FUN_1001084f0(*(undefined8 *)(param_1 + 0x1a60));
  }
  uVar5 = QTime::elapsed();
  FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","Captured video sources",uVar5);
  FUN_1000e41d0(param_1 + 0x140);
  FUN_100259060(&local_40,0,0);
  plVar11 = (long *)FUN_100083a90(param_1 + 0x140,param_1 + 0x110);
  if (plVar11 != (long *)0x0) {
    if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 10) == 0) {
      (**(code **)(*plVar11 + 0x28))(plVar11,param_1 + 0x1960);
    }
    else {
      FUN_100067920(DAT_1011c3650);
    }
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  cVar4 = CVmTravelOptions::isEnabled();
  if (cVar4 != '\0') {
    FUN_1003fbe80(1);
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  FUN_1008e3970("","vm",0,"[Devices] Initialization finished");
  return;
}

