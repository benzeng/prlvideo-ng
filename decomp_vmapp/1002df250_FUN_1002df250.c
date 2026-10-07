
undefined4 *
FUN_1002df250(long param_1,undefined4 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__((ulong)param_3 + 0x28,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
    if (-1 < DAT_1011c568c) {
      puVar1 = (undefined4 *)0x0;
      FUN_1008e3970("","USB",0,
                    "[%s] CreateIoData() can\'t alloc memmory for io-data ep = %02x  sz = %ld  cb = %p  ctx = %p"
                    ,*(long *)(param_1 + 8) + 0x838,param_2,(ulong)param_3 + 0x28,param_4,param_5);
    }
  }
  else {
    *puVar1 = param_2;
    puVar1[1] = 0;
    puVar1[2] = param_3;
    puVar1[3] = 0;
    *(undefined4 **)(puVar1 + 4) = puVar1 + 10;
    *(undefined8 *)(puVar1 + 6) = param_4;
    *(undefined8 *)(puVar1 + 8) = param_5;
  }
  return puVar1;
}

