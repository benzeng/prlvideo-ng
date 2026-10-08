
void FUN_10070de00(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  Data *pDVar5;
  long lVar6;
  QDataStream local_b8 [24];
  undefined4 local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  QString local_50;
  long local_48 [2];
  undefined1 local_31;
  
  FUN_10070d4e0(&local_50);
  QFile::QFile((QFile *)local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070de5f;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10070de5f:
  cVar3 = QFile::open(local_48,2);
  if (cVar3 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Can\'t open mouse remaps file for write.");
    goto LAB_10070e1b5;
  }
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  local_60 = (Data *)PTR_shared_null_1021e15e8;
  local_68 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10055d1a0(&local_88,param_1 + 0x20);
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
    do {
      local_70 = 1;
      uVar2 = *(undefined8 *)local_80;
      local_8c = FUN_10071bf00(uVar2);
      FUN_100129840(&local_58,&local_8c);
      local_90 = FUN_10071bea0(uVar2);
      FUN_100129840(&local_60,&local_90);
      local_94 = FUN_10071bf10(uVar2);
      FUN_100129840(&local_68,&local_94);
      local_80 = local_80 + 8;
    } while (local_80 != local_78);
  }
  local_70 = 1;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070dfaf;
    }
    iVar1 = *(int *)(local_88 + 0xc);
    if (iVar1 != *(int *)(local_88 + 8)) {
      lVar6 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_88 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_88);
  }
LAB_10070dfaf:
  QDataStream::QDataStream(local_b8,(QIODevice *)local_48);
  local_a0 = 0xc;
  QDataStream::operator<<(local_b8,0x30232);
  QDataStream::operator<<(local_b8,1);
  QDataStream::operator<<(local_b8,*(int *)(local_58 + 0xc) - *(int *)(local_58 + 8));
  uVar4 = (ulong)*(uint *)(local_58 + 8);
  lVar6 = 0;
  if ((int)*(uint *)(local_58 + 8) < *(int *)(local_58 + 0xc)) {
    do {
      QDataStream::operator<<(local_b8,*(int *)(local_58 + ((int)uVar4 + lVar6) * 8 + 0x10));
      lVar6 = lVar6 + 1;
      uVar4 = (ulong)*(int *)(local_58 + 8);
    } while (lVar6 < (long)((long)*(int *)(local_58 + 0xc) - uVar4));
  }
  QDataStream::operator<<(local_b8,*(int *)(local_60 + 0xc) - *(int *)(local_60 + 8));
  uVar4 = (ulong)*(uint *)(local_60 + 8);
  lVar6 = 0;
  if ((int)*(uint *)(local_60 + 8) < *(int *)(local_60 + 0xc)) {
    do {
      QDataStream::operator<<(local_b8,*(int *)(local_60 + ((int)uVar4 + lVar6) * 8 + 0x10));
      lVar6 = lVar6 + 1;
      uVar4 = (ulong)*(int *)(local_60 + 8);
    } while (lVar6 < (long)((long)*(int *)(local_60 + 0xc) - uVar4));
  }
  QDataStream::operator<<(local_b8,*(int *)(local_68 + 0xc) - *(int *)(local_68 + 8));
  uVar4 = (ulong)*(uint *)(local_68 + 8);
  lVar6 = 0;
  if ((int)*(uint *)(local_68 + 8) < *(int *)(local_68 + 0xc)) {
    do {
      QDataStream::operator<<(local_b8,*(int *)(local_68 + ((int)uVar4 + lVar6) * 8 + 0x10));
      lVar6 = lVar6 + 1;
      uVar4 = (ulong)*(int *)(local_68 + 8);
    } while (lVar6 < (long)((long)*(int *)(local_68 + 0xc) - uVar4));
  }
  (**(code **)(local_48[0] + 0x70))(local_48);
  QDataStream::~QDataStream(local_b8);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070e149;
    }
    QListData::dispose(local_68);
  }
LAB_10070e149:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070e16f;
    }
    QListData::dispose(local_60);
  }
LAB_10070e16f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070e1b5;
    }
    QListData::dispose(local_58);
  }
LAB_10070e1b5:
  QFile::~QFile((QFile *)local_48);
  return;
}

