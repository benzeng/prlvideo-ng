
undefined8 FUN_100354340(long param_1,undefined8 param_2,uint *param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = FUN_1003a23f0(param_4 + 0xb8);
  FUN_10038e8e0(uVar2,"dst.x = dot(%s.xy, c_ps[%d * BUMP_STRIDE + OFF_BUMP_MAT].xy);\n",uVar3,
                uVar1 & 0x7ff);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = FUN_1003a23f0(param_4 + 0xb8);
  FUN_10038e8e0(uVar2,"dst.y = dot(%s.xy, c_ps[%d * BUMP_STRIDE + OFF_BUMP_MAT].zw);\n",uVar3,
                uVar1 & 0x7ff);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = FUN_1003a2680(param_3);
  uVar4 = FUN_1003a2750(param_3);
  uVar5 = FUN_1003a23f0(param_4);
  uVar6 = FUN_1003a2850(param_3);
  FUN_10038e8e0(uVar2,"%s = %s(%s.xy + dst.xy)%s;\n",uVar3,uVar4,uVar5,uVar6);
  return 0;
}

