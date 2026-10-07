
char * FUN_10035bfc0(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 8);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = operator_new(0x40);
    pcVar3[4] = '\x13';
    pcVar3[5] = '\0';
    pcVar3[6] = '\0';
    pcVar3[7] = '\0';
    pcVar3[0x28] = '\0';
    pcVar3[0x29] = '\0';
    pcVar3[0x2a] = '\0';
    pcVar3[0x2b] = '\0';
    pcVar3[0x20] = '\0';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = '\0';
    pcVar3[0x18] = '\0';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\0';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    pcVar3[0x38] = '\0';
    pcVar3[0x39] = '\0';
    pcVar3[0x3a] = '\0';
    pcVar3[0x3b] = '\0';
    pcVar3[0x3c] = '\0';
    pcVar3[0x3d] = '\0';
    pcVar3[0x3e] = '\0';
    pcVar3[0x3f] = '\0';
    pcVar3[0x30] = '\0';
    lVar2 = DAT_1011c8478;
    pcVar3[0x31] = '\0';
    pcVar3[0x32] = '\0';
    pcVar3[0x33] = '\0';
    pcVar3[0x34] = '\0';
    pcVar3[0x35] = '\0';
    pcVar3[0x36] = '\0';
    pcVar3[0x37] = '\0';
    *pcVar3 = 0x13f < *(uint *)(DAT_1011c8478 + 4);
    if (*(char *)(lVar2 + 0x2a) != '\0') {
      (*DAT_1011c5e68)(1,pcVar3 + 8);
      if (*pcVar3 == '\0') {
        (*DAT_1011c7450)(1,pcVar3 + 0x18);
      }
    }
  }
  else {
    lVar2 = *(long *)(pcVar3 + 0x30);
    *(long *)(param_1 + 8) = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(pcVar3 + 0x38);
    }
    if (*(long *)(pcVar3 + 0x38) != 0) {
      *(long *)(*(long *)(pcVar3 + 0x38) + 0x30) = lVar2;
    }
    pcVar3[0x28] = '\0';
    pcVar3[0x29] = '\0';
    pcVar3[0x2a] = '\0';
    pcVar3[0x2b] = '\0';
    pcVar3[0x38] = '\0';
    pcVar3[0x39] = '\0';
    pcVar3[0x3a] = '\0';
    pcVar3[0x3b] = '\0';
    pcVar3[0x3c] = '\0';
    pcVar3[0x3d] = '\0';
    pcVar3[0x3e] = '\0';
    pcVar3[0x3f] = '\0';
    pcVar3[0x30] = '\0';
    pcVar3[0x31] = '\0';
    pcVar3[0x32] = '\0';
    pcVar3[0x33] = '\0';
    pcVar3[0x34] = '\0';
    pcVar3[0x35] = '\0';
    pcVar3[0x36] = '\0';
    pcVar3[0x37] = '\0';
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar1 + 1;
  *(int *)(pcVar3 + 0x20) = iVar1;
  return pcVar3;
}

