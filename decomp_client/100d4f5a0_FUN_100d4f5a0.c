
int FUN_100d4f5a0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e15e8;
  local_38 = 0;
  local_40 = PTR_shared_null_1021e15e8;
  iVar2 = FUN_100d4ec80(param_1,&local_38);
  if (iVar2 < 0) goto LAB_100d4f7dd;
  iVar2 = FUN_100d4f910(&local_38,0,&local_40);
  if (iVar2 < 0) goto LAB_100d4f7dd;
  iVar2 = FUN_100d4ed50(&local_38,param_2);
  if (iVar2 < 0) goto LAB_100d4f7dd;
  iVar2 = FUN_100d4ef90(param_1,&local_38);
  if (iVar2 < 0) goto LAB_100d4f7dd;
  uVar4 = _PrlVm_Start(*param_1);
  iVar2 = FUN_100d429b0(uVar4,"start VM");
  if (iVar2 < 0) goto LAB_100d4f7dd;
  local_48 = puVar1;
  pQVar5 = (QArrayData *)QString::fromAscii_helper("-c",2);
  local_50 = pQVar5;
  FUN_1000341d0(&local_48,&local_50);
  pQVar6 = (QArrayData *)QString::fromAscii_helper("/bin/ls / >/dev/null 2>&1",0x19);
  local_58 = pQVar6;
  FUN_1000341d0(&local_48,&local_58);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_29 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d4f6be;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100d4f6be:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d4f6eb;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100d4f6eb:
  pQVar5 = (QArrayData *)QString::fromAscii_helper("bash",4);
  local_60 = pQVar5;
  iVar3 = FUN_100d4f110(param_1,&local_60,&local_48,600);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d4f749;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100d4f749:
  uVar4 = _PrlVm_Stop(*param_1,1);
  FUN_100d429b0(uVar4,"stop VM");
  iVar2 = FUN_100d4f400(param_1,&local_38);
  if (iVar2 < 0) {
    uVar4 = _PrlVm_StopEx(*param_1,0,0x800);
    FUN_100d429b0(uVar4,"stop VM");
    iVar2 = FUN_100d4f400(param_1,&local_38);
    if (-1 < iVar2) goto LAB_100d4f7a7;
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to stop VM");
  }
  else {
LAB_100d4f7a7:
    FUN_100d4ec80(param_1,&local_38);
    FUN_100d4f910(&local_38,1,&local_40);
    FUN_100d4ef90(param_1,&local_38);
    iVar2 = iVar3;
  }
  FUN_100039a80(&local_48);
LAB_100d4f7dd:
  FUN_100039a80(&local_40);
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return iVar2;
}

