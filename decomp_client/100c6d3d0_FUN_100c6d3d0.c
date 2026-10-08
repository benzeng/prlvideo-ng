
undefined8 FUN_100c6d3d0(undefined4 *param_1,int param_2,long param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long local_30;
  
  local_30 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (*(long *)(param_1 + 8) != 0) {
      if ((*(long *)(param_1 + 4) != 0) &&
         (pcVar1 = *(code **)(*(long *)(param_1 + 4) + 0xa0), pcVar1 != (code *)0x0)) {
        (*pcVar1)(param_1);
        *(undefined8 *)(param_1 + 8) = 0;
      }
      if (*(long *)(param_1 + 6) != 0) {
        FUN_100c557e0();
        *(undefined8 *)(param_1 + 6) = 0;
      }
    }
    if ((param_1[1] == param_2) && (*(long *)(param_1 + 4) != 0)) {
      return 1;
    }
    if (*(long *)(param_1 + 6) != 0) {
      FUN_100c557e0();
      *(undefined8 *)(param_1 + 6) = 0;
    }
  }
  if (param_3 == 0) {
    puVar2 = (undefined4 *)FUN_100c84e30(&local_30,param_2);
  }
  else {
    puVar2 = (undefined4 *)FUN_100c84f40(&local_30,param_3,param_4);
  }
  if ((param_1 == (undefined4 *)0x0) && (local_30 != 0)) {
    FUN_100c557e0();
  }
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100c62ee0(6,0x9e,0x9c,"p_lib.c",0xe7);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 4) = puVar2;
      *(long *)(param_1 + 6) = local_30;
      *param_1 = *puVar2;
      param_1[1] = param_2;
    }
  }
  return uVar3;
}

