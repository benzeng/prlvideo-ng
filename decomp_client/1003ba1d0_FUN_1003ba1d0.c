
undefined1
FUN_1003ba1d0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,int *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Data *pDVar8;
  undefined1 uVar9;
  long lVar10;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  undefined4 local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  FUN_1003b1cf0(&local_50,param_1);
  iVar7 = *(int *)(local_50 + 8);
  iVar3 = *(int *)(local_50 + 0xc);
  if (iVar7 == iVar3) {
    bVar1 = false;
  }
  else {
    pDVar8 = local_50 + (long)iVar7 * 8 + 0x10;
    lVar10 = (long)iVar3 * 8 + (long)iVar7 * -8;
    do {
      bVar1 = true;
      if (**(int **)pDVar8 == param_3) goto LAB_1003ba246;
      pDVar8 = pDVar8 + 8;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
    bVar1 = false;
  }
LAB_1003ba246:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ba2de;
      iVar7 = *(int *)(local_50 + 8);
      iVar3 = *(int *)(local_50 + 0xc);
    }
    if (iVar3 != iVar7) {
      lVar10 = (long)iVar7 * 8 + (long)iVar3 * -8;
      pDVar8 = local_50 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_1003ba2de:
  if (!bVar1) {
    return 0;
  }
  cVar2 = FUN_1003ba010(param_2,param_3,param_4);
  if (cVar2 != '\0') {
    return 0;
  }
  FUN_1003bdd00(&local_58,param_2);
  if (*(uint *)local_58 < 2) {
    pDVar8 = local_58 + (long)(int)*(uint *)(local_58 + 8) * 8 + 0x10;
  }
  else {
    FUN_1003bde60(&local_58,*(uint *)(local_58 + 4));
    pDVar8 = local_58 + (long)(int)*(uint *)(local_58 + 8) * 8 + 0x10;
    if (1 < *(uint *)local_58) {
      FUN_1003bde60(&local_58,*(uint *)(local_58 + 4));
    }
  }
  if (pDVar8 != local_58 + (long)(int)*(uint *)(local_58 + 0xc) * 8 + 0x10) {
    local_48 = local_58 + (long)(int)*(uint *)(local_58 + 0xc) * 8 + 0x10;
    local_40 = pDVar8;
    FUN_1003bdf40(&local_40,&local_48,*(undefined8 *)pDVar8,FUN_1003ba1a0);
  }
  if (param_3 == 5) {
    FUN_1003bdd00(&local_78,&local_58);
    local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
    local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
    if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
      iVar7 = 1;
      do {
        local_60 = 1;
        iVar3 = BootDevice::getType();
        if (((iVar3 == 5) && (iVar3 = BootDevice::getType(), iVar3 == 5)) &&
           (uVar4 = BootDevice::getIndex(), uVar4 < param_4)) goto LAB_1003ba429;
        local_70 = local_70 + 8;
      } while (local_70 != local_68);
    }
    local_60 = 1;
    iVar7 = 2;
LAB_1003ba429:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003ba493;
      }
      iVar3 = *(int *)(local_78 + 0xc);
      if (iVar3 != *(int *)(local_78 + 8)) {
        lVar10 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar3 * -8;
        pDVar8 = local_78 + (long)iVar3 * 8 + 8;
        do {
          if (*(long **)pDVar8 != (long *)0x0) {
            (**(code **)(**(long **)pDVar8 + 0x20))();
          }
          pDVar8 = pDVar8 + -8;
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0);
      }
      QListData::dispose(local_78);
    }
LAB_1003ba493:
    if (iVar7 != 2) {
      uVar9 = 0;
      goto LAB_1003ba771;
    }
  }
  FUN_1003bdd00(&local_98,&local_58);
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  iVar7 = -1;
  iVar6 = -1;
  iVar3 = -1;
  if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
    iVar7 = -1;
    iVar6 = -1;
    iVar3 = -1;
    do {
      local_80 = 1;
      iVar5 = BootDevice::getType();
      if ((iVar3 == -1) && (iVar5 == 8)) {
        iVar3 = BootDevice::getBootingNumber();
      }
      iVar5 = BootDevice::getType();
      if ((iVar6 == -1) && (iVar5 == 6)) {
        iVar6 = BootDevice::getBootingNumber();
      }
      iVar5 = BootDevice::getBootingNumber();
      if (iVar7 < iVar5) {
        iVar7 = iVar5;
      }
      local_90 = local_90 + 8;
    } while (local_90 != local_88);
  }
  local_80 = 1;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ba72f;
    }
    iVar5 = *(int *)(local_98 + 0xc);
    if (iVar5 != *(int *)(local_98 + 8)) {
      lVar10 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar5 * -8;
      pDVar8 = local_98 + (long)iVar5 * 8 + 8;
      do {
        if (*(long **)pDVar8 != (long *)0x0) {
          (**(code **)(**(long **)pDVar8 + 0x20))();
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_98);
  }
LAB_1003ba72f:
  uVar9 = 1;
  if ((*param_5 == -1) || (param_3 != 6 || iVar6 != -1)) {
    iVar5 = iVar3 + 1;
    if (iVar3 == -1) {
      iVar5 = iVar7;
    }
    iVar7 = 0;
    if (iVar6 != -1) {
      iVar7 = iVar5;
    }
    if (param_3 != 6) {
      iVar7 = iVar5;
    }
    *param_5 = iVar7;
  }
LAB_1003ba771:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar9;
      }
      local_31 = 0;
    }
    iVar7 = *(int *)(local_58 + 0xc);
    if (iVar7 != *(int *)(local_58 + 8)) {
      lVar10 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar7 * -8;
      pDVar8 = local_58 + (long)iVar7 * 8 + 8;
      do {
        if (*(long **)pDVar8 != (long *)0x0) {
          (**(code **)(**(long **)pDVar8 + 0x20))();
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_58);
  }
  return uVar9;
}

