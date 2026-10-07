
int FUN_1004e6a80(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  QFile local_1070 [16];
  QArrayData *local_1060;
  QString local_1058;
  QString local_1050;
  undefined1 local_1041;
  QFileInfo local_1040 [8];
  undefined1 local_1038 [4096];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  QFileInfo::filePath();
  FUN_1004e6910(&local_1060,param_1 + 0x30);
  QString::fromUtf8_helper((char *)&local_1058,0xa02eac);
  QString::append(&local_1058);
  QString::append(&local_1050);
  if (*(int *)local_1058.field0_0x0 != -1) {
    if (*(int *)local_1058.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1058.field0_0x0 = *(int *)local_1058.field0_0x0 + -1;
      local_1041 = *(int *)local_1058.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1041) goto LAB_1004e6b40;
    }
    QArrayData::deallocate((QArrayData *)local_1058.field0_0x0,2,8);
  }
LAB_1004e6b40:
  if (*(int *)local_1060 != -1) {
    if (*(int *)local_1060 != 0) {
      LOCK();
      *(int *)local_1060 = *(int *)local_1060 + -1;
      local_1041 = *(int *)local_1060 != 0;
      UNLOCK();
      if ((bool)local_1041) goto LAB_1004e6b7c;
    }
    QArrayData::deallocate(local_1060,2,8);
  }
LAB_1004e6b7c:
  QFile::QFile(local_1070,&local_1050);
  uVar4 = FUN_1007da300("fs.max_dump_file_sz",0x80000000);
  plVar1 = (long *)(param_1 + 0x18);
  cVar3 = (**(code **)(*(long *)(param_1 + 0x18) + 0x88))(plVar1,(ulong)uVar4 << 10);
  iVar7 = 1;
  if ((cVar3 != '\0') && (lVar5 = QIODevice::read((char *)plVar1,(longlong)local_1038), lVar5 < 1))
  {
    cVar3 = QFile::exists();
    if (cVar3 == '\0') {
      QFileInfo::QFileInfo(local_1040,local_1070);
      cVar3 = QFileInfo::isSymLink();
      QFileInfo::~QFileInfo(local_1040);
      iVar8 = 1;
      if (cVar3 == '\0') {
        cVar3 = QFile::open(local_1070,10);
        iVar8 = 2;
        if (((cVar3 != '\0') && (cVar3 = QFileDevice::flush(), cVar3 != '\0')) &&
           (cVar3 = (**(code **)(*plVar1 + 0x88))(plVar1,0), cVar3 != '\0')) {
          cVar3 = QFile::setPermissions(local_1070,0x6600);
          iVar8 = 3;
          if (cVar3 != '\0') {
            do {
              lVar5 = QIODevice::read((char *)plVar1,(longlong)local_1038);
              iVar8 = 0;
              if (lVar5 < 1) break;
              lVar6 = QIODevice::write((char *)local_1070,(longlong)local_1038);
              iVar8 = 4;
            } while (lVar6 == lVar5);
            QFileDevice::flush();
            iVar7 = 0;
            if (iVar8 == 0) goto LAB_1004e6d00;
          }
        }
      }
    }
    else {
      iVar8 = 1;
    }
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 0x40;
    QFile::remove();
    iVar7 = iVar8;
  }
LAB_1004e6d00:
  QFile::~QFile(local_1070);
  if (*(int *)local_1050.field0_0x0 != -1) {
    if (*(int *)local_1050.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1050.field0_0x0 = *(int *)local_1050.field0_0x0 + -1;
      local_1038[0] = *(int *)local_1050.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1038[0]) goto LAB_1004e6d48;
    }
    QArrayData::deallocate((QArrayData *)local_1050.field0_0x0,2,8);
  }
LAB_1004e6d48:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

