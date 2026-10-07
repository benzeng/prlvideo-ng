
byte FUN_1004f6890(QString *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  undefined1 local_6c [4];
  long local_68 [2];
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [32];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  local_58 = (QArrayData *)QString::fromAscii_helper(".lnk",4);
  cVar2 = QString::endsWith(param_1,&local_58,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1004f6903;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004f6903:
  if (cVar2 == '\0') {
    bVar3 = 0;
    goto LAB_1004f6aa3;
  }
  QFile::QFile((QFile *)local_68,param_1);
  cVar2 = QFile::exists();
  if (cVar2 == '\0') {
LAB_1004f699e:
    local_78 = (QArrayData *)PTR_shared_null_100ba20d0;
    cVar2 = FUN_10050fa80(1,&local_78,0);
    if (cVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      FUN_100507c20(&local_88);
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
      }
      QString::append(&local_80);
      bVar3 = QString::startsWith(param_1,&local_80,0);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_49 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1004f6a30;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1004f6a30:
      bVar3 = bVar3 ^ 1;
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_49 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1004f6a67;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
LAB_1004f6a67:
    bVar3 = bVar3 ^ 1;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_49 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1004f6a9a;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
  else {
    cVar2 = FUN_1004f8760(param_1,local_6c,0);
    bVar3 = 1;
    if (cVar2 == '\0') {
      QFile::open(local_68,1);
      iVar4 = QIODevice::read((char *)local_68,(longlong)local_48);
      (**(code **)(local_68[0] + 0x70))(local_68);
      if (iVar4 < 0x14) {
        bVar3 = 0;
      }
      else {
        iVar4 = _memcmp(local_48,&DAT_100b457b0,0x14);
        if (iVar4 == 0) goto LAB_1004f699e;
        bVar3 = 0;
      }
    }
  }
LAB_1004f6a9a:
  QFile::~QFile((QFile *)local_68);
LAB_1004f6aa3:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar3;
}

