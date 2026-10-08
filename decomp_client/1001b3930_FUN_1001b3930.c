
undefined1 FUN_1001b3930(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  QArrayData *local_68;
  undefined1 local_60 [8];
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  lVar5 = FUN_10015a340();
  plVar1 = *(long **)(lVar5 + 0x180);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      lVar5 = *plVar1;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_58 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      plVar1 = *(long **)local_50;
      iVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1);
      if (iVar4 == 3) {
        (**(code **)(*plVar1 + 200))(local_60,plVar1);
        cVar2 = QtPrivate::QStringList_contains(local_60,param_2,1);
        if (cVar2 == '\0') {
          bVar3 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0xb8))(&local_68,plVar1);
          bVar3 = FUN_1001b35f0(&local_68);
          bVar3 = bVar3 ^ 1;
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001b3a93;
            }
            QArrayData::deallocate(local_68,2,8);
          }
        }
LAB_1001b3a93:
        FUN_100039a80(local_60);
        uVar8 = 1;
        if (bVar3 != 0) goto LAB_1001b3ac1;
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  uVar8 = 0;
LAB_1001b3ac1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return uVar8;
}

