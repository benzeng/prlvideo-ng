
void FUN_100db5c80(long param_1,char param_2)

{
  char cVar1;
  long *plVar2;
  char *pcVar3;
  int iVar4;
  
  FUN_100df99c0("","AbstractFile",0,"DiskEnt[%p] Disk Id = 0x%X",param_1,
                *(undefined4 *)(param_1 + 0x10));
  FUN_100df99c0("","AbstractFile",0,"DiskEnt[%p] Opened handles count = %u",param_1,
                *(undefined4 *)(param_1 + 0x14));
  FUN_100df99c0("","AbstractFile",0,"DiskEnt[%p] All handles count = %u",param_1,
                *(undefined4 *)(param_1 + 0x18));
  cVar1 = QMutex::tryLock((int)param_1 + 0x30);
  if (cVar1 != '\0') {
    QMutex::unlock();
  }
  pcVar3 = "locked";
  if (cVar1 != '\0') {
    pcVar3 = "unlocked";
  }
  FUN_100df99c0("","AbstractFile",0,"DiskEnt[%p] HandleListGuard state = %s",param_1,pcVar3);
  if (param_2 == '\0') {
    return;
  }
  FUN_100df99c0("","AbstractFile",0,"DiskEnt[%p] Handle descriptors:",param_1);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)(param_1 + 0x20)) {
    FUN_100df99c0("","AbstractFile",0,"DiskEnt[%p] --- No handle descriptors",param_1);
    return;
  }
  iVar4 = 0;
  do {
    FUN_100db5a80(plVar2 + -5);
    iVar4 = iVar4 + 1;
    plVar2 = (long *)*plVar2;
  } while (plVar2 != (long *)(param_1 + 0x20));
  FUN_100df99c0("","AbstractFile",0,"DiskEnt[%p] --- Has %d handle descriptors",param_1,iVar4);
  return;
}

