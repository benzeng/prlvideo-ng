
undefined8 FUN_100c58980(long *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  if (param_1 != (long *)0x0) {
    if ((*param_1 == 0) || (*(long *)(*param_1 + 0x10) == 0)) {
      uVar3 = 0x79;
      uVar4 = 0xe6;
    }
    else {
      pcVar1 = (code *)param_1[1];
      if ((pcVar1 != (code *)0x0) &&
         (uVar3 = (*pcVar1)(param_1,3,param_2,param_3,0,1), (int)uVar3 < 1)) {
        return uVar3;
      }
      if ((int)param_1[3] != 0) {
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
        iVar2 = (int)uVar3;
        if (0 < iVar2) {
          param_1[0xb] = param_1[0xb] + (long)iVar2;
        }
        if (pcVar1 == (code *)0x0) {
          return uVar3;
        }
        uVar3 = (*pcVar1)(param_1,0x83,param_2,param_3,0,(long)iVar2);
        return uVar3;
      }
      uVar3 = 0x78;
      uVar4 = 0xef;
    }
    FUN_100c62ee0(0x20,0x71,uVar3,"bio_lib.c",uVar4);
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

