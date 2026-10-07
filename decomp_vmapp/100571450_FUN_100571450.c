
undefined4 FUN_100571450(long *param_1)

{
  Data *pDVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Data *pDVar5;
  long *plVar6;
  QArrayData *pQVar7;
  undefined8 uVar8;
  long lVar9;
  Data *local_58;
  QArrayData *local_50;
  QFileInfo local_48 [8];
  QDir local_40 [8];
  QString local_38;
  undefined1 local_29;
  
  iVar3 = FUN_1005b6d20();
  if (iVar3 != 0) {
    iVar3 = FUN_1005b6d20();
    if (iVar3 != 1) {
      uVar8 = 0;
      if (param_1[1] != 0) {
        uVar8 = *(undefined8 *)(param_1[1] + 0x10);
      }
      uVar4 = FUN_1005b6d20(uVar8);
      FUN_1008e3970("","vdisk",0,"Error: unsupported disk format %d",uVar4);
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0xccb,
                    "DeleteDisk");
      return 0x80019018;
    }
    local_58 = (Data *)PTR_shared_null_100ba2188;
    plVar6 = (long *)0x0;
    if (param_1[1] != 0) {
      plVar6 = *(long **)(param_1[1] + 0x10);
    }
    cVar2 = (**(code **)(*plVar6 + 0x50))(plVar6,&local_58);
    uVar4 = 0x80019018;
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
      cVar2 = FUN_1006f3570(&local_58);
      uVar4 = 0x80019018;
      if (cVar2 != '\0') {
        uVar4 = 0;
      }
    }
    pDVar1 = local_58;
    if (*(int *)local_58 == -1) {
      return uVar4;
    }
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar4;
      }
      local_29 = 0;
    }
    iVar3 = *(int *)(local_58 + 0xc);
    if (iVar3 != *(int *)(local_58 + 8)) {
      lVar9 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_58 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_100571560:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_100571560;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar1);
    return uVar4;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  plVar6 = (long *)0x0;
  if (param_1[1] != 0) {
    plVar6 = *(long **)(param_1[1] + 0x10);
  }
  cVar2 = (**(code **)(*plVar6 + 0x48))(plVar6,&local_38);
  uVar4 = 0x80019018;
  if (cVar2 == '\0') goto LAB_100571649;
  QFileInfo::QFileInfo(local_48,&local_38);
  QFileInfo::dir();
  QFileInfo::~QFileInfo(local_48);
  (**(code **)(*param_1 + 0x20))(param_1);
  QDir::absolutePath();
  cVar2 = FUN_1006f3770(&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100571632;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100571632:
  uVar4 = 0x80019018;
  if (cVar2 != '\0') {
    uVar4 = 0;
  }
  QDir::~QDir(local_40);
LAB_100571649:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar4;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar4;
}

