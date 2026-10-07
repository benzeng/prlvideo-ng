
void FUN_1003613a0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  
  cVar1 = FUN_100360ad0(param_1,param_3);
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x38))
              (*(long **)(param_1 + 0xa8),param_2,param_4,param_3,*(undefined8 *)(param_1 + 0xc0),
               param_5,*(undefined8 *)(param_1 + 0x98));
  }
  return;
}

