
undefined4
FUN_1008b6850(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar4;
  undefined1 local_88 [80];
  long local_38;
  
  uVar4 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar2 = 0;
  lVar3 = FUN_10087ecf0(param_1,0);
  if (lVar3 == 0) {
    FUN_100887ce0(9,0x8b,7,"pem_pkey.c",0xeb);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x10);
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x48) != 0)) {
      uVar2 = FUN_1008b5bc0(lVar3,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      FUN_1008823b0(local_88,0x50,"%s PRIVATE KEY",*(undefined8 *)(lVar1 + 0x10));
      uVar2 = FUN_1008b3ae0(FUN_1008a2f20,local_88,lVar3,param_2,param_3,param_4,
                            CONCAT44(uVar4,param_5),param_6,param_7);
    }
    FUN_10087d4e0(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

