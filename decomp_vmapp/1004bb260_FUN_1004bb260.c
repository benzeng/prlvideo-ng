
void FUN_1004bb260(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  QArrayData *pQVar3;
  long *plVar4;
  
  plVar4 = param_1 + 8;
  uVar1 = 0;
  do {
    lVar2 = *plVar4;
    if (lVar2 != 0) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"CGImage for display [%d] is released",
                      uVar1 & 0xffffffff);
        lVar2 = *plVar4;
      }
      _CGImageRelease(lVar2);
    }
    uVar1 = uVar1 + 1;
    plVar4 = plVar4 + 4;
  } while (uVar1 != 0x10);
  *(undefined1 *)((long)param_1 + 0x24a) = 1;
  ___bzero(param_1 + 5,0x200);
  *param_1 = 0;
  param_1[2] = 0;
  pQVar3 = (QArrayData *)param_1[0x47];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1004bb32d;
      pQVar3 = (QArrayData *)param_1[0x47];
    }
    QArrayData::deallocate(pQVar3,0x10,8);
  }
LAB_1004bb32d:
  pQVar3 = (QArrayData *)param_1[0x46];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1004bb363;
      pQVar3 = (QArrayData *)param_1[0x46];
    }
    QArrayData::deallocate(pQVar3,0x10,8);
  }
LAB_1004bb363:
  pQVar3 = (QArrayData *)param_1[0x45];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1004bb399;
      pQVar3 = (QArrayData *)param_1[0x45];
    }
    QArrayData::deallocate(pQVar3,0x10,8);
  }
LAB_1004bb399:
  QMutex::~QMutex((QMutex *)(param_1 + 4));
  return;
}

