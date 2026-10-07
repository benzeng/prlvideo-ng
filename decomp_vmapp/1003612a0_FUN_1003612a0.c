
void FUN_1003612a0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  
  cVar1 = FUN_100360ad0(param_1,param_3);
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))
              (*(long **)(param_1 + 0xa8),param_2,param_4,param_5,param_3,
               *(undefined8 *)(param_1 + 0xc0),param_6,
               *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10070),
               *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10068) + 0xc),
               *(undefined8 *)(param_1 + 0x98));
  }
  return;
}

