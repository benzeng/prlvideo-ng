
undefined8 FUN_1003550b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = FUN_1003a2680(param_3);
  uVar3 = FUN_1003a2680(param_3);
  uVar4 = FUN_1003a2680(param_3);
  FUN_10038e8e0(uVar1,"gl_FragDepth = (%s.y == 0.0) ? 1.0 : clamp(%s.x/%s.y, 0.0, 1.0);\n",uVar2,
                uVar3,uVar4);
  return 0;
}

