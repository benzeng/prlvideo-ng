
undefined8 FUN_10002b910(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  undefined8 uVar9;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QFile local_58 [16];
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  lVar2 = *param_2;
  if (*(int *)(lVar2 + 4) < 0x2d) {
    uVar9 = 0xfffffff7;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PTIAHOST","vm",1,"Invalid request size");
    }
    goto LAB_10002bd87;
  }
  lVar3 = *(long *)(lVar2 + 0x10);
  FUN_100028c40(&local_48,param_2,*(undefined4 *)(lVar2 + 0x10 + lVar3));
  QString::operator=(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10002b9c3;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10002b9c3:
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    uVar9 = 0xfffffff7;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PTIAHOST","vm",1,"Failed to get path for fileId=%u",
                    *(undefined4 *)(lVar2 + 0x10 + lVar3));
    }
    goto LAB_10002bd87;
  }
  QFile::QFile(local_58,&local_40);
  cVar4 = QFile::open(local_58,1);
  puVar1 = (undefined8 *)(lVar2 + lVar3);
  iVar8 = (int)param_3;
  if (cVar4 == '\0') {
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("PTIAHOST","vm",3,"File \"%s\" with id=%u not found",
                    local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002bbfd;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
LAB_10002bbfd:
    QByteArray::resize(iVar8);
    puVar7 = (uint *)*param_3;
    if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
      QByteArray::reallocData(param_3,puVar7[1] + 1,puVar7[2] >> 0x1f);
      puVar7 = (uint *)*param_3;
    }
    lVar2 = *(long *)(puVar7 + 4);
    *(undefined1 *)((long)puVar7 + lVar2 + 0x2c) = *(undefined1 *)((long)puVar1 + 0x2c);
    *(undefined4 *)((long)puVar7 + lVar2 + 0x28) = *(undefined4 *)(puVar1 + 5);
    *(undefined8 *)((long)puVar7 + lVar2 + 0x20) = puVar1[4];
    *(undefined8 *)((long)puVar7 + lVar2 + 0x18) = puVar1[3];
    *(undefined8 *)((long)puVar7 + lVar2 + 0x10) = puVar1[2];
    uVar9 = *puVar1;
    *(undefined8 *)((long)puVar7 + lVar2 + 8) = puVar1[1];
    *(undefined8 *)((long)puVar7 + lVar2) = uVar9;
    *(undefined8 *)((long)puVar7 + lVar2 + 0x18) = 0xffffffffffffffff;
LAB_10002bd7b:
    uVar9 = 0;
  }
  else {
    uVar5 = QFile::size();
    if (*(ulong *)(lVar3 + 0x18 + lVar2) <= uVar5 - 1) {
      if (2 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("PTIAHOST","vm",3,"Size of file \"%s\" with id=%u is %ub",
                      local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(lVar2 + 0x10 + lVar3),
                      (int)uVar5);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002bcfe;
          }
          QArrayData::deallocate(local_68,1,8);
        }
      }
LAB_10002bcfe:
      QByteArray::resize(iVar8);
      puVar7 = (uint *)*param_3;
      if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
        QByteArray::reallocData(param_3,puVar7[1] + 1,puVar7[2] >> 0x1f);
        puVar7 = (uint *)*param_3;
      }
      lVar2 = *(long *)(puVar7 + 4);
      *(undefined1 *)((long)puVar7 + lVar2 + 0x2c) = *(undefined1 *)((long)puVar1 + 0x2c);
      *(undefined4 *)((long)puVar7 + lVar2 + 0x28) = *(undefined4 *)(puVar1 + 5);
      *(undefined8 *)((long)puVar7 + lVar2 + 0x20) = puVar1[4];
      *(undefined8 *)((long)puVar7 + lVar2 + 0x18) = puVar1[3];
      *(undefined8 *)((long)puVar7 + lVar2 + 0x10) = puVar1[2];
      uVar9 = *puVar1;
      *(undefined8 *)((long)puVar7 + lVar2 + 8) = puVar1[1];
      *(undefined8 *)((long)puVar7 + lVar2) = uVar9;
      *(ulong *)((long)puVar7 + lVar2 + 0x18) = uVar5;
      goto LAB_10002bd7b;
    }
    QByteArray::resize(iVar8);
    puVar7 = (uint *)*param_3;
    if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
      QByteArray::reallocData(param_3,puVar7[1] + 1,puVar7[2] >> 0x1f);
      puVar7 = (uint *)*param_3;
    }
    lVar6 = *(long *)(puVar7 + 4);
    *(undefined1 *)((long)puVar7 + lVar6 + 0x2c) = *(undefined1 *)((long)puVar1 + 0x2c);
    *(undefined4 *)((long)puVar7 + lVar6 + 0x28) = *(undefined4 *)(puVar1 + 5);
    *(undefined8 *)((long)puVar7 + lVar6 + 0x20) = puVar1[4];
    *(undefined8 *)((long)puVar7 + lVar6 + 0x18) = puVar1[3];
    *(undefined8 *)((long)puVar7 + lVar6 + 0x10) = puVar1[2];
    uVar9 = *puVar1;
    *(undefined8 *)((long)puVar7 + lVar6 + 8) = puVar1[1];
    *(undefined8 *)((long)puVar7 + lVar6) = uVar9;
    *(ulong *)((long)puVar7 + lVar6 + 0x18) = uVar5;
    lVar6 = QIODevice::read((char *)local_58,(long)puVar7 + lVar6 + 0x2c);
    uVar9 = 0;
    if (((int)uVar5 != lVar6) && (uVar9 = 0xfffffff7, 0 < DAT_1011b55f8)) {
      QString::toUtf8();
      FUN_1008e3970("PTIAHOST","vm",1,"Failed to read %ub from file \"%s\" with id=%u",
                    uVar5 & 0xffffffff,local_70 + *(long *)(local_70 + 0x10),
                    *(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002bd7e;
        }
        QArrayData::deallocate(local_70,1,8);
      }
    }
  }
LAB_10002bd7e:
  QFile::~QFile(local_58);
LAB_10002bd87:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar9;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar9;
}

