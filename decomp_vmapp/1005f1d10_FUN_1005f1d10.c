
undefined8 FUN_1005f1d10(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_2 + 0x28) == 0) {
    return 0x80021020;
  }
  lVar3 = *(long *)(*(long *)(param_2 + 0x28) + 0x10);
  if (lVar3 == 0) {
    return 0x80021020;
  }
  lVar3 = ___dynamic_cast(lVar3,&PTR_vtable_10111e110,&PTR_vtable_10111e2f0,0);
  if (lVar3 == 0) {
    return 0x80021020;
  }
  if (*(long *)(lVar3 + 8) == 0) {
    return 0x80021020;
  }
  if (*(long *)(*(long *)(lVar3 + 8) + 0x10) == 0) {
    return 0x80021020;
  }
  QMutex::lock();
  lVar1 = *(long *)(*(long *)(*(long *)(lVar3 + 8) + 0x10) + 0x200);
  uVar4 = 0;
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
  cVar2 = FUN_1006afc70(uVar4,&local_40,(QString *)(lVar3 + 0x10),(QString *)(param_2 + 8));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f1e0a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005f1e0a:
  if (cVar2 != '\0') {
    uVar4 = 0;
    QString::operator=((QString *)(lVar3 + 0x10),(QString *)(param_2 + 8));
    goto LAB_1005f1f6c;
  }
  QString::toUtf8();
  lVar3 = *(long *)(local_48 + 0x10);
  QString::toUtf8();
  lVar1 = *(long *)(local_50 + 0x10);
  QFileInfo::absoluteFilePath();
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"Error: can\'t rename image \'%s\' to \'%s\' for VMDK \'%s\'",
                local_48 + lVar3,local_50 + lVar1,local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f1ed7;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1005f1ed7:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f1f07;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005f1f07:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f1f37;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1005f1f37:
  uVar4 = 0x80021025;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f1f6c;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1005f1f6c:
  QMutex::unlock();
  return uVar4;
}

