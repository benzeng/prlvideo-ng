
long FUN_100c5a0c0(long param_1,int param_2,ulong param_3,char *param_4)

{
  int iVar1;
  ulong uVar2;
  FILE *pFVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  char local_2c [4];
  
  pFVar3 = *(FILE **)(param_1 + 0x30);
  lVar5 = 1;
  uVar7 = (uint)param_3;
  if (param_2 < 0x6a) {
    switch(param_2) {
    case 1:
switchD_100c5a100_caseD_1:
      iVar1 = _fseek(pFVar3,param_3,0);
      lVar5 = (long)iVar1;
      break;
    case 2:
      iVar1 = _feof(pFVar3);
      lVar5 = (long)iVar1;
      break;
    case 3:
switchD_100c5a100_caseD_3:
      lVar5 = _ftell(pFVar3);
      return lVar5;
    default:
      goto switchD_100c5a100_caseD_4;
    case 8:
      lVar5 = (long)*(int *)(param_1 + 0x1c);
      break;
    case 9:
      *(uint *)(param_1 + 0x1c) = uVar7;
      lVar5 = 1;
      break;
    case 0xb:
      _fflush(pFVar3);
      lVar5 = 1;
      break;
    case 0xc:
      break;
    }
  }
  else {
    if (param_2 < 0x85) {
      if (param_2 < 0x6c) {
        if (param_2 == 0x6a) {
          if (*(int *)(param_1 + 0x1c) != 0) {
            if ((*(int *)(param_1 + 0x18) != 0) && (pFVar3 != (FILE *)0x0)) {
              _fclose(pFVar3);
              *(undefined8 *)(param_1 + 0x30) = 0;
              *(undefined4 *)(param_1 + 0x20) = 0;
            }
            *(undefined4 *)(param_1 + 0x18) = 0;
          }
          *(uint *)(param_1 + 0x1c) = uVar7 & 1;
          *(char **)(param_1 + 0x30) = param_4;
          *(undefined4 *)(param_1 + 0x18) = 1;
          return 1;
        }
        if (param_2 == 0x6b) {
          if (param_4 == (char *)0x0) {
            return 1;
          }
          *(FILE **)param_4 = pFVar3;
          return 1;
        }
      }
      else if (param_2 == 0x6c) {
        if (*(int *)(param_1 + 0x1c) != 0) {
          if ((*(int *)(param_1 + 0x18) != 0) && (pFVar3 != (FILE *)0x0)) {
            _fclose(pFVar3);
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x20) = 0;
          }
          *(undefined4 *)(param_1 + 0x18) = 0;
        }
        *(uint *)(param_1 + 0x1c) = uVar7 & 1;
        uVar2 = param_3 & 2;
        if ((param_3 & 8) != 0) {
          if (uVar2 == 0) {
            pcVar6 = "a";
          }
          else {
            pcVar6 = "a+";
          }
LAB_100c5a2c5:
          FUN_100c583f0(local_2c,pcVar6,4);
          pFVar3 = _fopen(param_4,local_2c);
          if (pFVar3 != (FILE *)0x0) {
            *(FILE **)(param_1 + 0x30) = pFVar3;
            *(undefined4 *)(param_1 + 0x18) = 1;
            FUN_100c58810(param_1,0);
            return 1;
          }
          piVar4 = ___error();
          FUN_100c62ee0(2,1,*piVar4,"bss_file.c",0x18e);
          FUN_100c642a0(5,"fopen(\'",param_4,"\',\'",local_2c,"\')");
          FUN_100c62ee0(0x20,0x74,2,"bss_file.c",400);
          return 0;
        }
        if (((param_3 & 4) != 0) && (uVar2 != 0)) {
          pcVar6 = "r+";
          goto LAB_100c5a2c5;
        }
        if ((param_3 & 4) != 0) {
          pcVar6 = "w";
          goto LAB_100c5a2c5;
        }
        if (uVar2 != 0) {
          pcVar6 = "r";
          goto LAB_100c5a2c5;
        }
        FUN_100c62ee0(0x20,0x74,0x65,"bss_file.c",0x17c);
      }
      else if (param_2 == 0x80) goto switchD_100c5a100_caseD_1;
    }
    else if (param_2 == 0x85) goto switchD_100c5a100_caseD_3;
switchD_100c5a100_caseD_4:
    lVar5 = 0;
  }
  return lVar5;
}

