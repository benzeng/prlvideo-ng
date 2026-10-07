
char * FUN_1005168d0(char *param_1,long param_2)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char *local_48;
  
  bVar1 = *(byte *)(param_2 + 8);
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 0x10);
  }
  uVar4 = uVar5 + 0xc;
  local_48 = (char *)0x0;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_48 = operator_new(uVar4);
    lVar3 = -0xc - uVar5;
    pcVar2 = local_48;
    do {
      *pcVar2 = '\0';
      pcVar2 = pcVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0);
    bVar1 = *(byte *)(param_2 + 8);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = param_2 + 9;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x18);
  }
  _sprintf(local_48,"%s:%d",lVar3,(ulong)*(uint *)(param_2 + 0x20));
  _strlen(local_48);
  std::string::__init(param_1,(ulong)local_48);
  if (local_48 != (char *)0x0) {
    operator_delete(local_48);
  }
  return param_1;
}

