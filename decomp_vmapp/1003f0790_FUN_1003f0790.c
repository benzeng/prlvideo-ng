
undefined8 FUN_1003f0790(long param_1,QString *param_2,long *param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  QString *this;
  size_t sVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  long local_98;
  QString local_90;
  QFile local_88 [16];
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QDir local_58 [8];
  QDir local_50 [8];
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_2->field0_0x0 == (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    return 0xfffffff0;
  }
  if ((undefined *)*param_3 == PTR_shared_null_100ba20d0) {
    return 0xfffffff0;
  }
  uVar10 = *(uint *)(param_1 + 0x18);
  if (uVar10 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    uVar10 = 0;
  }
  else {
    lVar11 = (ulong)(uVar10 - 1) * 0x40;
    if (((*(char *)(param_1 + 0x59 + lVar11) == '\0') &&
        (*(char *)(param_1 + 0x5a + lVar11) == '\0')) &&
       (*(char *)(param_1 + 0x5b + lVar11) == '\0')) {
      iVar3 = (int)(*(ulong *)(param_1 + 0x30 + lVar11) /
                   (ulong)*(uint *)(*(long *)(param_1 + 0x1fe0) + 0x28));
      *(int *)(param_1 + 0x5c + lVar11) = iVar3;
      *(char *)(param_1 + 0x59 + lVar11) = (char)((iVar3 + 0x96U) / 0x1194);
      lVar11 = (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40;
      iVar3 = *(int *)(param_1 + 0x5c + lVar11);
      *(char *)(param_1 + 0x5a + lVar11) =
           (char)((ulong)(iVar3 + 0x96 + ((iVar3 + 0x96U) / 0x1194) * -0x1194) / 0x4b);
      lVar11 = (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40;
      uVar10 = (*(int *)(param_1 + 0x5c + lVar11) + 0x96U) % 0x1194;
      *(char *)(param_1 + 0x5b + lVar11) = (char)uVar10 + (char)(uVar10 / 0x4b) * -0x4b;
      uVar10 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar10 + 1;
    if (1 < uVar10 + 1) {
      lVar11 = (ulong)(uVar10 - 1) * 0x40;
      *(long *)(param_1 + 0x48 + (ulong)uVar10 * 0x40) =
           *(long *)(param_1 + 0x30 + lVar11) + *(long *)(param_1 + 0x48 + lVar11);
    }
  }
  QString::trimmed();
  QString::operator=((QString *)(param_1 + 0x28 + (ulong)uVar10 * 0x40),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f0939;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1003f0939:
  QDir::fromNativeSeparators(&local_48);
  QString::operator=(param_2,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f0981;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1003f0981:
  QFileInfo::absoluteDir();
  QDir::QDir(local_58,param_2);
  cVar1 = QDir::isRelativePath(param_2);
  if ((cVar1 == '\0') || (cVar1 = QDir::isRelativePath(param_2), cVar1 == '\0')) goto LAB_1003f0b36;
  QDir::absolutePath();
  uVar2 = QDir::separator();
  local_70 = local_78;
  if (1 < *(uint *)local_78 + 1) {
    LOCK();
    *(uint *)local_78 = *(uint *)local_78 + 1;
    local_31 = *(uint *)local_78 != 0;
    UNLOCK();
  }
  uVar10 = *(uint *)(local_78 + 4);
  if ((1 < *(uint *)local_78) || ((*(uint *)(local_78 + 8) & 0x7fffffff) < uVar10 + 2)) {
    QString::reallocData((uint)&local_70,SUB41(uVar10 + 2,0));
    uVar10 = *(uint *)(local_70 + 4);
  }
  *(uint *)(local_70 + 4) = uVar10 + 1;
  *(undefined2 *)(local_70 + (long)(int)uVar10 * 2 + *(long *)(local_70 + 0x10)) = uVar2;
  *(undefined2 *)(local_70 + (long)(int)*(uint *)(local_70 + 4) * 2 + *(long *)(local_70 + 0x10)) =
       0;
  if (1 < *(uint *)local_70 + 1) {
    LOCK();
    *(uint *)local_70 = *(uint *)local_70 + 1;
    local_31 = *(uint *)local_70 != 0;
    UNLOCK();
  }
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
  QString::append(&local_68);
  QDir::fromNativeSeparators(&local_60);
  QString::operator=(param_2,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f0aa6;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003f0aa6:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f0ad6;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003f0ad6:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f0b06;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003f0b06:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f0b36;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003f0b36:
  QFile::QFile(local_88,param_2);
  cVar1 = QFile::exists();
  if (cVar1 == '\0') {
    this = (QString *)___cxa_allocate_exception(0x10);
    QString::toUtf8();
    pcVar9 = (char *)(local_98 + *(long *)(local_98 + 0x10));
    iVar3 = -1;
    if (pcVar9 != (char *)0x0) {
      sVar6 = _strlen(pcVar9);
      iVar3 = (int)sVar6;
    }
    local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar9,iVar3)
    ;
    this->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=(this,&local_90);
    *(undefined4 *)&this[1].field0_0x0 = 0xffffffee;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,&PTR_vtable_1011198a0,FUN_1003ee250);
  }
  QString::operator=((QString *)(param_1 + 0x20 + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40),
                     param_2);
  plVar5 = (long *)FUN_100707430(0xffffffff,0x800);
  *(long **)(param_1 + 0x40 + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40) = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2,1,1,0,4);
    uVar4 = (**(code **)(**(long **)(param_1 + 0x40 + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40)
                        + 0xb0))();
    *(undefined4 *)(param_1 + 0x1fe8) = uVar4;
    cVar1 = (**(code **)(**(long **)(param_1 + 0x40 + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40)
                        + 0x98))();
    uVar8 = 0xffffffff;
    if ((cVar1 != '\0') &&
       (plVar5 = *(long **)(param_1 + 0x40 + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40),
       lVar11 = (**(code **)(*plVar5 + 0x60))(plVar5,0,2), lVar11 != 0)) {
      *(long *)(param_1 + 0x30 + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40) = lVar11;
      uVar8 = 0;
    }
    QFile::~QFile(local_88);
    QDir::~QDir(local_58);
    QDir::~QDir(local_50);
    return uVar8;
  }
  puVar7 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar7 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar7,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
}

