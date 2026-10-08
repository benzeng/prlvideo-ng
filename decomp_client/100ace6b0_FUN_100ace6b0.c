
undefined8 FUN_100ace6b0(long param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  undefined8 uVar4;
  QArrayData *local_40;
  undefined8 local_38 [2];
  
  pQVar2 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_38[0] = 0;
  lVar1 = FUN_1000a9690(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_1000b7a40(lVar1,param_2,param_3,param_4,local_38,&local_40);
    pQVar2 = local_40;
    uVar4 = local_38[0];
  }
  if (*(int *)pQVar2 != -1) {
    pQVar3 = pQVar2;
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      local_38[0] = CONCAT71(local_38[0]._1_7_,*(int *)pQVar2 != 0);
      pQVar3 = local_40;
      if (*(int *)pQVar2 != 0) {
        return uVar4;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar4;
}

