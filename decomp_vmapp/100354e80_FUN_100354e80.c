
undefined8 FUN_100354e80(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(uint *)**(undefined8 **)(param_1 + 0x38);
  uVar3 = FUN_1003a2680(param_3);
  uVar4 = FUN_1003a2750(param_3);
  if (uVar1 < 0xffff0104) {
    uVar1 = *param_3;
    uVar5 = FUN_1003a2850(param_3);
    FUN_10038e8e0(uVar2,"%s = %sclamp(vec4(texcoord[%d].xyz, 1.0), 0.0, 1.0)%s;\n",uVar3,uVar4,
                  uVar1 & 0x7ff,uVar5);
  }
  else {
    uVar5 = FUN_1003a23f0(param_4);
    uVar6 = FUN_1003a2850(param_3);
    FUN_10038e8e0(uVar2,"%s = %s%s%s;\n",uVar3,uVar4,uVar5,uVar6);
  }
  return 0;
}

