
undefined8 FUN_100877be0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100887ce0(5,0x70,0x6c,"dh_pmeth.c",0xca);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100876400(param_2,*(undefined8 *)
                                   (*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x20),
                          *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20));
    if (-1 < (int)uVar1) {
      *param_3 = (long)(int)uVar1;
      uVar1 = 1;
    }
  }
  return uVar1;
}

