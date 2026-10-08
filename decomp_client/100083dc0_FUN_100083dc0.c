
void FUN_100083dc0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  QString local_c8;
  QString local_c0;
  int *local_b8;
  int *local_b0;
  int *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  undefined8 local_78;
  undefined8 local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  undefined8 local_50;
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_path_102269938);
  if (lVar3 == 0) {
    return;
  }
  uVar4 = FUN_1001d50a0();
  uVar4 = FUN_1001d50d0(uVar4);
  uVar5 = FUN_100152280();
  uVar5 = FUN_1001554a0(uVar5);
  if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
    local_40 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_40,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                        PTR_s_QStringWithString__1022696d0,lVar3);
  }
  FUN_1001db070(uVar4,uVar5,&local_40,0x2714,0,0);
  lVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102202120);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100083ec8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100083ec8:
  if ((lVar6 != 0) && (cVar2 = CAbstractTask::isFinished(), cVar2 == '\0')) {
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    puVar7 = operator_new(0x20);
    local_68 = *(int **)(lVar6 + 0x28);
    if (1 < *local_68 + 1U) {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
    local_60 = *(int **)(lVar6 + 0x30);
    if (1 < *local_60 + 1U) {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
    local_58 = *(int **)(lVar6 + 0x38);
    if (1 < *local_58 + 1U) {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
    local_50 = *(undefined8 *)(lVar6 + 0x40);
    local_48 = *(undefined8 *)(lVar6 + 0x48);
    local_90 = *(int **)(lVar6 + 0x28);
    if (1 < *local_90 + 1U) {
      LOCK();
      *local_90 = *local_90 + 1;
      local_31 = *local_90 != 0;
      UNLOCK();
    }
    local_88 = *(int **)(lVar6 + 0x30);
    if (1 < *local_88 + 1U) {
      LOCK();
      *local_88 = *local_88 + 1;
      local_31 = *local_88 != 0;
      UNLOCK();
    }
    local_80 = *(int **)(lVar6 + 0x38);
    if (1 < *local_80 + 1U) {
      LOCK();
      *local_80 = *local_80 + 1;
      local_31 = *local_80 != 0;
      UNLOCK();
    }
    local_78 = *(undefined8 *)(lVar6 + 0x40);
    local_70 = *(undefined8 *)(lVar6 + 0x48);
    local_b8 = *(int **)(lVar6 + 0x28);
    if (1 < *local_b8 + 1U) {
      LOCK();
      *local_b8 = *local_b8 + 1;
      local_31 = *local_b8 != 0;
      UNLOCK();
    }
    local_b0 = *(int **)(lVar6 + 0x30);
    if (1 < *local_b0 + 1U) {
      LOCK();
      *local_b0 = *local_b0 + 1;
      local_31 = *local_b0 != 0;
      UNLOCK();
    }
    local_a8 = *(int **)(lVar6 + 0x38);
    if (1 < *local_a8 + 1U) {
      LOCK();
      *local_a8 = *local_a8 + 1;
      local_31 = *local_a8 != 0;
      UNLOCK();
    }
    local_a0 = *(undefined8 *)(lVar6 + 0x40);
    local_98 = *(undefined8 *)(lVar6 + 0x48);
    *puVar7 = local_58;
    if (1 < *local_58 + 1U) {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
    puVar7[1] = local_90;
    if (1 < *local_90 + 1U) {
      LOCK();
      *local_90 = *local_90 + 1;
      local_31 = *local_90 != 0;
      UNLOCK();
    }
    puVar7[2] = local_b0;
    if (1 < *local_b0 + 1U) {
      LOCK();
      *local_b0 = *local_b0 + 1;
      local_31 = *local_b0 != 0;
      UNLOCK();
    }
    *(undefined4 *)(puVar7 + 3) = param_3;
    FUN_100080660(uVar4,puVar7);
    FUN_100086a10(&local_b8);
    FUN_100086a10(&local_90);
    FUN_100086a10(&local_68);
  }
  if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_c0,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                        PTR_s_QStringWithString__1022696d0,lVar3);
  }
  local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMS]",5);
  SandboxFileAccessHelpers::saveBookmark(&local_c0,&local_c8);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008411e;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_10008411e:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_c0.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
  return;
}

