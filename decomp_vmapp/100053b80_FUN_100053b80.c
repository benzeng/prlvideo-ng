
void FUN_100053b80(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  QArrayData *pQVar5;
  undefined1 local_8b8 [8];
  undefined4 local_8b0;
  undefined8 *local_8ac;
  undefined1 local_21;
  
  *param_1 = &PTR_FUN_100ba8510;
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    uVar2 = param_1[4];
    local_8b0 = 9;
    local_8ac = param_1;
    uVar3 = FUN_1002a6120(lVar1,1,1);
    FUN_1002a5a50(uVar3,0,local_8b8,0x894);
    FUN_1004c07d0(uVar2,lVar1,0);
  }
  param_1[0xd] = 0;
  pQVar5 = (QArrayData *)param_1[0xe];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100053c28;
      pQVar5 = (QArrayData *)param_1[0xe];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100053c28:
  QFile::~QFile((QFile *)(param_1 + 0xb));
  piVar4 = (int *)param_1[10];
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100053c5a;
      piVar4 = (int *)param_1[10];
    }
    FUN_100059f90(param_1 + 10,piVar4);
  }
LAB_100053c5a:
  pQVar5 = (QArrayData *)param_1[3];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100053c8a;
      pQVar5 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100053c8a:
  FUN_100013180(param_1 + 2);
  return;
}

