
undefined8
FUN_100c9d240(undefined8 param_1,long param_2,int param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    uVar3 = 0x82;
    uVar5 = 0x7d;
  }
  else {
    lVar2 = FUN_100c9e060(param_3);
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 0x48) == 0) {
        if (*(code **)(lVar2 + 0x38) == (code *)0x0) {
          if (*(code **)(lVar2 + 0x58) == (code *)0x0) {
            FUN_100c62ee0(0x22,0x97,0x67,"v3_conf.c",0xa2);
            uVar3 = FUN_100bf70a0(param_3);
            FUN_100c642a0(2,"name=",uVar3);
            return 0;
          }
          if ((*(long *)(param_2 + 0x30) == 0) || (*(long *)(param_2 + 0x28) == 0)) {
            uVar3 = 0x88;
            uVar5 = 0x9b;
            goto LAB_100c9d2cc;
          }
          lVar4 = (**(code **)(lVar2 + 0x58))(lVar2,param_2,param_5);
        }
        else {
          lVar4 = (**(code **)(lVar2 + 0x38))(lVar2,param_2,param_5);
        }
      }
      else {
        if (*param_5 == '@') {
          uVar3 = FUN_100caa3e0(param_1,param_5 + 1);
        }
        else {
          uVar3 = FUN_100c9f650(param_5);
        }
        iVar1 = FUN_100c60800(uVar3);
        if (iVar1 < 1) {
          FUN_100c62ee0(0x22,0x97,0x69,"v3_conf.c",0x8c);
          uVar3 = FUN_100bf70a0(param_3);
          FUN_100c642a0(4,"name=",uVar3,",section=",param_5);
          return 0;
        }
        lVar4 = (**(code **)(lVar2 + 0x48))(lVar2,param_2,uVar3);
        if (*param_5 != '@') {
          FUN_100c60790(uVar3,FUN_100c9f0c0);
        }
      }
      if (lVar4 == 0) {
        return 0;
      }
      uVar3 = FUN_100c9d670(lVar2,param_3,param_4,lVar4);
      if (*(long *)(lVar2 + 8) != 0) {
        FUN_100c801c0();
        return uVar3;
      }
      (**(code **)(lVar2 + 0x18))(lVar4);
      return uVar3;
    }
    uVar3 = 0x81;
    uVar5 = 0x81;
  }
LAB_100c9d2cc:
  FUN_100c62ee0(0x22,0x97,uVar3,"v3_conf.c",uVar5);
  return 0;
}

