
uint FUN_100c98a50(long param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_2c;
  
  uVar3 = 0;
  if (param_1 != 0) {
    piVar2 = param_2;
    if ((param_2 == (int *)0x0) && (piVar2 = (int *)FUN_100c929a0(param_1), piVar2 == (int *)0x0)) {
      return 0;
    }
    iVar1 = *piVar2;
    uVar3 = 0;
    if (iVar1 < 0x32b) {
      if (iVar1 < 0x74) {
        if (iVar1 == 6) {
          uVar3 = 0x31;
        }
        else {
          uVar3 = 0;
          if (iVar1 == 0x1c) {
            uVar3 = 0x44;
          }
        }
      }
      else if (iVar1 == 0x74) {
        uVar3 = 0x12;
      }
      else if (iVar1 == 0x198) {
        uVar3 = 0x58;
      }
    }
    else if (iVar1 - 0x32bU < 2) {
      uVar3 = 0x50;
    }
    local_2c = FUN_100bf7220(**(undefined8 **)(param_1 + 8));
    if ((local_2c != 0) && (iVar1 = FUN_100bf8880(local_2c,0,&local_2c), iVar1 != 0)) {
      if (local_2c < 0x198) {
        if (local_2c < 0x43) {
          if ((local_2c == 6) || (local_2c == 0x13)) {
            uVar3 = uVar3 | 0x100;
          }
        }
        else if ((local_2c == 0x43) || (local_2c == 0x74)) {
          uVar3 = uVar3 | 0x200;
        }
      }
      else if (local_2c == 0x198) {
        uVar3 = uVar3 | 0x400;
      }
    }
    if (param_2 == (int *)0x0) {
      FUN_100c6d8c0(piVar2);
    }
  }
  return uVar3;
}

