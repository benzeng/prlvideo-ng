
void FUN_100494fd0(long param_1,undefined4 *param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  long *local_b8;
  QArrayData *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  undefined4 local_68;
  int local_5c;
  QArrayData *local_58;
  QBuffer local_50 [16];
  QArrayData *local_40;
  undefined1 local_31;
  
  *(undefined4 *)(param_3 + 4) = 4;
  *(undefined4 *)(param_3 + 0x10) = *param_2;
  iVar6 = param_2[2];
  if (*(int *)(*(long *)(param_2 + 4) + 4) != 0) {
    iVar6 = iVar6 + 4 + *(int *)(*(long *)(param_2 + 4) + 4);
  }
  *(int *)(param_3 + 0x28) = iVar6;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x38) = 0;
  *(undefined4 *)(param_3 + 0x30) = param_2[6];
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  QBuffer::QBuffer(local_50,(QByteArray *)&local_40,(QObject *)0x0);
  QBuffer::open(local_50,2);
  QString::toUtf8();
  local_5c = *(int *)(local_58 + 4);
  if (local_5c != 0) {
    QIODevice::write((char *)local_50,(longlong)&local_5c);
    QIODevice::write((char *)local_50);
    *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + 1;
  }
  local_80 = *(int **)(param_2 + 8);
  if (*local_80 != -1) {
    if (*local_80 == 0) {
      QListData::detach((int)&local_80);
      iVar6 = local_80[2];
      if (iVar6 != local_80[3]) {
        puVar4 = (undefined8 *)
                 (*(long *)(param_2 + 8) + 0x10 + (long)*(int *)(*(long *)(param_2 + 8) + 8) * 8);
        piVar5 = local_80 + (long)iVar6 * 2 + 4;
        lVar3 = (long)local_80[3] * 8 + (long)iVar6 * -8;
        do {
          piVar1 = (int *)*puVar4;
          *(int **)piVar5 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_80 = *local_80 + 1;
      local_31 = *local_80 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)local_80[2] * 2 + 4;
  local_70 = local_80 + (long)local_80[3] * 2 + 4;
  if (local_80[2] != local_80[3]) {
    do {
      local_68 = 1;
      QString::toUtf8();
      QByteArray::operator=((QByteArray *)&local_58,(QByteArray *)&local_88);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004951b3;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_1004951b3:
      local_5c = *(int *)(local_58 + 4);
      if (local_5c != 0) {
        QIODevice::write((char *)local_50,(longlong)&local_5c);
        QIODevice::write((char *)local_50);
        *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + 1;
      }
      local_78 = local_78 + 2;
    } while (local_78 != local_70);
  }
  local_68 = 1;
  FUN_100013180(&local_80);
  local_a8 = *(int **)(param_2 + 10);
  if (*local_a8 != -1) {
    if (*local_a8 == 0) {
      QListData::detach((int)&local_a8);
      iVar6 = local_a8[2];
      if (iVar6 != local_a8[3]) {
        puVar4 = (undefined8 *)
                 (*(long *)(param_2 + 10) + 0x10 + (long)*(int *)(*(long *)(param_2 + 10) + 8) * 8);
        piVar5 = local_a8 + (long)iVar6 * 2 + 4;
        lVar3 = (long)local_a8[3] * 8 + (long)iVar6 * -8;
        do {
          piVar1 = (int *)*puVar4;
          *(int **)piVar5 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_a8 = *local_a8 + 1;
      local_31 = *local_a8 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)local_a8[2] * 2 + 4;
  local_98 = local_a8 + (long)local_a8[3] * 2 + 4;
  if (local_a8[2] != local_a8[3]) {
    do {
      local_90 = 1;
      QString::toUtf8();
      QByteArray::operator=((QByteArray *)&local_58,(QByteArray *)&local_b0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100495339;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
LAB_100495339:
      local_5c = *(int *)(local_58 + 4);
      if (local_5c != 0) {
        QIODevice::write((char *)local_50,(longlong)&local_5c);
        QIODevice::write((char *)local_50);
        *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
      }
      local_a0 = local_a0 + 2;
    } while (local_a0 != local_98);
  }
  local_90 = 1;
  FUN_100013180(&local_a8);
  _memcpy((void *)(param_3 + 0x3c),local_40 + *(long *)(local_40 + 0x10),
          (long)*(int *)(local_40 + 4));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004953f1;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1004953f1:
  QBuffer::~QBuffer(local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10049542d;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10049542d:
  FUN_1007d6bf0(param_1 + 0x10,param_3 + 0x14);
  iVar6 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar6;
  *(int *)(param_3 + 0x24) = iVar6;
  lVar3 = *(long *)(param_2 + 0xc);
  local_b8 = (long *)0x0;
  if (lVar3 != 0) {
    local_b8 = operator_new(0x20);
    lVar2 = *(long *)(param_2 + 0x10);
    *local_b8 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    piVar5 = *(int **)(param_2 + 0xe);
    local_b8[1] = (long)piVar5;
    if (1 < *piVar5 + 1U) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      local_80 = (int *)CONCAT71(local_80._1_7_,*piVar5 != 0);
    }
    *(int *)(local_b8 + 2) = iVar6;
    local_b8[3] = lVar3;
  }
  FUN_100496730(param_1 + 0x18,&local_b8);
  return;
}

