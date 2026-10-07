
undefined8 FUN_1002dfa90(long *param_1,void *param_2,ulong param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_4,param_3,FUN_1002df330,0);
  if (lVar1 != 0) {
    _memcpy((void *)(lVar1 + 0x28),param_2,param_3 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001002dfae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x50))(param_1,lVar1);
    return uVar2;
  }
  return 0;
}

