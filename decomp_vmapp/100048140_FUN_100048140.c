
void FUN_100048140(long param_1)

{
  uint uVar1;
  Data *pDVar2;
  long lVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  Data *pDVar7;
  Data **local_48;
  Data *local_40;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_31;
  
  QMutex::lock();
  local_40 = *(Data **)(param_1 + 0x140);
  if (*(uint *)local_40 != 0xffffffff) {
    if (*(uint *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar5 = (long)(int)*(uint *)(local_40 + 8);
      lVar3 = *(long *)(param_1 + 0x140);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_40 + lVar5 * 8) &&
         (lVar6 = (int)*(uint *)(local_40 + 0xc) - lVar5,
         lVar6 != 0 && lVar5 <= (int)*(uint *)(local_40 + 0xc))) {
        _memcpy(local_40 + lVar5 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(uint *)local_40 = *(uint *)local_40 + 1;
      local_35 = *(uint *)local_40 != 0;
      UNLOCK();
    }
  }
  FUN_100036f60((long *)(param_1 + 0x140));
  QMutex::unlock();
  pDVar7 = local_40;
  if (1 < *(uint *)local_40) {
    uVar1 = *(uint *)(local_40 + 8);
    pDVar2 = (Data *)QListData::detach((int)&local_40);
    lVar3 = (long)(int)*(uint *)(local_40 + 8);
    if ((pDVar7 + (long)(int)uVar1 * 8 + 0x10 != local_40 + lVar3 * 8 + 0x10) &&
       (lVar5 = (int)*(uint *)(local_40 + 0xc) - lVar3,
       lVar5 != 0 && lVar3 <= (int)*(uint *)(local_40 + 0xc))) {
      _memcpy(local_40 + lVar3 * 8 + 0x10,pDVar7 + (long)(int)uVar1 * 8 + 0x10,lVar5 * 8);
    }
    if (*(int *)pDVar2 != -1) {
      if (*(int *)pDVar2 != 0) {
        LOCK();
        *(int *)pDVar2 = *(int *)pDVar2 + -1;
        local_34 = *(int *)pDVar2 != 0;
        UNLOCK();
        if ((bool)local_34) goto LAB_10004826d;
      }
      QListData::dispose(pDVar2);
    }
  }
LAB_10004826d:
  local_48 = &local_40;
  pDVar7 = local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10;
  do {
    pDVar2 = local_40;
    if (1 < *(uint *)local_40) {
      uVar1 = *(uint *)(local_40 + 8);
      pDVar4 = (Data *)QListData::detach((int)local_48);
      lVar3 = (long)(int)*(uint *)(local_40 + 8);
      if ((pDVar2 + (long)(int)uVar1 * 8 + 0x10 != local_40 + lVar3 * 8 + 0x10) &&
         (lVar5 = (int)*(uint *)(local_40 + 0xc) - lVar3,
         lVar5 != 0 && lVar3 <= (int)*(uint *)(local_40 + 0xc))) {
        _memcpy(local_40 + lVar3 * 8 + 0x10,pDVar2 + (long)(int)uVar1 * 8 + 0x10,lVar5 * 8);
      }
      if (*(int *)pDVar4 != -1) {
        if (*(int *)pDVar4 != 0) {
          LOCK();
          *(int *)pDVar4 = *(int *)pDVar4 + -1;
          local_33 = *(int *)pDVar4 != 0;
          UNLOCK();
          if ((bool)local_33) goto LAB_1000482f0;
        }
        QListData::dispose(pDVar4);
      }
    }
LAB_1000482f0:
    if (pDVar7 == local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10) {
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return;
          }
          local_31 = 0;
        }
        QListData::dispose(local_40);
      }
      return;
    }
    FUN_1004c07d0(param_1,*(undefined8 *)pDVar7,0xf0000020);
    pDVar7 = pDVar7 + 8;
  } while( true );
}

