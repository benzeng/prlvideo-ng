
char * FUN_100516d90(char *param_1,long param_2)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char *local_48;
  
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((bVar1 & 1) == 0) {
    uVar6 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x18);
  }
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    uVar7 = (ulong)(*(byte *)(param_2 + 0x30) >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0x38);
  }
  uVar4 = uVar6 + uVar7 + 0xf;
  local_48 = (char *)0x0;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_48 = operator_new(uVar4);
    lVar3 = (-0xf - uVar6) - uVar7;
    pcVar2 = local_48;
    do {
      *pcVar2 = '\0';
      pcVar2 = pcVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0);
    bVar1 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar1 & 1) == 0) {
    lVar3 = param_2 + 0x11;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x20);
  }
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    lVar5 = param_2 + 0x31;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x40);
  }
  _sprintf(local_48,"%s:%d: %s",lVar3,(ulong)*(uint *)(param_2 + 0x28),lVar5);
  _strlen(local_48);
  std::string::__init(param_1,(ulong)local_48);
  if (local_48 != (char *)0x0) {
    operator_delete(local_48);
  }
  return param_1;
}

