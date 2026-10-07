
undefined1 FUN_1000a92d0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  QTime::start();
  uVar4 = 0;
  FUN_1008e3970("","vm",0,"Initing VCPUs");
  FUN_1000a6f10(param_1);
  *(byte *)(param_1 + 0x1ab1) = *(byte *)(param_1 + 0x1ab1) | 2;
  cVar1 = FUN_1000c0050(param_1);
  if (cVar1 != '\0') {
    uVar4 = 0;
    FUN_1008e3970("","vm",0,"Initializing debuggers");
    uVar3 = FUN_1000c2190(param_1,0,0,1);
    *(undefined8 *)(param_1 + 0x107e8) = uVar3;
    uVar3 = FUN_1000c2190(param_1,1,0,1);
    *(undefined8 *)(param_1 + 0x107f0) = uVar3;
    FUN_1000a7080(param_1);
    cVar1 = FUN_100409070(param_1 + 0x10b0);
    if (cVar1 == '\0') {
      uVar2 = QTime::elapsed();
      uVar4 = 0;
      FUN_1008e3970("","vm",0,"[Profile] VCPUs initialization time is %u msecs",uVar2);
      QTime::start();
      FUN_1000a2040(param_1);
      cVar1 = FUN_100409070(param_1 + 0x10b0);
      if (cVar1 == '\0') {
        *(byte *)(param_1 + 0x1ab0) = *(byte *)(param_1 + 0x1ab0) | 2;
        uVar2 = QTime::elapsed();
        FUN_1008e3970("","vm",0,"[Profile] Tools initialization time is %u msecs",uVar2);
        QTime::start();
        FUN_100406ec0();
        if (*(int *)(param_1 + 0x1abc) != 0) {
          FUN_100091ba0(param_1);
        }
        *(undefined1 *)(*(long *)(param_1 + 0x1940) + 0xd8) = 1;
        uVar2 = QTime::elapsed();
        FUN_1008e3970("","vm",0,"[Profile] Event Loop post-initialization time is %u msecs",uVar2);
        *(byte *)(param_1 + 0x1ab1) = *(byte *)(param_1 + 0x1ab1) | 0x20;
        *(undefined1 *)(param_1 + 0x1ab8) = 1;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

