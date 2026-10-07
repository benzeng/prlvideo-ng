
void * _xmlReallocLoc(void *ptr,size_t size,char *file,int line)

{
  ulong uVar1;
  xmlGenericErrorFunc pxVar2;
  undefined8 uVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  xmlGenericErrorFunc *ppxVar7;
  void **ppvVar8;
  void *local_60;
  
  if (ptr == (void *)0x0) {
    local_60 = _xmlMallocLoc(size,file,line);
  }
  else {
    if (DAT_1011b7b00 == 0) {
      _xmlInitMemory();
    }
    piVar5 = (int *)((long)ptr + -0x28);
    uVar1 = *(ulong *)((long)ptr + -0x20);
    if (DAT_1011b7b2c == uVar1) {
      _xmlMallocBreakpoint();
    }
    if (*piVar5 == 0x5aa5) {
      *piVar5 = -0x5aa6;
      _xmlMutexLock(DAT_1011b7b20);
      DAT_1011b7b08 = DAT_1011b7b08 - *(long *)((long)ptr + -0x18);
      DAT_1011b7b10 = DAT_1011b7b10 + -1;
      _xmlMutexUnlock(DAT_1011b7b20);
      puVar6 = _realloc(piVar5,size + 0x28);
      if (puVar6 != (undefined4 *)0x0) {
        if (DAT_1011b7b30 == ptr) {
          ppxVar7 = ___xmlGenericError();
          pvVar4 = DAT_1011b7b30;
          pxVar2 = *ppxVar7;
          uVar3 = *(undefined8 *)(puVar6 + 4);
          ppvVar8 = ___xmlGenericErrorContext();
          (*pxVar2)(*ppvVar8,"%p : Realloced(%d -> %d) Ok\n",pvVar4,uVar3,size);
          _xmlMallocBreakpoint();
        }
        *puVar6 = 0x5aa5;
        *(ulong *)(puVar6 + 2) = uVar1;
        puVar6[1] = 2;
        *(size_t *)(puVar6 + 4) = size;
        *(char **)(puVar6 + 6) = file;
        puVar6[8] = line;
        _xmlMutexLock(DAT_1011b7b20);
        DAT_1011b7b08 = DAT_1011b7b08 + size;
        DAT_1011b7b10 = DAT_1011b7b10 + 1;
        if (DAT_1011b7b18 < DAT_1011b7b08) {
          DAT_1011b7b18 = DAT_1011b7b08;
        }
        _xmlMutexUnlock(DAT_1011b7b20);
        return puVar6 + 10;
      }
    }
    else {
      FUN_10017ceba(piVar5);
    }
    local_60 = (void *)0x0;
  }
  return local_60;
}

