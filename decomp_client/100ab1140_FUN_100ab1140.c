
undefined1 FUN_100ab1140(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x28);
  *(undefined4 *)(plVar2 + 1) = 1;
  *plVar2 = (long)&PTR_FUN_102239df8;
  plVar2[2] = param_2;
  plVar2[3] = param_3;
  *(undefined4 *)(plVar2 + 4) = param_4;
  uVar1 = FUN_100ab0dd0(param_1,plVar2);
  (**(code **)(*plVar2 + 8))(plVar2);
  return uVar1;
}

