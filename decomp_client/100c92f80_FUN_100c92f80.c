
long * FUN_100c92f80(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = (long *)FUN_100c7bb70();
  if (plVar2 == (long *)0x0) {
    FUN_100c62ee0(0xb,0x7e,0x41,"x509_req.c",0x4f);
  }
  else {
    lVar5 = *plVar2;
    **(undefined4 **)(lVar5 + 0x18) = 1;
    puVar3 = (undefined1 *)FUN_100bf3540(1,"x509_req.c",0x56);
    *(undefined1 **)(*(long *)(lVar5 + 0x18) + 8) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
      uVar4 = FUN_100c92690(param_1);
      iVar1 = FUN_100c96b10(plVar2,uVar4);
      if ((iVar1 != 0) && (lVar5 = FUN_100c929a0(param_1), lVar5 != 0)) {
        iVar1 = FUN_100c96b30(plVar2,lVar5);
        FUN_100c6d8c0(lVar5);
        if (iVar1 != 0) {
          if (param_2 == 0) {
            return plVar2;
          }
          iVar1 = FUN_100c9a270(plVar2,param_2,param_3);
          if (iVar1 != 0) {
            return plVar2;
          }
        }
      }
    }
  }
  FUN_100c7bb90(plVar2);
  return (long *)0x0;
}

