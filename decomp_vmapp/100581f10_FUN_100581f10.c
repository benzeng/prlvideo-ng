
int FUN_100581f10(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  QString local_38;
  undefined1 local_2b;
  undefined1 local_29;
  
  iVar3 = FUN_100582a40();
  if (iVar3 < 0) {
    FUN_1008e3970("","vdisk",0,"Rollback failed with code 0x%x",iVar3);
    FUN_1008e3970("","vdisk",0,"XML must be restored anyway");
  }
  if (*(char *)(param_1 + 100) == '\0') {
    return iVar3;
  }
  iVar4 = FUN_1005b6d20();
  if (iVar4 != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar6 = 0;
    if (lVar1 != 0) {
      uVar6 = *(undefined8 *)(lVar1 + 0x10);
    }
    iVar4 = FUN_1005b6d20(uVar6);
    if (iVar4 == 1) {
      FUN_1008e3970("","vdisk",0,"Warning: images filter rollback does not work for VMware disks!");
      return iVar3;
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar6 = 0;
    if (lVar1 != 0) {
      uVar6 = *(undefined8 *)(lVar1 + 0x10);
    }
    uVar5 = FUN_1005b6d20(uVar6);
    FUN_1008e3970("","vdisk",0,"Error: unsupported disk format %d",uVar5);
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskFilter.cpp",0x14f,
                  "Rollback");
    return -0x7ffdefc7;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  plVar7 = (long *)0x0;
  if (lVar1 != 0) {
    plVar7 = *(long **)(lVar1 + 0x10);
  }
  cVar2 = (**(code **)(*plVar7 + 0x48))(plVar7,&local_38);
  if ((cVar2 != '\0') && (cVar2 = QFile::remove(&local_38), cVar2 != '\0')) {
    if (*(int *)local_38.field0_0x0 == -1) {
      return iVar3;
    }
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return iVar3;
      }
      local_2b = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    return iVar3;
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058210d;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10058210d:
  FUN_1008e3970("","vdisk",0,"Can\'t remove XML from disk");
  iVar4 = -0x7ffdefc7;
  if (iVar3 < 0) {
    iVar4 = iVar3;
  }
  return iVar4;
}

