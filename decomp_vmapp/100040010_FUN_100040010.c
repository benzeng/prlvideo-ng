
void FUN_100040010(void)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  uint uVar6;
  QArrayData *pQVar7;
  int iVar8;
  QFile local_90 [16];
  QString local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  string local_60;
  char local_5f [15];
  char *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QDir::tempPath();
  uVar2 = QDir::separator();
  local_40 = local_48;
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_21 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  uVar6 = *(uint *)(local_48 + 4);
  if ((1 < *(uint *)local_48) || ((*(uint *)(local_48 + 8) & 0x7fffffff) < uVar6 + 2)) {
    QString::reallocData((uint)&local_40,SUB41(uVar6 + 2,0));
    uVar6 = *(uint *)(local_40 + 4);
  }
  *(uint *)(local_40 + 4) = uVar6 + 1;
  *(undefined2 *)(local_40 + (long)(int)uVar6 * 2 + *(long *)(local_40 + 0x10)) = uVar2;
  *(undefined2 *)(local_40 + (long)(int)*(uint *)(local_40 + 4) * 2 + *(long *)(local_40 + 0x10)) =
       0;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(uint *)local_40 + 1) {
    LOCK();
    *(uint *)local_40 = *(uint *)local_40 + 1;
    local_21 = *(uint *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x9e285f);
  QString::append(&local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004010f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10004010f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004013f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10004013f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004016f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10004016f:
  QDir::cleanPath(&local_70);
  QString::toUtf8();
  pQVar7 = local_68 + *(long *)(local_68 + 0x10);
  _strlen((char *)pQVar7);
  std::string::__init((char *)&local_60,(ulong)pQVar7);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000401d8;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1000401d8:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100040208;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100040208:
  if (((byte)local_60 & 1) == 0) {
    local_50 = local_5f;
  }
  pcVar3 = _mktemp(local_50);
  iVar8 = -1;
  if (pcVar3 != (char *)0x0) {
    sVar4 = _strlen(pcVar3);
    iVar8 = (int)sVar4;
  }
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar3,iVar8);
  pQVar7 = (QArrayData *)QString::fromAscii_helper(".",1);
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_21 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
  QString::append(&local_80);
  QString::append(&local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_21 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000402b3;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1000402b3:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_21 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000402de;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1000402de:
  QFile::QFile(local_90,&local_78);
  cVar1 = QFile::open(local_90,3);
  if (cVar1 == '\0') {
    uVar5 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar5,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x304,
                  "can\'t open typed temporary file",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar5,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  FUN_10003fcc0();
  QFile::remove();
  QFile::~QFile(local_90);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004035b;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10004035b:
  std::string::~string(&local_60);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

