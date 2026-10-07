
uint FUN_1004068b0(long param_1,undefined4 param_2,uint param_3,long param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint local_2c;
  
  local_2c = 0;
  cVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x98))();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x16;
    local_2c = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 8) + 0x60))(*(long **)(param_1 + 8),param_2,0);
    cVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x30))
                      (*(long **)(param_1 + 8),param_4,param_3,&local_2c);
    if (cVar1 == '\0') {
      local_2c = 0;
    }
    if (local_2c != param_3) {
      ___bzero(param_4 + (ulong)local_2c,param_3 - local_2c);
    }
    uVar2 = FUN_100768f60();
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  return local_2c;
}

