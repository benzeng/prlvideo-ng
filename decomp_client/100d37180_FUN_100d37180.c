
undefined8 * FUN_100d37180(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  pid_t pVar3;
  clock_t cVar4;
  uint uVar5;
  
  if (DAT_102318850 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_102318850);
    if (iVar2 != 0) {
      cVar4 = _clock();
      pVar3 = _getpid();
      _srand(pVar3 + (int)cVar4);
      ___cxa_guard_release(&DAT_102318850);
    }
  }
  puVar1 = PTR_shared_null_1021e1288;
  *param_1 = PTR_shared_null_1021e1288;
  if (((uint)*(undefined8 *)puVar1 < 2) && (param_4 + 1 <= (*(uint *)(puVar1 + 8) & 0x7fffffff))) {
    *(uint *)(puVar1 + 8) = *(uint *)(puVar1 + 8) | 0x80000000;
  }
  else {
    uVar5 = (uint)((ulong)*(undefined8 *)puVar1 >> 0x20);
    if (uVar5 < param_4) {
      uVar5 = param_4;
    }
    QByteArray::reallocData(param_1,uVar5 + 1,1);
  }
  if (0 < (int)param_4) {
    iVar2 = 0;
    do {
      _rand();
      QByteArray::append((char)param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_4);
  }
  return param_1;
}

