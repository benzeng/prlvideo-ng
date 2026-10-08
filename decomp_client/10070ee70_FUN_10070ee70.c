
void FUN_10070ee70(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  Data *pDVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  QKeySequence *pQVar7;
  QDataStream local_e8 [24];
  undefined4 local_d0;
  QArrayData *local_c8;
  long local_c0 [2];
  QArrayData *local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  undefined4 local_8c;
  QKeySequence local_88 [8];
  QKeySequence local_80 [8];
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000ff290(&local_78,param_2 + 0x10);
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      uVar2 = *(undefined8 *)local_70;
      FUN_100714b50(local_80,uVar2);
      FUN_100560a10(&local_48,local_80);
      QKeySequence::~QKeySequence(local_80);
      FUN_100714b80(local_88,uVar2);
      FUN_100560a10(&local_50,local_88);
      QKeySequence::~QKeySequence(local_88);
      local_8c = FUN_100714bb0(uVar2);
      FUN_100129840(&local_58,&local_8c);
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070ef9b;
    }
    FUN_1005596c0(&local_78,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                  local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10);
    QListData::dispose(local_78);
  }
LAB_10070ef9b:
  FUN_100d842d0(&local_b0);
  local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b0;
  if (1 < *(int *)local_b0 + 1U) {
    LOCK();
    *(int *)local_b0 = *(int *)local_b0 + 1;
    local_31 = *(int *)local_b0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_a8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070f01b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10070f01b:
  local_a0.field0_0x0 = local_a8.field0_0x0;
  if (1 < *(int *)local_a8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
    local_31 = *(int *)local_a8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_a0);
  FUN_100137810(&local_98,&local_a0,PTR_s__dat_102274b38);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070f09c;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_10070f09c:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070f0d2;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_10070f0d2:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070f108;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10070f108:
  QFile::QFile((QFile *)local_c0,&local_98);
  cVar4 = QFile::open(local_c0,2);
  if (cVar4 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Can\'t open \'%s\' remap profile for write.",
                  local_c8 + *(long *)(local_c8 + 0x10));
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10070f394;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
  }
  else {
    QDataStream::QDataStream(local_e8,(QIODevice *)local_c0);
    local_d0 = 0xc;
    QDataStream::operator<<(local_e8,0x30231);
    QDataStream::operator<<(local_e8,1);
    operator<<(local_e8,(QString *)(param_2 + 8));
    QDataStream::operator<<(local_e8,*(int *)(local_48 + 0xc) - *(int *)(local_48 + 8));
    uVar5 = (ulong)*(uint *)(local_48 + 8);
    lVar6 = 0;
    if ((int)*(uint *)(local_48 + 8) < *(int *)(local_48 + 0xc)) {
      do {
        operator<<(local_e8,(QKeySequence *)(local_48 + ((int)uVar5 + lVar6) * 8 + 0x10));
        lVar6 = lVar6 + 1;
        uVar5 = (ulong)*(int *)(local_48 + 8);
      } while (lVar6 < (long)((long)*(int *)(local_48 + 0xc) - uVar5));
    }
    QDataStream::operator<<(local_e8,*(int *)(local_50 + 0xc) - *(int *)(local_50 + 8));
    uVar5 = (ulong)*(uint *)(local_50 + 8);
    lVar6 = 0;
    if ((int)*(uint *)(local_50 + 8) < *(int *)(local_50 + 0xc)) {
      do {
        operator<<(local_e8,(QKeySequence *)(local_50 + ((int)uVar5 + lVar6) * 8 + 0x10));
        lVar6 = lVar6 + 1;
        uVar5 = (ulong)*(int *)(local_50 + 8);
      } while (lVar6 < (long)((long)*(int *)(local_50 + 0xc) - uVar5));
    }
    QDataStream::operator<<(local_e8,*(int *)(local_58 + 0xc) - *(int *)(local_58 + 8));
    uVar5 = (ulong)*(uint *)(local_58 + 8);
    lVar6 = 0;
    if ((int)*(uint *)(local_58 + 8) < *(int *)(local_58 + 0xc)) {
      do {
        QDataStream::operator<<(local_e8,*(int *)(local_58 + ((int)uVar5 + lVar6) * 8 + 0x10));
        lVar6 = lVar6 + 1;
        uVar5 = (ulong)*(int *)(local_58 + 8);
      } while (lVar6 < (long)((long)*(int *)(local_58 + 0xc) - uVar5));
    }
    (**(code **)(local_c0[0] + 0x70))(local_c0);
    QDataStream::~QDataStream(local_e8);
  }
LAB_10070f394:
  QFile::~QFile((QFile *)local_c0);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070f3d6;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_10070f3d6:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070f3fc;
    }
    QListData::dispose(local_58);
  }
LAB_10070f3fc:
  pDVar3 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070f45a;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pQVar7 = (QKeySequence *)(local_50 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar7);
        pQVar7 = pQVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_10070f45a:
  pDVar3 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pQVar7 = (QKeySequence *)(local_48 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar7);
        pQVar7 = pQVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

