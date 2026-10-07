
void FUN_100370f20(long param_1,int param_2,undefined8 param_3,long param_4,uint param_5,
                  uint param_6)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 != 0) {
    piVar2 = operator_new(0x188);
    *piVar2 = param_2;
    piVar2[1] = 1;
    ___bzero(piVar2 + 2,0x180);
    if (param_5 < param_6) {
      lVar4 = (ulong)param_5 * 0x18;
      do {
        lVar1 = (long)piVar2 + lVar4 + 8;
        if (lVar1 != param_4 + lVar4) {
          FUN_1002f29d0(lVar1,*(undefined8 *)(param_4 + lVar4),*(undefined8 *)(param_4 + 8 + lVar4))
          ;
        }
        param_5 = param_5 + 1;
        lVar4 = lVar4 + 0x18;
      } while (param_5 < param_6);
    }
    puVar3 = (undefined8 *)FUN_100373350(param_1 + 0x1298,param_3);
    *puVar3 = piVar2;
  }
  return;
}

