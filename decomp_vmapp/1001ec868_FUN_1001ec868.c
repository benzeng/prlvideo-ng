
void FUN_1001ec868(uint *param_1,FILE *param_2)

{
  if (param_1 == (uint *)0x0) {
    _fwrite("Type: NULL\n",1,0xb,param_2);
  }
  else {
    _fwrite("Type: ",1,6,param_2);
    if (*(long *)(param_1 + 4) == 0) {
      _fwrite("no name ",1,8,param_2);
    }
    else {
      _fprintf(param_2,"%s ",*(undefined8 *)(param_1 + 4));
    }
    if (*(long *)(param_1 + 0x34) != 0) {
      _fprintf(param_2,"ns %s ",*(undefined8 *)(param_1 + 0x34));
    }
    switch(*param_1) {
    default:
      _fprintf(param_2,"[unknown type %d] ",(ulong)*param_1);
      break;
    case 1:
      _fwrite("[basic] ",1,8,param_2);
      break;
    case 4:
      _fwrite("[simple] ",1,9,param_2);
      break;
    case 5:
      _fwrite("[complex] ",1,10,param_2);
      break;
    case 6:
      _fwrite("[sequence] ",1,0xb,param_2);
      break;
    case 7:
      _fwrite("[choice] ",1,9,param_2);
      break;
    case 8:
      _fwrite("[all] ",1,6,param_2);
      break;
    case 0xb:
      _fwrite("[ur] ",1,5,param_2);
      break;
    case 0xc:
      _fwrite("[restriction] ",1,0xe,param_2);
      break;
    case 0xd:
      _fwrite("[extension] ",1,0xc,param_2);
    }
    _fwrite("content: ",1,9,param_2);
    switch(param_1[0x17]) {
    case 0:
      _fwrite("[unknown] ",1,10,param_2);
      break;
    case 1:
      _fwrite("[empty] ",1,8,param_2);
      break;
    case 2:
      _fwrite("[element] ",1,10,param_2);
      break;
    case 3:
      _fwrite("[mixed] ",1,8,param_2);
      break;
    case 4:
      _fwrite("[simple] ",1,9,param_2);
      break;
    case 6:
      _fwrite("[basic] ",1,8,param_2);
      break;
    case 7:
      _fwrite("[any] ",1,6,param_2);
    }
    _fputc(10,param_2);
    if (*(long *)(param_1 + 0x18) != 0) {
      _fprintf(param_2,"  base type: %s",*(undefined8 *)(param_1 + 0x18));
      if (*(long *)(param_1 + 0x1a) == 0) {
        _fputc(10,param_2);
      }
      else {
        _fprintf(param_2," ns %s\n",*(undefined8 *)(param_1 + 0x1a));
      }
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      FUN_1001ec47f(param_2,*(undefined8 *)(param_1 + 0xc));
    }
    if ((*param_1 == 5) && (*(long *)(param_1 + 0xe) != 0)) {
      FUN_1001ec4f5(*(undefined8 *)(param_1 + 0xe),param_2,1);
    }
  }
  return;
}

