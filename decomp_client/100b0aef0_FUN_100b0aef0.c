
undefined8 FUN_100b0aef0(undefined8 param_1,int *param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  size_t sVar5;
  char *pcVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  
  if ((param_2 == (int *)0x0) || (param_3 == (char *)0x0)) {
    FUN_100df99c0("","ioctl",0,"File or name pointer is NULL! 0x%llx 0x%llx",param_2,param_3);
    return 0;
  }
  if (*param_2 == -0x1120531) {
    if (param_2[4] != 0) {
      piVar4 = param_2 + 8;
      uVar7 = 0;
      do {
        if (*piVar4 == 2) {
          if (piVar4 != (int *)0x0) {
            uVar7 = piVar4[2];
            uVar1 = piVar4[3];
            uVar2 = piVar4[4];
            if (uVar1 == 0) {
              return 0;
            }
            sVar5 = _strlen(param_3);
            lVar9 = 0;
            puVar8 = (uint *)((ulong)uVar7 + (long)param_2);
            do {
              iVar3 = _strncmp((char *)((ulong)*puVar8 + (ulong)uVar2 + (long)param_2),param_3,
                               (long)(int)sVar5);
              if (iVar3 == 0) {
                return *(undefined8 *)((uint *)((ulong)uVar7 + (long)param_2) + lVar9 * 4 + 2);
              }
              lVar9 = lVar9 + 1;
              puVar8 = puVar8 + 4;
            } while ((uint)lVar9 < uVar1);
            return 0;
          }
          break;
        }
        piVar4 = (int *)((long)piVar4 + (ulong)(uint)piVar4[1]);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)param_2[4]);
    }
    pcVar6 = "Can\'t find symbol table!";
  }
  else {
    pcVar6 = "File is not 64-bit Mach-O!";
  }
  FUN_100df99c0("","ioctl",0,pcVar6);
  return 0;
}

