
void FUN_100902d31(long param_1,FILE *param_2)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (param_2 != (FILE *)0x0)) {
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 0xd:
      _fwrite("SYSTEM ",1,7,param_2);
      break;
    case 0xe:
      _fwrite("PUBLIC ",1,7,param_2);
      break;
    case 0xf:
      _fwrite("ENTITY ",1,7,param_2);
      break;
    case 0x10:
      _fprintf(param_2,"ENTITY %%");
      break;
    case 0x11:
      _fwrite("DOCTYPE ",1,8,param_2);
      break;
    case 0x12:
      _fwrite("LINKTYPE ",1,9,param_2);
      break;
    case 0x13:
      _fwrite("NOTATION ",1,9,param_2);
      break;
    case 0x14:
      _fwrite("DELEGATE ",1,9,param_2);
      break;
    case 0x15:
      _fwrite("BASE ",1,5,param_2);
      break;
    case 0x16:
      _fwrite("CATALOG ",1,8,param_2);
      break;
    case 0x17:
      _fwrite("DOCUMENT ",1,9,param_2);
      break;
    case 0x18:
      _fwrite("SGMLDECL ",1,9,param_2);
      break;
    default:
      goto switchD_100902d91_default;
    }
    if (*(uint *)(param_1 + 0x18) < 0x19) {
      uVar1 = 1L << ((byte)*(uint *)(param_1 + 0x18) & 0x3f);
      if ((uVar1 & 0x1f06000) == 0) {
        if ((uVar1 & 0xf8000) != 0) {
          _fputs(*(char **)(param_1 + 0x20),param_2);
        }
      }
      else {
        _fprintf(param_2,"\"%s\"",*(undefined8 *)(param_1 + 0x20));
      }
    }
    if (*(int *)(param_1 + 0x18) - 0xdU < 8) {
      _fprintf(param_2," \"%s\"",*(undefined8 *)(param_1 + 0x28));
    }
    _fputc(10,param_2);
  }
switchD_100902d91_default:
  return;
}

