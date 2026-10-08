
undefined8 FUN_100da6ef0(long param_1,QString *param_2,QString *param_3)

{
  long lVar1;
  ulong uVar2;
  QArrayData *pQVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 *puVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  size_t sVar14;
  ulong uVar15;
  ulong local_d8;
  QTypedArrayData<unsigned_short> *local_88;
  QArrayData *local_80;
  ulong local_78;
  uint local_70;
  uint local_6c;
  QArrayData *local_68;
  QArrayData *local_60;
  QFileInfo local_58 [8];
  QDateTime local_50;
  QArrayData *local_48;
  QDateTime local_40;
  undefined1 local_31;
  
  QDateTime::QDateTime(&local_40);
  plVar7 = (long *)FUN_100db2560(0xffffffff,0);
  if (plVar7 == (long *)0x0) {
    puVar10 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar10 = 0x80000002;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_2,1,1,0,0);
  cVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
  if (cVar4 == '\0') {
    QString::toUtf8();
    pQVar3 = local_48;
    lVar1 = *(long *)(local_48 + 0x10);
    uVar6 = (**(code **)(*plVar7 + 0xb0))(plVar7);
    FUN_100df99c0("","cmn_utils",0,"Couldn\'t to open source file \'%s\' due error %u",
                  pQVar3 + lVar1,uVar6);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100da7259;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100da7259:
    puVar10 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar10 = 0x80000016;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
  }
  QFileInfo::QFileInfo(local_58,param_2);
  QFileInfo::lastModified();
  QDateTime::operator=(&local_40,&local_50);
  QDateTime::~QDateTime(&local_50);
  QFileInfo::~QFileInfo(local_58);
  uVar8 = (**(code **)(*plVar7 + 0x78))(plVar7);
  if ((uVar8 & 0x1ff) == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    plVar7 = (long *)FUN_100db2560(0xffffffff,0);
    (**(code **)(*plVar7 + 0x18))(plVar7,param_2,1,1,0,0);
  }
  uVar15 = (uVar8 / 0x14 + 0x200) - (uVar8 / 0x14 & 0x1ff);
  sVar14 = 0x1000000;
  if (uVar15 < 0x1000001) {
    sVar14 = uVar15;
  }
  plVar9 = (long *)FUN_100db2560(0xffffffff,0);
  if (plVar9 == (long *)0x0) {
    puVar10 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar10 = 0x80000002;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
  }
  cVar4 = QFile::exists(param_3);
  if (cVar4 != '\0') {
    FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","!QFile::exists(qsDstFile)",
                  "CDirCopier.cpp",0x156,"CopyFile");
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,param_3,2,1,0x200,0);
  cVar4 = (**(code **)(*plVar9 + 0x98))(plVar9);
  if (cVar4 == '\0') {
    QString::toUtf8();
    pQVar3 = local_60;
    lVar1 = *(long *)(local_60 + 0x10);
    uVar6 = (**(code **)(*plVar9 + 0xb0))();
    FUN_100df99c0("","cmn_utils",0,"Couldn\'t to open destination file \'%s\' due error %u",
                  pQVar3 + lVar1,uVar6);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100da7343;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100da7343:
    puVar10 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar10 = 0x80000016;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
  }
  cVar4 = FUN_100da0330(param_3);
  if (cVar4 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","cmn_utils",0,"Dest path is remote. Setting owner will be ignored. (path=%s)",
                  local_68 + *(long *)(local_68 + 0x10));
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100da73d8;
      }
      QArrayData::deallocate(local_68,1,8);
    }
  }
  else {
    cVar4 = FUN_100d9d2e0(param_3,*(undefined8 *)(param_1 + 0x10),0);
    if (cVar4 == '\0') {
      puVar10 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar10 = 0x80000281;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
    }
  }
LAB_100da73d8:
  local_6c = 0;
  pvVar11 = _valloc(sVar14);
  if (pvVar11 == (void *)0x0) {
    puVar10 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar10 = 0x80000109;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
  }
  local_d8 = 0;
  if (*(ulong *)(param_1 + 0x28) != 0) {
    local_d8 = (ulong)(*(long *)(param_1 + 0x30) * 100) / *(ulong *)(param_1 + 0x28);
  }
  uVar15 = 0;
  while( true ) {
    if (uVar15 == uVar8) {
      if (pvVar11 != (void *)0x0) {
        _free(pvVar11);
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      FUN_100da40a0(param_3,&local_40);
      QDateTime::~QDateTime(&local_40);
      return 0;
    }
    bVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,pvVar11,sVar14,&local_6c);
    if ((bVar5 | local_6c != 0) != 1) {
      puVar10 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar10 = 0x80000110;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
    }
    if (local_6c == 0) {
      puVar10 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar10 = 0x80000110;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      puVar10 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar10 = 0x80000275;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
    }
    local_70 = 0;
    (**(code **)(*plVar9 + 0x38))(plVar9,pvVar11,local_6c,&local_70);
    if (local_6c != local_70) break;
    uVar15 = uVar15 + local_6c;
    uVar2 = *(ulong *)(param_1 + 0x28);
    if (uVar2 == 0) {
      uVar13 = (uVar8 * 100) / uVar15;
      uVar12 = (uVar8 * 100) % uVar15;
    }
    else {
      uVar12 = (*(long *)(param_1 + 0x30) + uVar15) * 100;
      uVar13 = uVar12 / uVar2;
      uVar12 = uVar12 % uVar2;
    }
    if ((int)uVar13 != (int)local_d8) {
      FUN_100da8ad0(param_1,uVar13 & 0xffffffff,uVar12);
      local_d8 = uVar13;
    }
  }
  local_78 = 0;
  local_88 = param_3->field0_0x0;
  if (1 < *(int *)local_88 + 1U) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + 1;
    local_31 = *(int *)local_88 != 0;
    UNLOCK();
  }
  FUN_100d98ee0(&local_80,&local_88);
  FUN_100d9d560(&local_80,&local_78,0,0);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da766a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100da766a:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100da76a1;
    }
    QArrayData::deallocate((QArrayData *)local_88,2,8);
  }
LAB_100da76a1:
  uVar8 = local_78;
  uVar15 = (ulong)local_6c;
  puVar10 = (undefined4 *)___cxa_allocate_exception(4);
  if (uVar15 < uVar8) {
    *puVar10 = 0x80000372;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
  }
  *puVar10 = 0x80000373;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar10,PTR_typeinfo_1021e1790,0);
}

