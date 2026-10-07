
undefined1 FUN_10055c9b0(long *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  int local_7c;
  undefined1 local_78 [64];
  uint local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar4 = 1;
  local_30 = lVar1;
  if (*param_2 != '\0') {
    local_7c = 0;
    plVar3 = (long *)FUN_10060e060(param_2 + 1,&local_7c);
    *param_1 = (long)plVar3;
    if (((plVar3 != (long *)0x0) &&
        (local_7c = (**(code **)(*plVar3 + 0x30))(plVar3), -1 < local_7c)) &&
       (local_7c = (**(code **)(*(long *)*param_1 + 0x58))((long *)*param_1,local_78), -1 < local_7c
       )) {
      if (((local_38 < 0x11) &&
          (lVar2 = *(long *)(param_2 + 0x18), local_38 <= *(uint *)(lVar2 + 4))) &&
         (local_38 <= *(uint *)(*(long *)(param_2 + 0x20) + 4))) {
        local_7c = (**(code **)(*(long *)*param_1 + 0x48))
                             ((long *)*param_1,lVar2 + *(long *)(lVar2 + 0x10));
        if (-1 < local_7c) {
          local_7c = (**(code **)(*(long *)*param_1 + 0x50))
                               ((long *)*param_1,
                                *(long *)(param_2 + 0x20) +
                                *(long *)(*(long *)(param_2 + 0x20) + 0x10));
          uVar4 = 1;
          if (-1 < local_7c) goto LAB_10055ca96;
        }
      }
      else {
        FUN_1008e3970("","TransMem",0,
                      "CSnapshotCryptTransaction::init_crypt() unexpected block size %d");
      }
    }
    uVar4 = 0;
    FUN_1008e3970("","TransMem",0,
                  "CSnapshotCryptTransaction::init_crypt() failed to initialize encryption engine (%d)"
                  ,local_7c);
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*param_1)();
      *param_1 = 0;
      uVar4 = 0;
    }
  }
LAB_10055ca96:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

