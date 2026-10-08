
undefined8
FUN_100c491f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_b0 [52];
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  FUN_100c65850(local_b0);
  iVar1 = FUN_100c6fc50(param_5);
  if (iVar1 < 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    if (0 < param_2) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        local_7c = (undefined1)((ulong)lVar3 >> 0x18);
        local_7b = (undefined1)((ulong)lVar3 >> 0x10);
        local_7a = (undefined1)((ulong)lVar3 >> 8);
        local_79 = (undefined1)lVar3;
        iVar2 = FUN_100c65920(local_b0,param_5,0);
        if (iVar2 == 0) {
          uVar5 = 0xffffffff;
          break;
        }
        iVar2 = FUN_100c65b10(local_b0,param_3,param_4);
        if (iVar2 == 0) {
          uVar5 = 0xffffffff;
          break;
        }
        iVar2 = FUN_100c65b10(local_b0,&local_7c,4);
        if (iVar2 == 0) {
          uVar5 = 0xffffffff;
          break;
        }
        if (param_2 < lVar4 + iVar1) {
          iVar1 = FUN_100c65bc0(local_b0,local_78,0);
          uVar5 = 0xffffffff;
          if (iVar1 != 0) {
            _memcpy((void *)(param_1 + lVar4),local_78,param_2 - lVar4);
            uVar5 = 0;
          }
          break;
        }
        iVar2 = FUN_100c65bc0(local_b0,param_1 + lVar4,0);
        if (iVar2 == 0) {
          uVar5 = 0xffffffff;
          break;
        }
        lVar4 = lVar4 + iVar1;
        lVar3 = lVar3 + 1;
        uVar5 = 0;
      } while (lVar4 < param_2);
    }
  }
  FUN_100c65c50(local_b0);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

