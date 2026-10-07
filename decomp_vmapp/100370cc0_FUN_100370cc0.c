
void FUN_100370cc0(undefined8 param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5
                  ,undefined4 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_34 [4];
  
  piVar1 = *(int **)(param_2 + 8);
  if (piVar1 == *(int **)(param_2 + 0x10)) {
    FUN_10027f110(param_2,local_34);
  }
  else {
    *piVar1 = param_3;
    *(int **)(param_2 + 8) = piVar1 + 1;
  }
  if (param_3 < 2) {
    if (param_3 == 1) {
      return;
    }
LAB_100370d76:
    puVar2 = *(undefined4 **)(param_2 + 8);
    puVar3 = *(undefined4 **)(param_2 + 0x10);
    if (puVar2 == puVar3) {
      FUN_10027f110(param_2,local_34);
      puVar2 = *(undefined4 **)(param_2 + 8);
      puVar3 = *(undefined4 **)(param_2 + 0x10);
    }
    else {
      *puVar2 = param_5;
      puVar2 = puVar2 + 1;
      *(undefined4 **)(param_2 + 8) = puVar2;
    }
    if (puVar2 == puVar3) {
LAB_100370e0a:
      FUN_10027f110(param_2,local_34);
      return;
    }
    *puVar2 = param_6;
  }
  else {
    if (param_3 - 0x19U < 2) {
      puVar2 = *(undefined4 **)(param_2 + 8);
      puVar3 = *(undefined4 **)(param_2 + 0x10);
      if (puVar2 == puVar3) {
        FUN_10027f110(param_2,local_34);
        puVar2 = *(undefined4 **)(param_2 + 8);
        puVar3 = *(undefined4 **)(param_2 + 0x10);
      }
      else {
        *puVar2 = param_4;
        puVar2 = puVar2 + 1;
        *(undefined4 **)(param_2 + 8) = puVar2;
      }
      if (puVar2 == puVar3) {
        FUN_10027f110(param_2,local_34);
        puVar2 = *(undefined4 **)(param_2 + 8);
        puVar3 = *(undefined4 **)(param_2 + 0x10);
      }
      else {
        *puVar2 = param_5;
        puVar2 = puVar2 + 1;
        *(undefined4 **)(param_2 + 8) = puVar2;
      }
      if (puVar2 == puVar3) goto LAB_100370e0a;
    }
    else {
      if (param_3 != 3) {
        if (param_3 == 2) {
          puVar2 = *(undefined4 **)(param_2 + 8);
          if (puVar2 == *(undefined4 **)(param_2 + 0x10)) goto LAB_100370e0a;
          *puVar2 = param_5;
          goto LAB_100370e00;
        }
        goto LAB_100370d76;
      }
      puVar2 = *(undefined4 **)(param_2 + 8);
      if (puVar2 == *(undefined4 **)(param_2 + 0x10)) goto LAB_100370e0a;
    }
    *puVar2 = param_6;
  }
LAB_100370e00:
  *(undefined4 **)(param_2 + 8) = puVar2 + 1;
  return;
}

