
void FUN_100704e30(long param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  QKeySequence *pQVar4;
  Data *local_98;
  Data *local_90 [2];
  Data *local_80;
  undefined4 local_78;
  QArrayData *local_70;
  undefined4 local_64;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  FUN_100707710(*(long *)(param_1 + 0x10) + 0x30);
  FUN_1005678e0(&local_60,param_2);
  FUN_1000722f0(&local_58,&local_60);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == -1) {
LAB_100704f19:
    if (local_50 != local_48) {
      do {
        local_64 = **(undefined4 **)local_50;
        lVar3 = *(long *)(param_1 + 0x10);
        FUN_1006946e0(&local_70);
        lVar3 = FUN_100706960(lVar3 + 0x30,&local_70);
        FUN_100566100(&local_80,param_2,&local_64);
        FUN_100707070(lVar3,&local_80);
        pDVar2 = local_80;
        *(undefined4 *)(lVar3 + 8) = local_78;
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100704ffb;
          }
          iVar1 = *(int *)(local_80 + 0xc);
          if (iVar1 != *(int *)(local_80 + 8)) {
            lVar3 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
            pQVar4 = (QKeySequence *)(local_80 + (long)iVar1 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(pQVar4);
              pQVar4 = pQVar4 + -8;
              lVar3 = lVar3 + 8;
            } while (lVar3 != 0);
          }
          QListData::dispose(pDVar2);
        }
LAB_100704ffb:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10070502b;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_10070502b:
        local_50 = local_50 + 8;
        local_40 = 1;
      } while (local_50 != local_48);
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_100704ec7:
      iVar1 = *(int *)(local_60 + 0xc);
      if (iVar1 != *(int *)(local_60 + 8)) {
        lVar3 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_60 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100704ec7;
    }
    if (local_40 != 0) goto LAB_100704f19;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007050af;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar3 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar2 != (void *)0x0) {
          operator_delete(*(void **)pDVar2);
        }
        pDVar2 = pDVar2 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_1007050af:
  local_98 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100708220(local_90,&local_98,2);
  FUN_100852bb0(param_1,0,local_90);
  if (*(int *)local_90[0] != -1) {
    if (*(int *)local_90[0] != 0) {
      LOCK();
      *(int *)local_90[0] = *(int *)local_90[0] + -1;
      local_31 = *(int *)local_90[0] != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070514a;
    }
    iVar1 = *(int *)(local_90[0] + 0xc);
    if (iVar1 != *(int *)(local_90[0] + 8)) {
      lVar3 = (long)*(int *)(local_90[0] + 8) * 8 + (long)iVar1 * -8;
      pQVar4 = (QKeySequence *)(local_90[0] + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar4);
        pQVar4 = pQVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_90[0]);
  }
LAB_10070514a:
  pDVar2 = local_98;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007051ba;
    }
    iVar1 = *(int *)(local_98 + 0xc);
    if (iVar1 != *(int *)(local_98 + 8)) {
      lVar3 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar1 * -8;
      pQVar4 = (QKeySequence *)(local_98 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar4);
        pQVar4 = pQVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1007051ba:
  if (param_3 != '\0') {
    FUN_100704190(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}

