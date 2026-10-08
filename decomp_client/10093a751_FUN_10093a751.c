
void FUN_10093a751(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_28;
  long local_20;
  
  if (((param_1 != (int *)0x0) && (*param_1 == 0x11)) && (*(long *)(param_1 + 6) != 0)) {
    local_20 = FUN_10093a627(param_1,*(undefined8 *)(*(long *)(param_1 + 6) + 0x18));
    if (local_20 != 0) {
      local_28 = 0;
      uVar1 = FUN_10091a69e(&local_28,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 8));
      uVar2 = FUN_10091a4ff(local_20);
      FUN_10091dd92(param_2,0xc03,0,0,uVar2,
                    "Circular reference to the model group definition \'%s\' defined",uVar1);
      if (local_28 != 0) {
        (*(code *)_xmlFree)(local_28);
      }
      *(undefined8 *)(local_20 + 0x18) = 0;
    }
  }
  return;
}

