
undefined8 FUN_100cd1310(long *param_1,int param_2,byte param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  FUN_100cd05d0(param_1,4);
  if ((char)param_1[0xd] == '\0') {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < 0) {
    if (((*(uint *)((long)param_1 + 0x14) | uVar3) & 0xfffffff) != 0) {
      return 0;
    }
    uVar3 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 8) = uVar3;
  }
  uVar5 = *(uint *)(param_1 + 4);
  if (6 < uVar5) {
    return 0;
  }
  if ((0x43U >> (uVar5 & 0x1f) & 1) == 0) {
    return 0;
  }
  uVar6 = (*(uint *)((long)param_1 + 0x14) ^ uVar3) & 0xfffffff;
  if ((uVar6 == 0) && ((int)param_1[3] == param_2 && (param_3 ^ 1) == 0)) {
    if (uVar5 == 0) {
LAB_100cd141e:
      *(undefined1 *)((long)param_1 + 0x49) = 1;
LAB_100cd1462:
      uVar7 = 3;
    }
    else {
      uVar7 = 0;
      if (uVar5 == 6) {
        if (((code *)param_1[5] != (code *)0x0) &&
           (cVar2 = (*(code *)param_1[5])(param_1[6]), cVar2 != '\0')) goto LAB_100cd141e;
      }
      else if (uVar5 == 1) {
        lVar4 = *param_1;
        uVar7 = 1;
        goto LAB_100cd1459;
      }
    }
  }
  else {
    if ((char)param_1[9] != '\0') {
      if (((int)param_1[3] != param_2) || (param_3 != 0)) {
        uVar7 = 0;
        if ((int)param_1[3] == param_2) goto LAB_100cd1468;
        if (uVar5 == 1) {
          iVar1 = (int)param_1[5];
          if (iVar1 < 0x6d) {
            if (iVar1 < 0x25) {
              if (iVar1 == 0) goto LAB_100cd1468;
            }
            else {
              uVar3 = iVar1 - 0x25;
              if (uVar3 < 0x1c) {
                uVar5 = 0xa002001;
                goto LAB_100cd144f;
              }
            }
          }
          else {
            uVar3 = iVar1 - 0x6d;
            if (uVar3 < 8) {
              uVar5 = 0xd1;
LAB_100cd144f:
              if ((uVar5 >> (uVar3 & 0x1f) & 1) != 0) goto LAB_100cd1468;
            }
          }
        }
      }
      lVar4 = *param_1;
      uVar7 = 0;
LAB_100cd1459:
      (**(code **)(lVar4 + 0xc0))(param_1,uVar7);
      goto LAB_100cd1462;
    }
    uVar7 = 0;
    if (uVar6 != 0) goto LAB_100cd146b;
    uVar7 = 0;
    if ((int)param_1[3] == 0 && (param_3 ^ 1) == 0) {
      *(uint *)(param_1 + 8) = uVar3 | 0x80000000;
      return 0;
    }
  }
LAB_100cd1468:
  uVar3 = *(uint *)(param_1 + 8);
LAB_100cd146b:
  if (((uVar3 == 0) && ((int)param_1[3] == param_2)) && (param_3 == 0)) {
    *(undefined1 *)((long)param_1 + 0x49) = 0;
  }
  return uVar7;
}

