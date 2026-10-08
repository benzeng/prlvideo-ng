
char FUN_100be64d0(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (0 < param_2) {
    return '\0';
  }
  lVar2 = FUN_100c63660();
  if (lVar2 != 0) {
    return (((uint)lVar2 & 0xff000000) == 0x2000000) * '\x04' + '\x01';
  }
  if (param_2 < 0) {
    iVar1 = param_1[10];
    if (iVar1 == 3) {
      uVar3 = *(undefined8 *)(param_1 + 4);
      iVar1 = FUN_100c58820(uVar3,1);
      if (iVar1 != 0) {
        return '\x02';
      }
      iVar1 = FUN_100c58820(uVar3,2);
      if (iVar1 != 0) {
        return '\x03';
      }
      iVar1 = FUN_100c58820(uVar3,4);
      if (iVar1 != 0) goto LAB_100be65e4;
      iVar1 = param_1[10];
    }
    if (iVar1 == 2) {
      uVar3 = *(undefined8 *)(param_1 + 6);
      iVar1 = FUN_100c58820(uVar3,2);
      if (iVar1 != 0) {
        return '\x03';
      }
      iVar1 = FUN_100c58820(uVar3,1);
      if (iVar1 != 0) {
        return '\x02';
      }
      iVar1 = FUN_100c58820(uVar3,4);
      if (iVar1 != 0) {
LAB_100be65e4:
        iVar1 = FUN_100c593e0(uVar3);
        if (iVar1 == 2) {
          return '\a';
        }
        return (iVar1 == 3) * '\x03' + '\x05';
      }
      iVar1 = param_1[10];
    }
    if (iVar1 == 4) {
      return '\x04';
    }
  }
  else {
    if (*param_1 == 2) {
      return '\x06';
    }
    if (((*(byte *)(param_1 + 0x11) & 2) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 0x1cc) == 0)
       ) {
      return '\x06';
    }
  }
  return '\x05';
}

