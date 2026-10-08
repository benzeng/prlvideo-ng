
undefined1 FUN_100cd1c10(long *param_1,uint param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  
  FUN_100cd05d0(param_1,4);
  uVar3 = 0;
  if ((char)param_1[0xd] != '\0') {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    if ((uVar1 & 0x40000000) != 0) {
      uVar4 = param_2 | 0xc;
      if ((param_2 & 0xc) == 0) {
        uVar4 = param_2;
      }
      uVar2 = uVar4 | 0x30;
      if ((uVar4 & 0x30) == 0) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2 | 3;
      if ((uVar2 & 3) == 0) {
        uVar4 = uVar2;
      }
      param_2 = uVar4 | 0xc0;
      if ((uVar4 & 0xc0) == 0) {
        param_2 = uVar4;
      }
    }
    if (param_4 == '\0') {
      uVar4 = ~param_2 & *(uint *)(param_1 + 8);
    }
    else {
      uVar4 = *(uint *)(param_1 + 8) | param_2;
    }
    *(uint *)(param_1 + 8) = uVar4;
    if ((int)param_1[4] == 3) {
      if (((param_2 & uVar1) == 0) || (uVar3 = 1, param_4 != '\x01')) {
        (**(code **)(*param_1 + 0x130))(param_1);
        uVar3 = 0;
      }
    }
    else if ((int)param_1[4] == 1) {
      if (param_4 == '\0') {
        uVar3 = 0;
        if (((uVar1 & ~(uVar4 | param_2) & 0xfffffff) == 0) &&
           (uVar3 = 0, (*(uint *)((long)param_1 + 0x6c) & *(uint *)((long)param_1 + 0x1c)) != 0)) {
          *(int *)(param_1 + 0x14) = (int)param_1[5];
          (**(code **)(*(long *)param_1[0xc] + 0xd8))((long *)param_1[0xc],param_1 + 0xe,0);
          uVar3 = 3;
        }
      }
      else {
        uVar3 = (param_2 & uVar1) != 0;
      }
    }
  }
  return uVar3;
}

