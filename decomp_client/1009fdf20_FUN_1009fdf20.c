
void FUN_1009fdf20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  long *local_40;
  undefined1 local_31;
  
  lVar4 = CProblemReport::getUserDefinedData();
  if ((lVar4 != 0) && (lVar4 = CRepUserDefinedData::getScreenShots(), lVar4 != 0)) {
    local_40 = (long *)0x0;
    local_60 = *(Data **)(lVar4 + 0x98);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_60);
        lVar6 = (long)*(int *)(local_60 + 8);
        lVar1 = *(long *)(lVar4 + 0x98);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_60 + lVar6 * 8) &&
           (lVar7 = *(int *)(local_60 + 0xc) - lVar6,
           lVar7 != 0 && lVar6 <= *(int *)(local_60 + 0xc))) {
          _memcpy(local_60 + lVar6 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar7 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
    local_48 = 1;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      do {
        plVar2 = *(long **)local_58;
        local_40 = plVar2;
        if (local_48 != 0) {
          if (plVar2 != (long *)0x0) {
            CRepScreenShot::getName();
            iVar3 = QString::indexOf(&local_68,param_2,0,1);
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009fe078;
              }
              QArrayData::deallocate(local_68,2,8);
            }
LAB_1009fe078:
            if (iVar3 != -1) {
              FUN_100a05d50((long *)(lVar4 + 0x98),&local_40);
              (**(code **)(*plVar2 + 0x88))(plVar2);
              goto LAB_1009fe0a7;
            }
          }
          local_48 = 0;
        }
LAB_1009fe0a7:
        local_58 = local_58 + 8;
        uVar5 = local_48 ^ 1;
        bVar8 = local_48 != 1;
        local_48 = uVar5;
      } while ((bVar8) && (local_58 != local_50));
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_60);
    }
  }
  return;
}

