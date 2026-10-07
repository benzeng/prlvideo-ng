
undefined8 FUN_100681280(undefined8 param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  undefined8 uVar7;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1006eaa10(&local_38);
  if (*(int *)(local_38 + 4) == 0) {
    uVar7 = 0x80000001;
    FUN_1008e3970("","InstallAppRepack",0,"Failed to find OS X install app repack script.");
    goto LAB_1006815b7;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("/bin/bash \"%1\" estimate \"%2\"",0x1c);
  QString::arg(&local_48,&local_50,&local_38,0,0x20);
  QString::arg(&local_40,&local_48,param_1,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100681322;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100681322:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100681352;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100681352:
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_100770460(&local_40,&local_58,0,0,0);
  local_68 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QString::split(&local_60,&local_58,&local_68,1,1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006813d2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006813d2:
  uVar3 = *(uint *)(local_60 + 0xc);
  uVar7 = 0x80000001;
  if (uVar3 != *(uint *)(local_60 + 8)) {
    if (1 < *(uint *)local_60) {
      FUN_100022c80(&local_60);
      uVar3 = *(uint *)(local_60 + 0xc);
    }
    local_70 = *(QArrayData **)(local_60 + (long)(int)uVar3 * 8 + 8);
    if (1 < *(int *)local_70 + 1U) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
    }
    uVar7 = 0x80000001;
    if (*(int *)(local_70 + 4) != 0) {
      uVar2 = QString::toULongLong((bool *)&local_70,0);
      *param_2 = uVar2;
      if (uVar2 != 0) {
        *param_2 = uVar2 >> 0x14;
        uVar7 = 0;
        FUN_1008e3970("","InstallAppRepack",0,"Estimated OS X app install image size is %llu MB.",
                      uVar2 >> 0x14);
      }
    }
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006814a3;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_1006814a3:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100681531;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar6 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_60 + (long)iVar1 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100681510:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100681510;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_100681531:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100681561;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100681561:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006815b7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006815b7:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar7;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar7;
}

