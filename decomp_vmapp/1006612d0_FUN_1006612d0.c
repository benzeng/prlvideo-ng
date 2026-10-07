
undefined4 FUN_1006612d0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  QArrayData *local_20;
  undefined4 local_18;
  undefined1 local_11;
  
  local_18 = 0;
  cVar2 = FUN_1007880e0(param_2,&cf_RotationRate);
  if (cVar2 != '\0') {
    FUN_100788310(param_2,&cf_RotationRate,&local_18);
  }
  cVar2 = FUN_1007880e0(param_2,&cf_MediumType);
  if (cVar2 != '\0') {
    local_20 = (QArrayData *)PTR_shared_null_100ba20d0;
    cVar2 = FUN_1007881a0(param_2,&cf_MediumType,&local_20);
    if ((cVar2 != '\0') &&
       (iVar3 = QString::compare_helper
                          (local_20 + *(long *)(local_20 + 0x10),*(undefined4 *)(local_20 + 4),
                           "Solid State",0xffffffff,1), iVar3 == 0)) {
      local_18 = 1;
    }
    uVar1 = local_18;
    local_18 = uVar1;
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return local_18;
        }
        local_11 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
      local_18 = uVar1;
    }
  }
  return local_18;
}

