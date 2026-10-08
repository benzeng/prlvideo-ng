
undefined8 FUN_100c5f250(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_100c62ee0(0x20,0x7b,0x78,"bss_bio.c",0x34f);
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = FUN_100c58d60(param_1,0x90,(long)param_3,param_2);
    if (0 < (int)uVar1) {
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + (long)(int)uVar1;
    }
  }
  return uVar1;
}

