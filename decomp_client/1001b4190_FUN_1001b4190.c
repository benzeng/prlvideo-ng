
undefined1 FUN_1001b4190(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  lVar5 = FUN_10015a340();
  plVar1 = *(long **)(lVar5 + 0x180);
  local_50 = (Data *)*plVar1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar6 = (long)*(int *)(local_50 + 8);
      lVar5 = *plVar1;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_50 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_50 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar6 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  puVar3 = PTR_typeinfo_1021e16d8;
  puVar2 = PTR_typeinfo_1021e1668;
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      plVar1 = *(long **)local_48;
      if (((plVar1 != (long *)0x0) && (lVar5 = ___dynamic_cast(plVar1,puVar3,puVar2,0), lVar5 != 0))
         && ((iVar4 = CHwUsbDevice::getUsbType(), iVar4 == 10 ||
             (iVar4 = CHwUsbDevice::getUsbType(), iVar4 == 0xb)))) {
        iVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1);
        uVar8 = 1;
        if ((iVar4 == 1) || (iVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1), iVar4 == 3))
        goto LAB_1001b42d1;
      }
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  uVar8 = 0;
LAB_1001b42d1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar8;
      }
      local_29 = 0;
    }
    QListData::dispose(local_50);
  }
  return uVar8;
}

