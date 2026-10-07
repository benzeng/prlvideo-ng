
uint FUN_1002b7860(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar5 = FUN_1002b8030(param_2);
  uVar1 = *(uint *)(DAT_1011c3698 + 0x5c0);
  if (uVar5 == 3) {
    if ((*(long **)(param_1 + 0x2f8) == (long *)0x0) ||
       (iVar6 = (**(code **)(**(long **)(param_1 + 0x2f8) + 0x78))(), iVar6 == 0)) {
LAB_1002b78c9:
      lVar2 = *(long *)(param_1 + 0x2f0);
      if (lVar2 == 0) {
        cVar4 = '\0';
        uVar8 = 1;
      }
      else {
        uVar8 = 2;
        if (DAT_1011c5660 < (uint)(*(int *)(lVar2 + 0x58) - *(int *)(lVar2 + 0x46c))) {
          cVar4 = '\0';
        }
        else {
          local_40 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@PRINTER@",0x10);
          cVar3 = QString::startsWith(param_2,&local_40,1);
          cVar4 = '\x01';
          if (cVar3 == '\0') {
            local_48 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@BT@",0xb);
            cVar4 = QString::startsWith(param_2,&local_48,1);
            if (*(int *)local_48 != -1) {
              if (*(int *)local_48 != 0) {
                LOCK();
                *(int *)local_48 = *(int *)local_48 + -1;
                local_31 = *(int *)local_48 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002b799c;
              }
              QArrayData::deallocate(local_48,2,8);
            }
          }
LAB_1002b799c:
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002b79d6;
            }
            QArrayData::deallocate(local_40,2,8);
          }
        }
      }
    }
    else {
      cVar4 = '\0';
      uVar8 = 3;
    }
  }
  else {
    if (uVar5 == 2) goto LAB_1002b78c9;
    cVar4 = '\0';
    uVar8 = uVar5;
  }
LAB_1002b79d6:
  uVar9 = 1;
  if (cVar4 == '\0') {
    uVar9 = uVar8;
  }
  uVar8 = uVar1 & 0xffffff00;
  if ((uVar1 < 0x809) && (uVar8 == 0x800)) {
    if (uVar9 == 2) {
      local_50 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@MOUSE@",0xe);
      cVar3 = QString::startsWith(param_2,&local_50,1);
      cVar4 = '\x01';
      if (cVar3 == '\0') {
        local_58 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@KEYBOARD@",0x11);
        cVar3 = QString::startsWith(param_2,&local_58,1);
        cVar4 = '\x01';
        if (cVar3 == '\0') {
          local_60 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@PRINTER@",0x10);
          cVar4 = QString::startsWith(param_2,&local_60,1);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002b7ad7;
            }
            QArrayData::deallocate(local_60,2,8);
          }
        }
LAB_1002b7ad7:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b7b48;
          }
          QArrayData::deallocate(local_58,2,8);
        }
      }
LAB_1002b7b48:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002b7b93;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
    else {
      cVar4 = '\0';
    }
LAB_1002b7b93:
    if (cVar4 != '\0') {
      uVar9 = 1;
    }
  }
  if ((uVar1 < 0x807) && (uVar8 == 0x800)) {
    local_68 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@BT@",0xb);
    cVar4 = QString::startsWith(param_2,&local_68,1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b7c1d;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1002b7c1d:
    if (cVar4 != '\0') {
      return 0xffffffff;
    }
    local_70 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@UVC@",0xc);
    cVar4 = QString::startsWith(param_2,&local_70,1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b7c95;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1002b7c95:
    if (cVar4 != '\0') {
      return 0xffffffff;
    }
  }
  uVar7 = 1;
  if (uVar9 != 2) {
    uVar7 = uVar9;
  }
  if (uVar8 != 0x800) {
    uVar7 = uVar9;
  }
  if (0x805 < uVar1) {
    uVar7 = uVar9;
  }
  if ((uVar5 == 3) && (uVar7 == 2)) {
    return 2;
  }
  if ((uVar5 == 3) && (uVar7 == 1)) {
    return 0xffffffff;
  }
  if ((uVar5 == 2) && (uVar7 == 1)) {
    local_78 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@",8);
    cVar4 = QString::startsWith(param_2,&local_78,1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b7d55;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1002b7d55:
    if (cVar4 == '\0') {
      return 0xffffffff;
    }
  }
  if (uVar7 != 1) {
    if (1 < uVar7) {
      return uVar7;
    }
    goto LAB_1002b7dc3;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@UVC@",0xc);
  cVar4 = QString::startsWith(param_2,&local_80,1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) goto LAB_1002b7dbb;
      local_31 = 0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002b7dbb:
  if (cVar4 != '\0') {
    return 0xffffffff;
  }
LAB_1002b7dc3:
  if (*(long *)(param_1 + 0x2e8) != 0) {
    return uVar7;
  }
  return 0xffffffff;
}

