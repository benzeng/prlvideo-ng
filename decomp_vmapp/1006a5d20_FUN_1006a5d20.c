
undefined4 FUN_1006a5d20(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)(*param_1 + -0xc0);
  lVar1 = (long)param_1 + lVar2;
  (**(code **)(*(long *)((long)param_1 + lVar2) + 0x100))(lVar1);
  uVar3 = FUN_100698f70(lVar1,param_2);
  (**(code **)(*(long *)((long)param_1 + lVar2) + 0x108))(lVar1);
  return uVar3;
}

