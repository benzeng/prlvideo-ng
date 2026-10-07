
void FUN_1004bb8d0(undefined8 param_1,undefined8 param_2,long param_3,undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = (*(double *)(param_3 + 0x18) - *(double *)(*param_4 + 8)) - SUB168(param_4[1],8);
  auVar2._0_8_ = *(undefined8 *)*param_4;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = param_1;
  auVar3 = divpd(auVar2,auVar3);
  *param_4 = auVar3;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_1;
  auVar3 = divpd(param_4[1],auVar1);
  param_4[1] = auVar3;
  return;
}

