
undefined8 FUN_1004ae8a0(long param_1,void *param_2,long param_3,char param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    FUN_1004b3f40(param_3);
    iVar3 = FUN_1004b3f90(param_3);
    if (iVar3 == 100) {
      FUN_1004b3f50(param_3);
      uVar6 = 0;
    }
    else {
      lVar5 = FUN_1004b3f20(param_3);
      if (2 < DAT_1011b55f8) {
        uVar1 = *(undefined4 *)((long)param_2 + 4);
        uVar4 = FUN_1004b3f90(param_3);
        FUN_1008e3970("CHRSERVER","ChrToolSrv",3,
                      "Command %d;  bIgnoreCommandIfNoRequest=%d; pWaitingRequest=%p; CommandQueueSize=%d"
                      ,uVar1,param_4,lVar5,uVar4);
      }
      if ((lVar5 == 0) && (param_4 == '\x01')) {
        FUN_1004b3f50(param_3);
        operator_delete(param_2);
        uVar6 = 0;
      }
      else {
        FUN_1004b3f00(param_3,param_2);
        if (lVar5 != 0) {
          uVar6 = FUN_1002a6010(lVar5);
          cVar2 = FUN_1004b3ea0(param_3,uVar6);
          if (cVar2 != '\0') {
            FUN_1004b3f30(param_3,0);
            FUN_1004c07d0(param_1 + 0x10,lVar5,0);
          }
        }
        FUN_1004b3f50(param_3);
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}

