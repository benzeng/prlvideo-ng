
void FUN_100304ce0(long param_1,ulong param_2,int param_3,undefined8 *param_4,int *param_5)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  size_t sVar8;
  undefined8 *puVar9;
  int iVar10;
  int local_34;
  
  if (299 < *(ushort *)(param_1 + 0xa62c)) {
    local_34 = 0;
    (*(code *)DAT_1011c4a88[0x292])(*DAT_1011c4a88,param_2,0x8b4f,&local_34);
    iVar7 = 0;
    if (0 < param_3) {
      iVar7 = 0;
      piVar6 = param_5;
      puVar9 = param_4;
      iVar10 = param_3;
      do {
        if (param_5 == (int *)0x0) {
          sVar8 = _strlen((char *)*puVar9);
          iVar3 = (int)sVar8;
        }
        else {
          iVar3 = *piVar6;
        }
        iVar7 = iVar7 + 1 + iVar3;
        puVar9 = puVar9 + 1;
        piVar6 = piVar6 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = iVar7 + 1;
    puVar4 = *(undefined1 **)(param_1 + 0xa620);
    if ((ulong)*(uint *)(param_1 + 0xa628) < (ulong)(long)iVar10) {
      if (puVar4 != (undefined1 *)0x0) {
        operator_delete__(puVar4);
      }
      puVar4 = operator_new__((long)iVar10);
      *(undefined1 **)(param_1 + 0xa620) = puVar4;
      *(int *)(param_1 + 0xa628) = iVar10;
    }
    puVar9 = param_4;
    piVar6 = param_5;
    iVar10 = param_3;
    if (0 < param_3) {
      do {
        pcVar1 = (char *)*puVar9;
        if (param_5 == (int *)0x0) {
          sVar8 = _strlen(pcVar1);
          iVar3 = (int)sVar8;
        }
        else {
          iVar3 = *piVar6;
        }
        sVar8 = (size_t)iVar3;
        _memcpy(puVar4,pcVar1,sVar8);
        puVar4[sVar8] = 10;
        puVar4 = puVar4 + sVar8 + 1;
        iVar10 = iVar10 + -1;
        puVar9 = puVar9 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar10 != 0);
    }
    *puVar4 = 0;
    pcVar1 = *(char **)(param_1 + 0xa620);
    if (0xc < iVar7) {
      pcVar5 = _strstr(pcVar1,"#version");
      if (pcVar5 != (char *)0x0) {
        pcVar5 = pcVar5 + 8;
        iVar10 = ((int)pcVar1 + iVar7) - (int)pcVar5;
        if (0 < iVar10) {
          do {
            if (*pcVar5 != ' ') {
              if ((2 < iVar10) && (iVar10 = _strncmp(pcVar5,"130",3), iVar10 == 0)) {
                pcVar5[1] = '4';
              }
              break;
            }
            pcVar5 = pcVar5 + 1;
            bVar2 = 1 < iVar10;
            iVar10 = iVar10 + -1;
          } while (bVar2);
        }
      }
      if (((0x14 < iVar7) && (local_34 == 0x8b31)) &&
         (pcVar5 = _strstr(pcVar1,"out vec4 gl_Position;"), pcVar5 != (char *)0x0)) {
        pcVar5[0] = '/';
        pcVar5[1] = '*';
        pcVar5[0x13] = '*';
        pcVar5[0x14] = '/';
      }
    }
    param_2 = param_2 & 0xffffffff;
    if (0 < param_3) {
      *param_4 = pcVar1;
      param_3 = 1;
      param_5 = (int *)0x0;
    }
  }
  (*(code *)DAT_1011c4a88[0x254])(*DAT_1011c4a88,param_2,param_3,param_4,param_5);
  return;
}

