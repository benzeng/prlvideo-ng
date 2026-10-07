
void * FUN_1001d053b(char *param_1)

{
  int iVar1;
  ssize_t sVar2;
  void *local_a8;
  stat local_98;
  
  if (param_1 == (char *)0x0) {
    local_a8 = (void *)0x0;
  }
  else {
    iVar1 = _stat(param_1,&local_98);
    if (iVar1 < 0) {
      local_a8 = (void *)0x0;
    }
    else {
      local_98.st_gen = _open(param_1,0);
      if ((int)local_98.st_gen < 0) {
        local_a8 = (void *)0x0;
      }
      else {
        local_98.st_qspare[0] = local_98.st_ctimespec.tv_nsec;
        local_98.st_qspare[1] = (*(code *)_xmlMallocAtomic)(local_98.st_ctimespec.tv_nsec + 10);
        if ((void *)local_98.st_qspare[1] == (void *)0x0) {
          FUN_1001cee14("allocating catalog data");
          local_a8 = (void *)0x0;
        }
        else {
          sVar2 = _read(local_98.st_gen,(void *)local_98.st_qspare[1],local_98.st_qspare[0]);
          local_98.st_lspare = (__int32_t)sVar2;
          if (local_98.st_lspare < 0) {
            (*(code *)_xmlFree)(local_98.st_qspare[1]);
            local_a8 = (void *)0x0;
          }
          else {
            _close(local_98.st_gen);
            *(undefined1 *)(local_98.st_lspare + local_98.st_qspare[1]) = 0;
            local_a8 = (void *)local_98.st_qspare[1];
          }
        }
      }
    }
  }
  return local_a8;
}

