
undefined4 FUN_1002dab50(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_28 [2];
  _func_void_Node_ptr *local_20;
  undefined1 local_11;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar2 = FUN_10016f500(lVar3);
    FUN_10061c2c0(local_28,uVar2);
    uVar4 = local_28[0];
    if (*(int *)(local_20 + 0x10) != -1) {
      if (*(int *)(local_20 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_20 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) {
          return local_28[0];
        }
        local_11 = 0;
      }
      QHashData::free_helper(local_20);
    }
  }
  return uVar4;
}

