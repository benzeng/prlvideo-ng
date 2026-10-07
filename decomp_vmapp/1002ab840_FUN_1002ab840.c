
ulong FUN_1002ab840(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = 1;
  local_30 = 1;
  FUN_1002a9af0(param_1,&local_2c,&local_30);
  lVar3 = *(long *)(param_1 + 0x910);
  if (*(int *)(lVar3 + 0x4630) != 0) {
    *(undefined4 *)(lVar3 + 0x4630) = 0;
    if ((*(int *)(lVar3 + 8) == 0) || (*(byte *)(lVar3 + 0xc) < 9)) {
      if (*(int *)(param_1 + 0x950) != 0) {
        *(undefined4 *)(param_1 + 0x950) = 0;
      }
      if (*(int *)(param_1 + 0x954) != 0) {
        *(undefined4 *)(param_1 + 0x954) = 0;
      }
      if (*(uint *)(param_1 + 0x958) < 0x3fff) {
        *(undefined4 *)(param_1 + 0x958) = 0x3fff;
      }
      if (*(uint *)(param_1 + 0x95c) < 0x3fff) {
        *(undefined4 *)(param_1 + 0x95c) = 0x3fff;
      }
    }
    FUN_1004340c0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xf0),0,*(undefined8 *)(param_1 + 0x948))
    ;
    lVar3 = *(long *)(param_1 + 0x910);
  }
  if (*(int *)(lVar3 + 0x4634) != 0) {
    *(undefined4 *)(lVar3 + 0x4634) = 0;
    if (*(int *)(param_1 + 0x950) != 0) {
      *(undefined4 *)(param_1 + 0x950) = 0;
    }
    if (*(int *)(param_1 + 0x954) != 0) {
      *(undefined4 *)(param_1 + 0x954) = 0;
    }
    if (*(uint *)(param_1 + 0x958) < 0x3fff) {
      *(undefined4 *)(param_1 + 0x958) = 0x3fff;
    }
    if (*(uint *)(param_1 + 0x95c) < 0x3fff) {
      *(undefined4 *)(param_1 + 0x95c) = 0x3fff;
    }
  }
  if (*(int *)(lVar3 + 8) == 0) {
    if (*(int *)(lVar3 + 0x3d94) == 0) {
      lVar3 = *(long *)(param_1 + 0x920);
      *(undefined4 *)(param_1 + 0x930) = 0;
      uVar1 = *(uint *)(param_1 + 0x93c);
      if (uVar1 != 0) {
        uVar2 = (ulong)*(uint *)(param_1 + 0x938);
        uVar4 = uVar1 - 1;
        if ((uVar1 & 1) != 0) {
          ___bzero(lVar3,uVar2 * 4);
          uVar2 = (ulong)*(uint *)(param_1 + 0x938);
          lVar3 = lVar3 + uVar2 * 4;
          uVar1 = uVar4;
        }
        while (uVar4 != 0) {
          ___bzero(lVar3,uVar2 << 2);
          lVar3 = lVar3 + (ulong)*(uint *)(param_1 + 0x938) * 4;
          ___bzero(lVar3,(ulong)*(uint *)(param_1 + 0x938) << 2);
          uVar2 = (ulong)*(uint *)(param_1 + 0x938);
          lVar3 = lVar3 + uVar2 * 4;
          uVar4 = uVar1 - 2;
          uVar1 = uVar4;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x930) = 0;
      if (*(int *)(param_1 + 0x9844) == 0) {
        FUN_1002aa950(param_1,local_2c,local_30);
      }
      else {
        FUN_1002aa250();
      }
    }
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((*(uint *)(param_1 + 0x930) != uVar1) &&
       (uVar1 < (uint)(*(int *)(param_1 + 0x928) -
                      *(int *)(param_1 + 0x93c) * *(int *)(param_1 + 0x934)))) {
      *(uint *)(lVar3 + 0x18) = uVar1;
      *(uint *)(param_1 + 0x930) = uVar1;
      if (*(int *)(param_1 + 0x9d0) != *(int *)(param_1 + 0x9d4)) {
        *(undefined4 *)(param_1 + 0x1214) = *(undefined4 *)(param_1 + 0x1210);
      }
      *(int *)(param_1 + 0x9d0) = *(int *)(param_1 + 0x9d4);
      if (*(int *)(param_1 + 0x950) != 0) {
        *(undefined4 *)(param_1 + 0x950) = 0;
      }
      if (*(int *)(param_1 + 0x954) != 0) {
        *(undefined4 *)(param_1 + 0x954) = 0;
      }
      if (*(uint *)(param_1 + 0x958) < 0x3fff) {
        *(undefined4 *)(param_1 + 0x958) = 0x3fff;
      }
      if (*(uint *)(param_1 + 0x95c) < 0x3fff) {
        *(undefined4 *)(param_1 + 0x95c) = 0x3fff;
      }
      FUN_100434030(*(undefined8 *)(*(long *)(param_1 + 8) + 0xf0),0);
    }
    if (*(int *)(param_1 + 0x9d0) == *(int *)(param_1 + 0x9d4)) {
      FUN_1002ab640(param_1,0);
    }
  }
  uVar2 = FUN_1002abd20(param_1,0);
  uVar7 = uVar2 & 0xff;
  iVar5 = 1;
  lVar3 = 0x12c4;
  do {
    if (*(int *)(param_1 + -0x94 + lVar3) != 0) {
      if (*(int *)(param_1 + -4 + lVar3) == *(int *)(param_1 + lVar3)) {
        FUN_1002ab640(param_1,iVar5);
      }
      uVar2 = FUN_1002abd20(param_1,iVar5);
      bVar6 = 1;
      if ((char)uVar2 == '\0') {
        bVar6 = (byte)uVar7 & 1;
      }
      uVar7 = (ulong)bVar6;
    }
    lVar3 = lVar3 + 0x8f0;
    iVar5 = iVar5 + 1;
  } while (lVar3 != 0x98d4);
  return CONCAT71((int7)(uVar2 >> 8),(char)uVar7) & 0xffffffffffffff01;
}

