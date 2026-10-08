
void FUN_100a41d30(long *param_1,int param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_3 == 0x30000004) {
    lVar3 = FUN_100a39010();
    if (lVar3 != 0) {
      uVar4 = FUN_100a39010();
      FUN_100a3cbe0(uVar4,param_1 + 2);
      return;
    }
  }
  else if (param_2 == 0x30000004) {
    local_28 = 0x700020000;
    local_20 = 0x1000000000;
    _PrlDevSIA_SendSIAData(param_1[2],&local_28,0x10);
    lVar3 = FUN_100a39010();
    if ((lVar3 != 0) && (plVar1 = *(long **)(lVar3 + 0x18), plVar1 != (long *)0x0)) {
      lVar3 = 0;
      if ((*param_1 != 0) && (lVar3 = 0, *(int *)(*param_1 + 4) != 0)) {
        lVar3 = param_1[1];
      }
      iVar2 = FUN_100319d30(lVar3);
      if (iVar2 == 1) {
        (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 2);
      }
    }
  }
  return;
}

