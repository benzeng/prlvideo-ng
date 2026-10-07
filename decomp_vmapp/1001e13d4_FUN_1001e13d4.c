
undefined4 FUN_1001e13d4(long param_1)

{
  int iVar1;
  undefined4 local_24;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = FUN_1001e117a(param_1);
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0x5aa;
      FUN_1001d7db5(param_1,"internal: no atom generated");
    }
    FUN_1001e0f8e(param_1);
    local_24 = 1;
  }
  return local_24;
}

