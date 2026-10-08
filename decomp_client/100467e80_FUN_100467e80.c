
long FUN_100467e80(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  Data *pDVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  int local_40;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_35;
  
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar7 + 8);
  local_40 = param_2;
  pDVar4 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_40);
  lVar2 = *param_1;
  FUN_100468220(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + ((long)local_40 + (long)*(int *)(lVar2 + 8)) * 8,
                lVar7 + 0x10 + (long)iVar1 * 8);
  lVar2 = *param_1;
  FUN_100468220(param_1,lVar2 + 0x10 +
                        ((long)param_3 + (long)*(int *)(lVar2 + 8) + (long)local_40) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,
                lVar7 + 0x10 + ((long)iVar1 + (long)local_40) * 8);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      local_35 = *(int *)pDVar4 != 0;
      UNLOCK();
      if ((bool)local_35) goto LAB_100467fed;
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar7 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        puVar3 = *(undefined8 **)pDVar5;
        if (puVar3 != (undefined8 *)0x0) {
          QBrush::~QBrush((QBrush *)(puVar3 + 4));
          pQVar6 = (QArrayData *)puVar3[1];
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              local_39 = *(int *)pQVar6 != 0;
              UNLOCK();
              if ((bool)local_39) goto LAB_100467fa1;
              pQVar6 = (QArrayData *)puVar3[1];
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_100467fa1:
          pQVar6 = (QArrayData *)*puVar3;
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              local_38 = *(int *)pQVar6 != 0;
              UNLOCK();
              if ((bool)local_38) goto LAB_100467fcf;
              pQVar6 = (QArrayData *)*puVar3;
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_100467fcf:
          operator_delete(puVar3);
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_100467fed:
  return *param_1 + 0x10 + ((long)local_40 + (long)*(int *)(*param_1 + 8)) * 8;
}

