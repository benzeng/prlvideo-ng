
/* WARNING: Type propagation algorithm not settling */

void FUN_100a41e00(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long local_38;
  long local_30 [3];
  
  if (param_3 == 1) {
    local_30[1] = 0x700020000;
    local_30[2] = 0x1000000000;
    _PrlDevSIA_SendSIAData(*(undefined8 *)(param_1 + 0x10),local_30 + 1,0x10);
    lVar3 = FUN_100a39010();
    if ((lVar3 != 0) && (plVar1 = *(long **)(lVar3 + 0x18), plVar1 != (long *)0x0)) {
      uVar4 = FUN_100152280();
      lVar3 = FUN_1001548f0(uVar4,param_2);
      if (lVar3 != 0) {
        pcVar2 = *(code **)(*plVar1 + 0x18);
        FUN_10018c250(&local_38,lVar3);
        local_30[0] = local_38;
        (*pcVar2)(plVar1,local_30);
        if (local_38 != 0) {
          _PrlHandle_Free();
        }
      }
    }
  }
  return;
}

