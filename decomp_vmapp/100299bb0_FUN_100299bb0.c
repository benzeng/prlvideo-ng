
undefined1 FUN_100299bb0(long param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x58))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xb0) = 1;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined1 *)(param_1 + 0xa8) = param_2;
      FUN_100299f40(param_1);
      cVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x48))();
      if (cVar1 == '\0') {
        if (*(int *)(param_1 + 0x120) == 2) {
          (**(code **)(**(long **)(param_1 + 0x118) + 0x30))(*(long **)(param_1 + 0x118),1);
          (**(code **)(**(long **)(param_1 + 0x128) + 0x30))(*(long **)(param_1 + 0x128),1);
          uVar2 = 0;
          (**(code **)(**(long **)(param_1 + 0x118) + 0x30))(*(long **)(param_1 + 0x118),0);
          (**(code **)(**(long **)(param_1 + 0x128) + 0x30))(*(long **)(param_1 + 0x128),0);
          *(undefined4 *)(param_1 + 0x120) = 0;
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}

