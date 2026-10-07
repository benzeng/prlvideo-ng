
undefined1 FUN_1007512e0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = FUN_10074fd10(param_1,0x39,0,FUN_1007500d0,0,param_2);
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","Compression",2,"Uncompress to buffer with %u workers",
                    *(undefined4 *)(param_1 + 0x10));
    }
  }
  else {
    uVar1 = 0;
    FUN_1008e3970("","Compression",0,"Uncompress to buffer failed: engine is active");
  }
  return uVar1;
}

