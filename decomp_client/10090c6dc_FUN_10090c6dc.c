
void FUN_10090c6dc(FILE *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    _fwrite("epsilon ",1,8,param_1);
    break;
  case 2:
    _fwrite("charval ",1,8,param_1);
    break;
  case 3:
    _fwrite("ranges ",1,7,param_1);
    break;
  case 4:
    _fwrite("subexpr ",1,8,param_1);
    break;
  case 5:
    _fwrite("string ",1,7,param_1);
    break;
  case 6:
    _fwrite("anychar ",1,8,param_1);
    break;
  case 7:
    _fwrite("anyspace ",1,9,param_1);
    break;
  case 8:
    _fwrite("notspace ",1,9,param_1);
    break;
  case 9:
    _fwrite("initname ",1,9,param_1);
    break;
  case 10:
    _fwrite("notinitname ",1,0xc,param_1);
    break;
  case 0xb:
    _fwrite("namechar ",1,9,param_1);
    break;
  case 0xc:
    _fwrite("notnamechar ",1,0xc,param_1);
    break;
  case 0xd:
    _fwrite("decimal ",1,8,param_1);
    break;
  case 0xe:
    _fwrite("notdecimal ",1,0xb,param_1);
    break;
  case 0xf:
    _fwrite("realchar ",1,9,param_1);
    break;
  case 0x10:
    _fwrite("notrealchar ",1,0xc,param_1);
    break;
  case 0x11:
    _fwrite("LETTER ",1,7,param_1);
    break;
  case 0x12:
    _fwrite("LETTER_UPPERCASE ",1,0x11,param_1);
    break;
  case 0x13:
    _fwrite("LETTER_LOWERCASE ",1,0x11,param_1);
    break;
  case 0x14:
    _fwrite("LETTER_TITLECASE ",1,0x11,param_1);
    break;
  case 0x15:
    _fwrite("LETTER_MODIFIER ",1,0x10,param_1);
    break;
  case 0x16:
    _fwrite("LETTER_OTHERS ",1,0xe,param_1);
    break;
  case 0x17:
    _fwrite("MARK ",1,5,param_1);
    break;
  case 0x18:
    _fwrite("MARK_NONSPACING ",1,0x10,param_1);
    break;
  case 0x19:
    _fwrite("MARK_SPACECOMBINING ",1,0x14,param_1);
    break;
  case 0x1a:
    _fwrite("MARK_ENCLOSING ",1,0xf,param_1);
    break;
  case 0x1b:
    _fwrite("NUMBER ",1,7,param_1);
    break;
  case 0x1c:
    _fwrite("NUMBER_DECIMAL ",1,0xf,param_1);
    break;
  case 0x1d:
    _fwrite("NUMBER_LETTER ",1,0xe,param_1);
    break;
  case 0x1e:
    _fwrite("NUMBER_OTHERS ",1,0xe,param_1);
    break;
  case 0x1f:
    _fwrite("PUNCT ",1,6,param_1);
    break;
  case 0x20:
    _fwrite("PUNCT_CONNECTOR ",1,0x10,param_1);
    break;
  case 0x21:
    _fwrite("PUNCT_DASH ",1,0xb,param_1);
    break;
  case 0x22:
    _fwrite("PUNCT_OPEN ",1,0xb,param_1);
    break;
  case 0x23:
    _fwrite("PUNCT_CLOSE ",1,0xc,param_1);
    break;
  case 0x24:
    _fwrite("PUNCT_INITQUOTE ",1,0x10,param_1);
    break;
  case 0x25:
    _fwrite("PUNCT_FINQUOTE ",1,0xf,param_1);
    break;
  case 0x26:
    _fwrite("PUNCT_OTHERS ",1,0xd,param_1);
    break;
  case 0x27:
    _fwrite("SEPAR ",1,6,param_1);
    break;
  case 0x28:
    _fwrite("SEPAR_SPACE ",1,0xc,param_1);
    break;
  case 0x29:
    _fwrite("SEPAR_LINE ",1,0xb,param_1);
    break;
  case 0x2a:
    _fwrite("SEPAR_PARA ",1,0xb,param_1);
    break;
  case 0x2b:
    _fwrite("SYMBOL ",1,7,param_1);
    break;
  case 0x2c:
    _fwrite("SYMBOL_MATH ",1,0xc,param_1);
    break;
  case 0x2d:
    _fwrite("SYMBOL_CURRENCY ",1,0x10,param_1);
    break;
  case 0x2e:
    _fwrite("SYMBOL_MODIFIER ",1,0x10,param_1);
    break;
  case 0x2f:
    _fwrite("SYMBOL_OTHERS ",1,0xe,param_1);
    break;
  case 0x30:
    _fwrite("OTHER ",1,6,param_1);
    break;
  case 0x31:
    _fwrite("OTHER_CONTROL ",1,0xe,param_1);
    break;
  case 0x32:
    _fwrite("OTHER_FORMAT ",1,0xd,param_1);
    break;
  case 0x33:
    _fwrite("OTHER_PRIVATE ",1,0xe,param_1);
    break;
  case 0x34:
    _fwrite("OTHER_NA ",1,9,param_1);
    break;
  case 0x35:
    _fwrite("BLOCK ",1,6,param_1);
  }
  return;
}

