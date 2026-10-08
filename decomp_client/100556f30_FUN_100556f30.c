
void FUN_100556f30(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  Connection local_a0 [8];
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80;
  undefined8 local_78;
  QVariant local_60 [2];
  QVariant local_48;
  undefined1 local_31;
  
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28);
  QComboBox::currentIndex();
  QComboBox::itemData((int)&local_48,(int)uVar8);
  iVar3 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  if (-1 < iVar3) {
    if (*(int *)(*(long *)(param_1 + 0x60) + 0xc) - *(int *)(*(long *)(param_1 + 0x60) + 8) <= iVar3
       ) {
      return;
    }
    puVar6 = *(uint **)(param_1 + 0x68);
    uVar4 = (ulong)puVar6[2];
    if ((int)puVar6[2] < (int)puVar6[3]) {
      puVar1 = (undefined8 *)(param_1 + 0x68);
      lVar7 = 0;
      do {
        cVar2 = operator==(*(QString **)(puVar6 + ((int)uVar4 + lVar7) * 2 + 4),
                           (QString *)(param_1 + 0x58));
        puVar6 = (uint *)*puVar1;
        if (cVar2 != '\0') {
          if (1 < *puVar6) {
            FUN_1001c4bd0(puVar1,puVar6[1]);
            puVar6 = (uint *)*puVar1;
          }
          QString::operator=((QString *)(*(long *)(puVar6 + ((int)puVar6[2] + lVar7) * 2 + 4) + 8),
                             *(QString **)
                              (*(long *)(param_1 + 0x60) + 0x10 +
                              ((long)iVar3 + (long)*(int *)(*(long *)(param_1 + 0x60) + 8)) * 8));
          break;
        }
        lVar7 = lVar7 + 1;
        uVar4 = (ulong)(int)puVar6[2];
      } while (lVar7 < (long)((long)(int)puVar6[3] - uVar4));
    }
    FUN_10083d2c0(*(undefined8 *)(param_1 + 0x10));
    *(int *)(param_1 + 0x70) = iVar3;
    return;
  }
  if (iVar3 != -1) {
    return;
  }
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),0));
  QComboBox::setCurrentIndex((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28));
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),0));
  local_88 = (QArrayData *)QString::fromAscii_helper("1onCreateProfileDialogClosed(int)",0x21);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(&local_80,param_1,&local_88,&local_98);
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005570b2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005570b2:
  plVar5 = operator_new(0x68);
  FUN_10057eef0(plVar5,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x10));
  QWidget::setAttribute(plVar5,0x37,1);
  cVar2 = FUN_10019cd90(&local_80);
  if (cVar2 == '\0') goto LAB_1005571f8;
  uVar8 = 0;
  if ((local_80 != (int *)0x0) && (uVar8 = 0, local_80[1] != 0)) {
    uVar8 = local_78;
  }
  FUN_100a1c770(&local_b0,&local_80);
  QString::toLatin1();
  if ((1 < *(uint *)local_a8) || (*(long *)(local_a8 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_a8,*(uint *)(local_a8 + 4) + 1,*(uint *)(local_a8 + 8) >> 0x1f);
  }
  QObject::connect(local_a0,plVar5,"2finished(int)",uVar8,local_a8 + *(long *)(local_a8 + 0x10),0);
  QMetaObject::Connection::~Connection(local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005571c2;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_1005571c2:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005571f8;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005571f8:
  (**(code **)(*plVar5 + 0x1a0))(plVar5);
  QVariant::~QVariant(local_60);
  if (local_80 != (int *)0x0) {
    LOCK();
    *local_80 = *local_80 + -1;
    local_31 = *local_80 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_80 != (int *)0x0)) {
      operator_delete(local_80);
    }
  }
  return;
}

