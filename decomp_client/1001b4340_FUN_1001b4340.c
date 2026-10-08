
undefined1 FUN_1001b4340(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  bool bVar9;
  QArrayData *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  uVar4 = FUN_10018d490();
  lVar5 = FUN_10015a340(uVar4);
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
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      uVar4 = *(undefined8 *)local_48;
      FUN_100188480(&local_58,param_1);
      cVar2 = FUN_1001b3b80(uVar4,&local_58);
      if (cVar2 == '\0') {
        bVar9 = false;
      }
      else {
        iVar3 = CHwUsbDevice::getUsbType();
        bVar9 = iVar3 == 0xb;
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001b4463;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1001b4463:
      uVar8 = 1;
      if (bVar9) goto LAB_1001b4489;
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  uVar8 = 0;
LAB_1001b4489:
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

