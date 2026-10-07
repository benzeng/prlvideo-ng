
undefined4 FUN_1002e0e20(long param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  QArrayData *pQVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  CVmParallelPort local_1b8 [248];
  QString local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return 0x80000018;
  }
  local_b0 = *(QArrayData **)(*(long *)(param_1 + 8) + 0x20);
  if (1 < *(int *)local_b0 + 1U) {
    LOCK();
    *(int *)local_b0 = *(int *)local_b0 + 1;
    local_31 = *(int *)local_b0 != 0;
    UNLOCK();
  }
  uVar3 = FUN_1002b9040(&local_b0);
  uVar4 = 0x80000018;
  if (uVar3 == 0xffffffff) goto LAB_1002e175e;
  iVar1 = (&DAT_1011c4ab0)[(ulong)uVar3 * 0xc];
  if (iVar1 == 1) {
    pvVar6 = operator_new(0x138,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar5 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      FUN_100268500(pvVar6);
      pvVar5 = pvVar6;
    }
    pvVar6 = (void *)((long)pvVar5 + 0x10);
    if (pvVar5 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
  }
  else if (iVar1 == 2) {
    pvVar5 = operator_new(0x120,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar6 = (void *)0x0;
    if (pvVar5 != (void *)0x0) {
      FUN_100265e00(pvVar5);
      pvVar6 = pvVar5;
    }
  }
  else {
    if (iVar1 != 3) goto LAB_1002e175e;
    pvVar5 = operator_new(0x118,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar6 = (void *)0x0;
    if (pvVar5 != (void *)0x0) {
      FUN_1003dd590(pvVar5);
      pvVar6 = pvVar5;
    }
  }
  *(void **)(param_1 + 0x40) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    uVar4 = 0x80000002;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"Error allocating memory for LPT target");
    }
    goto LAB_1002e175e;
  }
  uVar3 = FUN_1002b9040(&local_b0);
  if (uVar3 == 0xffffffff) {
    pQVar7 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    pQVar7 = *(QArrayData **)(&DAT_1011c4ac0 + (ulong)uVar3 * 0x30);
    if (1 < *(int *)pQVar7 + 1U) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + 1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
    }
  }
  local_b4 = 0x409;
  uVar8 = FUN_1002e4d40(param_1 + 0x30,&local_b4);
  local_b8 = 3;
  puVar9 = (undefined8 *)FUN_1002e4ea0(uVar8,&local_b8);
  pQVar2 = (QArrayData *)*puVar9;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  iVar1 = *(int *)(DAT_1011c3698 + 0x5c0);
  pcVar13 = "HP";
  if (iVar1 - 0x801U < 8) {
    pcVar11 = "HP_Color_LaserJet_8500_PS";
  }
  else if (iVar1 - 0x809U < 3) {
    pcVar11 = "HP Color LaserJet 2820";
    pcVar13 = "Hewlett-Packard";
  }
  else {
    pcVar11 = "HP Color LaserJet 8500";
    if (iVar1 - 0x80cU < 5) {
      pcVar11 = "Color LaserJet 2820 2L8";
    }
  }
  if ((((iVar1 == 0x9ff) || (iVar1 - 0x901U < 0x15)) || (iVar1 - 0xfffU < 4)) ||
     ((iVar1 == 0xf01 || (iVar1 == 0x10ff)))) {
    pcVar12 = "SN";
  }
  else {
    pcVar12 = "SER";
  }
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("CLS:PRINTER;CMD:POSTSCRIPT;MFG:%1;MDL:%2;%3:%4;DES:%5;CMT:%5",0x3c);
  sVar10 = _strlen(pcVar13);
  local_78 = (QArrayData *)QString::fromAscii_helper(pcVar13,(int)sVar10);
  QString::arg(&local_68,&local_70,&local_78,0,0x20);
  sVar10 = _strlen(pcVar11);
  local_80 = (QArrayData *)QString::fromAscii_helper(pcVar11,(int)sVar10);
  QString::arg(&local_60,&local_68,&local_80,0,0x20);
  sVar10 = _strlen(pcVar12);
  local_88 = (QArrayData *)QString::fromAscii_helper(pcVar12,(int)sVar10);
  QString::arg(&local_58,&local_60,&local_88,0,0x20);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_98 = pQVar2;
  uVar8 = QString::replace(&local_98,0x2c,0x5f,1);
  uVar8 = QString::replace(uVar8,0x3a,0x5f,1);
  puVar9 = (undefined8 *)QString::replace(uVar8,0x3b,0x5f,1);
  local_90 = (QArrayData *)*puVar9;
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_31 = *(int *)local_90 != 0;
    UNLOCK();
  }
  QString::arg(&local_50,&local_58,&local_90,0,0x20);
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_a8 = pQVar7;
  uVar8 = QString::replace(&local_a8,0x2c,0x5f,1);
  uVar8 = QString::replace(uVar8,0x3a,0x5f,1);
  puVar9 = (undefined8 *)QString::replace(uVar8,0x3b,0x5f,1);
  local_a0 = (QArrayData *)*puVar9;
  if (1 < *(int *)local_a0 + 1U) {
    LOCK();
    *(int *)local_a0 = *(int *)local_a0 + 1;
    local_31 = *(int *)local_a0 != 0;
    UNLOCK();
  }
  QString::arg(&local_c0,&local_50,&local_a0,0,0x20);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e12b4;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002e12b4:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e12ea;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1002e12ea:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e131a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002e131a:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1350;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1002e1350:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1386;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1002e1386:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e13b6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002e13b6:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e13e6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002e13e6:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1416;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002e1416:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1446;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002e1446:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1476;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002e1476:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e14a6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002e14a6:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e14d6;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002e14d6:
  QString::operator=((QString *)(param_1 + 0x58),&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e151d;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1002e151d:
  CVmParallelPort::CVmParallelPort(local_1b8);
  CVmParallelPort::setDefaults((QDomElement *)local_1b8);
  QString::QString(&local_48,0x7c);
  QString::section(&local_1c8,&local_b0,&local_48,5,0xffffffff,0);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e159a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002e159a:
  QString::QString(&local_40,0x40);
  QString::section(&local_1c0,&local_1c8,&local_40,1,0xffffffff,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e15fd;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002e15fd:
  CVmDevice::setSystemName((QTypedArrayData<unsigned_short> *)local_1b8);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1646;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1002e1646:
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e167c;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_1002e167c:
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  CVmDevice::setUserFriendlyName((QTypedArrayData<unsigned_short> *)local_1b8);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e16df;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1002e16df:
  uVar4 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),local_1b8);
  CVmParallelPort::~CVmParallelPort(local_1b8);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e1731;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002e1731:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002e175e;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1002e175e:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
  return uVar4;
}

