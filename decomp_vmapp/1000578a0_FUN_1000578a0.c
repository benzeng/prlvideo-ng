
undefined8 FUN_1000578a0(long param_1,QString *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  uint *puVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  long *local_78;
  QFileInfo local_70 [8];
  QFileInfo local_68 [8];
  QString local_60;
  QString local_58;
  QString local_50;
  undefined1 local_48 [8];
  uint *local_40;
  undefined1 local_31;
  
  *param_3 = 1;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  puVar1 = (undefined8 *)(param_1 + 0x50);
  puVar6 = *(uint **)(param_1 + 0x50);
  uVar8 = puVar6[3];
  if (uVar8 == puVar6[2]) {
    uVar9 = 7;
    if (*(int *)(*(long *)(param_1 + 0x10) + 0xc) == *(int *)(*(long *)(param_1 + 0x10) + 8))
    goto LAB_100057b4c;
    FUN_100058900(&local_58,param_1 + 0x10);
    QString::operator=(&local_50,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100057946;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100057946:
    QFileInfo::QFileInfo(local_68,&local_50);
    QFileInfo::path();
    QString::operator=((QString *)(param_1 + 0x18),&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000579a1;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1000579a1:
    QFileInfo::~QFileInfo(local_68);
  }
  else {
    if (1 < *puVar6) {
      FUN_10005a180(puVar1,puVar6[1]);
      puVar6 = (uint *)*puVar1;
      uVar8 = puVar6[3];
    }
    plVar2 = (long *)**(long **)(puVar6 + (long)(int)uVar8 * 2 + 2);
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    lVar4 = plVar2[3];
    puVar6 = (uint *)plVar2[2];
    uVar8 = puVar6[2];
    if ((int)lVar4 < (int)(puVar6[3] - uVar8)) {
      if (1 < *puVar6) {
        FUN_100022c80(plVar2 + 2,puVar6[1]);
        puVar6 = (uint *)plVar2[2];
        uVar8 = puVar6[2];
      }
      QString::operator=(&local_50,
                         (QString *)(puVar6 + ((long)(int)uVar8 + (long)(int)lVar4) * 2 + 4));
      *(int *)(plVar2 + 3) = (int)plVar2[3] + 1;
      bVar3 = false;
    }
    else {
      local_40 = (uint *)*puVar1;
      if (1 < *local_40) {
        FUN_10005a180(puVar1,local_40[1]);
        local_40 = (uint *)*puVar1;
      }
      local_40 = local_40 + (long)(int)local_40[3] * 2 + 2;
      FUN_10005a0c0(local_48,puVar1,&local_40);
      bVar3 = true;
    }
    LOCK();
    plVar7 = plVar2 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    uVar9 = 7;
    if (bVar3) goto LAB_100057b4c;
  }
  QFileInfo::QFileInfo(local_70,&local_50);
  cVar5 = QFileInfo::isDir();
  if ((cVar5 != '\0') && (cVar5 = QFileInfo::isSymLink(), cVar5 == '\0')) {
    plVar7 = operator_new(0x20);
    FUN_100051220(plVar7,&local_50);
    *param_3 = *(undefined1 *)((long)plVar7 + 0x1c);
    local_78 = plVar7;
    FUN_1000589d0(puVar1,&local_78);
    LOCK();
    plVar2 = plVar7 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x20;
  }
  QString::operator=(param_2,&local_50);
  uVar9 = 0;
  QFileInfo::~QFileInfo(local_70);
LAB_100057b4c:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return uVar9;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return uVar9;
}

