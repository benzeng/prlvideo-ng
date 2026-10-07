
undefined8 FUN_10003ba40(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  char *pcVar11;
  QString local_c8;
  long local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  long local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  undefined1 local_60 [32];
  QArrayData *local_40;
  undefined1 local_31;
  
  local_c0 = param_2;
  if (*(int *)(param_2 + 8) == 0x9011) {
    QMutex::lock();
    FUN_100036f00(param_1 + 0x30,&local_c0);
    QMutex::unlock();
    return 0xffffffff;
  }
  if (*(int *)(param_2 + 8) != 0x9010) {
    return 0xf0000003;
  }
  if (*(short *)(param_2 + 0x16) == 0) {
    pcVar11 = "Buffer count < 1";
LAB_10003bb1b:
    FUN_1008e3970("COOKIE","vm",0,pcVar11);
    return 0xf0000003;
  }
  lVar8 = FUN_1002a6120(param_2,0,1);
  if (lVar8 == 0) {
    pcVar11 = "Output buffer doesn\'t exists";
    goto LAB_10003bb1b;
  }
  if (*(ushort *)(param_2 + 0x14) < 0x40) {
    pcVar11 = "Get header too small";
    goto LAB_10003bb1b;
  }
  piVar9 = (int *)FUN_1002a6010(param_2);
  local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  iVar4 = FUN_100060640();
  if (iVar4 == 1) {
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("pdfm.",5);
    QString::operator=(&local_c8,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003bbb5;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10003bbb5:
    local_98 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3.%4.%5",0xe);
    QString::arg(&local_90,&local_98,0xc,0,10,0x20);
    QString::arg(&local_88,&local_90,2,0,10,0x20);
    QString::arg(&local_80,&local_88,1,0,10,0x20);
    QString::arg(&local_78,&local_80,0xa28f,0,10,0x20);
    QString::arg(&local_70,&local_78,0,0,10,0x20);
    QString::append(&local_c8);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003bcb3;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10003bcb3:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003bce3;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_10003bce3:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003bd13;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10003bd13:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003bd43;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10003bd43:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003bd79;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10003bd79:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003bdaf;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10003bdaf:
    local_a0 = DAT_1011c3698 + 0x110;
    cVar3 = FUN_1000b4950(&local_a0);
    if (cVar3 == '\0') {
      local_b0 = (QArrayData *)QString::fromAscii_helper(".F",2);
      QString::append(&local_c8);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10003be9d;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
    }
    else {
      local_a8 = (QArrayData *)QString::fromAscii_helper(".T",2);
      QString::append(&local_c8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10003be9d;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
    }
LAB_10003be9d:
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("COOKIE","vm",3,"makeCookie = [%s]",local_b8 + *(long *)(local_b8 + 0x10));
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10003bf1e;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
    }
  }
LAB_10003bf1e:
  QString::toUtf8();
  iVar6 = 0;
  iVar4 = FUN_10078cca0(local_60,0);
  bVar2 = false;
  if (iVar4 == 0) {
    iVar4 = FUN_10078cd90(local_60,local_40 + *(long *)(local_40 + 0x10),
                          *(undefined4 *)(local_40 + 4),0x200a);
    iVar6 = 0;
    bVar2 = false;
    if (iVar4 == 0) {
      uVar1 = *(uint *)(lVar8 + 8);
      uVar5 = FUN_10078cc70(local_60);
      if (uVar1 < uVar5) {
        iVar6 = FUN_10078cc70(local_60);
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_10078cc70(local_60);
        iVar6 = 0;
      }
      uVar10 = FUN_10078cc60(local_60);
      iVar7 = FUN_1002a5a50(lVar8,0,uVar10,iVar4);
      if (iVar7 == iVar4) {
        *(int *)(lVar8 + 0x10) = iVar4;
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    FUN_10078cf00(local_60);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003bfff;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10003bfff:
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_c8.field0_0x0 != 0) goto LAB_10003c035;
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_10003c035:
  if (!bVar2) {
    return 0xf000001c;
  }
  if (iVar6 == 0) {
    return 0;
  }
  *piVar9 = iVar6;
  return 0xf0000009;
}

