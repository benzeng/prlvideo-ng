
undefined8 FUN_100393940(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*param_3 >> 8 & 0x18 | *param_3 >> 0x1c & 7) == 3) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = FUN_1003a2680(param_3);
    uVar2 = FUN_1003a2750(param_3);
    uVar3 = FUN_1003a23f0(param_4);
    uVar4 = FUN_1003a2850(param_3);
    FUN_10038e8e0(uVar5,"%s = %sivec4(%s)%s;\n",uVar1,uVar2,uVar3,uVar4);
    return 0;
  }
  uVar5 = FUN_1003a3030(param_1,param_2,param_3,param_4);
  return uVar5;
}

