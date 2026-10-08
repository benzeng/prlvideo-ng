
long FUN_1000bf4a0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  Data *pDVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  int local_3c;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_34;
  
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar7 + 8);
  local_3c = param_2;
  pDVar4 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_3c);
  lVar2 = *param_1;
  FUN_1000b7220(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + ((long)local_3c + (long)*(int *)(lVar2 + 8)) * 8,
                lVar7 + 0x10 + (long)iVar1 * 8);
  lVar2 = *param_1;
  FUN_1000b7220(param_1,lVar2 + 0x10 +
                        ((long)param_3 + (long)*(int *)(lVar2 + 8) + (long)local_3c) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,
                lVar7 + 0x10 + ((long)iVar1 + (long)local_3c) * 8);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      local_34 = *(int *)pDVar4 != 0;
      UNLOCK();
      if ((bool)local_34) goto LAB_1000bf60d;
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar7 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        puVar3 = *(undefined8 **)pDVar5;
        if (puVar3 != (undefined8 *)0x0) {
          pQVar6 = (QArrayData *)puVar3[3];
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              local_37 = *(int *)pQVar6 != 0;
              UNLOCK();
              if ((bool)local_37) goto LAB_1000bf5b8;
              pQVar6 = (QArrayData *)puVar3[3];
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_1000bf5b8:
          FUN_100039a80(puVar3 + 1);
          pQVar6 = (QArrayData *)*puVar3;
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              local_36 = *(int *)pQVar6 != 0;
              UNLOCK();
              if ((bool)local_36) goto LAB_1000bf5ef;
              pQVar6 = (QArrayData *)*puVar3;
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_1000bf5ef:
          operator_delete(puVar3);
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1000bf60d:
  return *param_1 + 0x10 + ((long)local_3c + (long)*(int *)(*param_1 + 8)) * 8;
}

