
undefined8 FUN_1003b8710(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_2 >> 2 & 3;
  if (uVar1 == 2) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    iVar2 = (int)"xyzw"[param_2 >> 4 & 3];
    pcVar3 = ".%c";
  }
  else if (uVar1 == 1) {
    uVar7 = param_2 >> 4 & 3;
    uVar6 = param_2 >> 6 & 3;
    uVar5 = param_2 >> 8 & 3;
    uVar1 = param_2 >> 10 & 3;
    if ((((uVar1 == 3) && (uVar7 == 0)) && (uVar6 == 1)) && (uVar5 == 2)) {
      return 0;
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),".");
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%c",(int)"xyzw"[uVar7]);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%c",(int)"xyzw"[uVar6]);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%c",(int)"xyzw"[uVar5]);
    uVar4 = *(undefined8 *)(param_1 + 8);
    iVar2 = (int)"xyzw"[uVar1];
    pcVar3 = "%c";
  }
  else {
    if (uVar1 != 0) {
      return 0;
    }
    if ((param_2 & 0xf0) == 0xf0) {
      return 0;
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),".");
    if ((param_2 & 0x10) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%c",0x78);
    }
    if ((param_2 & 0x20) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%c",0x79);
    }
    if ((param_2 & 0x40) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%c",0x7a);
    }
    if ((param_2 & 0x80) == 0) {
      return 0;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    pcVar3 = "%c";
    iVar2 = 0x77;
  }
  FUN_10038e8e0(uVar4,pcVar3,iVar2);
  return 0;
}

