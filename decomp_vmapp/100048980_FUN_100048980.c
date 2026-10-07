
int FUN_100048980(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  Data *pDVar4;
  long lVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  Data *pDVar9;
  Data **local_58;
  Data *local_48;
  undefined4 local_3c;
  int local_38;
  undefined1 local_31;
  
  local_3c = param_2;
  QMutex::lock();
  iVar3 = *(int *)(param_1 + 0x130) + 1;
  *(int *)(param_1 + 0x130) = iVar3;
  FUN_10004de00(param_1 + 0x138,&local_3c,param_3);
  local_48 = *(Data **)(param_1 + 0x140);
  if (*(uint *)local_48 != 0xffffffff) {
    if (*(uint *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar7 = (long)(int)*(uint *)(local_48 + 8);
      lVar5 = *(long *)(param_1 + 0x140);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_48 + lVar7 * 8) &&
         (lVar8 = (int)*(uint *)(local_48 + 0xc) - lVar7,
         lVar8 != 0 && lVar7 <= (int)*(uint *)(local_48 + 0xc))) {
        _memcpy(local_48 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(uint *)local_48 = *(uint *)local_48 + 1;
      local_31 = *(uint *)local_48 != 0;
      UNLOCK();
    }
  }
  FUN_100036f60((long *)(param_1 + 0x140));
  QMutex::unlock();
  pDVar9 = local_48;
  if (1 < *(uint *)local_48) {
    uVar1 = *(uint *)(local_48 + 8);
    pDVar4 = (Data *)QListData::detach((int)&local_48);
    lVar5 = (long)(int)*(uint *)(local_48 + 8);
    if ((pDVar9 + (long)(int)uVar1 * 8 + 0x10 != local_48 + lVar5 * 8 + 0x10) &&
       (lVar7 = (int)*(uint *)(local_48 + 0xc) - lVar5,
       lVar7 != 0 && lVar5 <= (int)*(uint *)(local_48 + 0xc))) {
      _memcpy(local_48 + lVar5 * 8 + 0x10,pDVar9 + (long)(int)uVar1 * 8 + 0x10,lVar7 * 8);
    }
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        local_31 = *(int *)pDVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100048adf;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_100048adf:
  local_58 = &local_48;
  pDVar9 = local_48 + (long)(int)*(uint *)(local_48 + 8) * 8 + 0x10;
  do {
    pDVar4 = local_48;
    if (1 < *(uint *)local_48) {
      uVar1 = *(uint *)(local_48 + 8);
      pDVar6 = (Data *)QListData::detach((int)local_58);
      lVar5 = (long)(int)*(uint *)(local_48 + 8);
      if ((pDVar4 + (long)(int)uVar1 * 8 + 0x10 != local_48 + lVar5 * 8 + 0x10) &&
         (lVar7 = (int)*(uint *)(local_48 + 0xc) - lVar5,
         lVar7 != 0 && lVar5 <= (int)*(uint *)(local_48 + 0xc))) {
        _memcpy(local_48 + lVar5 * 8 + 0x10,pDVar4 + (long)(int)uVar1 * 8 + 0x10,lVar7 * 8);
      }
      if (*(int *)pDVar6 != -1) {
        if (*(int *)pDVar6 != 0) {
          LOCK();
          *(int *)pDVar6 = *(int *)pDVar6 + -1;
          local_31 = *(int *)pDVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100048b60;
        }
        QListData::dispose(pDVar6);
      }
    }
LAB_100048b60:
    if (pDVar9 == local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10) {
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) {
            return iVar3;
          }
          local_31 = 0;
        }
        QListData::dispose(local_48);
      }
      return iVar3;
    }
    uVar2 = *(undefined8 *)pDVar9;
    lVar5 = FUN_1002a6120(uVar2,0,1);
    local_38 = iVar3;
    FUN_1002a5a50(lVar5,0,&local_38,4);
    *(undefined4 *)(lVar5 + 0x10) = 4;
    FUN_1004c07d0(param_1,uVar2,0);
    pDVar9 = pDVar9 + 8;
  } while( true );
}

