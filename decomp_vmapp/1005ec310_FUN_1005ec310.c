
undefined8 FUN_1005ec310(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined2 uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if (*param_2 == 0) {
    return 0x80021020;
  }
  lVar4 = *(long *)(*param_2 + 0x10);
  if (lVar4 == 0) {
    return 0x80021020;
  }
  lVar4 = ___dynamic_cast(lVar4,&PTR_vtable_10111e100,&PTR_vtable_10111e2d0,0);
  if (lVar4 == 0) {
    return 0x80021020;
  }
  QMutex::lock();
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar1 == 0)) {
    uVar7 = 0x80021011;
    FUN_1008e3970("","vdisk",0,"Error: current VMDK is unavailable");
    goto LAB_1005ec6fc;
  }
  uVar7 = 0;
  if ((*(int *)(lVar4 + 8) != 0) || (*(int *)(lVar1 + 0x240) == 0x5b)) goto LAB_1005ec6fc;
  QFileInfo::absolutePath();
  uVar3 = QDir::separator();
  local_48 = local_50;
  if (1 < *(uint *)local_50 + 1) {
    LOCK();
    *(uint *)local_50 = *(uint *)local_50 + 1;
    local_29 = *(uint *)local_50 != 0;
    UNLOCK();
  }
  uVar6 = *(uint *)(local_50 + 4);
  if ((1 < *(uint *)local_50) || ((*(uint *)(local_50 + 8) & 0x7fffffff) < uVar6 + 2)) {
    QString::reallocData((uint)&local_48,SUB41(uVar6 + 2,0));
    uVar6 = *(uint *)(local_48 + 4);
  }
  *(uint *)(local_48 + 4) = uVar6 + 1;
  *(undefined2 *)(local_48 + (long)(int)uVar6 * 2 + *(long *)(local_48 + 0x10)) = uVar3;
  *(undefined2 *)(local_48 + (long)(int)*(uint *)(local_48 + 4) * 2 + *(long *)(local_48 + 0x10)) =
       0;
  FUN_1005e7700(&local_58,param_1 + 0x78,*(int *)(param_1 + 0x80) + 1);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_29 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  QDir::fromNativeSeparators(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ec49e;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005ec49e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ec4ce;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005ec4ce:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ec4fe;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005ec4fe:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ec52e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005ec52e:
  QFileInfo::absoluteFilePath();
  cVar2 = QFile::rename(&local_38,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ec58d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1005ec58d:
  QString::toUtf8();
  lVar4 = *(long *)(local_68 + 0x10);
  QFileInfo::absoluteFilePath();
  QString::toUtf8();
  pcVar5 = "FAILURE";
  if (cVar2 != '\0') {
    pcVar5 = "SUCCESS";
  }
  FUN_1008e3970("","vdisk",0,"[VMDK] Info: vmdk was renamed #2 \'%s\' to \'%s\': %s",
                local_68 + lVar4,local_70 + *(long *)(local_70 + 0x10),pcVar5);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ec643;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_1005ec643:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ec673;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005ec673:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ec6a3;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1005ec6a3:
  uVar7 = 0;
  if (*(int *)local_38.field0_0x0 != -1) {
    uVar7 = 0;
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ec6fc;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1005ec6fc:
  QMutex::unlock();
  return uVar7;
}

