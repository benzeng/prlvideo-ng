
uint FUN_100cd1490(long *param_1,uint param_2,undefined8 param_3,char param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_100cd05d0(param_1,4);
  if ((char)param_1[0xd] == '\0') {
    return 0;
  }
  if ((param_5 != '\0') && ((int)param_1[4] != 1)) {
    return 0;
  }
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
  uVar4 = *(uint *)(param_1 + 4);
  if ((1 < uVar4) && (uVar4 != 6)) {
    if (uVar4 != 2) {
      return 0;
    }
    if ((param_2 & uVar1) == 0) {
      return 0;
    }
    (**(code **)(*param_1 + 0xc0))(param_1,param_4);
    return 3;
  }
  if (param_4 == '\0') {
    uVar2 = *(uint *)(param_1 + 8);
    if ((param_2 & uVar1) == 0) {
      *(uint *)(param_1 + 8) = uVar2 | 0x80000000;
      uVar6 = 0;
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      if (((((uVar1 ^ uVar2) & 0xfffffff) == 0) && (-1 < (int)uVar2)) &&
         (uVar6 = uVar5, (int)param_1[3] == 0)) {
        if (uVar4 == 0) {
LAB_100cd159d:
          *(undefined1 *)((long)param_1 + 0x49) = 1;
LAB_100cd169f:
          uVar6 = 3;
        }
        else if (uVar4 == 6) {
          if (((code *)param_1[5] != (code *)0x0) &&
             (cVar3 = (*(code *)param_1[5])(param_1[6]), cVar3 != '\0')) goto LAB_100cd159d;
        }
        else if (uVar4 == 1) {
          (**(code **)(*param_1 + 0xc0))(param_1,1);
          goto LAB_100cd169f;
        }
      }
    }
    uVar1 = *(uint *)(param_1 + 8);
    uVar4 = ~param_2 & uVar1;
    *(uint *)(param_1 + 8) = uVar4;
    if (((-1 < (int)uVar4) || ((~*(uint *)((long)param_1 + 0x14) & uVar4 & 0xfffffff) != 0)) ||
       (((~uVar1 | param_2) & *(uint *)((long)param_1 + 0x14) & 0xfffffff) == 0))
    goto LAB_100cd163c;
    uVar4 = uVar4 & 0x7fffffff;
  }
  else {
    uVar4 = *(uint *)(param_1 + 8) | param_2;
    *(uint *)(param_1 + 8) = uVar4;
    if ((param_2 & uVar1) != 0) {
      uVar6 = uVar4 >> 0x1f ^ 1;
      goto LAB_100cd163c;
    }
    uVar6 = 0;
    if (((uVar1 & ~uVar4 & 0xfffffff) != 0) || (uVar6 = 0, (int)param_1[3] != 0))
    goto LAB_100cd163c;
    uVar4 = uVar4 | 0x80000000;
    uVar6 = 0;
  }
  *(uint *)(param_1 + 8) = uVar4;
LAB_100cd163c:
  if (((char)param_1[9] != '\0') &&
     ((param_2 == 0 && *(int *)((long)param_1 + 0x14) == 0 || (param_4 != '\x01')))) {
    (**(code **)(*param_1 + 0xc0))(param_1,0);
    uVar4 = *(uint *)(param_1 + 8);
  }
  if ((uVar4 == 0) && (param_4 == '\0')) {
    *(undefined1 *)((long)param_1 + 0x49) = 0;
  }
  return uVar6;
}

