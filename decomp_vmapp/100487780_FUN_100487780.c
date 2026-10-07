
undefined8
FUN_100487780(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  QArrayData *pQVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar2 = FUN_1002a6010(param_4);
  if (lVar2 == 0) {
    iVar5 = 4;
    bVar6 = false;
  }
  else {
    iVar5 = *(int *)(lVar2 + 0x10);
    bVar6 = *(int *)(lVar2 + 0x2c) == 0;
  }
  uVar3 = 0x80034004;
  if (iVar5 == 3) {
    uVar3 = 0;
  }
  if (bVar6) {
    uVar3 = 0;
  }
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_100488f00(param_4,&local_40,0x1800);
  pQVar1 = local_40;
  local_48 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  uVar4 = 0;
  if (*param_1 != 0) {
    uVar4 = *(undefined8 *)(*param_1 + 0x10);
  }
  FUN_1007d6a90(&local_50,uVar4);
  FUN_100487980(param_5,uVar3,iVar5,&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100487863;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100487863:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100487890;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100487890:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 0;
}

