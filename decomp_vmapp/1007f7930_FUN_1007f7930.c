
undefined8 FUN_1007f7930(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x170);
  lVar1 = *(long *)(lVar3 + 0x198);
  if (lVar1 != 0) {
    uVar2 = FUN_100812800(param_1);
    uVar2 = FUN_10087b7a0(lVar1,param_1,uVar2,param_2,param_3,0,0,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar3 = *(long *)(param_1 + 0x170);
  }
  if (*(code **)(lVar3 + 0xb8) == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007f79bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(lVar3 + 0xb8))(param_1,param_2,param_3);
  return uVar2;
}

