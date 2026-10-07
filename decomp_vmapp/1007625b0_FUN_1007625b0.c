
void FUN_1007625b0(long param_1,undefined8 param_2,uint param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  if (-1 < *(int *)(param_1 + 0x28)) {
    FUN_1008e3970("","etrace",0,"Etrace: shared memory is already registered, overwriting...");
  }
  uVar5 = 2;
  if (param_4 != '\0') {
    uVar5 = 0x202;
  }
  iVar1 = _shm_open(param_2,uVar5,0x1ff);
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 < 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_1008e3970("","etrace",0,"Etrace: failed to create shared memory region: %s",pcVar3);
    return;
  }
  uVar7 = (ulong)param_3;
  if (param_4 != '\0') {
    _ftruncate(iVar1,uVar7);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  lVar4 = _mmap(0,uVar7,3,1,iVar1,0);
  if ((lVar4 != 0) && (param_4 == '\x01')) {
    ___bzero(lVar4,uVar7);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1008e3970("","etrace",0,"Etrace: memory is already registered, overwriting...");
  }
  *(long *)(param_1 + 0x10) = lVar4;
  if (lVar4 == 0) {
    param_3 = 0;
    uVar6 = 1;
  }
  else {
    uVar6 = (undefined4)(uVar7 + 0xfffffffd0 >> 4);
    *(undefined4 *)(lVar4 + 0xc) = uVar6;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(uint *)(param_1 + 0x18) = param_3;
  *(char *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}

