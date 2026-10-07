
char * FUN_1003a2750(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  
  if (param_1[8] == 0) {
    puVar4 = *(undefined1 **)(param_1 + 0x4e);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_1 + 0x52);
    }
    *puVar4 = 0;
    param_1[0x4c] = 0;
    uVar2 = *param_1;
    if ((uVar2 & 0x100000) != 0) {
      FUN_10038e8e0(param_1 + 0x4c,"clamp(");
      uVar2 = *param_1;
    }
    uVar2 = uVar2 >> 0x18;
    uVar1 = uVar2 | 0xfffffff0;
    if ((uVar2 & 8) == 0) {
      uVar1 = uVar2 & 0xf;
    }
    if (uVar1 != 0) {
      FUN_10038e8e0(param_1 + 0x4c,"(");
    }
    pcVar3 = *(char **)(param_1 + 0x4e);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = *(char **)(param_1 + 0x52);
    }
  }
  else {
    pcVar3 = "";
  }
  return pcVar3;
}

