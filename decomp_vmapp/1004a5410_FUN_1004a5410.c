
undefined8 FUN_1004a5410(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  QArrayData *local_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined4 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar5 = 0xf0000003;
  local_30 = lVar1;
  if (*(short *)(param_2 + 0x16) != 0) {
    local_38 = 0;
    local_40 = 0;
    lVar3 = FUN_1002a6120(param_2,0,1);
    if ((lVar3 != 0) && (0xb < *(uint *)(lVar3 + 8))) {
      local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
      cVar2 = FUN_100048c50(4,&local_50);
      uVar5 = 0xf000001c;
      if (cVar2 != '\0') {
        if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
        }
        local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(local_50 + *(long *)(local_50 + 0x10)));
        puVar4 = (undefined4 *)FUN_1002a6010(param_2);
        *puVar4 = 0x20000;
        puVar4[1] = 0xb;
        puVar4[2] = 0;
        puVar4[3] = 0xc;
        uVar5 = 0;
        FUN_1002a5a50(lVar3,0,&local_40,0xc);
        *(undefined4 *)(lVar3 + 0x10) = 0xc;
      }
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_41 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_41) goto LAB_1004a553d;
        }
        QArrayData::deallocate(local_50,1,8);
      }
    }
  }
LAB_1004a553d:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

