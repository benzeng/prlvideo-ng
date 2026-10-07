
long * FUN_100850c50(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                    long param_6)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar3 = param_1;
  if ((param_1 == (long *)0x0) && (plVar3 = (long *)FUN_100850990(0,0), plVar3 == (long *)0x0)) {
    return (long *)0x0;
  }
  if (*plVar3 == 0) {
    lVar4 = FUN_10084b520();
    *plVar3 = lVar4;
    if (lVar4 == 0) goto LAB_100850dcf;
  }
  if (plVar3[1] == 0) {
    lVar4 = FUN_10084b520();
    plVar3[1] = lVar4;
    if (lVar4 == 0) goto LAB_100850dcf;
  }
  lVar4 = plVar3[2];
  if (param_2 != 0) {
    if (lVar4 != 0) {
      FUN_10084b4b0(lVar4);
    }
    lVar4 = FUN_10084b840(param_2);
    plVar3[2] = lVar4;
  }
  if (lVar4 != 0) {
    if (param_5 != 0) {
      plVar3[10] = param_5;
    }
    if (param_6 != 0) {
      plVar3[9] = param_6;
    }
    iVar1 = FUN_10084fb60(*plVar3,plVar3[3]);
    if (iVar1 != 0) {
      iVar1 = -0x21;
      do {
        lVar4 = FUN_100851d20(plVar3[1],*plVar3,plVar3[3],param_4);
        if (lVar4 != 0) {
          if (((code *)plVar3[10] == (code *)0x0) || (plVar3[9] == 0)) {
            iVar1 = FUN_1008487a0(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          else {
            iVar1 = (*(code *)plVar3[10])(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          if (param_1 != (long *)0x0) {
            return plVar3;
          }
          if (iVar1 != 0) {
            return plVar3;
          }
          goto LAB_100850e02;
        }
        uVar5 = FUN_1008885f0();
        if ((uVar5 & 0xfff) != 0x6c) break;
        iVar1 = iVar1 + 1;
        if (iVar1 == 0) {
          FUN_100887ce0(3,0x80,0x71,"bn_blind.c",0x166);
          break;
        }
        FUN_100888070();
        iVar2 = FUN_10084fb60(*plVar3,plVar3[3]);
      } while (iVar2 != 0);
    }
  }
LAB_100850dcf:
  if ((param_1 == (long *)0x0) && (plVar3 != (long *)0x0)) {
LAB_100850e02:
    if (*plVar3 != 0) {
      FUN_10084b4b0();
    }
    if (plVar3[1] != 0) {
      FUN_10084b4b0();
    }
    if (plVar3[2] != 0) {
      FUN_10084b4b0();
    }
    if (plVar3[3] != 0) {
      FUN_10084b4b0();
    }
    FUN_10081e1a0(plVar3);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}

