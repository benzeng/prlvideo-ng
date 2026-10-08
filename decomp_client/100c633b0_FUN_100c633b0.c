
undefined8
FUN_100c633b0(int param_1,int param_2,long *param_3,undefined4 *param_4,long *param_5,
             undefined4 *param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  lVar3 = FUN_100c63000();
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar5 = *(int *)(lVar3 + 0x250);
    iVar1 = *(int *)(lVar3 + 0x254);
    uVar4 = 0;
    if (iVar1 != iVar5) {
      if (param_2 == 0) {
        iVar5 = (iVar1 + 1) - (iVar1 + 1 + ((uint)(iVar1 + 1 >> 0x1f) >> 0x1c) & 0xfffffff0);
      }
      lVar6 = (long)iVar5;
      uVar4 = *(undefined8 *)(lVar3 + 0x50 + lVar6 * 8);
      if (param_1 != 0) {
        *(int *)(lVar3 + 0x254) = iVar5;
        *(undefined8 *)(lVar3 + 0x50 + lVar6 * 8) = 0;
      }
      if ((param_3 != (long *)0x0) && (param_4 != (undefined4 *)0x0)) {
        lVar2 = *(long *)(lVar3 + 400 + lVar6 * 8);
        if (lVar2 == 0) {
          *param_3 = (long)"NA";
          *param_4 = 0;
        }
        else {
          *param_3 = lVar2;
          *param_4 = *(undefined4 *)(lVar3 + 0x210 + lVar6 * 4);
        }
      }
      if (param_5 == (long *)0x0) {
        if (param_1 != 0) {
          if ((*(long *)(lVar3 + 0xd0 + lVar6 * 8) != 0) &&
             ((*(byte *)(lVar3 + 0x150 + lVar6 * 4) & 1) != 0)) {
            FUN_100bf3910();
            *(undefined8 *)(lVar3 + 0xd0 + lVar6 * 8) = 0;
          }
          *(undefined4 *)(lVar3 + 0x150 + lVar6 * 4) = 0;
        }
      }
      else {
        lVar2 = *(long *)(lVar3 + 0xd0 + lVar6 * 8);
        if (lVar2 == 0) {
          *param_5 = (long)"";
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = 0;
          }
        }
        else {
          *param_5 = lVar2;
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = *(undefined4 *)(lVar3 + 0x150 + lVar6 * 4);
          }
        }
      }
    }
  }
  else {
    if (param_3 != (long *)0x0) {
      *param_3 = (long)"";
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (long *)0x0) {
      *param_5 = (long)"";
    }
    uVar4 = 0x44;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0;
      uVar4 = 0x44;
    }
  }
  return uVar4;
}

