
undefined4 FUN_1004dfff0(long param_1,QString *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long local_108 [2];
  long local_f8 [2];
  QString local_e8;
  QString local_e0;
  undefined1 local_d8 [32];
  time_t local_b8;
  time_t local_a8;
  utimbuf local_48;
  QFileInfo local_38 [15];
  undefined1 local_29;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    return 0xf000001c;
  }
  QFileInfo::QFileInfo(local_38,param_2);
  cVar1 = QFileInfo::exists();
  uVar5 = 0xf000001c;
  if (cVar1 == '\0') goto LAB_1004e0222;
  uVar4 = *(uint *)((long)param_3 + 0x2c);
  uVar5 = 0;
  if ((uVar4 & 0x60) != 0) goto LAB_1004e0222;
  if ((uVar4 & 0xe) != 0) {
    QString::toUtf8_helper(&local_e0);
    _lstat_INODE64((QArrayData *)(local_e0.field0_0x0 + *(long *)(local_e0.field0_0x0 + 0x10)),
                   local_d8);
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_29 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004e00b5;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,1,8);
    }
LAB_1004e00b5:
    if ((*(uint *)((long)param_3 + 0x2c) & 2) != 0) {
      local_b8 = param_3[1];
    }
    if ((*(uint *)((long)param_3 + 0x2c) & 4) != 0) {
      local_a8 = param_3[2];
    }
    local_48.actime = local_b8;
    local_48.modtime = local_a8;
    QString::toUtf8_helper(&local_e8);
    iVar2 = _utime((char *)(local_e8.field0_0x0 + *(long *)(local_e8.field0_0x0 + 0x10)),&local_48);
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_29 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004e013e;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,1,8);
    }
LAB_1004e013e:
    if (iVar2 != 0) {
      uVar5 = 0xf0000007;
      goto LAB_1004e0222;
    }
    uVar4 = *(uint *)((long)param_3 + 0x2c);
  }
  if ((uVar4 & 1) != 0) {
    cVar1 = QFileInfo::isDir();
    uVar5 = 0xf0000010;
    if (cVar1 != '\0') goto LAB_1004e0222;
    QFile::QFile((QFile *)local_f8,param_2);
    cVar1 = (**(code **)(local_f8[0] + 0xe8))(local_f8,*param_3);
    QFile::~QFile((QFile *)local_f8);
    if (cVar1 == '\0') {
      uVar5 = 0xf000001c;
      goto LAB_1004e0222;
    }
    uVar4 = *(uint *)((long)param_3 + 0x2c);
  }
  if ((uVar4 & 0x10) != 0) {
    uVar4 = *(uint *)(param_3 + 4);
    QFile::QFile((QFile *)local_108,param_2);
    uVar3 = uVar4 * 4 & 0x700;
    cVar1 = (**(code **)(local_108[0] + 0xf8))
                      (local_108,uVar4 & 7 | uVar3 | uVar4 * 2 & 0x70 | uVar3 << 4);
    QFile::~QFile((QFile *)local_108);
    uVar5 = 0xf000001c;
    if (cVar1 == '\0') goto LAB_1004e0222;
  }
  uVar5 = 0;
LAB_1004e0222:
  QFileInfo::~QFileInfo(local_38);
  return uVar5;
}

