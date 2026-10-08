
void FUN_1003610d0(undefined8 *param_1)

{
  QObject *pQVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  uint local_38;
  Data *local_30;
  undefined1 local_21;
  
  uVar3 = FUN_100152280();
  FUN_100154b10(&local_30,uVar3);
  local_50 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_50);
      lVar7 = (long)*(int *)(local_50 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_50 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_50 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar7 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  local_38 = 1;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      if (local_38 != 0) {
        pQVar1 = *(QObject **)local_48;
        if (pQVar1 != (QObject *)0x0) {
          uVar3 = FUN_10018c280(pQVar1);
          uVar3 = FUN_100319d40(uVar3);
          cVar2 = FUN_10035c0d0(uVar3,0);
          if (cVar2 != '\0') {
            uVar3 = FUN_10018c280(pQVar1);
            uVar3 = FUN_100319d40(uVar3);
            FUN_10035b1b0(uVar3,*(undefined4 *)(param_1 + 2),0);
            piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
            piVar5 = (int *)*param_1;
            if (piVar5 != piVar4) {
              if (piVar4 != (int *)0x0) {
                LOCK();
                *piVar4 = *piVar4 + 1;
                local_21 = *piVar4 != 0;
                UNLOCK();
                piVar5 = (int *)*param_1;
              }
              if (piVar5 != (int *)0x0) {
                LOCK();
                *piVar5 = *piVar5 + -1;
                local_21 = *piVar5 != 0;
                UNLOCK();
                if ((!(bool)local_21) && ((void *)*param_1 != (void *)0x0)) {
                  operator_delete((void *)*param_1);
                }
              }
              *param_1 = piVar4;
              param_1[1] = pQVar1;
            }
            if (piVar4 != (int *)0x0) {
              LOCK();
              *piVar4 = *piVar4 + -1;
              local_21 = *piVar4 != 0;
              UNLOCK();
              if (!(bool)local_21) {
                operator_delete(piVar4);
              }
            }
            goto LAB_100361257;
          }
        }
        local_38 = 0;
      }
LAB_100361257:
      local_48 = local_48 + 8;
      uVar6 = local_38 ^ 1;
      bVar9 = local_38 != 1;
      local_38 = uVar6;
    } while ((bVar9) && (local_48 != local_40));
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003612a3;
    }
    QListData::dispose(local_50);
  }
LAB_1003612a3:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return;
}

