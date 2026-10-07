
void FUN_1004adbe0(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xf0000003;
  if (*(short *)(param_2 + 0x14) == 8) {
    QMutex::lock();
    lVar2 = FUN_1002a6010(param_2);
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                    "Mode changed request: new state = %d; curr state = %d",
                    *(undefined4 *)(lVar2 + 4),*(undefined4 *)(param_1 + 0x88));
    }
    cVar1 = '\0';
    switch(*(undefined4 *)(lVar2 + 4)) {
    case 0:
      uVar3 = FUN_1002a6120(param_2,0,0);
      cVar1 = '\x01';
      FUN_1004ad650(param_1,uVar3);
      break;
    case 1:
      cVar1 = FUN_1004add30(param_1);
      break;
    case 2:
      cVar1 = FUN_1004ae020(param_1);
      break;
    case 3:
      cVar1 = '\x01';
      FUN_1004ae170(param_1,param_2);
    }
    uVar3 = 0xf0000003;
    if (cVar1 != '\0') {
      uVar3 = 0;
    }
    QMutex::unlock();
  }
  FUN_1004c07d0(param_1 + 0x10,param_2,uVar3);
  return;
}

