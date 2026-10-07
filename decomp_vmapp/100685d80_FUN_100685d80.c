
undefined8
FUN_100685d80(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined8 *param_7)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  iVar4 = 1000;
  while( true ) {
    pcVar2 = (code *)*param_7;
    if ((pcVar2 == (code *)0x0) && (param_7[4] == 0)) {
      return 0;
    }
    if ((-1 < iVar4) && (1 < *(uint *)(param_7 + 2))) {
      iVar1 = *(int *)((long)param_7 + 0x14);
      if (iVar4 < *(int *)((long)param_7 + 0x14)) {
        *(int *)((long)param_7 + 0x14) = iVar4;
        return 0;
      }
      *(int *)((long)param_7 + 0x14) = iVar4;
      iVar4 = (uint)(iVar4 - iVar1) / *(uint *)(param_7 + 2) + *(int *)(param_7 + 3);
      *(int *)(param_7 + 3) = iVar4;
    }
    if (pcVar2 != (code *)0x0) break;
    param_7 = (undefined8 *)param_7[4];
  }
  cVar3 = (*pcVar2)(iVar4,param_7[1]);
  uVar5 = 0;
  if (cVar3 == '\0') {
    FUN_1008e3970("","dimg",0,"Interrupted by user");
    uVar5 = 0x80021038;
  }
  return uVar5;
}

