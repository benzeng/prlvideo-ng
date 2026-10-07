
undefined8 FUN_1003939f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = FUN_1003a2680(param_3);
  uVar3 = FUN_1003a2750(param_3);
  uVar4 = FUN_1003a23f0(param_4);
  uVar5 = FUN_1003a2850(param_3);
  FUN_10038e8e0(uVar1,"%s = %sivec4(floor(%s + 0.5))%s;\n",uVar2,uVar3,uVar4,uVar5);
  return 0;
}

