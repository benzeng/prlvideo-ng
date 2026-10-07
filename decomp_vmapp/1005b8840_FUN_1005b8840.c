
int FUN_1005b8840(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x68) != '\0') && (*(char *)(param_1 + 0x69) != '\0')) {
    cVar2 = QDomNode::isNull();
    if (cVar2 == '\0') {
      iVar4 = FUN_1005b74b0(param_1,1000);
      if (iVar4 != 0) {
        FUN_1008e3970("","vdisk",0,"XML is locked by other process");
        return iVar4;
      }
      QMutex::lock();
      iVar4 = FUN_1005b7ea0(param_1 + 0x20,param_1 + 0x60);
      QMutex::unlock();
      FUN_1005b7cc0(param_1);
      if (iVar4 < 0) {
        return iVar4;
      }
      *(undefined1 *)(param_1 + 0x69) = 0;
      return iVar4;
    }
  }
  cVar2 = *(char *)(param_1 + 0x69);
  if (cVar2 != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x68);
    uVar3 = QDomNode::isNull();
    FUN_1008e3970("","vdisk",0,"Warning: XML Write was ignored (%u-%u-%u)",uVar1,cVar2,uVar3);
  }
  return 0;
}

