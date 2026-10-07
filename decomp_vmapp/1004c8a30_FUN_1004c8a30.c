
undefined8 FUN_1004c8a30(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(short *)(param_2 + 0x16) == 1) {
    lVar1 = FUN_1002a6120(param_2,0,1);
    if (lVar1 != 0) {
      uVar2 = FUN_1004ce8e0(*param_1 + 0x48,lVar1);
      return uVar2;
    }
  }
  return 0xf0000003;
}

