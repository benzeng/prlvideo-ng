
void FUN_10070be50(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if ((iVar1 != 0) || (lVar2 = param_1[2], lVar2 == 0)) {
    FUN_1008e3970("","AbstractFile",0,"AioWorkerThreaded: busy-list is not empty at SetPollset()!");
    lVar2 = param_1[2];
  }
  if (*(long *)(lVar2 + 0x140) != param_2) {
    if (param_2 == 0) {
      FUN_1007dcca0(*(long *)(lVar2 + 0x140),lVar2 + 0x150);
    }
    else {
      FUN_1007dc8d0(param_2,lVar2 + 0x150,*(undefined4 *)(lVar2 + 0x148),1);
    }
    *(long *)(lVar2 + 0x140) = param_2;
  }
  return;
}

