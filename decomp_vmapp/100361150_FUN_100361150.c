
void FUN_100361150(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  
  cVar1 = FUN_100360ad0(param_1,param_3);
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
              (*(long **)(param_1 + 0xa8),param_2,param_7,param_4,param_6,param_3,
               *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xc0));
  }
  return;
}

