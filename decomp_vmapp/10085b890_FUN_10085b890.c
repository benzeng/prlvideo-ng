
undefined8 FUN_10085b890(long param_1,long *param_2,long param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2 == (long *)0x0) {
    uVar6 = 0x6f;
    uVar5 = 0x43;
    uVar7 = 0x112;
  }
  else {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)FUN_10085b6e0(param_1);
      *(long **)(param_1 + 8) = plVar3;
      if (plVar3 == (long *)0x0) {
        return 0;
      }
    }
    pcVar1 = *(code **)(*plVar3 + 0x60);
    if (pcVar1 == (code *)0x0) {
      uVar6 = 0x72;
      uVar5 = 0x42;
      uVar7 = 0x2d1;
    }
    else {
      if (*plVar3 == *param_2) {
        if ((plVar3 != param_2) && (iVar2 = (*pcVar1)(plVar3,param_2), iVar2 == 0)) {
          return 0;
        }
        if (param_3 == 0) {
          FUN_10084bbb0(param_1 + 0x10,0);
        }
        else {
          lVar4 = FUN_10084b950(param_1 + 0x10,param_3);
          if (lVar4 == 0) {
            return 0;
          }
        }
        if (param_4 == 0) {
          FUN_10084bbb0(param_1 + 0x28,0);
        }
        else {
          lVar4 = FUN_10084b950(param_1 + 0x28,param_4);
          if (lVar4 == 0) {
            return 0;
          }
        }
        return 1;
      }
      uVar6 = 0x72;
      uVar5 = 0x65;
      uVar7 = 0x2d5;
    }
  }
  FUN_100887ce0(0x10,uVar6,uVar5,"ec_lib.c",uVar7);
  return 0;
}

