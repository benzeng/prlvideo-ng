
undefined1 FUN_100ac3960(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  Data *pDVar6;
  Data *pDVar7;
  Data *local_50;
  QArrayData *local_48;
  int local_3c;
  long local_38;
  Data *local_30;
  undefined1 local_21;
  
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100d7b0d0(&local_38);
  if (*(int *)(local_38 + 8) != *(int *)(local_38 + 0xc)) {
    plVar5 = (long *)(local_38 + 0x10 + (long)*(int *)(local_38 + 8) * 8);
    do {
      FUN_100129840(&local_30,*plVar5 + 4);
      plVar5 = plVar5 + 1;
    } while (plVar5 != (long *)(local_38 + 0x10 + (long)*(int *)(local_38 + 0xc) * 8));
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_3c = FUN_100d7b000(&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100ac3a0b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100ac3a0b:
  iVar1 = *(int *)(local_30 + 8);
  if (*(int *)(local_30 + 0xc) == iVar1) {
    FUN_100129840(&local_30,&local_3c);
LAB_100ac3a55:
    FUN_100adc1f0(&local_50,param_1 + 0x100);
    if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
      pDVar6 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
      do {
        lVar3 = *(long *)pDVar6;
        if ((((*(ushort *)(lVar3 + 0x18) & 0x4041) == 0) &&
            (0xf < *(int *)(lVar3 + 0x30) - *(int *)(lVar3 + 0x28))) &&
           (0xf < *(int *)(lVar3 + 0x34) - *(int *)(lVar3 + 0x2c))) {
          iVar2 = FUN_100d7b300(*(undefined4 *)(lVar3 + 0x48));
          iVar1 = *(int *)(local_30 + 8);
          if (iVar1 != *(int *)(local_30 + 0xc)) {
            pDVar7 = local_30 + (long)iVar1 * 8 + 0x10;
            lVar3 = (long)*(int *)(local_30 + 0xc) * 8 + (long)iVar1 * -8;
            do {
              if (*(int *)pDVar7 == iVar2) {
                uVar4 = 1;
                goto LAB_100ac3b00;
              }
              pDVar7 = pDVar7 + 8;
              lVar3 = lVar3 + -8;
            } while (lVar3 != 0);
          }
        }
        pDVar6 = pDVar6 + 8;
      } while (pDVar6 != local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10);
    }
    uVar4 = 0;
LAB_100ac3b00:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100ac3b22;
      }
      QListData::dispose(local_50);
    }
  }
  else {
    pDVar6 = local_30 + (long)iVar1 * 8 + 0x10;
    lVar3 = (long)*(int *)(local_30 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (*(int *)pDVar6 == local_3c) goto LAB_100ac3a55;
      pDVar6 = pDVar6 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    uVar4 = 0;
  }
LAB_100ac3b22:
  FUN_100ac9ea0(&local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return uVar4;
}

