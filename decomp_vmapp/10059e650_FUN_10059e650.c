
void FUN_10059e650(char *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QRegExp local_50 [8];
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  builtin_strncpy(param_1,"                                                                       ",
                  0x47);
  cVar4 = FUN_1007ea210(param_3);
  if (cVar4 != '\0') {
    param_1[0x15] = 'F';
    param_1[0x16] = 'W';
    param_1[0x17] = 'R';
    param_1[0x18] = '1';
    param_1[0x19] = '0';
    param_1[0x1a] = '0';
    param_1[0x1b] = '0';
    param_1[0x1c] = '3';
    param_1[0x3e] = ' ';
    param_1[0x3f] = ' ';
    param_1[0x40] = ' ';
    param_1[0x41] = ' ';
    param_1[0x42] = ' ';
    param_1[0x43] = ' ';
    param_1[0x44] = ' ';
    param_1[0x45] = ' ';
    param_1[0x36] = ' ';
    param_1[0x37] = ' ';
    param_1[0x38] = ' ';
    param_1[0x39] = ' ';
    param_1[0x3a] = ' ';
    param_1[0x3b] = ' ';
    param_1[0x3c] = ' ';
    param_1[0x3d] = ' ';
    param_1[0x2e] = ' ';
    param_1[0x2f] = ' ';
    param_1[0x30] = ' ';
    param_1[0x31] = ' ';
    param_1[0x32] = ' ';
    param_1[0x33] = ' ';
    param_1[0x34] = ' ';
    param_1[0x35] = ' ';
    param_1[0x26] = ' ';
    param_1[0x27] = 'H';
    param_1[0x28] = 'D';
    param_1[0x29] = 'D';
    param_1[0x2a] = ' ';
    param_1[0x2b] = '[';
    param_1[0x2c] = '0';
    param_1[0x2d] = ']';
    param_1[0x1e] = 'V';
    param_1[0x1f] = 'i';
    param_1[0x20] = 'r';
    param_1[0x21] = 't';
    param_1[0x22] = 'u';
    param_1[0x23] = 'a';
    param_1[0x24] = 'l';
    param_1[0x25] = ' ';
    param_1[8] = '5';
    param_1[9] = '3';
    param_1[10] = '5';
    param_1[0xb] = '8';
    param_1[0xc] = '9';
    param_1[0xd] = '7';
    param_1[0xe] = '9';
    param_1[0xf] = '3';
    param_1[0] = '3';
    param_1[1] = '1';
    param_1[2] = '4';
    param_1[3] = '1';
    param_1[4] = '5';
    param_1[5] = '9';
    param_1[6] = '2';
    param_1[7] = '6';
    param_1[0x10] = '2';
    param_1[0x11] = '3';
    param_1[0x12] = '8';
    param_1[0x13] = '4';
    *param_1 = param_4 + '0';
    return;
  }
  QByteArray::QByteArray((QByteArray *)&local_78,0x10,'\0');
  if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_78,*(uint *)(local_78 + 4) + 1,*(uint *)(local_78 + 8) >> 0x1f);
  }
  FUN_1007ea840(param_3,local_78 + *(long *)(local_78 + 0x10));
  FUN_1007d8ba0(&local_88,&local_78);
  QString::toLatin1();
  QByteArray::operator=((QByteArray *)&local_78,(QByteArray *)&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059e7b8;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_10059e7b8:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059e7e8;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10059e7e8:
  if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_78,*(uint *)(local_78 + 4) + 1,*(uint *)(local_78 + 8) >> 0x1f);
  }
  pQVar3 = local_78;
  lVar2 = *(long *)(local_78 + 0x10);
  uVar1 = *(uint *)(local_78 + 4);
  if (uVar1 != 0x1a) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","Size == 26","VirtualDisk.cpp",
                  0x488,"ComposeIdentify");
  }
  _strncpy(param_1,(char *)(pQVar3 + lVar2),0x14);
  _strncpy(param_1 + 0x15,"F.",8);
  uVar6 = (ulong)(uVar1 - 0x14);
  _strncpy(param_1 + (0x1d - uVar6),(char *)(pQVar3 + lVar2 + 0x14),uVar6);
  QString::toLatin1();
  iVar5 = QByteArray::lastIndexOf((char)&local_40,0x3f);
  if (iVar5 < 0) {
    local_90 = local_40;
    if (1 < *(uint *)local_40 + 1) {
      LOCK();
      *(uint *)local_40 = *(uint *)local_40 + 1;
      local_31 = *(uint *)local_40 != 0;
      UNLOCK();
    }
  }
  else {
    local_48.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Virtual HDD",0xb);
    local_58 = (QArrayData *)QString::fromAscii_helper("(\\d+)$",6);
    QRegExp::QRegExp(local_50,&local_58,1,0);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10059e94b;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10059e94b:
    iVar5 = QRegExp::indexIn(local_50,param_2,0,0);
    if (iVar5 < 0) {
      QString::toLatin1();
    }
    else {
      local_68 = (QArrayData *)QString::fromAscii_helper(" %1",3);
      QRegExp::cap((int)&local_70);
      QString::arg(&local_60,&local_68,&local_70,0,0x20);
      QString::append(&local_48);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059e9e0;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10059e9e0:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059ea10;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10059ea10:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059ea40;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10059ea40:
      QString::toLatin1();
    }
    QRegExp::~QRegExp(local_50);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10059eab9;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10059eab9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059eae9;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10059eae9:
  uVar1 = *(uint *)(local_90 + 4);
  if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_90,uVar1 + 1,*(uint *)(local_90 + 8) >> 0x1f);
  }
  _strncpy(param_1 + 0x1e,(char *)(local_90 + *(long *)(local_90 + 0x10)),0x28);
  if (uVar1 < 0x28) {
    _memset(param_1 + (ulong)uVar1 + 0x1e,0x20,0x28 - (ulong)uVar1);
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059eb81;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_10059eb81:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_78,1,8);
  }
  return;
}

