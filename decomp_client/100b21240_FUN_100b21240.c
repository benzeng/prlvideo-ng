
int FUN_100b21240(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 in_stack_fffffffffffff6c8;
  QArrayData *local_8f8;
  undefined8 local_8f0;
  undefined4 local_8e8;
  undefined1 local_8e0 [24];
  void *local_8c8;
  long local_8c0;
  undefined4 local_8b8;
  undefined1 local_890 [2136];
  uint local_38;
  undefined1 local_31;
  
  uVar4 = (undefined4)((ulong)in_stack_fffffffffffff6c8 >> 0x20);
  local_38 = 0;
  local_8c8 = (void *)0x0;
  FUN_100db5f90(local_890);
  local_8f0 = param_8;
  local_8e8 = param_7;
  iVar3 = FUN_100b20dd0(param_1,local_8e0,0,0,param_2,param_3,CONCAT44(uVar4,param_4),param_5,
                        param_6,param_7,&local_8f0,1);
  if (iVar3 < 0) {
    FUN_100df99c0("","dimg",0,"Error: prepare of fill table req failed, err %x",iVar3);
    (**(code **)(*param_1 + 0xf0))(param_1);
  }
  else {
    cVar2 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                      ((long)param_1 + *(long *)(*param_1 + -0x18));
    if (cVar2 == '\0') {
      QString::toUtf8();
      FUN_100df99c0("","dimg",0,"Error: disk \"%s\" is not opened, can\'t fill offsets table",
                    local_8f8 + *(long *)(local_8f8 + 0x10));
      iVar3 = -0x7ffdefdf;
      if (*(int *)local_8f8 != -1) {
        if (*(int *)local_8f8 != 0) {
          LOCK();
          *(int *)local_8f8 = *(int *)local_8f8 + -1;
          local_31 = *(int *)local_8f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b21477;
        }
        QArrayData::deallocate(local_8f8,1,8);
      }
    }
    else {
      plVar1 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
      cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,local_8c8,local_8b8,&local_38,local_8c0);
      if ((cVar2 == '\0') &&
         (lVar5 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x160))
                            ((long)param_1 + *(long *)(*param_1 + -0x18)),
         lVar5 != (ulong)local_38 + local_8c0)) {
        uVar4 = FUN_100db96d0();
        iVar3 = -0x7ffdefd7;
        FUN_100df99c0("","dimg",0,"Error: BAT read failed: (off %llu size %u SS %llu) %d",local_8c0,
                      local_8b8,lVar5,uVar4);
      }
      else {
        iVar3 = FUN_100b20be0(param_1,local_8e0);
      }
    }
  }
LAB_100b21477:
  if (local_8c8 != (void *)0x0) {
    _free(local_8c8);
  }
  return iVar3;
}

