
long FUN_1006390b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  QArrayData *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  lVar2 = CProblemReport::getUserDefinedData();
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar2 = CRepUserDefinedData::getScreenShots();
    lVar4 = 0;
    if (lVar2 != 0) {
      local_50 = *(Data **)(lVar2 + 0x98);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 == 0) {
          QListData::detach((int)&local_50);
          lVar3 = (long)*(int *)(local_50 + 8);
          lVar4 = *(long *)(lVar2 + 0x98);
          if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_50 + lVar3 * 8) &&
             (lVar2 = *(int *)(local_50 + 0xc) - lVar3,
             lVar2 != 0 && lVar3 <= *(int *)(local_50 + 0xc))) {
            _memcpy(local_50 + lVar3 * 8 + 0x10,
                    (void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),lVar2 * 8);
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
      local_38 = 1;
      lVar4 = 0;
      if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
        do {
          local_38 = 1;
          lVar4 = *(long *)local_48;
          if (lVar4 != 0) {
            CRepScreenShot::getName();
            iVar1 = QString::indexOf(&local_58,param_2,0,1);
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_29 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_29) goto LAB_1006391e8;
              }
              QArrayData::deallocate(local_58,2,8);
            }
LAB_1006391e8:
            if (iVar1 != -1) break;
          }
          local_48 = local_48 + 8;
          local_38 = 1;
          lVar4 = 0;
        } while (local_48 != local_40);
      }
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          UNLOCK();
          if (*(int *)local_50 != 0) {
            return lVar4;
          }
          local_29 = 0;
        }
        QListData::dispose(local_50);
      }
    }
  }
  return lVar4;
}

