
undefined4 FUN_10002bf10(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  char cVar6;
  uint *puVar7;
  long lVar8;
  undefined4 uVar9;
  QArrayData *local_58;
  QArrayData *local_50;
  QFile local_48 [16];
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  lVar2 = *param_2;
  if (*(int *)(lVar2 + 4) < 0x2d) {
    uVar9 = 0xfffffff7;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PTIAHOST","vm",1,"Invalid request size");
    }
    goto LAB_10002c22a;
  }
  lVar3 = *(long *)(lVar2 + 0x10);
  if (*(int *)(lVar2 + 4) < *(int *)(lVar2 + 0x18 + lVar3) + 0x2c) {
    uVar9 = 0xfffffff7;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PTIAHOST","vm",1,"Invalid file size");
    }
    goto LAB_10002c22a;
  }
  QByteArray::resize((int)param_3);
  puVar7 = (uint *)*param_3;
  if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
    QByteArray::reallocData(param_3,puVar7[1] + 1,puVar7[2] >> 0x1f);
    puVar7 = (uint *)*param_3;
  }
  puVar1 = (undefined8 *)(lVar2 + lVar3);
  lVar8 = *(long *)(puVar7 + 4);
  *(undefined1 *)((long)puVar7 + lVar8 + 0x2c) = *(undefined1 *)((long)puVar1 + 0x2c);
  *(undefined4 *)((long)puVar7 + lVar8 + 0x28) = *(undefined4 *)(puVar1 + 5);
  *(undefined8 *)((long)puVar7 + lVar8 + 0x20) = puVar1[4];
  *(undefined8 *)((long)puVar7 + lVar8 + 0x18) = puVar1[3];
  *(undefined8 *)((long)puVar7 + lVar8 + 0x10) = puVar1[2];
  uVar4 = *puVar1;
  *(undefined8 *)((long)puVar7 + lVar8 + 8) = puVar1[1];
  *(undefined8 *)((long)puVar7 + lVar8) = uVar4;
  FUN_100028c40(&local_38,uVar4,*(undefined4 *)(lVar3 + 0x10 + lVar2));
  QString::operator=(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10002c07b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10002c07b:
  if (*(int *)(local_30.field0_0x0 + 4) == 0) {
    uVar9 = 0xfffffff7;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PTIAHOST","vm",1,"Failed to get path for fileId=%u",
                    *(undefined4 *)(lVar2 + 0x10 + lVar3));
    }
    goto LAB_10002c22a;
  }
  QFile::QFile(local_48,&local_30);
  cVar6 = QFile::open(local_48,10);
  if (cVar6 == '\0') {
    uVar9 = 0xfffffff7;
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("PTIAHOST","vm",3,"File \"%s\" with id=%u not writable",
                    local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_21 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10002c221;
        }
        QArrayData::deallocate(local_50,1,8);
      }
    }
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x18 + lVar3);
    lVar8 = QIODevice::write((char *)local_48,lVar2 + 0x2c + lVar3);
    uVar9 = 0;
    if ((int)uVar4 != lVar8) {
      if (0 < DAT_1011b55f8) {
        uVar5 = *(ulong *)(lVar2 + 0x18 + lVar3);
        QString::toUtf8();
        FUN_1008e3970("PTIAHOST","vm",1,"Failed to write %ub to file \"%s\" with id=%u",
                      uVar5 & 0xffffffff,local_58 + *(long *)(local_58 + 0x10),
                      *(undefined4 *)(lVar2 + 0x10 + lVar3));
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_21 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10002c152;
          }
          QArrayData::deallocate(local_58,1,8);
        }
      }
LAB_10002c152:
      uVar9 = 0xfffffff7;
      QFile::remove();
    }
  }
LAB_10002c221:
  QFile::~QFile(local_48);
LAB_10002c22a:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar9;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar9;
}

