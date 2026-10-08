
undefined1 FUN_1003ba010(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  Data *pDVar2;
  undefined1 uVar3;
  long lVar4;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  FUN_1003bdd00(&local_50,param_1);
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      iVar1 = BootDevice::getType();
      if (iVar1 == param_2) {
        iVar1 = BootDevice::getIndex();
        uVar3 = 1;
        if (iVar1 == param_3) goto LAB_1003ba09c;
      }
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  uVar3 = 0;
LAB_1003ba09c:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar3;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar4 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_50 + (long)iVar1 * 8 + 8;
      do {
        if (*(long **)pDVar2 != (long *)0x0) {
          (**(code **)(**(long **)pDVar2 + 0x20))();
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_50);
  }
  return uVar3;
}

