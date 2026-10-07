
undefined1 FUN_100756cd0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = FUN_100756dc0(param_2,param_3,0x40,0);
  if (cVar1 != '\0') {
    iVar2 = _strncmp(param_3,"\x7fELF",4);
    if (iVar2 == 0) {
      if ((((((param_3[4] == '\x02') && (param_3[5] == '\x01')) && (param_3[6] == '\x01')) &&
           ((param_3[7] == '\0' && (*(short *)(param_3 + 0x10) == 4)))) &&
          ((*(short *)(param_3 + 0x12) == 3 || (*(short *)(param_3 + 0x12) == 0x3e)))) &&
         ((((*(int *)(param_3 + 0x14) == 1 && (*(short *)(param_3 + 0x34) == 0x40)) &&
           (*(short *)(param_3 + 0x36) == 0x38)) && (*(short *)(param_3 + 0x3a) == 0x40)))) {
        return 1;
      }
      pcVar3 = "Unsupported ELF file";
    }
    else {
      pcVar3 = "Invalid file format, ELF magic not found";
    }
    FUN_1008e3970("","dbgdump",0,pcVar3);
  }
  return 0;
}

