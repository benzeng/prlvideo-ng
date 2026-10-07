
undefined8 FUN_1004cd100(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(short *)(param_2 + 0x16) == 1) && (*(short *)(param_2 + 0x14) == 0)) {
    lVar1 = FUN_1002a6120(param_2,0,1);
    if (lVar1 != 0) {
      uVar2 = FUN_1004cf770(*param_1 + 0x48,lVar1);
      return uVar2;
    }
  }
  return 0xf0000003;
}

