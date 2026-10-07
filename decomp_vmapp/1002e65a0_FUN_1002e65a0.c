
int FUN_1002e65a0(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  QString *pQVar6;
  size_t sVar7;
  QArrayData *pQVar8;
  char *pcVar9;
  bool bVar10;
  undefined8 *local_98;
  undefined8 local_90;
  ulong local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  int local_3c;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_3c = FUN_1002dc1f0();
  if (local_3c < 0) {
    return local_3c;
  }
  iVar3 = FUN_1007da300("devices.usb.msc_rdisk",1);
  iVar4 = FUN_1007da300("devices.usb.msc_fsync",iVar3 == 0);
  *(bool *)(param_1 + 0x182) = iVar4 != 0;
  puVar1 = (undefined8 *)(param_1 + 0x48);
  cVar2 = FUN_1006fc940(puVar1);
  bVar10 = cVar2 == '\0';
  *(char *)(param_1 + 0x180) = cVar2;
  iVar4 = bVar10 + 0x2001 + (uint)bVar10;
  if (iVar3 == 0) {
    iVar4 = bVar10 + 1 + (uint)bVar10;
  }
  local_3c = -0x7fffffff;
  lVar5 = FUN_100684400(puVar1,iVar4,4,&local_3c,0);
  *(long *)(param_1 + 0x40) = lVar5;
  if (local_3c < 0) {
    if ((local_3c == -0x7ffffa6f) || (local_3c == -0x7ffdbffe)) {
LAB_1002e6a00:
      if (lVar5 != 0) {
        FUN_1008e3970("","USB",0,"ASSERT( %s ) occured in %s:%d [%s]","m_disk == NULL",
                      "../Usb/Virtual/CUsbDevMSC.cpp",0x1eb,"Open");
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (DAT_1011c568c < 0) {
        return local_3c;
      }
      QString::toUtf8();
      if (*(char *)(param_1 + 0x180) == '\0') {
        pcVar9 = "R/W";
      }
      else {
        pcVar9 = "R/O";
      }
      FUN_1008e3970("","USB",0,"[MSC] Failed to open host path: %s for %s: 0x%x",
                    local_48 + *(long *)(local_48 + 0x10),pcVar9,local_3c);
      if (*(int *)local_48 == -1) {
        return local_3c;
      }
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return local_3c;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_48,1,8);
      return local_3c;
    }
    lVar5 = FUN_100684400(puVar1,iVar4,1,&local_3c,0);
    *(long *)(param_1 + 0x40) = lVar5;
    if (local_3c < 0) goto LAB_1002e6a00;
  }
  iVar4 = FUN_1007da300("devices.usb.msc_rdonly",*(undefined1 *)(param_1 + 0x180));
  *(bool *)(param_1 + 0x180) = iVar4 != 0;
  local_3c = (**(code **)(**(long **)(param_1 + 0x40) + 0x38))
                       (*(long **)(param_1 + 0x40),(undefined8 *)(param_1 + 0x80));
  if (local_3c < 0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x28))();
    (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (DAT_1011c568c < 0) {
      return local_3c;
    }
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"[MSC] Failed to get image parameters: %s: 0x%x",
                  local_50 + *(long *)(local_50 + 0x10),local_3c);
    if (*(int *)local_50 == -1) {
      return local_3c;
    }
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return local_3c;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,1,8);
    return local_3c;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar1;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_29 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  FUN_1006849d0(*(undefined8 *)(param_1 + 0x80),&local_68);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0x1000001de;
  *(undefined4 *)(param_1 + 0xa8) = local_60;
  *(undefined4 *)(param_1 + 0xac) = local_64;
  *(undefined4 *)(param_1 + 0xb0) = local_68;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x98);
  if (0x28 < *(int *)(*(long *)(param_1 + 0x48) + 4)) {
    QString::right((int)&local_70);
    QString::fromUtf8_helper((char *)&local_38,0xa02378);
    pQVar6 = (QString *)
             QString::insert((int)&local_70,(QChar *)0x0,
                             (int)*(undefined8 *)(local_38 + 0x10) + (int)local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002e6878;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1002e6878:
    QString::operator=(&local_58,pQVar6);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002e68b4;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_1002e68b4:
  QString::toLatin1();
  pQVar8 = local_78;
  sVar7 = 0x28;
  if ((ulong)(long)*(int *)(local_58.field0_0x0 + 4) < 0x29) {
    sVar7 = (long)*(int *)(local_58.field0_0x0 + 4);
  }
  _memcpy((void *)(param_1 + 0xdc),local_78 + *(long *)(local_78 + 0x10),sVar7);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_29 = *(int *)pQVar8 != 0;
      UNLOCK();
      pQVar8 = local_78;
      if ((bool)local_29) goto LAB_1002e691c;
    }
    QArrayData::deallocate(pQVar8,1,8);
  }
LAB_1002e691c:
  if (2 < DAT_1011c568c) {
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"[MSC] constructed: \"%s\"",local_80 + *(long *)(local_80 + 0x10));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002e698c;
      }
      QArrayData::deallocate(local_80,1,8);
    }
  }
LAB_1002e698c:
  if ((*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) == 0x800) {
    local_88 = 0;
    local_90 = 0;
    local_98 = &local_90;
    local_3c = FUN_100688360(*(undefined8 *)(param_1 + 0x40),&local_98);
    if (local_3c < 0) {
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[MSC] Failed to get partition count (non-fatal)");
      }
      FUN_100650070(&local_98,local_90);
      local_88 = 0;
      local_90 = 0;
      bVar10 = true;
      local_98 = &local_90;
    }
    else {
      bVar10 = local_88 < 2;
    }
    *(bool *)(param_1 + 0x181) = bVar10;
    FUN_100650070(&local_98,local_90);
  }
  iVar4 = FUN_1007da300("devices.usb.msc_rmb",*(undefined1 *)(param_1 + 0x181));
  *(undefined1 *)(param_1 + 0x181) = iVar4 != 0;
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return 0;
}

