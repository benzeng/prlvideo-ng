
undefined1 FUN_1000c3ff0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  Data *pDVar4;
  undefined1 uVar5;
  QArrayData *local_68;
  Data *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x10);
  if (lVar3 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get Vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return 0;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
    return 0;
  }
  FUN_10018d830(&local_50,lVar3);
  FUN_10018d860(&local_58,lVar3);
  FUN_1000d81b0(&local_48,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c407d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000c407d:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c40ad;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000c40ad:
  FUN_1000a9900(&local_60,*(undefined8 *)(param_1 + 0x50),param_1 + 0x10);
  if (1 < *(uint *)local_60) {
    FUN_1000abfa0(&local_60,*(uint *)(local_60 + 4));
  }
  pDVar4 = local_60 + (long)(int)*(uint *)(local_60 + 8) * 8 + 0x10;
  do {
    if (1 < *(uint *)local_60) {
      FUN_1000abfa0(&local_60,*(uint *)(local_60 + 4));
    }
    if (pDVar4 == local_60 + (long)(int)*(uint *)(local_60 + 0xc) * 8 + 0x10) {
      uVar5 = 0;
      goto LAB_1000c41eb;
    }
    FUN_1000ae530(&local_68,*(undefined8 *)pDVar4);
    iVar1 = QString::compare(&local_48,&local_68,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c416c;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1000c416c:
    if (iVar1 == 0) break;
    pDVar4 = pDVar4 + 8;
  } while( true );
  uVar5 = 1;
LAB_1000c41eb:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c424f;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar3 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_60 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_1000c424f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return uVar5;
}

