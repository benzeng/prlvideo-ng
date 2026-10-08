
undefined4
FUN_100b21560(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = *(long *)(*param_1 + -0xb8);
  lVar1 = (long)param_1 + lVar2;
  (**(code **)(*(long *)((long)param_1 + lVar2) + 0x100))(lVar1);
  uVar3 = (**(code **)(*(long *)((long)param_1 + lVar2) + 0xf8))
                    (lVar1,param_2,param_3,param_4,param_5);
  (**(code **)(*(long *)((long)param_1 + lVar2) + 0x108))(lVar1);
  return uVar3;
}

