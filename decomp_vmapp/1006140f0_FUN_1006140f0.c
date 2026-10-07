
int FUN_1006140f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  QArrayData *local_90;
  int local_88;
  undefined1 local_81;
  undefined1 local_80 [64];
  undefined4 local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_88 = 0;
  local_38 = lVar1;
  plVar3 = (long *)FUN_10060e060(param_2,&local_88);
  if (plVar3 == (long *)0x0) {
    FUN_1008e3970("","crypt",0,"Encryption engine creation failed (0x%x)",local_88);
    iVar4 = local_88;
    goto LAB_100614323;
  }
  local_90 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_88 = (**(code **)(*plVar3 + 0x58))(plVar3,local_80);
  if (local_88 < 0) {
    FUN_1008e3970("","crypt",0,"Unable to determine block size (0x%x) at creation",local_88);
LAB_1006142de:
    (**(code **)*plVar3)(plVar3);
    iVar4 = local_88;
  }
  else {
    FUN_100613fc0(param_3,&local_90,local_40);
    pcVar2 = *(code **)(*plVar3 + 0x48);
    if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f)
      ;
    }
    local_88 = (*pcVar2)(plVar3,local_90 + *(long *)(local_90 + 0x10));
    if (local_88 < 0) {
      FUN_1008e3970("","crypt",0,"Failed to set key (0x%x)",local_88);
      goto LAB_1006142de;
    }
    if (*(int *)(*param_4 + 4) != 0) {
      FUN_100613fc0(param_4,&local_90,local_40);
      pcVar2 = *(code **)(*plVar3 + 0x50);
      if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f);
      }
      local_88 = (*pcVar2)(plVar3,local_90 + *(long *)(local_90 + 0x10));
      if (local_88 < 0) {
        FUN_1008e3970("","crypt",0,"Failed to set IV (0x%x)",local_88);
        goto LAB_1006142de;
      }
    }
    *param_1 = plVar3;
    iVar4 = 0;
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_81 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_100614323;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100614323:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

