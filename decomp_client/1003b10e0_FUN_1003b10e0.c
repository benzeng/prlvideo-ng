
long * FUN_1003b10e0(long *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong *puVar4;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if ((DAT_1023122a8 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1023122a8), iVar1 != 0)) {
    DAT_1023122a0 = (int *)PTR_shared_null_1021e12f0;
    ___cxa_atexit(FUN_1003bc390,&DAT_1023122a0,0x100000000);
    ___cxa_guard_release(&DAT_1023122a8);
  }
  if (DAT_1023122a0[1] != 0) goto LAB_1003b1536;
  local_28 = (QArrayData *)QString::fromAscii_helper("Fdd",3);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_28);
  *puVar2 = 3;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b11a8;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1003b11a8:
  local_30 = (QArrayData *)QString::fromAscii_helper("CdRom",5);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_30);
  *puVar2 = 5;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b1203;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003b1203:
  local_38 = (QArrayData *)QString::fromAscii_helper("Hdd",3);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_38);
  *puVar2 = 6;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b125e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003b125e:
  local_40 = (QArrayData *)QString::fromAscii_helper("Serial",6);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_40);
  *puVar2 = 10;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b12b9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003b12b9:
  local_48 = (QArrayData *)QString::fromAscii_helper("NetworkAdapter",0xe);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_48);
  *puVar2 = 8;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b1314;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003b1314:
  local_50 = (QArrayData *)QString::fromAscii_helper("Printer",7);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_50);
  *puVar2 = 0xb;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b136f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003b136f:
  local_58 = (QArrayData *)QString::fromAscii_helper("Sound",5);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_58);
  *puVar2 = 0xc;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b13ca;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003b13ca:
  local_60 = (QArrayData *)QString::fromAscii_helper("USB",3);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_60);
  *puVar2 = 0xf;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b1425;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003b1425:
  local_68 = (QArrayData *)QString::fromAscii_helper("PciVideoAdapter",0xf);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_68);
  *puVar2 = 0x14;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b1480;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003b1480:
  local_70 = (QArrayData *)QString::fromAscii_helper("GenericPciDevice",0x10);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_70);
  *puVar2 = 0x11;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b14db;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003b14db:
  local_78 = (QArrayData *)QString::fromAscii_helper("GenericScsiDevice",0x11);
  puVar2 = (undefined4 *)FUN_1003bc2d0(&DAT_1023122a0,&local_78);
  *puVar2 = 0x12;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003b1536;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003b1536:
  if (*DAT_1023122a0 == 0) {
    lVar3 = QMapDataBase::createData();
    *param_1 = lVar3;
    if (*(long *)(DAT_1023122a0 + 4) != 0) {
      puVar4 = (ulong *)FUN_1003bd180(*(long *)(DAT_1023122a0 + 4),lVar3);
      *(ulong **)(lVar3 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | lVar3 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*DAT_1023122a0 == -1) {
    *param_1 = (long)DAT_1023122a0;
  }
  else {
    LOCK();
    *DAT_1023122a0 = *DAT_1023122a0 + 1;
    UNLOCK();
    *param_1 = (long)DAT_1023122a0;
  }
  return param_1;
}

