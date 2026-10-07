
undefined8 * FUN_100572cc0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  QFileInfo local_40 [8];
  QString local_38;
  undefined1 local_29;
  
  iVar3 = FUN_1005b6d20();
  puVar1 = PTR_shared_null_100ba20d0;
  if (iVar3 == 0) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    plVar5 = (long *)0x0;
    if (*(long *)(param_2 + 8) != 0) {
      plVar5 = *(long **)(*(long *)(param_2 + 8) + 0x10);
    }
    cVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,&local_38);
    if (cVar2 == '\0') {
      *param_1 = puVar1;
    }
    else {
      QFileInfo::QFileInfo(local_40,&local_38);
      QFileInfo::absolutePath();
      QFileInfo::~QFileInfo(local_40);
    }
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  else {
    iVar3 = FUN_1005b6d20();
    if (iVar3 == 1) {
      *param_1 = PTR_shared_null_100ba20d0;
      plVar5 = (long *)0x0;
      if (*(long *)(param_2 + 8) != 0) {
        plVar5 = *(long **)(*(long *)(param_2 + 8) + 0x10);
      }
      (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
    }
    else {
      uVar6 = 0;
      if (*(long *)(param_2 + 8) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x10);
      }
      uVar4 = FUN_1005b6d20(uVar6);
      FUN_1008e3970("","vdisk",0,"Error: unsupported disk format %d",uVar4);
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0xf06,
                    "GetAbsolutePath");
      *param_1 = PTR_shared_null_100ba20d0;
    }
  }
  return param_1;
}

