
undefined4 FUN_100932346(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *local_38;
  undefined8 *local_30;
  long local_20;
  
  local_30 = (undefined8 *)0x0;
  local_38 = *(undefined8 **)(param_2 + 0xa8);
  while (local_38 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(local_38[1] + 0x18);
    uVar2 = *(undefined8 *)(local_38[1] + 0x20);
    piVar3 = (int *)FUN_100920a0d(*(undefined8 *)(param_1 + 0x40),uVar1,uVar2);
    if ((piVar3 == (int *)0x0) || ((*piVar3 != 4 && ((*piVar3 != 1 || (piVar3[0x28] == 0x2d)))))) {
      FUN_10091d89f(param_1,0xbbc,param_2,*(undefined8 *)(param_2 + 0x48),"memberTypes",uVar1,uVar2,
                    4,0);
      if (local_30 == (undefined8 *)0x0) {
        *(undefined8 *)(param_2 + 0xa8) = *local_38;
      }
      else {
        *local_30 = *local_38;
      }
      puVar4 = (undefined8 *)*local_38;
      (*(code *)_xmlFree)(local_38);
      local_38 = puVar4;
    }
    else {
      local_38[1] = piVar3;
      local_30 = local_38;
      local_38 = (undefined8 *)*local_38;
    }
  }
  local_20 = *(long *)(param_2 + 0x38);
  while( true ) {
    if (local_20 == 0) {
      return 0;
    }
    puVar4 = (undefined8 *)(*(code *)_xmlMalloc)(0x10);
    if (puVar4 == (undefined8 *)0x0) break;
    puVar4[1] = local_20;
    *puVar4 = 0;
    if (local_30 == (undefined8 *)0x0) {
      *(undefined8 **)(param_2 + 0xa8) = puVar4;
    }
    else {
      *local_30 = puVar4;
    }
    local_20 = *(long *)(local_20 + 8);
    local_30 = puVar4;
  }
  FUN_10091b97e(param_1,"allocating a type link",0);
  return 0xffffffff;
}

